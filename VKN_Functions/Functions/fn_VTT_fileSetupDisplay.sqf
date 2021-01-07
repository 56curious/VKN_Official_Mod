/*
Script name:    fn_VTT_FileSetupDisplay.sqf
Created on:     04 January ‎2021
Author:         Curious

License:		    This file is under "Arma Public License No Derivatives (APL-ND)"
				        More information can be found at:
				        https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with UI elements for tool

Framework:      Mission Template

Parameters:
				        N/A
*/
//Don't run if not in 3den
if !(is3DEN) exitWith {systemChat "You're not in the editor! Please go into the editor to run this function!"};

//file creation setup display
_VTT_File_Setup_Display = findDisplay 313 createDisplay "VKN_Template_Tool_File_Setup";

if (isNil "_VTT_File_Setup_Display") exitWith {systemChat "The display is not open, please try again!"; false};

//Disable Escape Key
_VTT_File_Setup_Display displayAddEventHandler ["KeyDown", "if ((_this select 1) == 1) then { true }"];


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






_initData = ["init.sqf", _ctrl_init_edit_text];
_initPlayerLocalData = ["initPlayerLocal.sqf", _ctrl_initPlayerLocal_edit_text];
_initPlayerServerData = ["initPlayerServer.sqf", _ctrl_initPlayerServer_edit_text];
_initServerData = ["initServer.sqf", _ctrl_initServer_edit_text];
_onPlayerKilledData = ["onPlayerKilled.sqf", _ctrl_onPlayerKilled_edit_text];
_onPlayerRespawnData = ["onPlayerRespawn.sqf", _ctrl_onPlayerRespawn_edit_text];
_descriptionData = ["description.ext", _ctrl_description_edit_text];
_extensionData = [];
{ _extensionData pushBack _x } forEach [_initData, _initPlayerLocalData, _initPlayerServerData, _initServerData, _onPlayerKilledData ,_onPlayerRespawnData ,_descriptionData];


//create file via python
_path = [getMissionPath "", "\", "\\"] call PX_fnc_stringReplace;



//runs in 3den
_createFiles = ["viking.VKN_createFiles", [_path, _extensionData]] call (uiNamespace getVariable "py3_fnc_callExtension");
//if (_createFiles == "true") then {
  //systemChat "Mission Files created successfully!"
//} else {
  //systemChat "There was an error creating the files, please ensure you have saved the mission!"
//};


//return true when complete
true
