/*
Script name:    fn_fireEMPWithTFRJam.sqf
Created on:     21 ‎December ‎2018
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Fire an EMP and jam all TFR radios

Framework:      EMP

Parameters:
                0: ARRAY of object(s) - Entity(s) that will cause the radios to be jammed.
                1: NUMBER (Optional) - Range of the jammer in Meters. Default is 1000.
                2: NUMBER (Optional) - Strength of the jammer. Default is 50.
                3: BOOL (Optional) - Enable Debug. Default is false.
                4: BOOL (Optional) - Remove fuel. Default is true.
                5: BOOL - Display visual effect of emp.
                6: BOOL - Players vision will be affected for a half a minute or so
                7: NUMBER - Damage unit with given number.

Example:
				//Single Object
				[[someObject], 500, 100, nil, true, false, true, 0.5] call VKN_fnc_fireEMPWithTFRJam;

				//Multiple Objects
				[[someObject1, someObject2, someObject3], 500, 100, nil, true, false, true, 0.5] call VKN_fnc_fireEMPWithTFRJam;
*/


if (!hasInterface) exitwith {};
waituntil {!isnull player};

//Define the variables along with their default values.
_jammers = param [0, [objNull], [[objNull]]];
_rad = param [1, 1000, [0]];
_strength = param [2, 50, [0]] - 1;
_debug = param [3, false, [true]];
_fuel = param [4, false, [true]];
_vis_eff = param [5, true, [true]];
_player_viz = param [6, false, [true]];
_dam_unit = param [7, 0, [0]];


//compare distances between jammers and player to find nearest jammer and set it as _jammer
_jammerDist = {
	_jammer = objNull;
	_closestDist = 1000000;
	{
		if (_x distance player < _closestdist) then {
			_jammer = _x;
			_closestDist = _x distance player;
		};
	} foreach _jammers;
	_jammer;
};
_jammer = call _jammerDist;

if (alive _jammer) then { [_jammers, _rad, _vis_eff, _player_viz, _dam_unit] call VKN_fnc_empStarter; };

// While the Jamming Vehicle is not destroyed, loop every 5 seconds
while {alive _jammer} do
{
    // Set variables
    _dist = player distance _jammer;
    _distPercent = _dist / _rad;
    _interference = 1;
	_sendInterference = 1;

	if (_dist < _rad) then {
		_interference = _strength - (_distPercent * _strength) + 1; // Calculat the recieving interference, which has to be above 1 to have any effect.
		_sendInterference = 1/_interference; //Calculate the sending interference, which needs to be below 1 to have any effect.
    };
    // Set the TF receiving and sending distance multipliers
    player setVariable ["tf_receivingDistanceMultiplicator", _interference];
	player setVariable ["tf_sendingDistanceMultiplicator", _sendInterference];

    // Debug chat and marker.
	if (_debug) then {
		deletemarkerLocal "CIS_DebugMarker";
		deletemarkerLocal "CIS_DebugMarker2";
		//Area marker
		_debugMarker = createmarkerLocal ["CIS_DebugMarker", position _jammer];
		_debugMarker setMarkerShapeLocal "ELLIPSE";
		_debugMarker setMarkerSizeLocal [_rad, _rad];

		//Position Marker
		_debugMarker2 = createmarkerLocal ["CIS_DebugMarker2", position _jammer];
		_debugMarker2 setMarkerShapeLocal "ICON";
		_debugMarker2 setMarkerTypeLocal "mil_dot";
		_debugMarker2 setMarkerTextLocal format ["%1", _jammer];

		if (_fuel) then {	if (player inArea CIS_DebugMarker) then {	vehicle player setFuel 0;	};	};

		systemChat format ["Distance: %1, Percent: %2, Interference: %3, Send Interference: %4", _dist,  100 * _distPercent, _interference, _sendInterference];
		systemChat format ["Active Jammer: %1, Jammers: %2",_jammer, _jammers];
		//copyToClipboard (str(Format ["Distance: %1, Percent: %2, Interference: %3", _dist,  100 * _distPercent, _interference]));
	};
    // Sleep 5 seconds before running again
    sleep 5.0;

	//Only run this if there are multiple jammers.
	if (count _jammers > 1) then {
		//Check if all of the jammers are still alive. If not, remove it from _jammers
		{
			if (!alive _x AND count _jammers > 1) then {_jammers = _jammers - [_x]};
		} foreach _jammers;

		//Check for closest jammer
		_jammer = call _jammerDist;
	};
};

//Set TFR settings back to normal before exiting the script
player setVariable ["tf_receivingDistanceMultiplicator", 1];
player setVariable ["tf_sendingDistanceMultiplicator", 1];
"filmGrain" ppEffectEnable false;