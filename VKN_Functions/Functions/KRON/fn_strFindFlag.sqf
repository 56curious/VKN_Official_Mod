/*
Script name:    fn_strFindFlag.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Checks a mixed array (_this) for the presence of a string (_str)

Framework:      N/A

Parameters:
				_flg=[_this,_str] call KRON_fnc_FindFlag
*/
private["_in","_flg","_arr","_out"];
_in=_this select 0;
_flg=toUpper(_this select 1);
_arr=[_in] call KRON_fnc_ArrayToUpper;
_out=_flg in _arr;
_out