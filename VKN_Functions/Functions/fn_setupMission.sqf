/*
Script name: fn_setupMission.sqf
Created on: 21 ‎June ‎2019
Author: Curious

Description: setup mission with various settings

License: This file is under "Arma Public License No Derivatives (APL-ND)"
More information can be found at:
https:// www.bohemia.net/community/licenses/arma-public-license-nd

Example: N/A
*/

params ["_unit"];

// get just player on server
if is3DENPreview exitwith {};
if isServer exitwith {};
if !(isServer or hasinterface) exitwith {};

// Sync server at start
if hasinterface then {
    _unit allowdamage false;
    _unit enableSimulation false;
    systemChat "Syncing client to server. Please wait.";
    for "_i" from 30 to 1 step -1 do {
        _text = format ["Server Sync in Progress... Please wait %1 more seconds", _i];
        if ((getAssignedCuratorlogic player) in allCurators) then {
            ["System:", _text + " to place objects.", 1337] call BIS_fnc_curatorhint;
        } else {
            hintSilent _text;
        };
        sleep 1;
    };
    hintSilent "";
    _unit allowdamage true;
    _unit enableSimulation true;
    systemChat "Sync Complete.";
};

true