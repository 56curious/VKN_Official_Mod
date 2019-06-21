_respawnPositions = west call BIS_fnc_getRespawnPositions;

while {true} do {
  {
    if ((player distance _x) < 100)  then {
      vehicle player allowDamage false;
    } else {
      vehicle player allowDamage true;
    };
  } forEach _respawnPositions;
  sleep 5;
};
