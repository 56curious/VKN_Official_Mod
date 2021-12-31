/*
Script name:    fn_strToArray.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Converts a string into an array of characters

Framework:      N/A

Parameters:
				_array = [_str] call KRON_fnc_StrToArray;
*/

private["_in","_i","_arr","_out"];
_in=_this select 0;

_arr = toArray(_in);

_out = [];

for "_i" from 0 to (count _arr)-1 do {
	_out = _out + [toString([_arr select _i])];
};

_out