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
_VTT_Basic_Settings_Display = findDisplay 313 createDisplay "VKN_Template_Tool_Basic_Settings";
if (isNull _VTT_Basic_Settings_Display) exitWith {systemChat "can't find display."};

_squad = 0;
_3denCam = get3DENCamera;

//get UI Defines
#include "\vkn_misc\displays\displayDefines.hpp"

//Get a reasonable position for template to be created (avoids it spawning in a weird position)
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

_ctrl_Players_Side_Combo = _VTT_Basic_Settings_Display displayCtrl 2100;
_ctrl_Faction_Combo = _VTT_Basic_Settings_Display displayCtrl 2101;
_ctrl_Squad_Combo = _VTT_Basic_Settings_Display displayCtrl 2102;
_ctrl_Spectator_Combo = _VTT_Basic_Settings_Display displayCtrl 2103;

_ctrl_complete_button = _VTT_Basic_Settings_Display displayCtrl 1600;

_ctrl_groups_check_Box = _VTT_Basic_Settings_Display displayCtrl 2800;
_ctrl_loadout_check_Box = _VTT_Basic_Settings_Display displayCtrl 2801;

//Add sides to listbox
{ _ctrl_Players_Side_Combo lbAdd str _x } forEach _sides;

//get the selected side
private "_side_lbText";
waitUntil {
  private _cursorIndex = lbCurSel _ctrl_Players_Side_Combo;
  _side_lbText = _ctrl_Players_Side_Combo lbText _cursorIndex;
  _side_lbText != ""
};

private _ctrl_Players_Side_CombolbText = toUpper _side_lbText;


//fnc to check side and then filter faction
VKN_fnc_sideChanged = {
  private _side = _this select 0;
  private _ctrl_Faction_Combo = _this select 1;
  private _ctrl_Squad_Combo = _this select 2;
  waitUntil {VKN_Template_Tool_selectionChange};
  _factionList = [];

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
  { _ctrl_Faction_Combo lbadd _x; } forEach _factionList;

  private "_faction_lbText";
  waitUntil {
    private _cursorIndex = lbCurSel _ctrl_Faction_Combo;
    _faction_lbText = _ctrl_Faction_Combo lbText _cursorIndex;
    _faction_lbText != ""
  };

  private _curSelFac = toUpper _faction_lbText;
  //apply group
  _squadArray = "true" configClasses (configfile >> "CfgGroups" >> _side >> _curSelFac >> "Infantry");
  {
    _ctrl_Squad_Combo lbadd (getText( _x >> "name"));
    _ctrl_Squad_Combo lbSetData [_forEachIndex, str _x];
  } forEach _squadArray;

  VKN_Template_Tool_selectionChange = false;

};

[_ctrl_Players_Side_CombolbText, _ctrl_Faction_Combo, _ctrl_Squad_Combo] spawn VKN_fnc_sideChanged;

//apply EH to button to reset on faction change
_VTT_Basic_Settings_Display displayAddEventHandler [
  "LBSelChanged",
  "
    _VTT_Basic_Settings_Display = findDisplay VTT_Basic_Settings;
    _ctrl_Faction_Combo = _VTT_Basic_Settings_Display displayCtrl 2101;
    _ctrl_Squad_Combo = _VTT_Basic_Settings_Display displayCtrl 2102;
    VKN_Template_Tool_selectionChange = true;
    lbClear _ctrl_Faction_Combo;
    lbClear _ctrl_Squad_Combo;
    [] spawn VKN_fnc_sideChanged;
  "
]; //Side LB

_VTT_Basic_Settings_Display displayAddEventHandler [
  "LBSelChanged",
  "
    _VTT_Basic_Settings_Display = findDisplay VTT_Basic_Settings;
    _ctrl_Squad_Combo = _VTT_Basic_Settings_Display displayCtrl 2102;
    VKN_Template_Tool_selectionChange = true;
    lbClear _ctrl_Squad_Combo;
    [] spawn VKN_fnc_sideChanged;
  "
]; //Faction LB

//Apply spectator settings
_Specoptions = ["All Enabled", "All Disabled", "Freecam Disabled", "3pp Disabled", "Freecam only", "1pp Disabled"];
{ _ctrl_Spectator_Combo lbAdd _x } forEach _Specoptions;
_ctrl_Spectator_Combo lbSetCurSel  2;


_ctrl_complete_button buttonSetAction "VKN_Template_Tool_Basic_Settings_Complete = true;";
waitUntil {VKN_Template_Tool_Basic_Settings_Complete isEqualTo true};

//If a listbox is missed, default to first of each type.
if (_ctrl_Players_Side_Combo lbText lbCurSel _ctrl_Players_Side_Combo == "") then {
  _ctrl_Players_Side_Combo lbSetCurSel 0;
  systemChat "Side option was missed, taking default instead.";
};

//If faction is missed, get first squad from config.
if (_ctrl_Faction_Combo lbText lbCurSel _ctrl_Faction_Combo == "") then {
  _ctrl_Faction_Combo lbSetCurSel 0;
  systemChat "Faction option was missed, taking default instead.";
  _ctrl_Squad_Combo lbSetCurSel 0;
};

if (_ctrl_Squad_Combo lbText lbCurSel _ctrl_Squad_Combo == "") then {
  _ctrl_Squad_Combo lbSetCurSel 0;
  systemChat "Squad option was missed, taking default instead.";
};

//Fixed missing indep factions not spawning.
_side_Option_Temp = toUpper _ctrl_Players_Side_CombolbText;
//get all factions in a side.
_side_Option = "West";
switch (_side_Option_Temp) do {
    case ("WEST"): {
      _side_Option = "West";
    };
    case ("EAST"): {
      _side_Option = "East";
    };
    case ("GUER"): {
      _side_Option = "Indep";
    };
    default {};
};


_factions_option = _ctrl_Faction_Combo lbText lbCurSel _ctrl_Faction_Combo;
_squads_option = ([_ctrl_Squad_Combo lbData lbCurSel _ctrl_Squad_Combo] call BIS_fnc_configPath) select 5; //Only option extracted not as a string
_spectate_option = _ctrl_Spectator_Combo lbText lbCurSel _ctrl_Spectator_Combo;
_saveLoadouts = cbChecked _ctrl_loadout_check_Box;
_dynamicGroups = cbChecked _ctrl_groups_check_Box;

_VTT_Basic_Settings_Display closedisplay 0;

//file creation setup display
_VTT_File_Setup_Display = findDisplay 313 createDisplay "VKN_Template_Tool_File_Setup";

//not in ID order, in UI order from left down, up to top right then desc.ext
_ctrl_init_edit = _VTT_File_Setup_Display displayCtrl 1402;
_ctrl_initPlayerLocal_edit = _VTT_File_Setup_Display displayCtrl 1400;
_ctrl_initPlayerServer_edit = _VTT_File_Setup_Display displayCtrl 1403;
_ctrl_initServer_edit = _VTT_File_Setup_Display displayCtrl 1401;
_ctrl_onPlayerKilled_edit = _VTT_File_Setup_Display displayCtrl 1404;
_ctrl_onPlayerRespawn_edit = _VTT_File_Setup_Display displayCtrl 1406;
_ctrl_description_edit = _VTT_File_Setup_Display displayCtrl 1405;

_ctrl_complete_button = _VTT_File_Setup_Display displayCtrl 1600;

_ctrl_init_reset_button = _VTT_File_Setup_Display displayCtrl 1603;
_ctrl_initPlayerLocal_reset_button = _VTT_File_Setup_Display displayCtrl 1605;
_ctrl_initPlayerServer_reset_button = _VTT_File_Setup_Display displayCtrl 1607;
_ctrl_initServer_reset_button = _VTT_File_Setup_Display displayCtrl 1604;
_ctrl_onPlayerKilled_reset_button = _VTT_File_Setup_Display displayCtrl 1606;
_ctrl_onPlayerRespawn_reset_button = _VTT_File_Setup_Display displayCtrl 1608;
_ctrl_description_reset_button = _VTT_File_Setup_Display displayCtrl 1609;


//disabled until the automatic file .dll is complete
_ctrl_init_edit ctrlEnable false;
_ctrl_initServer_edit ctrlEnable false;
_ctrl_init_reset_button ctrlEnable false;
_ctrl_initServer_reset_button ctrlEnable false;


//set Defaults:
_ctrl_init_edit_text = "";
_ctrl_initPlayerLocal_edit_text = format ["['Initialize', [true]] remoteExec ['BIS_fnc_dynamicGroups', 2];%1['InitializePlayer', [player, true]] remoteExec ['BIS_fnc_dynamicGroups', 0, true];", endl];
_ctrl_initPlayerServer_edit_text = format ["{%1 if (!isnull (getassignedcuratorunit _x)) then {%1		_unit = getassignedcuratorunit _x;%1		if (isnull (getassignedcuratorlogic _unit)) then {%1			unassignCurator _x;%1			sleep 1;%1			_unit assignCurator _x;%1			if (isClass (configFile >> 'CfgPatches' >> 'task_force_radio')) then {%1				_unit call TFAR_fnc_isForcedCurator;%1			};%1		};%1	};%1} foreach allcurators;", endl];
_ctrl_initServer_edit_text = "";
_ctrl_onPlayerKilled_edit_text = format ["[player, [missionNamespace, 'inventory_var']] call BIS_fnc_saveInventory;%1['Initialize', [ player, [], false, false, true]] call BIS_fnc_EGSpectator;", endl];
_ctrl_onPlayerRespawn_edit_text = format ["[player, [missionNamespace, 'inventory_var']] call BIS_fnc_loadInventory;%1['Terminate', [ player]] call BIS_fnc_EGSpectator;", endl];
_ctrl_description_edit_text = format ["respawnOnStart = 0;%1respawnTemplatesVirtual[] = {};", endl];

_ctrl_init_edit ctrlSetText _ctrl_init_edit_text;
_ctrl_initPlayerLocal_edit ctrlSetText _ctrl_initPlayerLocal_edit_text;
_ctrl_initPlayerServer_edit ctrlSetText _ctrl_initPlayerServer_edit_text;
_ctrl_initServer_edit ctrlSetText _ctrl_initServer_edit_text;
_ctrl_onPlayerKilled_edit ctrlSetText _ctrl_onPlayerKilled_edit_text;
_ctrl_onPlayerRespawn_edit ctrlSetText _ctrl_onPlayerRespawn_edit_text;
_ctrl_description_edit ctrlSetText _ctrl_description_edit_text;

//Button Actions
_ctrl_init_reset_button ctrlAddEventHandler ["ButtonClick", "
  _VTT_File_Setup_Display = findDisplay 3482;
  _editbox = _VTT_File_Setup_Display displayCtrl 1402;
  _text = """";
  _editbox ctrlSetText _text;
"];

_ctrl_initServer_reset_button ctrlAddEventHandler ["ButtonClick", "
  _VTT_File_Setup_Display = findDisplay 3482;
  _editbox = _VTT_File_Setup_Display displayCtrl 1401;
  _text = """";
  _editbox ctrlSetText _text;
"];

_ctrl_initPlayerLocal_reset_button ctrlAddEventHandler ["ButtonClick", "
  _VTT_File_Setup_Display = findDisplay 3482;
  _editbox = _VTT_File_Setup_Display displayCtrl 1400;
  _text = format [""['Initialize', [true]] remoteExec ['BIS_fnc_dynamicGroups', 2];%1['InitializePlayer', [player, true]] remoteExec ['BIS_fnc_dynamicGroups', 0, true];"", endl];
  _editbox ctrlSetText _text;
"];

_ctrl_onPlayerKilled_reset_button ctrlAddEventHandler ["ButtonClick", "
  _VTT_File_Setup_Display = findDisplay 3482;
  _editbox = _VTT_File_Setup_Display displayCtrl 1404;
  _text = format [""[player, [missionNamespace, 'inventory_var']] call BIS_fnc_saveInventory;%1['Initialize', [ player, [], false, false, true]] call BIS_fnc_EGSpectator;"", endl];
  _editbox ctrlSetText _text;
"];

_ctrl_initPlayerServer_reset_button ctrlAddEventHandler ["ButtonClick", "
  _VTT_File_Setup_Display = findDisplay 3482;
  _editbox = _VTT_File_Setup_Display displayCtrl 1403;
  _text = format [""{%1 if (!isnull (getassignedcuratorunit _x)) then {%1		_unit = getassignedcuratorunit _x;%1		if (isnull (getassignedcuratorlogic _unit)) then {%1			unassignCurator _x;%1			sleep 1;%1			_unit assignCurator _x;%1			if (isClass (configFile >> 'CfgPatches' >> 'task_force_radio')) then {%1				_unit call TFAR_fnc_isForcedCurator;%1			};%1		};%1	};%1} foreach allcurators;"", endl];
  _editbox ctrlSetText _text;
"];

_ctrl_onPlayerRespawn_reset_button ctrlAddEventHandler ["ButtonClick", "
  _VTT_File_Setup_Display = findDisplay 3482;
  _editbox = _VTT_File_Setup_Display displayCtrl 1406;
  _text = format [""[player, [missionNamespace, 'inventory_var']] call BIS_fnc_loadInventory;%1['Terminate', [ player]] call BIS_fnc_EGSpectator;"", endl];
  _editbox ctrlSetText _text;
"];

_ctrl_description_reset_button ctrlAddEventHandler ["ButtonClick", "
  _VTT_File_Setup_Display = findDisplay 3482;
  _editbox = _VTT_File_Setup_Display displayCtrl 1405;
  _text = format [""respawnOnStart = 0;%1respawnTemplatesVirtual[] = {};"", endl];
  _editbox ctrlSetText _text;
"];

_ctrl_complete_button setVariable ["_ctrl_complete_button_variable", false];
_ctrl_complete_button ctrlAddEventHandler ["ButtonClick", {params ["_control"];	_control setVariable ["_ctrl_complete_button_variable", true]; }];
waitUntil {_ctrl_complete_button getVariable ["_ctrl_complete_button_variable", false]};

//get info from display then close
_ctrl_init_edit_text = ctrlText _ctrl_init_edit;
_ctrl_initPlayerLocal_edit_text = ctrlText _ctrl_initPlayerLocal_edit;
_ctrl_initPlayerServer_edit_text = ctrlText _ctrl_initPlayerServer_edit;
_ctrl_initServer_edit_text = ctrlText _ctrl_initServer_edit;
_ctrl_onPlayerKilled_edit_text = ctrlText _ctrl_onPlayerKilled_edit;
_ctrl_onPlayerRespawn_edit_text = ctrlText _ctrl_onPlayerRespawn_edit;
_ctrl_description_edit_text = ctrlText _ctrl_description_edit;

_VTT_File_Setup_Display closeDisplay 0;



//Start tool
startLoadingScreen ["Loading mission template tool... Please wait."];

//deal with extension
/*
_initData = ["init.sqf", _ctrl_init_edit_text];
_initPlayerLocalData = ["init.sqf", _ctrl_initPlayerLocal_edit_text];
_initPlayerServerData = ["init.sqf", _ctrl_initPlayerServer_edit_text];
_initServerData = ["init.sqf", _ctrl_initServer_edit_text];
_onPlayerKilledData = ["init.sqf", _ctrl_onPlayerKilled_edit_text];
_onPlayerRespawnData = ["init.sqf", _ctrl_onPlayerRespawn_edit_text];
_descriptionData = ["init.sqf", _ctrl_description_edit_text];
_extensionData = [];
{ _extensionData pushBack _x } forEach [_initData, _initPlayerLocalData, _initPlayerServerData, _initServerData, _onPlayerKilledData ,_onPlayerRespawnData ,_descriptionData];

if !(isnil "_extensionData") then {
  "" callExtension ["fncNameInExt", arguments];
};
*/

collect3DENHistory {

  _squad = configfile >> "CfgGroups" >> _side_Option >> _factions_option >> "Infantry" >> _squads_option;
	//Check for 3DEN Enhanced, then setup those features
	if (isclass (configfile >> "CfgPatches" >> "3denEnhanced")) then {
    set3DENMissionAttributes[["Multiplayer", "Enh_SaveLoadout", _saveLoadouts]];
		set3DENMissionAttributes[["Multiplayer", "Enh_DynamicGroups", _dynamicGroups]];
	} else {
		systemChat "3DEN Enhanced not found but is recommended to be used at all times, missing dynamic groups and loadout saving attributes, restart with mod and restart tool to fix.";
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
  _RespawnPos set3DENAttribute ["ModuleRespawnPosition_F_ShowNotification", 0];
  _RespawnPos set3DENAttribute ["ModuleRespawnPosition_F_Name", "Respawn Point"];
  _RespawnPos set3DENAttribute ["ModuleRespawnPosition_F_Marker", 2];
  switch (toUpper _side_Option) do {
    case ("EAST"): {
        _RespawnPos set3DENAttribute ["ModuleRespawnPosition_F_Side", 0];
    };
    case ("WEST"): {
        _RespawnPos set3DENAttribute ["ModuleRespawnPosition_F_Side", 1];
    };
    case ("INDEP"): {
        _RespawnPos set3DENAttribute ["ModuleRespawnPosition_F_Side", 2];
    };
  };

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
	[_squad, _position, _ZeusAttributeCuratorAddEditableObjects, _side_Option] spawn {
    params ["_squad", "_position", "_ZeusAttributeCuratorAddEditableObjects", "_side_Option"];
    _total = 60;
    _totalUnits = 0;
    _nextTotal = 0;
    _unitCount = count ("true" configClasses _squad);
    _groupSide = west;
    switch (toUpper _side_Option) do {
      case ("EAST"): {
          _groupSide = east;
      };
      case ("WEST"): {
          _groupSide = west;
      };
      case ("INDEP"): {
          _groupSide = independent;
      };
    };
    _Finalgroup = createGroup _groupSide;

    while { _totalUnits < _total } do {
      _nextTotal = _totalUnits + _unitCount;
      //systemChat format ["current/next/target: %1/%2/%3", _totalUnits, _nextTotal, _total];

      //Create a group with given data
      _group = create3DENComposition [_squad, _position];
      {
        set3DENAttributes [[_x, "ControlMP", true]];
        sleep 0.01;
      } forEach _group;
      _totalUnits = _totalUnits + _unitCount;
    };

    _unitSQLtype = getText (_squad >> "Unit0" >> "Vehicle");
    _UnitSQL = _Finalgroup create3DENEntity  ["object", _unitSQLtype, _position];
    _UnitSQL set3DENAttribute ["ControlMP", true];
    _intDiff = _NextTotal - _total;
    for "_i" from 1 to _intDiff do {
      _unitID = format ["Unit%1", _i];
      _unitType = getText (_squad >> _unitID >> "Vehicle");
      _Unit = (group _unitSQL) create3DENEntity  ["object", _unitType, _position];
      _Unit set3DENAttribute ["ControlMP", true];
    };
  };


  //Headless Clients
  _HC1 = create3DENEntity ["Logic", "HeadlessClient_F", _position];
  _HC1 set3DENAttribute ["name", "HC1"];
  _HC2 = create3DENEntity ["Logic", "HeadlessClient_F", _position];
  _HC2 set3DENAttribute ["name", "HC2"];

  { _x set3DENAttribute ["ControlMP", true]; } forEach [_HC1, _HC2];

  //Werthles' Headless Module setup if present
  if (isclass (configfile >> "CfgPatches" >> "Werthles_WHK")) then {
    _HCModuleSettings = create3DENEntity ["Logic", "Werthles_moduleWHM", _position];
    _HCModuleIgnore = create3DENEntity ["Logic", "Werthles_moduleWHIgnore", _position];

    // In order as module presents them
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_Units", -666]; //Default -666
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_Repeating", True]; //Default True
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_Wait", 10]; //Default 30
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_Debug", False]; //Default False
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_Advanced", True]; //Default True
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_Delay", 10]; //Default 30
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_Pause", 3]; //Default 3
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_Report", True]; //Default True
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_Ignores", ""]; //Default ""
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_NoDebug", True]; //Default True
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_DebugOnly", False]; //Default False
    _HCModuleSettings set3DENAttribute ["Werthles_moduleWHM_UseServer", False]; //Default False

  };

  _arsenalBox = create3DENEntity ["object", "Box_FIA_Support_F", _position];
  _arsenalBox set3DENAttribute ["name", "Arsenal_Box"];
  _arsenalBox set3DENAttribute ["init", format ["clearItemCargo this; %1[""AmmoboxInit"", [this, true]] spawn BIS_fnc_arsenal; %1[this, true] call ace_arsenal_fnc_initBox;", endl]];

};

//Notification
endLoadingScreen;
createDialog "VKN_Template_Tool_Info";
["Viking PMC Mission Template Created."] call BIS_fnc_3DENNotification;
