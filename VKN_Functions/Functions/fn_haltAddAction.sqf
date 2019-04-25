/*
Script name:    fn_haltAddAction.sqf
Created on:     21 February ‎2018
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    add the action globally for players to interact with if the unit is in the array.

Framework:      Unit halting

Parameters:
				0: OBJECT - The object (or unit) that will be assigned the action.
*/

params ["_unit"];

_haltArray = missionNamespace getVariable ["VKN_fnc_haltRegisteredUnits_Var", ""];

if (_unit in _haltArray) then {

	_unit addAction ["<t color='#e2f442'>Order Unit to Stop</t>", {
		private params ["_target", "_caller", "_actionId", "_arguments"];
		_target removeAction _actionId;
		_caller playMove "Acts_PercMstpSlowWrflDnon_handup2c";
		sleep 4.132;
		doStop _target;
	}];

	_Getout = [
		_unit,
		"Request to Disembark",
		"\a3\ui_f\data\igui\cfg\simpletasks\types\getOut_ca.paa",
		"\a3\ui_f\data\igui\cfg\simpletasks\types\getOut_ca.paa",
		true,
		true,
		{},
		{},
		{
			params ["_target", "_caller", "_actionId", "_arguments"];
			_rnd = selectRandom [true, false];
			if (_rnd) then { doStop _target; _target assignAsDriver vehicle _target; _target orderGetIn false; _target disableAI "move"; };},
		{},
		[],
		4.132,
		0,
		true,
		false
	];
};
