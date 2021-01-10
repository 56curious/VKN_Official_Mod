/*
Script name:    fn_VTT_Create.sqf
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
//Don't run if not in 3den
if !(is3DEN) exitWith {systemChat "You're not in the editor! Please go into the editor to run this function!"};

_squad = 0;
_3denCam = get3DENCamera;

//get UI Defines
#include "\vkn_misc\displays\displayDefines.hpp"

//get data to return camera too:
_vectorDirBefore = vectorDir _3denCam;

//Get a reasonable position for template to be created (avoids it spawning in a weird position)
[_3denCam, 5] call bis_fnc_setHeight;

_y = 0; _p = -45; _r = 0;
_3denCam setVectorDirAndUp [  [ sin _y * cos _p,cos _y * cos _p,sin _p], [  [ sin _r,-sin _p,cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D];
sleep 0.1;

_position = screenToWorld [0.5, 0.5];

//Set cam to look in the air
_y = 0; _p = 45; _r = 0;
_3denCam setVectorDirAndUp [
 [ sin _y * cos _p,cos _y * cos _p,sin _p],
 [ [ sin _r,-sin _p,cos _r * cos _p],-_y] call BIS_fnc_rotateVector2D
];

_basicSettings = [] spawn VKN_VTT_fnc_VTT_basicSettingsDisplay;
waitUntil {scriptDone _basicSettings};

_fileSetup = [] spawn VKN_VTT_fnc_VTT_fileSetupDisplay;
waitUntil {scriptDone _fileSetup};

startLoadingScreen ["Loading mission template tool... Please wait."];

//error here type script, so the get variable is returning a script and not the array. Check the returns on the 2 functions
_basicSettingsReturn =  missionNamespace getVariable ["VKN_VTT_basicSettingsReturn", ["","","","",false,false]];
_side_Option = _basicSettingsReturn select 0;
_factions_option = _basicSettingsReturn select 1;
_squads_option = _basicSettingsReturn select 2;
_spectate_option = _basicSettingsReturn select 3;
_saveLoadouts = _basicSettingsReturn select 4;
_dynamicGroups = _basicSettingsReturn select 5;


//Start tool
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
	//_ZeusAttributeCuratorAddEditableObjects = create3DENEntity ["Logic", "ModuleCuratorAddEditableObjects", _position];

	//setup Zeus modules
	_ZeusModule1 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModule2 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModule3 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModuleAdmin = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModules = [_ZeusModule1, _ZeusModule2, _ZeusModule3];

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

  //sync
  add3DENConnection ["sync", [_ZeusEntity1], _ZeusModule1];
  add3DENConnection ["sync", [_ZeusEntity2], _ZeusModule2];
  add3DENConnection ["sync", [_ZeusEntity3], _ZeusModule3];

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
//createDialog "VKN_Template_Tool_Info";
["Viking PMC Mission Template Created."] call BIS_fnc_3DENNotification;
