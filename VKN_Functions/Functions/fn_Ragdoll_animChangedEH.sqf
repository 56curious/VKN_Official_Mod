
/*
  Author: diwako - Heavily Modified by Curious

  License:    This file is under "Arma Public License No Derivatives (APL-ND)"
              More information can be found at:
              https://www.bohemia.net/community/licenses/arma-public-license-nd

  Description:
  Code for AnimChanged eventhandler

  Parameter(s):
  _unit - Ragdolled unit
  _anim - Current changed animation

  Examples:
  (begin)
    [_unit,_anim] call VKN_fnc_Ragdoll_animChangedEH;
  (end)

  Returns:
    none
*/
params ["_unit","_anim"];
if (!(_unit getVariable ["ACE_isUnconscious",false])) exitWith {}; // do not run if unit is conscious
if (!(alive _unit) || {!(isNull objectParent _unit)}) exitWith {}; // do not run if unit in any vehicle | do not run if unit is dead
_ragDollActive = profileNamespace getVariable ["VKN_RagDollActive", false];
if (_ragDollActive) exitWith {};

_anim = toLower(_anim);

if ((_anim find "unconsciousrevive") != -1 ||  {(_anim find "amov") == 0} ) then { // catch any movement or stance type of animation (player specific clause)

  // figure out which position state is need
  private _vRightShoulder = _unit selectionPosition "rightshoulder";
  private _vLeftShoulder = _unit selectionPosition "leftshoulder";
  private _heightDif = _vRightShoulder#2 - _vLeftShoulder#2;

  // array of array for each animation
  private _animHolder = [];

_animCustom = selectRandom [
  "Acts_InjuredAngryRifle01",
  "Acts_InjuredCoughRifle02",
  "Acts_InjuredLookingRifle01",
  "Acts_InjuredLookingRifle02",
  "Acts_InjuredLookingRifle03",
  "Acts_InjuredLookingRifle04",
  "Acts_InjuredLookingRifle05",
  "Acts_InjuredLyingRifle01",
  "Acts_InjuredLyingRifle02"
];

  // play animation
  [
    {
      params ["_unit","_anim"];
        if (_unit getVariable ["ACE_isUnconscious",false]) then {
          profileNamespace setVariable ["VKN_RagDollActive", true];
          if (_unit == ace_player) then {
            player switchMove _animCustom;
          } else {
            _unit switchMove _animCustom;
          };
        };
    }, // code
    [_unit,_anim], // params
    0.2 // delay
  ] call CBA_fnc_waitAndExecute;
  [
    {
      params ["_unit","_anim"];
      if (_unit getVariable ["ACE_isUnconscious",false]) then {
        _unit setUnconscious false;
      };
    }, // code
    [_unit,_anim], // params
    5 // delay
  ] call CBA_fnc_waitAndExecute;

  // combat network sync issues
  if (isMultiplayer) then {
    [
      {
        params ["_unit","_anim"];
        if ((_unit getVariable ["ACE_isUnconscious",false]) && // unit still unconscious
            {(isNull objectParent _unit) && // unit not in a car
            {!([_unit] call ace_medical_fnc_isBeingCarried) && // not being carried
            {!([_unit] call ace_medical_fnc_isBeingDragged)}}} // not being dragged
          ) then {
          // reapply unconscious animation just in case
          if (_unit == ace_player) then {
            profileNamespace setVariable ["VKN_RagDollActive", true];
            if (_unit == ace_player) then {
              player switchMove _animCustom;
            } else {
              _unit switchMove _animCustom;
            };
          };
        };
        if (!(_unit getVariable ["ACE_isUnconscious",false])) then {
          // unit is not unconscious anymore
          _unit setUnconscious false;
          // free unit of unconscious animation if it is still trapped in it
          if (local _unit) then {
            ["ace_common_switchMove", [_unit, (animationState _unit)]] call CBA_fnc_globalEvent;
            profileNamespace setVariable ["VKN_RagDollActive", false];
          };
        };
      }, // code
      [_unit,_anim], // params
      10 // delay
    ] call CBA_fnc_waitAndExecute;
  };
};