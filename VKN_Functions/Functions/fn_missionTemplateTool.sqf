/*
Script name:    fn_missionTemplateTool.sqf
Created on:     11 ‎December ‎2018
Author:         Curious

License:		    This file is under "Arma Public License No Derivatives (APL-ND)"
				        More information can be found at:
				        https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    setup mission with predefined settings.

Framework:      Mission Template

Parameters:
				        N/A
*/
//Setup settings and define variables
createDialog "VKN_Template_Tool_Basic_Settings";

_squad = 0;
_3denCam = get3DENCamera;

//Get a reasonible position for template to be created (avoids it spawning in a weird position)
[_3denCam, 5] call bis_fnc_setHeight;

_y = 0; _p = -45; _r = 0;
_3denCam setVectorDirAndUp [  [ sin _y * cos _p,cos _y * cos _p,sin _p], [  [ sin _r,-sin _p,cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D];
sleep 0.1;

_position = screenToWorld [0.5, 0.5];
VKN_Template_Tool_Basic_Settings_open = true;
VKN_Template_Tool_Basic_Settings_Complete = false;
VKN_Template_Tool_selectionChange = true;


//Set cam to look in the air
_y = 0; _p = 45; _r = 0;
_3denCam setVectorDirAndUp [
 [ sin _y * cos _p,cos _y * cos _p,sin _p],
 [ [ sin _r,-sin _p,cos _r * cos _p],-_y] call BIS_fnc_rotateVector2D
];


//Init tool and menus
_sides = [West, East, Independent];
//Add sides to listbox
{ lbAdd [2100, str _x];} forEach _sides;

waitUntil { lbText [2100, lbCurSel 2100] != "" };

//fnc to check side and then filter faction
VKN_fnc_sideChanged = {
  waitUntil {VKN_Template_Tool_selectionChange};

  _factionList = [];
  _index = lbCurSel 2100;
  _side = toUpper (lbText [2100, _index]);
  //get all factions in a side.
  switch (_side) do {
      case ("WEST"): {
        _side = "West";
        _factionList = 1 call VKN_fnc_sideGetFaction;
      };
      case ("EAST"): {
        _side = "East";
        _factionList = 0 call VKN_fnc_sideGetFaction;
      };
      case ("GUER"): {
        _side = "Indep";
        _factionList = 2 call VKN_fnc_sideGetFaction;
      };
      default {};
  };

  //get the selected faction
  { lbadd [2101, _x]; } forEach _factionList;

  waitUntil { lbText [2101, lbCurSel 2101] != "" };

  _curSelFac = lbText [2101, lbCurSel 2101];
  //apply group
  _squadArray = "true" configClasses (configfile >> "CfgGroups" >> _side >> _curSelFac >> "Infantry");
  {
    lbadd [2102, getText( _x >> "name")];
    lbSetData [2102, _forEachIndex, str _x];
  } forEach _squadArray;

  VKN_Template_Tool_selectionChange = false;

};

[] spawn VKN_fnc_sideChanged;

//apply EH to button to reset on faction change
((findDisplay 348567) displayCtrl 2100) ctrlSetEventHandler ["LBSelChanged","VKN_Template_Tool_selectionChange = true; lbClear 2101; lbClear 2102; [] spawn VKN_fnc_sideChanged;"]; //Side LB
((findDisplay 348567) displayCtrl 2101) ctrlSetEventHandler ["LBSelChanged","VKN_Template_Tool_selectionChange = true; lbClear 2102; [] spawn VKN_fnc_sideChanged;"]; //Faction LB

//Apply spectator settings
_Specoptions = ["All Enabled", "All Disabled", "Freecam Disabled", "3pp Disabled", "Freecam only", "1pp Disabled"];
{ lbAdd [2103, _x] } forEach _Specoptions;
lbSetCurSel [2103, 2];


buttonSetAction [1600, "VKN_Template_Tool_Basic_Settings_Complete = true;"];
waitUntil {VKN_Template_Tool_Basic_Settings_Complete isEqualTo true};

//If a listbox is missed, default to first of each type.
if (lbText [2100, lbCurSel 2100] == "") then {
  lbSetCurSel [2100, 0];
  systemChat "Side option was missed, taking default instead.";
};

//If faction is missed, get first squad from config.
if (lbText [2101, lbCurSel 2101] == "") then {
  lbSetCurSel [2101, 0];
  systemChat "Faction option was missed, taking default instead.";
  lbSetCurSel [2102, 0];
};

if (lbText [2102, lbCurSel 2102] == "") then {
  lbSetCurSel [2102, 0];
  systemChat "Squad option was missed, taking default instead.";
};

_side_Option = lbText [2100, lbCurSel 2100];
_factions_option = lbText [2101, lbCurSel 2101];
_squads_option = ([lbData [2102, lbCurSel 2102]] call BIS_fnc_configPath) select 5; //Only option extracted not as a string
_spectate_option = lbText [2103, lbCurSel 2103];
_saveLoadouts = cbChecked ((findDisplay 348567) displayCtrl 2800);
_dynamicGroups = cbChecked ((findDisplay 348567) displayCtrl 2801);

closeDialog 0;

//Start tool
startLoadingScreen ["Loading mission template tool... Please wait."];

collect3DENHistory {

  _squad = configfile >> "CfgGroups" >> _side_Option >> _factions_option >> "Infantry" >> _squads_option;

	//Check for 3DEN Enhanced, then setup those features
	if (isclass (configfile >> "CfgPatches" >> "3denEnhanced")) then {
    set3DENMissionAttributes[["Multiplayer", "Enh_SaveLoadout", _saveLoadouts]];
		set3DENMissionAttributes[["Multiplayer", "Enh_DynamicGroups", _dynamicGroups]];
	} else {
		systemChat "3DEN Enhanced not found but is recommended to be used at all times, missing dyanmic groups and loadout saving attributes, restart with mod and restart tool to fix.";
	};

	//Set all of the mission settings to their defaults
	set3DENMissionAttributes [
		["Multiplayer", "respawn", 3],
		["Multiplayer", "respawnDelay", 180],
    ["Multiplayer", "respawnTemplates", ["Counter", "Spectator", "MenuPosition"]],
    ["Multiplayer", "MaxPlayers", 60],
    ["Multiplayer", "IntelOverviewText", "Viking PMC Operation"],
		["Multiplayer", "GameType", "VKN_OP"],
		["Multiplayer", "DisabledAI", true],
		["Multiplayer", "JoinUnassigned", false],
		["Multiplayer", "RespawnDialog", true],
		["Multiplayer", "EnableTeamSwitch", false],
		["Multiplayer", "AIKills", true],
		["General", "LoadScreen", "\VKN_Misc\VikingLogoLarge_ca.paa"],
		["General", "OverviewPicture", "\VKN_Misc\VikingLogoLarge_ca.paa"],
		["General", "SaveBinarized", false],
		["General", "IntelBriefingName", "Viking PMC Zeus OP"]
	];

	//Create Billboard
	_billboard = create3DENEntity ["Object", "Land_Billboard_F", _position];
	_billboard set3DENAttribute ["ObjectTextureCustom0", "VKN_Extensions_Misc\vkn_poster.paa"];

	//Setup the respawn positions/settings
	_RespawnPos = create3DENEntity ["Logic", "ModuleRespawnPosition_F", _position];
  _RespawnPos set3DENAttribute ["name", "defaultRespawnPosition"];
  _RespawnPos set3DENAttribute ["ModuleRespawnPosition_F_Side", [_side_Option, "side", "number"] call VKN_fnc_formatChange]; // works but opfor is 0 and so is leading side, needs adjustment variable above.
	_RespawnPos set3DENAttribute ["ModuleRespawnPosition_F_ShowNotification", 0];
	_RespawnPos set3DENAttribute ["ModuleRespawnPosition_F_Name", "Respawn Point"];
	_RespawnPos set3DENAttribute ["ModuleRespawnPosition_F_Marker", 2];

	//create the Zeus sub-settings
	_ZeusAttributeCuratorAddEditableObjects = create3DENEntity ["Logic", "ModuleCuratorAddEditableObjects", _position];

	//setup Zeus modules
	_ZeusModule1 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModule2 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModule3 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModuleAdmin = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModules = [_ZeusModule1, _ZeusModule2, _ZeusModule3];

	//sync - merge later
	add3DENConnection ["sync", _ZeusModules, _ZeusAttributeCuratorAddEditableObjects];
  add3DENConnection ["sync", [_ZeusModuleAdmin], _ZeusAttributeCuratorAddEditableObjects];

	//Setup the Zeus entities
	_ZeusEntity1 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntity1 set3DENAttribute ["name", "ZeusEntity1"];
	_ZeusEntity1 set3DENAttribute ["description", "Game Curator"];

	_ZeusEntity2 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntity2 set3DENAttribute ["name", "ZeusEntity2"];
	_ZeusEntity2 set3DENAttribute ["description", "Game Curator"];

	_ZeusEntity3 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntity3 set3DENAttribute ["name", "ZeusEntity3"];
	_ZeusEntity3 set3DENAttribute ["description", "Game Curator"];

	_ZeusEntities = [_ZeusEntity1, _ZeusEntity2, _ZeusEntity3];
	_ZeusEntitiesNames = ["ZeusEntity1", "ZeusEntity2", "ZeusEntity3"];

	progressLoadingScreen 0.5;

	//setup in-module settings
	{ _x set3DENAttribute ["ControlMP", true]; } forEach _ZeusEntities;
	for "_i" from 0 to 2 step 1 do {
		_Module = _ZeusModules select _i;
		_Entity = _ZeusEntitiesNames select _i;
		_Module set3DENAttribute [ "name", format ["Zeus_Module%1", _i]];
		_Module set3DENAttribute [ "ModuleCurator_F_Owner", _Entity ];
		_Module set3DENAttribute [ "ModuleCurator_F_Name", "Zeus" ];
		_Module set3DENAttribute [ "ModuleCurator_F_Addons", 3 ];
		_Module set3DENAttribute [ "ModuleCurator_F_Forced", 1 ];
	};

	_ZeusModuleAdmin set3DENAttribute [ "name", "Zeus_adminLogged" ];
	_ZeusModuleAdmin set3DENAttribute [ "ModuleCurator_F_Owner", "#adminLogged" ];
	_ZeusModuleAdmin set3DENAttribute [ "ModuleCurator_F_Name", "Zeus_Admin" ];
	_ZeusModuleAdmin set3DENAttribute [ "ModuleCurator_F_Addons", 3 ];


	//setup squads and sync them to Zeus
	[_squad, _position, _ZeusAttributeCuratorAddEditableObjects] spawn {
		for "_i" from 1 to 6 step 1 do {
			_group = create3DENComposition [_this select 0, _this select 1];
		   	{ add3DENConnection ["sync", _x, _this select 2]; } forEach _group;
			{
				set3DENAttributes [[_x, "ControlMP", true]]; //set3DENAttributes [[_x, "ControlMP", true], [_x, "side", _side]];
				sleep 0.01;
			} forEach _group;
			sleep 0.01;
		};
	};
};

//Notification
endLoadingScreen;
createDialog "VKN_Template_Tool_Info";
["Viking PMC Mission Template Created."] call BIS_fnc_3DENNotification;
