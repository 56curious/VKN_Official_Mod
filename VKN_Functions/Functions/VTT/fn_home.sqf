/*
Script name: fn_VTT_Home.sqf
Created on: 04 January ‎2021
Author: Curious

License:		 This file is under "Arma Public License No Derivatives (APL-ND)"
More information can be found at:
https:// www.bohemia.net/community/licenses/arma-public-license-nd

Description: deal with home screen UI functions

Framework: Mission Template

parameters:
N/A
*/
// don't run if not in 3den
if !(is3DEN) exitwith {
    systemChat "You're not in the editor! Please go into the editor to run this function!"
};

// return false if files have not been made
// https://colinstewart.pw/article/string-replacement-function-arma-sqf-20 - string replacer not by me, please check out!
_path = [getMissionPath "", "\", "\\"] call PX_fnc_stringReplace;

// check files exist for other buttons
_filesExist = false;
_createFiles = ["viking.VKN_checkFile", [_path, "initplayerlocal.sqf"]] call (uiNamespace getVariable "py3_fnc_callExtension");
switch (_createFiles) do {
    // catch empty array as false
    case ([]): {
        _filesExist = false;
    };
    case ("true"): {
        _filesExist = true;
    };
    case ("false"): {
        _filesExist = false;
    };
    default {
        _filesExist = false;
    };
};

// setup displays
_VTT_Home_Display = findDisplay 313 createDisplay "VKN_Template_tool_Home";
if (isNull _VTT_Home_Display) exitwith {
    systemChat "can't find display."
};

// Disable Escape Key
_VTT_Home_Display displayAddEventHandler ["Keydown", "if ((_this select 1) == 1) then {
    true
}"];

_editButton = _VTT_Home_Display displayCtrl 1600;
_createButton = _VTT_Home_Display displayCtrl 1601;
_deleteButton = _VTT_Home_Display displayCtrl 1602;

_missionnotSaved = true;
if (_path == "") then {
    _missionnotSaved = true;
} else {
    _missionnotSaved = false;
};

_createCode = "systemChat ""an error occoured while setting button actions""";

if (_missionnotSaved) then {
    _createCode = " systemChat ""The mission is not saved. Please save and try again."";
    ";
} else {
    _createCode = " _display = findDisplay 3480;
    _display closeDisplay 0; [] spawn VKN_VTT_fnc_create ";
};

_editCode = "systemChat ""an error occoured while setting button actions""";
_deleteCode = "systemChat ""an error occoured while setting button actions""";

if (_filesExist) then {
    _editCode = " _display = findDisplay 3480;
    _display closeDisplay 0; [] spawn VKN_EFM_fnc_handleCore; ";
    _deleteCode = " _display = findDisplay 3480;
    _display closeDisplay 0; [] spawn VKN_VTT_fnc_deleteFiles; ";
} else {
    _editCode = " systemChat ""The files do not exist, ensure you create a template first"";
    ";
    _deleteCode = " systemChat ""The files do not exist, ensure you create a template first"";
    ";
};

_createButton ctrlAddEventHandler ["ButtonClick", _createCode];
_editButton ctrlAddEventHandler ["ButtonClick", _editCode];
_deleteButton ctrlAddEventHandler ["ButtonClick", _deleteCode];