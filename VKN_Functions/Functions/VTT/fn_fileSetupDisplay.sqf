/*
Script name: fn_VTT_FilesetupDisplay.sqf
Created on: 04 January ‎2021
Author: Curious

License:		 This file is under "Arma Public License No Derivatives (APL-ND)"
More information can be found at:
https:// www.bohemia.net/community/licenses/arma-public-license-nd

Description: deal with UI elements for tool

Framework: Mission Template

parameters:
N/A
*/
// don't run if not in 3den
if !(is3DEN) exitwith {
    systemChat "You're not in the editor! Please go into the editor to run this function!"
};

// file creation setup display
_VTT_File_setup_Display = findDisplay 313 createDisplay "VKN_Template_tool_File_setup";

if (isnil "_VTT_File_setup_Display") exitwith {
    systemChat "The display is not open, please try again!";
    false
};

// Disable Escape Key
_VTT_File_setup_Display displayAddEventHandler ["Keydown", "if ((_this select 1) == 1) then {
    true
}"];

// not in ID order, in UI order from left down, up to top right then desc.ext
_ctrl_init_edit = _VTT_File_setup_Display displayCtrl 1402;
_ctrl_initplayerlocal_edit = _VTT_File_setup_Display displayCtrl 1400;
_ctrl_initplayerServer_edit = _VTT_File_setup_Display displayCtrl 1403;
_ctrl_initServer_edit = _VTT_File_setup_Display displayCtrl 1401;
_ctrl_onplayerKilled_edit = _VTT_File_setup_Display displayCtrl 1404;
_ctrl_onplayerRespawn_edit = _VTT_File_setup_Display displayCtrl 1406;
_ctrl_description_edit = _VTT_File_setup_Display displayCtrl 1405;

_ctrl_complete_button = _VTT_File_setup_Display displayCtrl 1600;

_ctrl_init_reset_button = _VTT_File_setup_Display displayCtrl 1603;
_ctrl_initplayerlocal_reset_button = _VTT_File_setup_Display displayCtrl 1605;
_ctrl_initplayerServer_reset_button = _VTT_File_setup_Display displayCtrl 1607;
_ctrl_initServer_reset_button = _VTT_File_setup_Display displayCtrl 1604;
_ctrl_onplayerKilled_reset_button = _VTT_File_setup_Display displayCtrl 1606;
_ctrl_onplayerRespawn_reset_button = _VTT_File_setup_Display displayCtrl 1608;
_ctrl_description_reset_button = _VTT_File_setup_Display displayCtrl 1609;

// set defaults:
_defaultsArray = call VKN_VTT_fnc_defaultFiletext;
_ctrl_init_edit_text = _defaultsArray select 0;
_ctrl_initplayerlocal_edit_text = _defaultsArray select 1;
_ctrl_initplayerServer_edit_text = _defaultsArray select 2;
_ctrl_initServer_edit_text = _defaultsArray select 3;
_ctrl_onplayerKilled_edit_text = _defaultsArray select 4;
_ctrl_onplayerRespawn_edit_text = _defaultsArray select 5;
_ctrl_description_edit_text = _defaultsArray select 6;

_ctrl_init_edit ctrlsettext _ctrl_init_edit_text;
_ctrl_initplayerlocal_edit ctrlsettext _ctrl_initplayerlocal_edit_text;
_ctrl_initplayerServer_edit ctrlsettext _ctrl_initplayerServer_edit_text;
_ctrl_initServer_edit ctrlsettext _ctrl_initServer_edit_text;
_ctrl_onplayerKilled_edit ctrlsettext _ctrl_onplayerKilled_edit_text;
_ctrl_onplayerRespawn_edit ctrlsettext _ctrl_onplayerRespawn_edit_text;
_ctrl_description_edit ctrlsettext _ctrl_description_edit_text;

// Button actions
_ctrl_init_reset_button ctrlAddEventHandler ["ButtonClick", "
    _VTT_File_setup_Display = findDisplay 3482;
    _editbox = _VTT_File_setup_Display displayCtrl 1402;
    _text = (call VKN_VTT_fnc_defaultFileText) select 0;
    _editbox ctrlsettext _text;
"];

_ctrl_initServer_reset_button ctrlAddEventHandler ["ButtonClick", "
    _VTT_File_setup_Display = findDisplay 3482;
    _editbox = _VTT_File_setup_Display displayCtrl 1401;
    _text = (call VKN_VTT_fnc_defaultFileText) select 3;
    _editbox ctrlsettext _text;
"];

_ctrl_initplayerlocal_reset_button ctrlAddEventHandler ["ButtonClick", "
    _VTT_File_setup_Display = findDisplay 3482;
    _editbox = _VTT_File_setup_Display displayCtrl 1400;
    _text = (call VKN_VTT_fnc_defaultFileText) select 1;
    _editbox ctrlsettext _text;
"];

_ctrl_onplayerKilled_reset_button ctrlAddEventHandler ["ButtonClick", "
    _VTT_File_setup_Display = findDisplay 3482;
    _editbox = _VTT_File_setup_Display displayCtrl 1404;
    _text = (call VKN_VTT_fnc_defaultFileText) select 4;
    _editbox ctrlsettext _text;
"];

_ctrl_initplayerServer_reset_button ctrlAddEventHandler ["ButtonClick", "
    _VTT_File_setup_Display = findDisplay 3482;
    _editbox = _VTT_File_setup_Display displayCtrl 1403;
    _text = (call VKN_VTT_fnc_defaultFileText) select 2;
    _editbox ctrlsettext _text;
"];

_ctrl_onplayerRespawn_reset_button ctrlAddEventHandler ["ButtonClick", "
    _VTT_File_setup_Display = findDisplay 3482;
    _editbox = _VTT_File_setup_Display displayCtrl 1406;
    _text = (call VKN_VTT_fnc_defaultFileText) select 5;
    _editbox ctrlsettext _text;
"];

_ctrl_description_reset_button ctrlAddEventHandler ["ButtonClick", "
    _VTT_File_setup_Display = findDisplay 3482;
    _editbox = _VTT_File_setup_Display displayCtrl 1405;
    _text = (call VKN_VTT_fnc_defaultFileText) select 6;
    _editbox ctrlsettext _text;
"];

_ctrl_complete_button setVariable ["_ctrl_complete_button_variable", false];
_ctrl_complete_button ctrlAddEventHandler ["ButtonClick", {
    params ["_control"];
    	_control setVariable ["_ctrl_complete_button_variable", true];
}];
waitUntil {
    _ctrl_complete_button getVariable ["_ctrl_complete_button_variable", false]
};

// get info from display then close
_ctrl_init_edit_text = ctrltext _ctrl_init_edit;
_ctrl_initplayerlocal_edit_text = ctrltext _ctrl_initplayerlocal_edit;
_ctrl_initplayerServer_edit_text = ctrltext _ctrl_initplayerServer_edit;
_ctrl_initServer_edit_text = ctrltext _ctrl_initServer_edit;
_ctrl_onplayerKilled_edit_text = ctrltext _ctrl_onplayerKilled_edit;
_ctrl_onplayerRespawn_edit_text = ctrltext _ctrl_onplayerRespawn_edit;
_ctrl_description_edit_text = ctrltext _ctrl_description_edit;

_VTT_File_setup_Display closeDisplay 0;

_initData = ["init.sqf", _ctrl_init_edit_text];
_initplayerlocalData = ["initplayerlocal.sqf", _ctrl_initplayerlocal_edit_text];
_initplayerServerData = ["initplayerServer.sqf", _ctrl_initplayerServer_edit_text];
_initServerData = ["initServer.sqf", _ctrl_initServer_edit_text];
_onplayerKilledData = ["onplayerKilled.sqf", _ctrl_onplayerKilled_edit_text];
_onplayerRespawnData = ["onplayerRespawn.sqf", _ctrl_onplayerRespawn_edit_text];
_descriptionData = ["description.ext", _ctrl_description_edit_text];
_extensionData = [];
{
    _extensionData pushBack _x
} forEach [_initData, _initplayerlocalData, _initplayerServerData, _initServerData, _onplayerKilledData, _onplayerRespawnData, _descriptionData];

// create file via python
_path = [getMissionPath "", "\", "\\"] call PX_fnc_stringReplace;

// runs in 3den
_createFiles = ["viking.VKN_createFiles", [_path, _extensionData]] call (uiNamespace getVariable "py3_fnc_callExtension");
// if (_createFiles == "true") then {
    // systemChat "Mission Files created successfully!"
// } else {
    // systemChat "There was an error creating the files, please ensure you have saved the mission!"
// };

// return true when complete
true