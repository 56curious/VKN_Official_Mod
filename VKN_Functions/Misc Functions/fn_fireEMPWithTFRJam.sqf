/*
Script name: fn_fireEMPwithTFRJam.sqf
Created on: 21 ‎December ‎2018
Author: Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
More information can be found at:
https:// www.bohemia.net/community/licenses/arma-public-license-nd

Description: fire an EMP and jam all TFR radios

Framework: EMP

parameters:
0: ARRAY of object(s) - Entity(s) that will cause the radios to be jammed.
1: NUMBER (Optional) - Range of the jammer in Meters. default is 1000.
2: NUMBER (Optional) - strength of the jammer. default is 50.
3: BOOL (Optional) - Enable Debug. default is false.
4: BOOL (Optional) - Remove fuel. default is true.
5: BOOL - Display visual effect of emp.
6: BOOL - players vision will be affected for a half a minute or so
7: NUMBER - damage unit with given number.

Example:
// single Object
[[someObject], 500, 100, nil, true, false, true, 0.5] call VKN_fnc_fireEMPwithTFRJam;

// Multiple Objects
[[someObject1, someObject2, someObject3], 500, 100, nil, true, false, true, 0.5] call VKN_fnc_fireEMPwithTFRJam;
*/

if (!hasinterface) exitwith {};
waitUntil {
    !isNull player
};

// Define the variables along with their default values.
_jammers = param [0, [objNull], [[objNull]]];
_rad = param [1, 1000, [0]];
_strength = param [2, 50, [0]] - 1;
_debug = param [3, false, [true]];
_fuel = param [4, false, [true]];
_vis_eff = param [5, true, [true]];
_player_viz = param [6, false, [true]];
_dam_unit = param [7, 0, [0]];

// compare distances between jammers and player to find nearest jammer and set it as _jammer
_jammerDist = {
    _jammer = objNull;
    _closestDist = 1000000;
    {
        if (_x distance player < _closestdist) then {
            _jammer = _x;
            _closestDist = _x distance player;
        };
    } forEach _jammers;
    _jammer;
};
_jammer = call _jammerDist;

if (alive _jammer) then {
    [_jammers, _rad, _vis_eff, _player_viz, _dam_unit] call VKN_fnc_empStarter;
};

// while the Jamming vehicle is not destroyed, loop every 5 seconds
while {alive _jammer} do {
    // set variables
    _dist = player distance _jammer;
    _distPercent = _dist / _rad;
    _interference = 1;
    _sendinterference = 1;
    
    if (_dist < _rad) then {
        _interference = _strength - (_distPercent * _strength) + 1;
        // Calculat the recieving interference, which has to be above 1 to have any effect.
        _sendinterference = 1/_interference;
        // Calculate the sending interference, which needs to be below 1 to have any effect.
    };
    // set the TF receiving and sending distance multipliers
    player setVariable ["tf_receivingdistanceMultiplicator", _interference];
    player setVariable ["tf_sendingdistanceMultiplicator", _sendinterference];
    
    // Debug chat and marker.
    if (_debug) then {
        deleteMarkerlocal "CIS_DebugMarker";
        deleteMarkerlocal "CIS_DebugMarker2";
        // Area marker
        _debugMarker = createMarkerlocal ["CIS_DebugMarker", position _jammer];
        _debugMarker setMarkerShapeLocal "ELLIPSE";
        _debugMarker setMarkersizeLocal [_rad, _rad];
        
        // position Marker
        _debugMarker2 = createMarkerlocal ["CIS_DebugMarker2", position _jammer];
        _debugMarker2 setMarkerShapeLocal "ICON";
        _debugMarker2 setMarkertypeLocal "mil_dot";
        _debugMarker2 setMarkertextLocal format ["%1", _jammer];
        
        if (_fuel) then {
            if (player inArea CIS_DebugMarker) then {
                vehicle player setFuel 0;
            };
        };
        
        systemChat format ["distance: %1, Percent: %2, interference: %3, Send interference: %4", _dist, 100 * _distPercent, _interference, _sendinterference];
        systemChat format ["Active Jammer: %1, Jammers: %2", _jammer, _jammers];
    };
    sleep 5;
    
    // Only run this if there are multiple jammers.
    if (count _jammers > 1) then {
        // Check if all of the jammers are still alive. if not, remove it from _jammers
        {
            if (!alive _x and count _jammers > 1) then {
                _jammers = _jammers - [_x]
            };
        } forEach _jammers;
        
        // Check for closest jammer
        _jammer = call _jammerDist;
    };
};

// set TFR settings back to normal before exiting the script
player setVariable ["tf_receivingdistanceMultiplicator", 1];
player setVariable ["tf_sendingdistanceMultiplicator", 1];
"filmGrain" ppEffectEnable false;