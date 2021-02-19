/*
Script name: fn_VTT_deleteFiles.sqf
Created on: 04 January ‎2021
Author: Curious

License:		 This file is under "Arma Public License No Derivatives (APL-ND)"
More information can be found at:
https:// www.bohemia.net/community/licenses/arma-public-license-nd

Description: Delete Files if user clicks ok

Framework: Mission Template

parameters:
N/A
*/
// don't run if not in 3den
if !(is3DEN) exitwith {
    systemChat "You're not in the editor! Please go into the editor to run this function!"
};

_deleteCheckerDisplay = findDisplay 313 createDisplay "VKN_Template_tool_Delete_Check";

if (isnil "_deleteCheckerDisplay") exitwith {
    systemChat "The display is not open, please try again!";
    false
};

_ctrl_confirm_button = _deleteCheckerDisplay displayCtrl 1600;
_ctrl_cancel_button = _deleteCheckerDisplay displayCtrl 1601;

_ctrl_confirm_button ctrlAddEventHandler ["ButtonClick", "
    _deleteCheckerDisplay = findDisplay 3485;
    _filenames = [""init.sqf"", ""initplayerlocal.sqf"", ""initplayerServer.sqf"", ""initServer.sqf"", ""onplayerKilled.sqf"", ""onplayerRespawn.sqf"", ""description.ext""];
    _path = [getMissionPath """", ""\"", ""\\""] call PX_fnc_stringReplace;
    
    _deleteReturn = [""viking.VKN_deleteFile"", [_path, _filenames]] call (uiNamespace getVariable ""py3_fnc_callExtension"");
    systemChat str _deleteReturn;
    _deleteCheckerDisplay closeDisplay 0;
    [] spawn VKN_VTT_fnc_home;
"];

_ctrl_cancel_button ctrlAddEventHandler ["ButtonClick", "
    _deleteCheckerDisplay = findDisplay 3485;
    _deleteCheckerDisplay closeDisplay 0;
    [] spawn VKN_VTT_fnc_home;
"];