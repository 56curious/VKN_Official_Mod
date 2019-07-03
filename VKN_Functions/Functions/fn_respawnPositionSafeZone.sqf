//EH code
_VKN_safezone_code = {
  player addAction ["", {if ((player distance _this) <= 100) then { player removeAction _this select 2; };}, "", 0, false, true, "DefaultAction", "isNil 'allowFire'"]; // Error player distance #_this undefined
    player addeventhandler ["Fired", {
      if ((player distance _this) <= 100) then {
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

    { systemChat str _x } forEach [_respawnWest, _respawnEast, _respawnInde, _respawnCivi];

    switch (playerSide) do {
        case (west): {
            {
              [_x] spawn _VKN_safezone_code;
            } forEach _respawnWest;
        };
    };
    sleep 5;
  };
};

true
