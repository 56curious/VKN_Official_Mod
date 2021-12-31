/*
Script name:    fn_strCompare.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Compares two elements and returns -1 if first is smaller, 1 if second is smaller, and 0 if equal
				If optional parameter "case" is given, capitalization is considered (upper before lowercase)

Framework:      N/A

Parameters:
				_cmp=[_str1,_str2,("case")] call KRON_fnc_Compare
*/
private["_k","_n","_s","_i","_c","_t","_s1","_s2","_l1","_l2","_l"];
_k=[_this,"CASE"] call KRON_fnc_strfindFlag;
_n=0;
_s=0;
for "_i" from 0 to 1 do {
	_t=_this select _i;
	switch (typeName _t) do {
		case "SCALAR": {_n=1};
		case "BOOL": {_this set [_i,str(_t)]};
		case "SIDE": {_this set [_i,str(_t)]};
		case "STRING": {if !(_k) then {_this=[_this] call KRON_fnc_ArrayToUpper}};
		default {_n=-1};
	};
};
_s1 = _this select 0;
_s2 = _this select 1;
if (_n!=0) exitWith {
	if (_n==1) then {
		if (_s1<_s2) then {_s=-1} else {if (_s1>_s2) then {_s=1}};
	};
	_s	
};
_s1 = toArray(_s1);
_s2 = toArray(_s2);
_l1 = count _s1;
_l2 = count _s2;
_l=if (_l1<_l2) then {_l1} else {_l2};
for "_i" from 0 to _l-1 do {
	if ((_s1 select _i)<(_s2 select _i)) then {
		_s=-1; 
		_i=_l;
	} else {
		if ((_s1 select _i)>(_s2 select _i)) then {
			_s=1;
			_i=_l;
		};
	};
};
if (_s==0) then {
	if (_l1<_l2) then {
		_s=-1;
	} else {
		if (_l1>_l2) then {_s=1};
	};
};
_s