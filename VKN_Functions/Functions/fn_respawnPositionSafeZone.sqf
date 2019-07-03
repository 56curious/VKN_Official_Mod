while {true} do {
  _VKN_respawnPositions = west call BIS_fnc_getRespawnPositions;
  {
      VKN_disableFireAction = player addAction ["", {if ((player distance _x) <= 100) then { player removeAction _this select 2; };}, "", 0, false, true, "DefaultAction", "isNil 'allowFire'"];
      VKN_safezone_EH = player addeventhandler ["Fired", {
        if ((player distance _x) <= 100)  then {
          params ["_shooter","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile","_gunner"];
          deletevehicle _projectile;

          if ((toUpper _weapon isEqualTo "PUT" OR toUpper _weapon isEqualTo "THROW")) then {

              _dispName = getText (configfile >> "CfgMagazines" >> _magazine >> "displayName");
              deletevehicle _projectile;
              _shooter addMagazine _magazine;
              hint format ["WARNING! This is a safe zone. Do not use %1 here!",_dispName];
              [] spawn {
                player playMove "AmovPercMstpSnonWnonDnon_exercisePushup";
                _redArrow = "Sign_Arrow_F" createVehicle [0,0,0];
                _redArrow attachTo [player, [0, 0, 2.4]];
                sleep 18.5;
                deleteVehicle _redArrow;
                player switchMove "";
            };
        		_code = { sleep 6; [objNull, _player] call ace_medical_fnc_treatmentAdvanced_fullHealLocal; };
            _code remoteExec ["spawn"];
      	};
      };
      }];
  } forEach _VKN_respawnPositions; // error on _x not being defined.
  sleep 5;
};
