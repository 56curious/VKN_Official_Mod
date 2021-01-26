/*
Script name:    fn_haltRegisterUnit.sqf
Created on:     21 February ‎2018
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Register a unit for halting.

Framework:      Unit halting

Parameters:
				0: OBJECT - The object (or unit) that will be assigned the action.
*/

params ["_unit"];

_haltArray = missionNamespace getVariable ["VKN_fnc_haltRegisteredUnits_Var", ""];
_haltArrayFinal = str _unit + _haltArray;
missionnamespace setVariable ["VKN_fnc_haltRegisteredUnits_Var", _haltArrayFinal];

[_unit] call VKN_fnc_haltAddAction;
