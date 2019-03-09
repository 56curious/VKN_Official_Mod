// by ALIAS

if (!isServer) exitWith {};

_obj_emp1	= _this select 0;
_obj_emp	= _obj_emp1 select 0;
_rang_emp	= _this select 1;
_viz_eff	= _this select 2;
_player_viz = _this select 3;
_dam_unit	= _this select 4;

emp_dam = _dam_unit; publicVariable "emp_dam";
if (_viz_eff or _player_viz) then {[_obj_emp,_viz_eff,_player_viz] remoteExec ["VKN_fnc_emp_viz_eff_emp"];};
[_obj_emp,_rang_emp] call VKN_fnc_empConfigObj;
waitUntil {!isNil "special_launchers_emp"};
waitUntil {!isNil "emp_dam"};
[] call VKN_fnc_empEffect;