class B_VKN_LOKI_RIFLEMAN_PMC_01 : rhsusf_socom_marsoc_cso_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "B_VKN_PMC_LOKI";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Loki_Full";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Black_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Black_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};

    weapons[] = {"SMA_Mk16_black","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_Mk16_black","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_Mk16_black","SMA_supp1b_556","rhsusf_acc_anpeq15_bk","sma_spitfire_03_rds_low_black",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Loki_Full",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",25},{"MineDetector",1},{"ACE_morphine",16},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"SmokeShellBlue",2,1},{"SmokeShellRed",2,1},{"rhs_mag_an_m8hc",3,1},{"Laserbatteries",1,1}}},{"VSM_OGA_OD_Backpack_Compact",{}},"VSM_Black_OPS_2","VSM_Shemagh_Balaclava2_OD_Glasses",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_OPERATOR_PMC_01 : B_VKN_LOKI_RIFLEMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator";
    side = 1;
    faction = "B_VKN_PMC_LOKI";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Loki_Full";

    linkedItems[] = {"VSM_RAV_operator_OGA_OD","VKN_Cap_Black_Logo","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"VSM_RAV_operator_OGA_OD","VKN_Cap_Black_Logo","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};

    weapons[] = {"SMA_MK18MOEOD_SM","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK18MOEOD_SM","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18MOEOD_SM","SMA_supp1b_556","rhsusf_acc_anpeq15_bk","sma_spitfire_03_rds_low_black",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Loki_Full",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30},{"Laserbatteries",1,1}}},{"VSM_RAV_operator_OGA_OD",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",25},{"MineDetector",1},{"ACE_morphine",16},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"SmokeShellBlue",2,1},{"SmokeShellRed",2,1},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30}}},{"VSM_OGA_OD_Backpack_Compact",{{"ACE_morphine",20},{"MineDetector",1},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_fieldDressing",25},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},"VKN_Cap_Black_Logo","VSM_Shemagh_Balaclava2_OD_Glasses",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_BREACHER_PMC_01 : B_VKN_LOKI_RIFLEMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Breacher";
    side = 1;
    faction = "B_VKN_PMC_LOKI";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Loki_Full";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Black_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Black_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};

    weapons[] = {"SMA_SAR21MMS_F","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_SAR21MMS_F","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_SAR21MMS_F","SMA_supp1b_556","rhsusf_acc_anpeq15_bk","sma_spitfire_03_rds_low_black",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Loki_Full",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",25},{"MineDetector",1},{"ACE_morphine",16},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"SmokeShellBlue",2,1},{"SmokeShellRed",2,1},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"Laserbatteries",1,1}}},{"VSM_OGA_OD_Backpack_Compact",{{"1Rnd_HE_Grenade_shell",4,1},{"UGL_FlareRed_F",2,1},{"1Rnd_SmokeRed_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",2,1}}},"VSM_Black_OPS_2","VSM_Shemagh_Balaclava2_OD_Glasses",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_LEADER_PMC_01 : B_VKN_LOKI_RIFLEMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 1;
    faction = "B_VKN_PMC_LOKI";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Loki_Full";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Beanie_Black","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Beanie_Black","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};

    weapons[] = {"SMA_ACRREMAFGCQBblk_N","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_ACRREMAFGCQBblk_N","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_ACRREMAFGCQBblk_N","SMA_supp1b_556","rhsusf_acc_anpeq15_bk","sma_spitfire_03_rds_low_black",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Loki_Full",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",25},{"MineDetector",1},{"ACE_morphine",16},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"SmokeShellBlue",2,1},{"SmokeShellRed",2,1},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"Laserbatteries",1,1}}},{"VSM_OGA_OD_Backpack_Compact",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},"VSM_Beanie_Black","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_RADIOMAN_PMC_01 : B_VKN_LOKI_LEADER_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Radioman";
    side = 1;
    faction = "B_VKN_PMC_LOKI";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Loki_Full";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Bowman_cap_Black","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Bowman_cap_Black","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};

    weapons[] = {"SMA_Mk16_black","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_Mk16_black","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VKN_tf_rt1523g_OGA";

    ALiVE_orbatCreator_loadout[] = {{"SMA_Mk16_black","SMA_supp1b_556","rhsusf_acc_anpeq15_bk","sma_spitfire_03_rds_low_black",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Loki_Full",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",25},{"MineDetector",1},{"ACE_morphine",16},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"SmokeShellBlue",2,1},{"SmokeShellRed",2,1},{"rhs_mag_an_m8hc",3,1},{"Laserbatteries",1,1}}},{"VKN_tf_rt1523g_OGA",{}},"VSM_Bowman_cap_Black","VSM_Shemagh_Balaclava2_OD_Glasses",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_SNIPER_PMC_01 : B_VKN_LOKI_RIFLEMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sniper";
    side = 1;
    faction = "B_VKN_PMC_LOKI";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Loki_Full";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","H_Watchcap_blk","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","H_Watchcap_blk","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};

    weapons[] = {"rhs_weap_m40a5","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m40a5","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag"};
    respawnMagazines[] = {"rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5","","SMA_ANPEQ15_BLK","optic_AMS",{"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",5},{},"rhsusf_acc_harris_swivel"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Loki_Full",{{"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",12,5},{"Laserbatteries",1,1}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",25},{"MineDetector",1},{"ACE_morphine",16},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"SmokeShellBlue",2,1},{"SmokeShellRed",2,1},{"rhs_mag_an_m8hc",3,1}}},{"VSM_OGA_OD_Backpack_Compact",{}},"H_Watchcap_blk","VSM_Shemagh_Balaclava2_OD_Glasses",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_SMG_PMC_01 : B_VKN_LOKI_RIFLEMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "SMG";
    side = 1;
    faction = "B_VKN_PMC_LOKI";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Loki_Full";

    linkedItems[] = {"VSM_RAV_operator_OGA_OD","VKN_Cap_Black_Logo","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"VSM_RAV_operator_OGA_OD","VKN_Cap_Black_Logo","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};

    weapons[] = {"SMA_MK18MOEOD_SM","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK18MOEOD_SM","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18MOEOD_SM","SMA_supp1b_556","rhsusf_acc_anpeq15_bk","sma_spitfire_03_rds_low_black",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Loki_Full",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30},{"Laserbatteries",1,1}}},{"VSM_RAV_operator_OGA_OD",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",25},{"MineDetector",1},{"ACE_morphine",16},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"SmokeShellBlue",2,1},{"SmokeShellRed",2,1},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30}}},{"VSM_OGA_OD_Backpack_Compact",{{"ACE_morphine",20},{"MineDetector",1},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_fieldDressing",25},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},"VKN_Cap_Black_Logo","VSM_Shemagh_Balaclava2_OD_Glasses",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_GRENADIER_PMC_01 : B_VKN_LOKI_RIFLEMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 1;
    faction = "B_VKN_PMC_LOKI";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Loki_Full";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Black_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Black_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};

    weapons[] = {"SMA_MK16_EGLM_black","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK16_EGLM_black","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK16_EGLM_black","SMA_supp1b_556","rhsusf_acc_anpeq15_bk","sma_spitfire_03_rds_low_black",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Loki_Full",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30},{"Laserbatteries",1,1}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",25},{"MineDetector",1},{"ACE_morphine",16},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"SmokeShellBlue",2,1},{"SmokeShellRed",2,1},{"rhs_mag_an_m8hc",3,1}}},{"VSM_OGA_OD_Backpack_Compact",{{"1Rnd_HE_Grenade_shell",4,1},{"UGL_FlareRed_F",2,1},{"1Rnd_SmokeRed_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",2,1}}},"VSM_Black_OPS_2","VSM_Shemagh_Balaclava2_OD_Glasses",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_MEDIC_PMC_01 : B_VKN_LOKI_RIFLEMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 1;
    faction = "B_VKN_PMC_LOKI";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Loki_Full";

    linkedItems[] = {"VSM_RAV_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"VSM_RAV_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};

    weapons[] = {"rhs_weap_hk416d10_LMT","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_hk416d10_LMT","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VKN_Kitbag_Black";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10_LMT","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk","sma_spitfire_03_rds_low_black",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_rvg_blk"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Loki_Full",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30},{"Laserbatteries",1,1}}},{"VSM_RAV_operator_OGA_OD",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",25},{"MineDetector",1},{"ACE_morphine",16},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"SmokeShellBlue",2,1},{"SmokeShellRed",2,1},{"rhs_mag_an_m8hc",3,1}}},{"VKN_Kitbag_Black",{{"ACE_morphine",20},{"MineDetector",1},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_fieldDressing",25},{"ACE_bloodIV_250",9},{"ACE_bloodIV_500",5},{"ACE_epinephrine",25}}},"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD_Glasses",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_MARSKMAN_PMC_01 : B_VKN_LOKI_RIFLEMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 1;
    faction = "B_VKN_PMC_LOKI";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Loki_Full";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","H_Booniehat_khk_hs","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","H_Booniehat_khk_hs","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","NVGogglesB_blk_F"};

    weapons[] = {"srifle_DMR_06_olive_F","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"srifle_DMR_06_olive_F","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
    respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_06_olive_F","muzzle_snds_B","","optic_AMS",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_blk"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Loki_Full",{{"20Rnd_762x51_Mag",2,20},{"Laserbatteries",1,1}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",25},{"MineDetector",1},{"ACE_morphine",16},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"SmokeShellBlue",2,1},{"SmokeShellRed",2,1},{"rhs_mag_an_m8hc",3,1},{"20Rnd_762x51_Mag",5,20}}},{"VSM_OGA_OD_Backpack_Compact",{{"20Rnd_762x51_Mag",6,20}}},"H_Booniehat_khk_hs","VSM_Shemagh_Balaclava2_OD_Glasses",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_Dingy_PMC_01 : B_T_Boat_Transport_01_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Dingy";
    side = 1;
    faction = "B_VKN_PMC_LOKI";
    crew = "B_VKN_LOKI_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_LOKI_OPERATOR_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_LOKI_MEDIC_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_LOKI_GRENADIER_PMC_01"; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = "B_VKN_LOKI_SNIPER_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Digital";

};

class B_VKN_LOKI_LITTLEBIRD_PMC_01 : RHS_MELB_AH6M_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Littlebird";
    side = 1;
    faction = "B_VKN_PMC_LOKI";
    crew = "B_VKN_LOKI_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_LOKI_RIFLEMAN_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_BLACKHAWK_PMC_01 : RHS_UH60M_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Blackhawk";
    side = 1;
    faction = "B_VKN_PMC_LOKI";
    crew = "B_VKN_LOKI_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_LOKI_RIFLEMAN_PMC_01"; };
        class MainTurret : MainTurret { gunnerType = "B_VKN_LOKI_RIFLEMAN_PMC_01"; };
        class RightDoorGun : RightDoorGun { gunnerType = "B_VKN_LOKI_BREACHER_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_LOKI_GRENADIER_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_LOKI_MEDIC_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_LOKI_MARSKMAN_PMC_01"; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = "B_VKN_LOKI_SMG_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class B_VKN_LOKI_HUMVEE_PMC_01 : B_VKN_ODIN_Humvee_M2_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee";
    side = 1;
    faction = "B_VKN_PMC_LOKI";
    crew = "B_VKN_LOKI_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_LOKI_OPERATOR_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_LOKI_LEADER_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_LOKI_RADIOMAN_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_LOKI_SMG_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'po_factions_me\ists\data\m998_exterior_b_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'po_factions_me\ists\data\A2_parts_b_co.paa'];_unit setObjectTextureGlobal [3,'po_factions_me\ists\data\wheel_wranglermt_b_co.paa'];_unit setObjectTextureGlobal [4,'po_factions_me\ists\data\m998_mainbody_b_co.paa'];_unit setObjectTextureGlobal [5,'po_factions_me\ists\data\gratting_b_co.paa'];_unit setObjectTextureGlobal [6,'po_factions_me\ists\data\tile_exmetal_b_co.paa'];_unit setObjectTextureGlobal [7,'po_factions_me\ists\data\m1025_b_co.paa'];_unit setObjectTextureGlobal [8,'po_factions_me\ists\data\mk64mount_b_co.paa'];_unit setObjectTextureGlobal [9,''];_unit setObjectTextureGlobal [10,''];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_ISTS";

};

class B_VKN_LOKI_JEEP_PMC_01 : C_Offroad_02_unarmed_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Jeep";
    side = 1;
    faction = "B_VKN_PMC_LOKI";
    crew = "B_VKN_LOKI_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_LOKI_BREACHER_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_LOKI_SMG_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_LOKI_MEDIC_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa'];_unit setObjectTextureGlobal [3,'\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Black";

};

class B_VKN_LOKI_OFFROAD_PMC_01 : C_Offroad_01_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroad";
    side = 1;
    faction = "B_VKN_PMC_LOKI";
    crew = "B_VKN_LOKI_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_LOKI_BREACHER_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_LOKI_RADIOMAN_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_LOKI_MEDIC_PMC_01"; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = "B_VKN_LOKI_MARSKMAN_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\po_vehicles\data\camo\offroad\offroad_black_co.paa'];_unit setObjectTextureGlobal [1,'\po_vehicles\data\camo\offroad\offroad_black_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_Black";

};