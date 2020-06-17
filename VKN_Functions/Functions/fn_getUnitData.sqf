/*
Script name:    fn_getUnitData.sqf
Created on:     03 ‎June ‎2020
Author:         Curious

Description:    Get unit data from within a trigger area.

Framework:      Unit Data

Parameters:
                0: Object - trigger object
                1: Side - Side to grab, doesn't support multiple sides
                2: Boolean - True to get Stance, False to skip
                3: Boolean - True to get Behaviour state, False to skip

Example:

  [myTrigger, WEST, true, false, true] call VKN_fnc_getUnitData;
*/

_trigger = param [0, [objNull], [objNull]];
_sideType = param [1, side, sideUnknown];
_positionState = param [2, true, [true]];
_stanceState = param [3, true, [true]];
_behaviourState = param [4, true, [true]];

_fullArray = [];
{
_unitdata = [];
if (_stanceState) then {
  _stance = stance _x;
  _unitdata pushback _stance;
} else {  _unitdata pushback ""; };

if (_behaviourState) then {
  _behaviour = selectRandom ["AWARE", "COMBAT"];
  _unitdata pushBack _behaviour;
} else {  _unitdata pushBack "SAFE"; };

if (side _x == _sideType) then {
  _unitdata pushBack typeOf _x;
} else { _unitdata pushback sideUnknown;};

_pos = getPosATL _x;
_unitdata pushback _pos;

_fullArray pushBack _unitdata;

} forEach thisList;

copyToClipboard str _fullArray;
