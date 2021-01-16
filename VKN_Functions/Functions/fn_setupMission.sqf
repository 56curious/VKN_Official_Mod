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

params ["_localplayer"];

// Sync server at start
_localplayer allowdamage false;
disableUserinput true;
hint 'Server Sync... please wait.';
sleep 60;
_localplayer allowdamage true;
disableUserinput false;

_distance = _localplayer distance getPos defaultRespawnposition;
respawnposition = _respawnPos;
_localplayer addAction ["", {
    params ["_target", "_caller", "_actionId", "_arguments"];
    hint "Safezone is active!"; if ((_localplayer distance getPos _arguments) >= 100) then {
        _localplayer removeAction _actionId;
    };
}, _respawnPos, 0, false, true, "defaultaction", "isnil 'allowfire'"];
_localplayer addEventHandler ["fired", {
    if ((_localplayer distance getPos respawnposition) <= 50) then {
        params ["_shooter", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
        deletevehicle _projectile;
        
        if ((toUpper _weapon isEqualto "PUT" or toUpper _weapon isEqualto "throw")) then {
            _dispname = gettext (configFile >> "Cfgmagazines" >> _magazine >> "displayname");
            deletevehicle _projectile;
            _shooter addMagazine _magazine;
            hint format ["WARNinG! This is a safe zone. You cannot use %1 here!", str _dispname];
            [] spawn {
                _localplayer playMove "AmovPercMstpSnonWnonDnon_exercisePushup";
                _redArrow = "Sign_Arrow_F" createvehicle [0, 0, 0];
                _redArrow attachto [_localplayer, [0, 0, 2.4]];
                sleep 18.5;
                deletevehicle _redArrow;
                _localplayer switchMove "";
            };
        };
    };
}];

true