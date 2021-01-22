/*
Script name: fn_getUnitData.sqf
Created on: 03 ‎June ‎2020
Author: Curious

Description: Get unit data from within a trigger area.

Framework: Unit Data

parameters:
0: Object - trigger object
1: side - side to grab, doesn't support multiple sides
2: Boolean - true to get stance, false to skip
3: Boolean - true to get behaviour state, false to skip

Example:

[myTrigger, west, true, false, true] call VKN_fnc_getUnitData;
*/

_trigger = param [0, [objNull], [objNull]];
_sidetype = param [1, side, sideUnknown];
_positionState = param [2, true, [true]];
_stanceState = param [3, true, [true]];
_behaviourState = param [4, true, [true]];

_fullArray = [];
{
    _unitdata = [];
    if (_stanceState) then {
        _stance = stance _x;
        _unitdata pushBack _stance;
    } else {
        _unitdata pushBack "";
    };
    
    if (_behaviourState) then {
        _behaviour = selectRandom ["AWARE", "COMBAT"];
        _unitdata pushBack _behaviour;
    } else {
        _unitdata pushBack "SAFE";
    };
    
    if (side _x == _sidetype) then {
        _unitdata pushBack typeOf _x;
    } else {
        _unitdata pushBack sideUnknown;
    };
    
    _pos = getPosATL _x;
    _unitdata pushBack _pos;
    
    _fullArray pushBack _unitdata;
} forEach thislist;

copytoClipboard str _fullArray;