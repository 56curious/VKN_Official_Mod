////



//apply correct camera level depending on stance
switch (stance player) do {
    case ("STAND"): {
      _x = (getPosATL player select 0) - 2;
      _y = (getPosATL player select 1) + 0.9;
      _z = (getPosATL player select 2) + 1.6;
    };
    case ("CROUCH"): {
      _x = (getPosATL player select 0) - 2;
      _y = (getPosATL player select 1);
      _z = (getPosATL player select 2) + 0.8;
    };
    case ("PRONE"): {
      _x = (getPosATL player select 0) - 1.6;
      _y = (getPosATL player select 1) - 0.2;
      _z = (getPosATL player select 2) + 0.5;
    };
    case ("UNDEFINED"): {
        //swimming
        _x = (getPosASLW player select 0) - 1.6;
        _y = (getPosASLW player select 1) + 1.7;
        _z = (getPosASLW player select 2) + 3;
    };
    case (""): {
        //on non-person object - rarely, if ever used
    };
    default {
      //default is presuming standing (works for most cases) - might need testing
      _x = (getPosATL player select 0) - 2;
      _y = (getPosATL player select 1) + 0.9;
      _z = (getPosATL player select 2) + 1.6;
    };
};

_position = [_x, _y, _z];

private _camera = "camera" camCreate _position;

_camera cameraEffect ["internal", "back"];


_camera camPrepareTarget player;
_camera camCommitPrepared 0;
