/*
Script name:    fn_strategicMapPreInit.sqf
Created on:     11 ‎December ‎2018
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Grab addon setting and add key watch if enabled.

Framework:      Strategic Map

Parameters:
                N/A
*/
[] spawn {
	_value = profileNamespace getVariable ["VKN_StrategicMapValue_var", true];
	StrategicMapEH = (findDisplay 46) displayAddEventHandler ["KeyDown",""];
	if (_value) then {
		waituntil {!(IsNull (findDisplay 46))};
		StrategicMapEH = (findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1 == 50) and (_this select 4)) then {[player] spawn VKN_fnc_strategicMapInit;};"];
	} else {
		(findDisplay 46) displayRemoveEventHandler ["keyDown", StrategicMapEH];
	};

	missionNamespace setVariable ["VKN_fnc_strategicMapOpen_missions_Registered_Var", []];
};