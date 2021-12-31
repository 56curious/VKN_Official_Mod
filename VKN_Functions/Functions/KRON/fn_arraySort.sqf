/*
Script name:    fn_arraySort.sqf
Created on:     31 December 2021
Author:         Kronzky

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Sorts an array of strings in acsending order (Numbers before letters, uppercase before lowercase)
				If array is multi-dimensional, optional parameter (_idx) specifies which column is used for sorting
				If optional parameter "desc" is given, order is reversed 
				If optional parameter "case" is given, capitalization is considered (upper before lowercase)
				
Framework:      N/A

Parameters:
				_srt=[_arr,(_idx),("desc"),("case")] call KRON_fnc_ArraySort
*/

	private["_a","_d","_k","_s","_i","_vo","_v1","_v2","_j","_c","_x"];
	_a = +(_this select 0);
	_d = if ([_this,"DESC"] call KRON_fnc_strFindFlag) then {-1} else {1};
	_k = if ([_this,"CASE"] call KRON_fnc_strFindFlag) then {"CASE"} else {"nocase"};
	_s = -1;
	if (typeName (_a select 0)=="ARRAY") then {
		_s=0;
		if (((count _this)>1) && (typeName (_this select 1)=="SCALAR")) then {
			_s=_this select 1;
		};
	};
	for "_i" from 0 to (count _a)-1 do {
		_vo = _a select _i;
		_v1 = _vo;
		if (_s>-1) then {_v1=_v1 select _s};
		_j = 0;
		for [{_j=_i-1},{_j>=0},{_j=_j-1}] do {
			_v2 = _a select _j;
			if (_s>-1) then {_v2=_v2 select _s};
			_c=[_v2,_v1,_k] call KRON_fnc_strCompare;
			if (_c!=_d) exitWith {};
			_a set [_j+1,_a select _j];
		};
		_a set [_j+1,_vo];
	};
	_a