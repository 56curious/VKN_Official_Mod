/*
Script name:    fn_haultRegisterUnit.sqf
Created on:     21 February ‎2018
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Register a unit for haulting.

Framework:      Unit Haulting

Parameters:
				0: OBJECT - The object (or unit) that will be assigned the action.
*/

params ["_unit"];

_haultArray = missionNamespace getVariable ["VKN_fnc_haultRegisteredUnits_Var", ""];
_haultArrayFinal = str _unit + _haultArray;
missionnamespace setVariable ["VKN_fnc_haultRegisteredUnits_Var", _haultArrayFinal];

[_unit] call VKN_fnc_haultAddAction;