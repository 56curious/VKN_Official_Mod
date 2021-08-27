/*
Script name:    fn_saveButton.sqf
Created on:     07 August ‎2021
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with UI elements for EFM tool.

Framework:      External File Manager

Parameters:
				N/A
*/

params ["_path", "_filename", "_filedata"];

if !(is3DEN) exitwith {
    systemChat "You're not in the editor! Please go into the editor to run this function!"
};

_saveCheckerDisplay = findDisplay 313 createDisplay "VKN_Confirm_Menu";

if (isnil "_saveCheckerDisplay") exitwith {
    systemChat "The display is not open, please try again!";
    false
};

_ctrl_background = _saveCheckerDisplay displayCtrl 2200;
_ctrl_background ctrlSetTooltip "This will overwrite the selected file: " + _filename;

_ctrl_confirm_button = _saveCheckerDisplay displayCtrl 1600;
_ctrl_cancel_button = _saveCheckerDisplay displayCtrl 1601;

_buttonCode = "_saveCheckerDisplay = findDisplay 3485; _saveCheckerDisplay closeDisplay 0; [] spawn VKN_EFM_fnc_handleCore;";

_path = [_path, "\", "\\"] call PX_fnc_stringReplace; 

_saveCode = format ["['viking.VKN_editFile', [%1, %2, %3]] call (uiNamespace getVariable 'py3_fnc_callExtension');", str _path, str _filename, str _filedata];

_ctrl_confirm_button ctrlAddEventHandler ["ButtonClick", _buttonCode + _saveCode];
_ctrl_cancel_button ctrlAddEventHandler ["ButtonClick", _buttonCode];

