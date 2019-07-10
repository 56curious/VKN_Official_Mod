/*
Script name:  fn_respawnPositionSafeZone.sqf
Created on:   21 ‎June ‎2019
Author:       Curious

Description:  Add a safezone to all respawn positions.

License:      This file is under "Arma Public License No Derivatives (APL-ND)"
              More information can be found at:
              https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:      N/A
*/

//EH code
_VKN_safezone_code = {
  params ["_respawnPos"];
  _distance = player distance getPos _respawnPos;
  respawnPosition = _respawnPos;
  player addAction ["", { params ["_target", "_caller", "_actionId", "_arguments"]; hint "Safezone is active!"; if ((player distance getPos _arguments) >= 100) then { player removeAction _actionId; };}, _respawnPos, 0, false, true, "DefaultAction", "isNil 'allowFire'"];
  player addeventhandler ["Fired", {
    if ((player distance getPos respawnPosition) <= 100) then {
      params ["_shooter","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_gunner"];
      deletevehicle _projectile;

      if ((toUpper _weapon isEqualTo "PUT" OR toUpper _weapon isEqualTo "THROW")) then {

          _dispName = getText (configfile >> "CfgMagazines" >> _magazine >> "displayName");
          deletevehicle _projectile;
          _shooter addMagazine _magazine;
          hint format ["WARNING! This is a safe zone. You cannot use %1 here!", str _dispName];
          [] spawn {
            player playMove "AmovPercMstpSnonWnonDnon_exercisePushup";
            _redArrow = "Sign_Arrow_F" createVehicle [0,0,0];
            _redArrow attachTo [player, [0, 0, 2.4]];
            sleep 18.5;
            deleteVehicle _redArrow;
            player switchMove "";
        };
        _code = { sleep 6; [objNull, player] call ace_medical_fnc_treatmentAdvanced_fullHealLocal; };
        _code remoteExec ["spawn"];
    };
  };
  }];
};

// While loop
[_VKN_safezone_code] spawn {
  params ["_VKN_safezone_code"];
  while {true} do {
    _respawnWest = [];
    _respawnEast = [];
    _respawnInde = [];
    _respawnCivi = [];

    //Deal with respawn positions for sides
    {
      _respawn = _x call BIS_fnc_getRespawnPositions;
      switch (_x) do {
          case (west): {
            _respawnWest append _respawn;
          };
          case (east): {
              _respawnEast append _respawn;
          };
          case (independent): {
              _respawnInde append _respawn;
          };
          case (civilian): {
              _respawnCivi append _respawn;
          };
      };
      sleep 0.01;
    } forEach [west, east, independent, civilian];

    switch (playerSide) do {
        case (west): {
            {
              [_x] spawn _VKN_safezone_code;
            } forEach _respawnWest;
        };
        case (east): {
            {
              [_x] spawn _VKN_safezone_code;
            } forEach _respawnEast;
        };
        case (independent): {
          {
            [_x] spawn _VKN_safezone_code;
          } forEach _respawnInde;
        };
        case (civilian): {
          {
            [_x] spawn _VKN_safezone_code;
          } forEach _respawnCivi;
        };
    };
    sleep 5;
  };
};

true
