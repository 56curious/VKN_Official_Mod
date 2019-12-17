class B_VKN_BALDER_RIFLEMAN_PMC_01 : B_VKN_LOKI_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "B_VKN_PMC_BALDER";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_OD_Black_2";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_L85RIS","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_L85RIS","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_L85RIS","SMA_supp2BOD_556","rhsusf_acc_anpeq15","SMA_ELCAN_SPECTER_4z",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_OD_Black_2",{}},{"VSM_LBT6094_operator_OGA_OD",{{"NVGogglesB_blk_F",1},{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",19},{"ACE_EntrenchingTool",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhs_mag_m67",2,1}}},{},"VSM_OGA_OD_OPS_2","VSM_Shemagh_Goggles_OD",{},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_BALDER_SQUADLEADER_PMC_01 : B_VKN_BALDER_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squadleader";
    side = 1;
    faction = "B_VKN_PMC_BALDER";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_OD_Black_2";

    linkedItems[] = {"VSM_OGA_OD_Vest_3","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_3","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_MK18afg","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_MK18afg","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18afg","SMA_supp2b_556","rhsusf_acc_anpeq15_bk","optic_ERCO_blk_F",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_OD_Black_2",{}},{"VSM_OGA_OD_Vest_3",{{"NVGogglesB_blk_F",1},{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",19},{"ACE_EntrenchingTool",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},{},"","VSM_balaclava2_Black",{},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_BALDER_RADIOMAN_PMC_01 : B_VKN_BALDER_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Radioman";
    side = 1;
    faction = "B_VKN_PMC_BALDER";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_OD_Black_2";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Mich2000_OGA_OD","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Mich2000_OGA_OD","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_L85RIS","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_L85RIS","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VKN_rt1523g_OD";

    ALiVE_orbatCreator_loadout[] = {{"SMA_L85RIS","SMA_supp2BOD_556","rhsusf_acc_anpeq15","SMA_ELCAN_SPECTER_4z",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_OD_Black_2",{}},{"VSM_LBT6094_operator_OGA_OD",{{"NVGogglesB_blk_F",1},{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",19},{"ACE_EntrenchingTool",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhs_mag_m67",2,1}}},{"VKN_rt1523g_OD",{}},"VSM_Mich2000_OGA_OD","rhs_googles_black",{},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_BALDER_MEDIC_PMC_01 : B_VKN_BALDER_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 1;
    faction = "B_VKN_PMC_BALDER";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_OD_Black_2";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VKN_B_OPS2_Black_Medical","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VKN_B_OPS2_Black_Medical","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_L85RIS","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_L85RIS","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VKN_Kitbag_Black_Medical";

    ALiVE_orbatCreator_loadout[] = {{"SMA_L85RIS","SMA_supp2BOD_556","rhsusf_acc_anpeq15","SMA_ELCAN_SPECTER_4z",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_OD_Black_2",{}},{"VSM_LBT6094_operator_OGA_OD",{{"NVGogglesB_blk_F",1},{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",19},{"ACE_EntrenchingTool",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhs_mag_m67",2,1}}},{"VKN_Kitbag_Black_Medical",{{"ACE_bloodIV_250",10},{"ACE_bloodIV_500",5},{"ACE_epinephrine",20},{"ACE_morphine",15},{"ACE_bodyBag",2},{"ACE_fieldDressing",15}}},"VKN_B_OPS2_Black_Medical","VSM_Shemagh_Balaclava_OD_Peltor_Goggles",{},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_BALDER_AA_PMC_01 : B_VKN_BALDER_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "AA";
    side = 1;
    faction = "B_VKN_PMC_BALDER";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_OD_Black_2";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","rhsusf_opscore_fg_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","rhsusf_opscore_fg_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_L85RIS","rhs_weap_fim92","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_L85RIS","rhs_weap_fim92","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"SMA_L85RIS","SMA_supp2BOD_556","rhsusf_acc_anpeq15","SMA_ELCAN_SPECTER_4z",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_OD_Black_2",{}},{"VSM_LBT6094_operator_OGA_OD",{{"NVGogglesB_blk_F",1},{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",19},{"ACE_EntrenchingTool",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"rhs_fim92_mag",1,1}}},"rhsusf_opscore_fg_pelt_nsw","VSM_Shemagh_Balaclava_OD_Peltor_Goggles",{},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_BALDER_AT_PMC_01 : B_VKN_BALDER_AA_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT";
    side = 1;
    faction = "B_VKN_PMC_BALDER";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_OD_Black_2";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","rhsusf_opscore_fg_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","rhsusf_opscore_fg_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_L85RIS","rhs_weap_M136","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_L85RIS","rhs_weap_M136","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_m136_mag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_m136_mag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_L85RIS","SMA_supp2BOD_556","rhsusf_acc_anpeq15","SMA_ELCAN_SPECTER_4z",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{"rhs_weap_M136","","","",{"rhs_m136_mag",1},{},""},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_OD_Black_2",{}},{"VSM_LBT6094_operator_OGA_OD",{{"NVGogglesB_blk_F",1},{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",19},{"ACE_EntrenchingTool",1},{"ACE_Flashlight_XL50",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhs_mag_m67",2,1}}},{},"rhsusf_opscore_fg_pelt_nsw","rhs_googles_black",{},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_BALDER_GRENADIER_PMC_01 : B_VKN_BALDER_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 1;
    faction = "B_VKN_PMC_BALDER";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_OD_Black_2";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","rhsusf_opscore_fg_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","rhsusf_opscore_fg_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_HK416CQBGLOD","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_HK416CQBGLOD","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","1Rnd_HE_Grenade_shell","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","1Rnd_HE_Grenade_shell","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","1Rnd_HE_Grenade_shell","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","1Rnd_HE_Grenade_shell","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CQBGLOD","SMA_supp2BOD_556","rhsusf_acc_anpeq15","SMA_ELCAN_SPECTER_4z",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_OD_Black_2",{}},{"VSM_LBT6094_operator_OGA_OD",{{"NVGogglesB_blk_F",1},{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",19},{"ACE_EntrenchingTool",1},{"ACE_Flashlight_XL50",1},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhs_mag_m67",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30},{"1Rnd_HE_Grenade_shell",3,1},{"1Rnd_SmokeRed_Grenade_shell",1,1}}},{},"rhsusf_opscore_fg_pelt_nsw","rhs_googles_black",{},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_BALDER_MARKSMAN_PMC_01 : B_VKN_BALDER_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 1;
    faction = "B_VKN_PMC_BALDER";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_OD_Black_2";

    linkedItems[] = {"VSM_OGA_OD_Vest_3","H_Booniehat_oli","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_3","H_Booniehat_oli","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_Mk17_16_black","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_Mk17_16_black","rhsusf_weap_glock17g4"};

    magazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR","rhsusf_mag_17Rnd_9x19_JHP","SMA_20Rnd_762x51mm_M80A1_EPR","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR","rhsusf_mag_17Rnd_9x19_JHP","SMA_20Rnd_762x51mm_M80A1_EPR","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "B_AssaultPack_rgr";

    ALiVE_orbatCreator_loadout[] = {{"SMA_Mk17_16_black","SMA_supp_762","rhsusf_acc_anpeq15","optic_AMS",{"SMA_20Rnd_762x51mm_M80A1_EPR",20},{},"bipod_01_F_blk"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_OD_Black_2",{}},{"VSM_OGA_OD_Vest_3",{{"NVGogglesB_blk_F",1},{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",19},{"ACE_EntrenchingTool",1},{"ACE_Flashlight_XL50",1},{"SMA_20Rnd_762x51mm_M80A1_EPR",4,20}}},{"B_AssaultPack_rgr",{{"ACE_fieldDressing",25},{"ACE_morphine",15},{"MineDetector",1},{"SMA_20Rnd_762x51mm_M80A1_EPR",8,20}}},"H_Booniehat_oli","VSM_Shemagh_Balaclava_OD_Peltor_Goggles",{},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_BALDER_HUMVEE_PMC_01 : B_VKN_ODIN_Humvee_M2_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee";
    side = 1;
    faction = "B_VKN_PMC_BALDER";
    crew = "B_VKN_BALDER_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_BALDER_SQUADLEADER_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_BALDER_MEDIC_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_BALDER_RADIOMAN_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'po_factions_me\ists\data\m998_exterior_b_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'po_factions_me\ists\data\A2_parts_b_co.paa'];_unit setObjectTextureGlobal [3,'po_factions_me\ists\data\wheel_wranglermt_b_co.paa'];_unit setObjectTextureGlobal [4,'po_factions_me\ists\data\m998_mainbody_b_co.paa'];_unit setObjectTextureGlobal [5,'po_factions_me\ists\data\gratting_b_co.paa'];_unit setObjectTextureGlobal [6,'po_factions_me\ists\data\tile_exmetal_b_co.paa'];_unit setObjectTextureGlobal [7,'po_factions_me\ists\data\m1025_b_co.paa'];_unit setObjectTextureGlobal [8,'po_factions_me\ists\data\mk64mount_b_co.paa'];_unit setObjectTextureGlobal [9,''];_unit setObjectTextureGlobal [10,''];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_ISTS";

};

class B_VKN_BALDER_M1232_PMC_01 : B_VKN_ODIN_M1232_M2_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "M1232";
    side = 1;
    faction = "B_VKN_PMC_BALDER";
    crew = "B_VKN_BALDER_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_BALDER_SQUADLEADER_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_BALDER_RADIOMAN_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_BALDER_MEDIC_PMC_01"; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = "B_VKN_BALDER_GRENADIER_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_RG33L\data\MCTAGS_WD_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_woodland";

};

class B_VKN_BALDER_CHINOOK_PMC_01 : RHS_CH_47F_10_OCimport_02 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Chinook";
    side = 1;
    faction = "B_VKN_PMC_BALDER";
    crew = "B_VKN_BALDER_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_BALDER_RIFLEMAN_PMC_01"; };
        class MainTurret : MainTurret { gunnerType = "B_VKN_BALDER_RIFLEMAN_PMC_01"; };
        class RightDoorGun : RightDoorGun { gunnerType = "B_VKN_BALDER_RIFLEMAN_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_BALDER_SQUADLEADER_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_BALDER_MARKSMAN_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class B_VKN_BALDER_LANDING_PMC_01 : B_VKN_AEGIR_ASSUALTBOAT_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Landing Craft";
    side = 1;
    faction = "B_VKN_PMC_BALDER";
    crew = "B_VKN_BALDER_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class m2_s_gunTurret : m2_s_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class m134_p_gunTurret : m134_p_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class mk19_s_gunTurret : mk19_s_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class camera_b_gunTurret : camera_b_gunTurret { gunnerType = "B_VKN_AEGIR_CREW_PMC_01"; };
        class rem_spotL_gunTurret : rem_spotL_gunTurret { gunnerType = "rhsusf_socom_swcc_officer"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_BALDER_UHUMVEE_PMC_01 : B_VKN_ODIN_Humvee_Unarmed_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Unarmed Humvee";
    side = 1;
    faction = "B_VKN_PMC_BALDER";
    crew = "B_VKN_BALDER_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_BALDER_RIFLEMAN_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_BALDER_MEDIC_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_BALDER_GRENADIER_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'po_factions_me\ists\data\m998_exterior_b_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'po_factions_me\ists\data\A2_parts_b_co.paa'];_unit setObjectTextureGlobal [3,'po_factions_me\ists\data\wheel_wranglermt_b_co.paa'];_unit setObjectTextureGlobal [4,'po_factions_me\ists\data\m998_mainbody_b_co.paa'];_unit setObjectTextureGlobal [5,'po_factions_me\ists\data\gratting_b_co.paa'];_unit setObjectTextureGlobal [6,'po_factions_me\ists\data\tile_exmetal_b_co.paa'];_unit setObjectTextureGlobal [7,'po_factions_me\ists\data\m1025_b_co.paa'];_unit setObjectTextureGlobal [8,''];_unit setObjectTextureGlobal [9,''];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_ISTS";

};
