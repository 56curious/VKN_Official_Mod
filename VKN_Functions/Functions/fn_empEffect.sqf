// by ALIAS

private ["_al_grenade","_shooter","_poz_g","_zgud","_obj_emp"];

_delay_check = 0.01;

["earthquake_02"] remoteExec ["playsound"];

{
	_x setHitPointDamage ["hitEngine",1];
	_x disableTIEquipment true;
	_x disableNVGEquipment true;
	[_x] remoteExec ["VKN_fnc_emp_tgt_sfx"];
	sleep _delay_check;
} forEach list_car_emp;

{
	_x setDamage 0.9;
	[_x] RemoteExec ["VKN_fnc_empSparky"];
	sleep _delay_check
} forEach list_light_emp;

{
	_x setDamage 1;
	[_x] RemoteExec ["VKN_fnc_empSparky"];
	sleep _delay_check
} forEach static_turrets_emp;

//{_x disableTIEquipment true; _x disableNVGEquipment true; [[_x],"AL_emp\sparky.sqf"] remoteExec ["execVM"];sleep _delay_check} forEach static_turrets_emp;

["geiger"] remoteExec ["playsound"];
{
	[_x] remoteExec ["VKN_fnc_emp_tgt_sfx"];
	removeGoggles _x;
	 _x removeWeaponGlobal "Rangefinder";
	  _x removeWeaponGlobal "Laserdesignator";
	   _x removeItem "Rangefinder";
	    _x unassignItem "ItemGPS";
	     _x removeItem "ItemGPS";
	      _x unassignItem "ItemRadio";
	       _x removeItem "ItemRadio";

	_x unassignItem "NVGoggles";
	 _x removeItem "NVGoggles";
	  _x unassignItem "NVGoggles_OPFOR";
	   _x removeItem "NVGoggles_OPFOR";
	    _x unassignItem "NVGoggles_INDEP";
	     _x removeItem "NVGoggles_INDEP";

	_x unassignItem "O_NVGoggles_hex_F";
	 _x removeItem "O_NVGoggles_hex_F";
	 _x unassignItem "O_NVGoggles_urb_F";
	 _x removeItem "O_NVGoggles_urb_F";
	 _x unassignItem "O_NVGoggles_ghex_F";
	 _x removeItem "O_NVGoggles_ghex_F";
	_x unassignItem "NVGoggles_tna_F";
	_x removeItem "NVGoggles_tna_F";
	_x unassignItem "NVGogglesB_blk_F";
	_x removeItem "NVGogglesB_blk_F";
	_x unassignItem "NVGogglesB_grn_F";
	_x removeItem "NVGogglesB_grn_F";
	_x unassignItem "NVGogglesB_gry_F";
	_x removeItem "NVGogglesB_gry_F";
	_x unassignItem "Integrated_NVG_F";
	_x removeItem "Integrated_NVG_F";
	_x unassignItem "Integrated_NVG_TI_0_F";
	_x removeItem "Integrated_NVG_TI_0_F";
	_x unassignItem "Integrated_NVG_TI_1_F";
	_x removeItem "Integrated_NVG_TI_1_F";
	_x removePrimaryWeaponItem "acc_pointer_IR";
	if (headgear _x in special_helmet_emp) then {
		removeHeadgear _x
	};

	if (secondaryWeapon _x in special_launchers_emp) then {
		_x removeWeaponGlobal (secondaryWeapon _x)
	};

	if (emp_dam>0) then {
		_x setDamage ((getDammage _x) + emp_dam)
	};

	sleep _delay_check
} forEach list_man_emp;