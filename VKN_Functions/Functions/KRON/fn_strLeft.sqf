/*
Script name:    fn_strLeft.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Returns l characters from the left side of the string

Framework:      N/A

Parameters:
				_left = [_str, l] call KRON_fnc_StrLeft
*/

private["_in","_len","_arr","_out"];
_in=_this select 0;
_len=(_this select 1)-1;
_arr=[_in] call KRON_fnc_StrToArray;
_out="";

if (_len>=(count _arr)) then {
	_out = _in;
} else {
	for "_i" from 0 to _len do {
		_out = _out + (_arr select _i);
	};
};
_out