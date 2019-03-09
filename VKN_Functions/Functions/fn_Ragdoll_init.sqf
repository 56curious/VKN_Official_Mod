/*
  Author: Diwako - Heavily Modifed by Curious

  License:    This file is under "Arma Public License No Derivatives (APL-ND)"
              More information can be found at:
              https://www.bohemia.net/community/licenses/arma-public-license-nd

  Description:
  Adds ragdolling for players upon going unconscious

  Parameter(s):
  none

  Examples:
  (begin)
    [] call VKN_fnc_Ragdoll_init;
  (end)

  Returns:
    none
*/

// no need to initialise ragdolling twice!

if (!isNil 'VKN_ragdoll_ragdollRunning') exitWith {};
VKN_ragdoll_ragdollRunning = true;

["ace_unconscious", {
  params [["_unit", objNull],["_state", false]];
  if (!VKN_ragdoll_ragdolling) exitWith {}; // ragdolling if it's active
  if ((!(isPlayer _unit) && {!VKN_ragdoll_ai})) exitWith {}; // only ragdoll players and only ragdolling AI if that option is set active
  if (_state && {(isNull objectParent _unit) && {!([_unit] call ace_medical_fnc_isBeingCarried) && {!([_unit] call ace_medical_fnc_isBeingDragged)}}}) then {
    // ragdoll unit
    _unit setUnconscious true;
  };
  if (!_state) then {
    // unit woke up before ragdolling was finished
    _unit setUnconscious false;
  };
}] call CBA_fnc_addEventHandler;

["CAManBase", "AnimChanged", {
  _this call VKN_fnc_Ragdoll_animChangedEH;
}] call CBA_fnc_addClassEventHandler;