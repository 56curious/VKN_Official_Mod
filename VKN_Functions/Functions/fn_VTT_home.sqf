/*
Script name:    fn_VTT_Home.sqf
Created on:     04 January ‎2021
Author:         Curious

License:		    This file is under "Arma Public License No Derivatives (APL-ND)"
				        More information can be found at:
				        https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with home screen UI functions

Framework:      Mission Template

Parameters:
				        N/A
*/
//Don't run if not in 3den
if !(is3DEN) exitWith {systemChat "You're not in the editor! Please go into the editor to run this function!"};

//return false if files have not been made
//https://colinstewart.pw/article/string-replacement-function-arma-sqf-20 - string replacer not by me, please check out!
_path = [getMissionPath "", "\", "\\"] call PX_fnc_stringReplace;

//check files exist for other buttons
_filesExist = false;
_createFiles = ["viking.VKN_checkFile", [_path, "initPlayerLocal.sqf"]] call (uiNamespace getVariable "py3_fnc_callExtension");
switch (_createFiles) do {
  //catch empty array as false
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

//Setup displays
_VTT_Home_Display = findDisplay 313 createDisplay "VKN_Template_Tool_Home";
if (isNull _VTT_Home_Display) exitWith {systemChat "can't find display."};

//Disable Escape Key
_VTT_Home_Display displayAddEventHandler ["KeyDown", "if ((_this select 1) == 1) then { true }"];

_editButton = _VTT_Home_Display displayCtrl 1600;
_createButton = _VTT_Home_Display displayCtrl 1601;
_deleteButton = _VTT_Home_Display displayCtrl 1602;

_missionSaved = ["tempmission", _path, false] call BIS_fnc_inString;

_createCode = "systemChat ""an error occoured while setting button actions""";;

if (_missionSaved) then {
  _createCode = " _display = findDisplay 3480; _display closeDisplay 0; [] spawn VKN_VTT_fnc_VTT_create ";
} else {
  _createCode = " systemChat ""The mission is not saved. Please save and try again.""; ";
};

_editCode = "systemChat ""an error occoured while setting button actions""";
_deleteCode = "systemChat ""an error occoured while setting button actions""";

if (_filesExist) then {
  _editCode = " _display = findDisplay 3480; _display closeDisplay 0; [] spawn VKN_VTT_fnc_VTT_fileSetupDisplay; ";
  _deleteCode = " _display = findDisplay 3480; _display closeDisplay 0; [] spawn VKN_VTT_fnc_VTT_deleteFiles; ";
} else {
  _editCode = " systemChat ""The files do not exist, ensure you create a template first""; ";
  _deleteCode = " systemChat ""The files do not exist, ensure you create a template first""; ";
};

_createButton ctrlAddEventHandler ["ButtonClick", _createCode];
_editButton ctrlAddEventHandler ["ButtonClick", _editCode];
_deleteButton ctrlAddEventHandler ["ButtonClick", _deleteCode];
