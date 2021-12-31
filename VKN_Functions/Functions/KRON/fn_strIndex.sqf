/*
Script name:    fn_strIndex.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Returns the position of string b in string a

Framework:      N/A

Parameters:
				_index=[a,b] call KRON_StrIndex
*/	
private["_hay","_ndl","_lh","_ln","_arr","_tmp","_i","_j","_out"];
_hay=_this select 0;
_ndl=_this select 1;
_out=-1;
_i=0;
if (_hay == _ndl) exitWith {0};
_lh=[_hay] call KRON_fnc_StrLen;
_ln=[_ndl] call KRON_fnc_StrLen;
if (_lh < _ln) exitWith {-1};
_arr=[_hay] call KRON_fnc_StrToArray;
for "_i" from 0 to (_lh-_ln) do {
	_tmp="";
	for "_j" from _i to (_i+_ln-1) do {
		_tmp=_tmp + (_arr select _j);
	};
	if (_tmp==_ndl) exitWith {_out=_i};
};
_out