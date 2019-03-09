

_obj_emp	= _this select 0;
_rang_emp	= _this select 1;
_poz_g = position _obj_emp;

list_man_emp = _poz_g nearEntities [["Civilian","SoldierGB","SoldierEB","SoldierWB"],_rang_emp];
list_car_emp = _poz_g nearEntities [["Car", "Motorcycle", "Tank","Air","Ship"],_rang_emp];
static_turrets_emp = _poz_g nearEntities [["B_static_AA_F", "B_static_AT_F","B_T_Static_AA_F","B_T_Static_AT_F","B_T_GMG_01_F","B_T_HMG_01_F","B_T_Mortar_01_F","B_HMG_01_high_F","B_HMG_01_A_F","B_GMG_01_F","B_GMG_01_high_F","B_GMG_01_A_F","B_Mortar_01_F","B_G_Mortar_01_F","B_Static_Designator_01_F","B_AAA_System_01_F","B_SAM_System_01_F","B_SAM_System_02_F","O_HMG_01_F","O_HMG_01_high_F","O_HMG_01_A_F","O_GMG_01_F","O_GMG_01_high_F","O_GMG_01_A_F","O_Mortar_01_F","O_G_Mortar_01_F","O_static_AA_F","O_static_AT_F","O_Static_Designator_02_F","I_HMG_01_F","I_HMG_01_high_F","I_HMG_01_A_F","I_GMG_01_F","I_GMG_01_high_F","I_GMG_01_A_F","I_Mortar_01_F","I_G_Mortar_01_F","I_static_AA_F","I_static_AT_F"],_rang_emp];
list_light_emp = nearestObjects [_poz_g,["Land_fs_roof_F","Land_fs_sign_F","Land_TTowerBig_2_F","Land_TTowerBig_1_F","Lamps_base_F","PowerLines_base_F","PowerLines_Small_base_F","Land_LampStreet_small_F"],_rang_emp];
special_helmet_emp = ["H_PilotHelmetFighter_B", "H_PilotHelmetFighter_O","H_HelmetO_ViperSP_ghex_F","H_PilotHelmetFighter_I","H_HelmetO_ViperSP_hex_F"];
special_launchers_emp = ["launch_RPG32_F","launch_O_Titan_F","launch_O_Titan_short_F","launch_MRAWS_sand_F","launch_NLAW_F","launch_B_Titan_short_F","launch_B_Titan_F","launch_B_Titan_short_tna_F","launch_B_Titan_tna_F","launch_MRAWS_green_F","launch_MRAWS_olive_rail_F","launch_I_Titan_short_F","launch_I_Titan_F","launch_RPG32_ghex_F","launch_O_Vorona_green_F","launch_O_Titan_short_ghex_F","launch_O_Titan_ghex_F","launch_O_Vorona_brown_F"];

publicVariable "list_man_emp";publicVariable "list_car_emp";publicVariable "static_turrets_emp";publicVariable "list_light_emp";publicVariable "special_helmet_emp";publicVariable "special_launchers_emp";