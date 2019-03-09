////
////
//      Infantry
////
////
class B_VKN_ODIN_Operator_PMC_01 : SoldierWB_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Ground_Personnel";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_2";

    linkedItems[] = {"V_TacVestIR_blk","VSM_Black_OPS_2","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"V_TacVestIR_blk","VSM_Black_OPS_2","ItemMap","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_ak105","rhs_weap_pya"};
    respawnWeapons[] = {"rhs_weap_ak105","rhs_weap_pya"};

    magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x19_17","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x19_17"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x19_17","rhs_30Rnd_545x39_7N10_AK","rhs_mag_9x19_17"};

    backpack = "VKN_Kitbag_Black";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105","rhs_acc_uuk","","rhs_acc_ekp8_02",{"rhs_30Rnd_545x39_7N10_AK",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"VKN_CombatUniform_Tactical_Sweater_2",{{"FirstAidKit",1},{"ACE_CableTie",2},{"ACE_fieldDressing",7}}},{"V_TacVestIR_blk",{{"ACE_fieldDressing",6},{"ACE_EarPlugs",1},{"ACE_morphine",2},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"rhs_mag_an_m8hc",2,1},{"ACE_Chemlight_HiBlue",1,1},{"rhs_mag_9x19_17",1,17},{"rhs_30Rnd_545x39_7N10_2mag_AK",6,30}}},{"VKN_Kitbag_Black",{{"ACE_fieldDressing",10},{"ACE_CableTie",4},{"ACE_morphine",4},{"rhs_mag_an_m8hc",6,1},{"rhs_mag_f1",4,1},{"rhs_30Rnd_545x39_7N10_AK",4,30}}},"VSM_Black_OPS_2","VSM_Balaclava2_black_Goggles",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Platoon_Commander_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Platoon Commander";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_casual"};

    uniformClass = "LOP_U_IRA_Fatigue_DPM_BSW";

    linkedItems[] = {"VSM_OGA_OD_Vest_1","rhsusf_opscore_bk_pelt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_1","rhsusf_opscore_bk_pelt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_Mk16_blackQCB","hgun_Pistol_heavy_01_MRD_F"};
    respawnWeapons[] = {"SMA_Mk16_blackQCB","hgun_Pistol_heavy_01_MRD_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","11Rnd_45ACP_Mag"};

    backpack = "tf_rt1523g_black";

    ALiVE_orbatCreator_loadout[] = {{"SMA_Mk16_blackQCB","SMA_supp2smaB_556","rhsusf_acc_anpeq15_bk","SMA_ELCAN_SPECTER_RDS_4z",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_Pistol_heavy_01_MRD_F","","","optic_MRD",{"11Rnd_45ACP_Mag",11},{},""},{"LOP_U_IRA_Fatigue_DPM_BSW",{{"FirstAidKit",1},{"SmokeShell",1,1},{"Chemlight_green",1,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_OGA_OD_Vest_1",{}},{"tf_rt1523g_black",{}},"rhsusf_opscore_bk_pelt","rhsusf_shemagh2_gogg_od",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Squad_Leader_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Squad Leader";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";

    linkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Bowman_cap_Green","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","NVGoggles"};
    respawnlinkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Bowman_cap_Green","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","NVGoggles"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","rhsusf_acc_M952V","SMA_ELCAN_SPECTER",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_Tactical_Sweater_5",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_RAV_MG_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_bloodIV_500",2},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"MineDetector",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",4,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Compact",{}},"VSM_Bowman_cap_Green","VSM_Shemagh_OD",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Group_Leader_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Group Leader";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VSM_OGA_Crye_grey_od_pants_Camo";

    linkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Black_OPS","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","NVGoggles"};
    respawnlinkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Black_OPS","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","NVGoggles"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","rhsusf_acc_M952V","SMA_ELCAN_SPECTER",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VSM_OGA_Crye_grey_od_pants_Camo",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_RAV_MG_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_bloodIV_500",2},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"MineDetector",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",4,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Compact",{}},"VSM_Black_OPS","VSM_Shemagh_OD",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Team_Leader_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Team Leader";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VSM_OGA_od_pants_Camo";

    linkedItems[] = {"VSM_RAV_MG_OGA_OD","H_Cap_oli_hs","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","NVGoggles"};
    respawnlinkedItems[] = {"VSM_RAV_MG_OGA_OD","H_Cap_oli_hs","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","NVGoggles"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","rhsusf_acc_M952V","SMA_ELCAN_SPECTER",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VSM_OGA_od_pants_Camo",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_RAV_MG_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_bloodIV_500",2},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"MineDetector",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",4,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Compact",{}},"H_Cap_oli_hs","VSM_Shemagh_OD",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Operator_Light_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Operator (Light)";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VSM_M81_Crye_od_shirt_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Beanie_OD","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","VSM_Beanie_OD","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"SMA_MK18afgOD","rhs_weap_pya"};
    respawnWeapons[] = {"SMA_MK18afgOD","rhs_weap_pya"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_9x19_17","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_9x19_17"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_9x19_17","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_9x19_17"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18afgOD","","acc_pointer_IR","SMA_eotech552_kf",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"VSM_M81_Crye_od_shirt_Camo",{{"FirstAidKit",1},{"ACE_CableTie",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30},{"rhs_mag_9x19_17",2,17}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_fieldDressing",6},{"ACE_EarPlugs",1},{"ACE_morphine",2},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"rhs_mag_an_m8hc",2,1},{"ACE_Chemlight_HiBlue",1,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30},{"rhs_mag_9x19_17",3,17}}},{},"VSM_Beanie_OD","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Anti_Tank_Operator_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Anti-Tank Operator";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";

    linkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","rhs_weap_M136","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","rhs_weap_M136","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_m136_mag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_m136_mag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","rhsusf_acc_M952V","SMA_ELCAN_SPECTER",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{"rhs_weap_M136","","","",{"rhs_m136_mag",1},{},""},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_Tactical_Sweater_5",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_RAV_MG_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_bloodIV_500",2},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"MineDetector",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",4,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Kitbag",{}},"VSM_Mich2000_2_OGA_OD","VSM_balaclava2_Black",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Paramedic_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Paramedic";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";

    linkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_mk18","rhsusf_weap_m9"};
    respawnWeapons[] = {"rhs_weap_mk18","rhsusf_weap_m9"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18","","rhsusf_acc_M952V","SMA_ELCAN_SPECTER",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"VKN_CombatUniform_Tactical_Sweater_5",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"VSM_FAPC_MG_OGA_OD",{{"ACE_morphine",21},{"ACE_epinephrine",20},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"MineDetector",1},{"ACE_fieldDressing",16},{"rhsusf_mag_15Rnd_9x19_JHP",2,15},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_m67",2,1},{"rhs_mag_an_m8hc",4,1}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"ACE_fieldDressing",18},{"ACE_bloodIV_250",7},{"ACE_bloodIV_500",6},{"ACE_bloodIV",4},{"ACE_bodyBag",9},{"ACE_CableTie",2},{"rhsusf_mag_15Rnd_9x19_JHP",3,15}}},"VSM_Mich2000_2_OGA_OD","VSM_balaclava2_Black",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Field_Doctor_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Field Doctor";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";

    linkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_mk18","rhsusf_weap_m9"};
    respawnWeapons[] = {"rhs_weap_mk18","rhsusf_weap_m9"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18","","rhsusf_acc_M952V","SMA_ELCAN_SPECTER",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_JHP",15},{},""},{"VKN_CombatUniform_Tactical_Sweater_5",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"VSM_FAPC_MG_OGA_OD",{{"ACE_morphine",21},{"ACE_epinephrine",20},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"MineDetector",1},{"ACE_fieldDressing",16},{"rhsusf_mag_15Rnd_9x19_JHP",2,15},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",15,30},{"rhs_mag_m67",2,1},{"rhs_mag_an_m8hc",4,1}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"ACE_fieldDressing",18},{"ACE_bloodIV_250",7},{"ACE_bloodIV_500",6},{"ACE_bloodIV",4},{"ACE_bodyBag",9},{"ACE_CableTie",2},{"rhsusf_mag_15Rnd_9x19_JHP",3,15}}},"VSM_Mich2000_2_OGA_OD","VSM_balaclava2_Black",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Demo_Expert_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Demo Expert";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";

    linkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","rhsusf_acc_M952V","SMA_ELCAN_SPECTER",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_Tactical_Sweater_5",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_RAV_MG_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_bloodIV_500",2},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"MineDetector",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",4,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"MineDetector",1},{"ACE_Clacker",1},{"DemoCharge_Remote_Mag",4,1},{"SLAMDirectionalMine_Wire_Mag",3,1},{"APERSTripMine_Wire_Mag",1,1}}},"VSM_Mich2000_2_OGA_OD","VSM_balaclava2_Black",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Automatic_Rifle_Operator_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Automatic Rifle Operator";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";

    linkedItems[] = {"VSM_RAV_Breacher_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_RAV_Breacher_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_m249_pip_S_vfg","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhs_weap_m249_pip_S_vfg","rhsusf_weap_glock17g4"};

    magazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200Rnd_556x45_box","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_200Rnd_556x45_box","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_S_vfg","","rhsusf_acc_M952V","rhsusf_acc_ACOG_USMC",{"rhsusf_200Rnd_556x45_box",200},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_Tactical_Sweater_5",{{"ACE_morphine",15},{"rhsusf_mag_17Rnd_9x19_JHP",3,17}}},{"VSM_RAV_Breacher_OGA_OD",{{"rhsusf_200Rnd_556x45_box",4,200}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"ACE_fieldDressing",30},{"ACE_bloodIV_500",3},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"rhsusf_200Rnd_556x45_box",4,200},{"rhs_mag_m67",3,1},{"rhs_mag_an_m8hc",5,1}}},"VSM_Mich2000_2_OGA_OD","VSM_balaclava2_Black",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Heavy_Machine_Gun_Operator_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Heavy Machine Gun Operator";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_B_CombatUniform_mcam";

    linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
    respawnlinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};

    weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
    respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};

    magazines[] = {"30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"H_HelmetB","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Mechanic_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Mechanic";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_B_CombatUniform_mcam";

    linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
    respawnlinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};

    weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
    respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};

    magazines[] = {"30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"H_HelmetB","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Grenadier_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Grenadier";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";

    linkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_m4a1_carryhandle_m203","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203","","rhsusf_acc_M952V","SMA_ELCAN_SPECTER",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M441_HE",1},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_Tactical_Sweater_5",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"VSM_RAV_MG_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_bloodIV_500",2},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"MineDetector",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",4,17},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"rhs_mag_M441_HE",3,1},{"rhs_mag_m662_red",2,1},{"1Rnd_Smoke_Grenade_shell",3,1},{"UGL_FlareCIR_F",2,1}}},"VSM_Mich2000_2_OGA_OD","VSM_balaclava2_Black",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Marksman_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Marksman";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";

    linkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_RAV_MG_OGA_OD","VSM_Mich2000_2_OGA_OD","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_sr25","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhs_weap_sr25","rhsusf_weap_glock17g4"};

    magazines[] = {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25","","rhsusf_acc_M952V","optic_AMS",{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",20},{},"bipod_01_F_blk"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_Tactical_Sweater_5",{{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",1,20}}},{"VSM_RAV_MG_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_bloodIV_500",2},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"MineDetector",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",4,17},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",7,20}}},{"VSM_OGA_OD_Backpack_Kitbag",{}},"VSM_Mich2000_2_OGA_OD","VSM_balaclava2_Black",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Sharpshooter_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Sharpshooter";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_B_CombatUniform_mcam";

    linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
    respawnlinkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemMap","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};

    weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
    respawnWeapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};

    magazines[] = {"30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",{"30Rnd_65x39_caseless_mag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_B_CombatUniform_mcam",{{"FirstAidKit",1},{"30Rnd_65x39_caseless_mag",2,30}}},{"V_PlateCarrier1_rgr",{{"30Rnd_65x39_caseless_mag",7,30},{"16Rnd_9x21_Mag",2,17},{"SmokeShell",1,1},{"SmokeShellGreen",1,1},{"Chemlight_green",2,1},{"HandGrenade",2,1}}},{},"H_HelmetB","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Vehicle_Crew_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {

    displayName = "Vehicle Crew";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";

    linkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","H_HelmetCrew_B","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","H_HelmetCrew_B","ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr"};

    weapons[] = {"rhs_weap_mk18_KAC_bk","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhs_weap_mk18_KAC_bk","rhsusf_weap_glock17g4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18_KAC_bk","","rhsusf_acc_M952V","rhsusf_acc_T1_low",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_Tactical_Sweater_5",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"VSM_CarrierRig_Gunner_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_bloodIV_500",2},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"MineDetector",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",4,17},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1}}},{},"H_HelmetCrew_B","VSM_Shemagh_OD",{},{"ItemMap","ItemGPS","tf_anprc152_3","ItemCompass","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

////
////
//      Land Vehicles
////
////

class B_VKN_ODIN_MA_FEP_PMC_01 : rhsusf_m1a1fep_od_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M1A1_FEP";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Tanks";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "OD";

};

class B_VKN_ODIN_M1232_M2_PMC_01 : rhsusf_M1232_MC_M2_usmc_wd_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M1232 (M2)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Armoured_Cars";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
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

class B_VKN_ODIN_M1232_MK19_PMC_01 : rhsusf_M1232_MC_MK19_usmc_wd_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M1232 (MK19)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Armoured_Cars";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
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

class B_VKN_ODIN_M2A3_PMC_01 : RHS_M2A3_wd_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M2A3";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "IFVs";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
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
/*
class B_VKN_ODIN_M113A3_MEV_PMC_01 : rhsusf_m113_usarmy_medical_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M113A3 (MEV)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = ""; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
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
*/
class B_VKN_ODIN_M113A3_M2_PMC_01 : rhsusf_m113_usarmy_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M113A3 (M2)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
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

class B_VKN_ODIN_M113A3_M240_PMC_01 : rhsusf_m113_usarmy_M240_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M113A3 (M240)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
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

class B_VKN_ODIN_M113A3_M2_Ammo_PMC_01 : rhsusf_m113_usarmy_supply_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M113A3 (M2 + Ammo)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
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

class B_VKN_ODIN_M977A4_Transport_PMC_01 : rhsusf_M977A4_BKIT_usarmy_wd_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M977A4-B (Transport - Open)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Trucks";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_M977A4_Repair_PMC_01 : rhsusf_M977A4_REPAIR_BKIT_usarmy_wd_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M977A4-B (Repair)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Support_Vehicles";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_M978A4_Fuel_PMC_01 : rhsusf_M978A4_BKIT_usarmy_wd_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M978A4-B (Fuel)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Support_Vehicles";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_M978A4_Ammo_PMC_02 : rhsusf_M977A4_AMMO_BKIT_usarmy_wd_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M977A4-B (Ammo)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Support_Vehicles";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_ODIN_Humvee_4D_Half_PMC_01 : rhsusf_m998_w_4dr_halftop_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee (4D - Half)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'po_factions_me\ists\data\m998_exterior_b_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'po_factions_me\ists\data\A2_parts_b_co.paa'];_unit setObjectTextureGlobal [3,'po_factions_me\ists\data\wheel_wranglermt_b_co.paa'];_unit setObjectTextureGlobal [4,'po_factions_me\ists\data\m998_mainbody_b_co.paa'];_unit setObjectTextureGlobal [5,'po_factions_me\ists\data\gratting_b_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa'];_unit setObjectTextureGlobal [7,'po_factions_me\ists\data\m998_2drcargo_b_co.paa'];_unit setObjectTextureGlobal [8,'po_factions_me\ists\data\tile_exmetal_b_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_ISTS";

};

class B_VKN_ODIN_Humvee_Unarmed_PMC_01 : rhsusf_m1025_w_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee (Unarmed)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'po_factions_me\ists\data\m998_exterior_b_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'po_factions_me\ists\data\A2_parts_b_co.paa'];_unit setObjectTextureGlobal [3,'po_factions_me\ists\data\wheel_wranglermt_b_co.paa'];_unit setObjectTextureGlobal [4,'po_factions_me\ists\data\m998_mainbody_b_co.paa'];_unit setObjectTextureGlobal [5,'po_factions_me\ists\data\gratting_b_co.paa'];_unit setObjectTextureGlobal [6,'po_factions_me\ists\data\tile_exmetal_b_co.paa'];_unit setObjectTextureGlobal [7,'po_factions_me\ists\data\m1025_b_co.paa'];_unit setObjectTextureGlobal [8,''];_unit setObjectTextureGlobal [9,''];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_ISTS";

};

class B_VKN_ODIN_Humvee_M2_PMC_01 : rhsusf_m1025_w_m2_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee (M2)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Armoured_Cars";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
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

class B_VKN_ODIN_Humvee_MK19_PMC_01 : rhsusf_m1025_w_mk19_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee (MK-19)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Armoured_Cars";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
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

class B_VKN_ODIN_Humvee_AT_PMC_01 : rhsusf_m966_w_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee (AT)";
    side = 1;
    faction = "B_VKN_PMC_ODIN";
    editorSubcategory = "Armoured_Cars";
    crew = "B_VKN_ODIN_Vehicle_Crew_PMC_01";

    class Turrets : Turrets {
        class TOW_Turret : TOW_Turret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0; _unit setObjectTextureGlobal [0,'po_factions_me\ists\data\m998_exterior_b_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'po_factions_me\ists\data\A2_parts_b_co.paa'];_unit setObjectTextureGlobal [3,'po_factions_me\ists\data\wheel_wranglermt_b_co.paa'];_unit setObjectTextureGlobal [4,'po_factions_me\ists\data\m998_mainbody_b_co.paa'];_unit setObjectTextureGlobal [5,'po_factions_me\ists\data\gratting_b_co.paa'];_unit setObjectTextureGlobal [6,'po_factions_me\ists\data\tile_exmetal_b_co.paa'];_unit setObjectTextureGlobal [7,'po_factions_me\ists\data\m1025_b_co.paa'];_unit setObjectTextureGlobal [8,'po_factions_me\ists\data\mk64mount_b_co.paa'];_unit setObjectTextureGlobal [9,''];_unit setObjectTextureGlobal [10,''];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};