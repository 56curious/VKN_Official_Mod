/*
Script name:    fn_strRight.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Returns l characters from the right side of the string

Framework:      N/A

Parameters:
				_right=[_str,l] call KRON_fnc_StrRight
*/
private["_in","_len","_arr","_i","_out"];
_in=_this select 0;
_len=_this select 1;
_arr=[_in] call KRON_fnc_StrToArray;
_out="";
if (_len>(count _arr)) then {_len=count _arr};
for "_i" from ((count _arr)-_len) to ((count _arr)-1) do {
	_out=_out + (_arr select _i);
};
_out