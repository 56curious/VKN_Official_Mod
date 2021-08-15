/*
Script name:    fn_confirmMenu.sqf
Created on:     07 August ‎2021
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with UI elements for confirm menu UI.

Framework:      N/A

Parameters:
				N/A
*/


if !(is3DEN) exitwith {
    systemChat "You're not in the editor! Please go into the editor to run this function!"
};

_deleteCheckerDisplay = findDisplay 313 createDisplay "VKN_Confirm_Menu";

if (isnil "_deleteCheckerDisplay") exitwith {
    systemChat "The display is not open, please try again!";
    false
};

_ctrl_confirm_button = _deleteCheckerDisplay displayCtrl 1600;
_ctrl_cancel_button = _deleteCheckerDisplay displayCtrl 1601;

_buttonCode = "_deleteCheckerDisplay = findDisplay 3485; _deleteCheckerDisplay closeDisplay 0;";

_return = false;

_ctrl_confirm_button ctrlAddEventHandler ["ButtonClick", _buttonCode + " _return = true;"];
_ctrl_cancel_button ctrlAddEventHandler ["ButtonClick", _buttonCode + " _return = false;"];

_return