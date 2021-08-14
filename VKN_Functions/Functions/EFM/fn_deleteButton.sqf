/*
Script name:    fn_deleteButton.sqf
Created on:     07 August ‎2021
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with UI elements for EFM tool.

Framework:      External File Manager

Parameters:
				0: BOOL - true = file, false = folder
				1: STRING - selected folder/file path to delete
				1: STRING - selected folder/file to delete
*/

params ["_isFile", "_path", "_toDelete"];

if !(is3DEN) exitwith {
    systemChat "You're not in the editor! Please go into the editor to run this function!"
};

_deleteCheckerDisplay = findDisplay 313 createDisplay "VKN_Confirm_Menu";

if (isnil "_deleteCheckerDisplay") exitwith {
    systemChat "The display is not open, please try again!";
    false
};

_ctrl_background = _deleteCheckerDisplay displayCtrl 2200;
_ctrl_background ctrlSetTooltip "This will delete the selected file or folder: " + _toDelete + " and all of its contents!";

_ctrl_confirm_button = _deleteCheckerDisplay displayCtrl 1600;
_ctrl_cancel_button = _deleteCheckerDisplay displayCtrl 1601;

_buttonCode = "_deleteCheckerDisplay = findDisplay 3485; _deleteCheckerDisplay closeDisplay 0; [] spawn VKN_EFM_fnc_handleCore;";

_path = [_path, "\", "\\"] call PX_fnc_stringReplace;

_folder_FileCode = "";
if (_isFile) then {
	_folder_FileCode = format["['viking.VKN_deleteFile', [%1, [%2]]] call (uiNamespace getVariable 'py3_fnc_callExtension');",str _path, str _toDelete];
} else {
	_folder_FileCode = format["['viking.VKN_deleteFolder', [%1]] call (uiNamespace getVariable 'py3_fnc_callExtension');", str _path];
};

_ctrl_confirm_button ctrlAddEventHandler ["ButtonClick", _buttonCode + _folder_FileCode];
_ctrl_cancel_button ctrlAddEventHandler ["ButtonClick", _buttonCode];