/*
Script name:    fn_strMid.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Returns l characters from the string, starting at position p (zero-based)
				If l is not defined, the rest of the string is returned

Framework:      N/A

Parameters:
				_mid=[_str,p,(l)] call KRON_fnc_StrMid
*/
private["_in","_pos","_len","_arr","_i","_out"];
_in=_this select 0;
_pos=abs(_this select 1);
_arr=[_in] call KRON_fnc_StrToArray;
_len=count(_arr);
if ((count _this)>2) then {_len=(_this select 2)};
_out="";
if ((_pos+_len)>=(count _arr)) then {_len=(count _arr)-_pos};
if (_len>0) then {
	for "_i" from _pos to (_pos+_len-1) do {
		_out=_out + (_arr select _i);
	};
};
_out