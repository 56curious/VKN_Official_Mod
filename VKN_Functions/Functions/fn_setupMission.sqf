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

// Sync server at start
[] spawn {
    player allowdamage false;
    disableUserinput true;
    hint 'Server Sync... please wait.';
    sleep 60;
    player allowdamage true;
    disableUserinput false;
    hint "Sync Complete.";
};

_distance = player distance getPos defaultRespawnposition;
respawnposition = _respawnPos;
player addAction ["", {
    params ["_target", "_caller", "_actionId", "_arguments"];
    hint "Safezone is active!"; if ((player distance getPos _arguments) >= 100) then {
        player removeAction _actionId;
    };
}, _respawnPos, 0, false, true, "defaultaction", "isnil 'allowfire'"];
player addEventHandler ["fired", {
    if ((player distance getPos respawnposition) <= 50) then {
        params ["_shooter", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
        deletevehicle _projectile;
        
        if ((toUpper _weapon isEqualto "PUT" or toUpper _weapon isEqualto "throw")) then {
            _dispname = gettext (configFile >> "Cfgmagazines" >> _magazine >> "displayname");
            deletevehicle _projectile;
            _shooter addMagazine _magazine;
            hint format ["WARNinG! This is a safe zone. You cannot use %1 here!", str _dispname];
            [] spawn {
                player playMove "AmovPercMstpSnonWnonDnon_exercisePushup";
                _redArrow = "Sign_Arrow_F" createvehicle [0, 0, 0];
                _redArrow attachto [player, [0, 0, 2.4]];
                sleep 18.5;
                deletevehicle _redArrow;
                player switchMove "";
            };
        };
    };
}];

true