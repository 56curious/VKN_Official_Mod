/*
Script name:    fn_strInStr.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Tests whether string b is present in string a

Framework:      N/A

Parameters:
				_found=[a,b] call KRON_StrInStr
*/
private["_out"];
_in=_this select 0;
_out=if (([_this select 0,_this select 1] call KRON_fnc_StrIndex)==-1) then {false} else {true};
_out