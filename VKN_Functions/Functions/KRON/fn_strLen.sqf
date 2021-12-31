/*
Script name:    fn_strLen.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Returns the length of the string

Framework:      N/A

Parameters:
				_len=[_str] call KRON_fnc_StrLen
*/
private["_in","_arr","_len"];
_in=_this select 0;
_arr=[_in] call KRON_fnc_StrToArray;
_len=count (_arr);
_len