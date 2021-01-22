// by ALIAS

private ["_al_grenade", "_shooter", "_poz_g", "_zgud", "_obj_emp"];

_delay_check = 0.01;

["earthquake_02"] remoteExec ["playSound"];

{
    _x setHitPointDamage ["hitEngine", 1];
    _x disableTIEquipment true;
    _x disableNVGEquipment true;
    [_x] remoteExec ["VKN_fnc_emp_tgt_sfx"];
    sleep _delay_check;
} forEach list_car_emp;

{
    _x setDamage 0.9;
    [_x] remoteExec ["VKN_fnc_empSparky"];
    sleep _delay_check;
} forEach list_light_emp;

{
    _x setDamage 1;
    [_x] remoteExec ["VKN_fnc_empSparky"];
    sleep _delay_check;
} forEach static_turrets_emp;

// {
    _x disableTIEquipment true;
    _x disableNVGEquipment true; [[_x], "AL_emp\sparky.sqf"] remoteExec ["execVM"];sleep _delay_check
} forEach static_turrets_emp;

["geiger"] remoteExec ["playSound"];
{
    [_x] remoteExec ["VKN_fnc_emp_tgt_sfx"];
    removeGoggles _x;
    _x removeWeaponGlobal "Rangefinder";
    _x removeWeaponGlobal "Laserdesignator";
    _x removeItem "Rangefinder";
    _x unassignItem "ItemGPS";
    _x removeItem "ItemGPS";
    _x unassignItem "Itemradio";
    _x removeItem "Itemradio";
    
    _x unassignItem "NVgoggles";
    _x removeItem "NVgoggles";
    _x unassignItem "NVgoggles_opfor";
    _x removeItem "NVgoggles_opfor";
    _x unassignItem "NVgoggles_inDEP";
    _x removeItem "NVgoggles_inDEP";
    
    _x unassignItem "O_NVgoggles_hex_F";
    _x removeItem "O_NVgoggles_hex_F";
    _x unassignItem "O_NVgoggles_urb_F";
    _x removeItem "O_NVgoggles_urb_F";
    _x unassignItem "O_NVgoggles_ghex_F";
    _x removeItem "O_NVgoggles_ghex_F";
    _x unassignItem "NVgoggles_tna_F";
    _x removeItem "NVgoggles_tna_F";
    _x unassignItem "NVgogglesB_blk_F";
    _x removeItem "NVgogglesB_blk_F";
    _x unassignItem "NVgogglesB_grn_F";
    _x removeItem "NVgogglesB_grn_F";
    _x unassignItem "NVgogglesB_gry_F";
    _x removeItem "NVgogglesB_gry_F";
    _x unassignItem "integrated_NVG_F";
    _x removeItem "integrated_NVG_F";
    _x unassignItem "integrated_NVG_TI_0_F";
    _x removeItem "integrated_NVG_TI_0_F";
    _x unassignItem "integrated_NVG_TI_1_F";
    _x removeItem "integrated_NVG_TI_1_F";
    _x removePrimaryWeaponItem "acc_pointer_IR";
    if (headgear _x in special_helmet_emp) then {
        removeHeadgear _x;
    };
    
    if (secondaryWeapon _x in special_launchers_emp) then {
        _x removeWeaponGlobal (secondaryWeapon _x);
    };
    
    if (emp_dam>0) then {
        _x setDamage ((getDammage _x) + emp_dam);
    };
    
    sleep _delay_check;
} forEach list_man_emp;