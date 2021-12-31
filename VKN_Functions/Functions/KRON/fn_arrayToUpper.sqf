/*
Script name:    fn_arrayToUpper.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Set every element in array toUpper
				
Framework:      N/A

Parameters:
				_aa = [["str","strDFFF"]] call KRON_fnc_arrayToUpper;
*/
private["_in","_i","_e","_out"];
_in=_this select 0;
_out=[];
if ((count _in)>0) then {
	for "_i" from 0 to (count _in)-1 do {
		_e=_in select _i;
		if (typeName _e=="STRING") then {
			_e=toUpper(_e);
		};
		_out set [_i,_e];
	};
};
_out