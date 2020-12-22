class I_Chi_Squad_Leader_01 : O_T_Soldier_SL_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 0;
    faction = "I_Chi";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "LOP_U_US_Fatigue_05";

    linkedItems[] = {"rhsgref_6b23_ttsko_digi_sniper","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};
    respawnlinkedItems[] = {"rhsgref_6b23_ttsko_digi_sniper","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};

    weapons[] = {"arifle_CTAR_GL_ghex_F","Rangefinder"};
    respawnWeapons[] = {"arifle_CTAR_GL_ghex_F","Rangefinder"};

    magazines[] = {"30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F"};
    respawnMagazines[] = {"30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F"};

    backpack = "B_RadioBag_01_oucamo_F";

    ALiVE_orbatCreator_loadout[] = {{"arifle_CTAR_GL_ghex_F","","","optic_MRCO",{"30Rnd_580x42_Mag_Tracer_F",30},{},""},{},{},{"LOP_U_US_Fatigue_05",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EarPlugs",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_tourniquet",2},{"ACE_splint",1},{"SmokeShell",2,1},{"SmokeShellRed",1,1},{"MiniGrenade",1,1}}},{"rhsgref_6b23_ttsko_digi_sniper",{{"40xtra_1Rnd_40mm_he3fuse",2,1},{"40xtra_1Rnd_40mm_mswhite",2,1},{"40xtra_1Rnd_40mm_msblack",2,1},{"30Rnd_580x42_Mag_Tracer_F",5,30}}},{"B_RadioBag_01_oucamo_F",{}},"PO_H_PASGT_ANA","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Chi_Rifleman_01 : O_T_Soldier_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 0;
    faction = "I_Chi";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "LOP_U_US_Fatigue_05";

    linkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};
    respawnlinkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};

    weapons[] = {"arifle_CTAR_ghex_F"};
    respawnWeapons[] = {"arifle_CTAR_ghex_F"};

    magazines[] = {"30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F"};
    respawnMagazines[] = {"30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F"};

    backpack = "B_AssaultPack_rgr";

    ALiVE_orbatCreator_loadout[] = {{"arifle_CTAR_ghex_F","","","optic_MRCO",{"30Rnd_580x42_Mag_Tracer_F",30},{},""},{},{},{"LOP_U_US_Fatigue_05",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EarPlugs",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_tourniquet",2},{"ACE_splint",1},{"SmokeShell",1,1},{"MiniGrenade",1,1}}},{"rhsgref_6b23_ttsko_digi_rifleman",{{"40xtra_1Rnd_40mm_he3fuse",2,1},{"40xtra_1Rnd_40mm_mswhite",2,1},{"40xtra_1Rnd_40mm_msblack",2,1},{"30Rnd_580x42_Mag_F",4,30}}},{"B_AssaultPack_rgr",{}},"PO_H_PASGT_ANA","",{},{"ItemMap","ItemGPS","","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Chi_Rifleman_AT_01 : O_T_Soldier_LAT_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Rifleman (AT)";
    side = 0;
    faction = "I_Chi";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "LOP_U_US_Fatigue_05";

    linkedItems[] = {"rhsgref_6b23_ttsko_digi","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};
    respawnlinkedItems[] = {"rhsgref_6b23_ttsko_digi","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};

    weapons[] = {"arifle_CTAR_ghex_F","launch_O_Vorona_green_F"};
    respawnWeapons[] = {"arifle_CTAR_ghex_F","launch_O_Vorona_green_F"};

    magazines[] = {"30Rnd_580x42_Mag_Tracer_F","Vorona_HEAT","30Rnd_580x42_Mag_Tracer_F"};
    respawnMagazines[] = {"30Rnd_580x42_Mag_Tracer_F","Vorona_HEAT","30Rnd_580x42_Mag_Tracer_F"};

    backpack = "B_Kitbag_rgr";

    ALiVE_orbatCreator_loadout[] = {{"arifle_CTAR_ghex_F","","","optic_MRCO",{"30Rnd_580x42_Mag_Tracer_F",30},{},""},{"launch_O_Vorona_green_F","","","",{"Vorona_HEAT",1},{},""},{},{"LOP_U_US_Fatigue_05",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EarPlugs",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_tourniquet",2},{"ACE_splint",1},{"SmokeShell",1,1},{"MiniGrenade",1,1}}},{"rhsgref_6b23_ttsko_digi",{{"40xtra_1Rnd_40mm_he3fuse",2,1},{"40xtra_1Rnd_40mm_mswhite",2,1},{"40xtra_1Rnd_40mm_msblack",2,1},{"30Rnd_580x42_Mag_F",4,30}}},{"B_Kitbag_rgr",{{"Vorona_HE",1,1},{"Vorona_HEAT",1,1}}},"PO_H_PASGT_ANA","",{},{"ItemMap","ItemGPS","","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Chi_Marksman_01 : O_T_Soldier_M_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = "I_Chi";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "LOP_U_US_Fatigue_05";

    linkedItems[] = {"rhsgref_6b23_ttsko_digi_sniper","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};
    respawnlinkedItems[] = {"rhsgref_6b23_ttsko_digi_sniper","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};

    weapons[] = {"srifle_DMR_07_ghex_F","Rangefinder"};
    respawnWeapons[] = {"srifle_DMR_07_ghex_F","Rangefinder"};

    magazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F"};
    respawnMagazines[] = {"20Rnd_650x39_Cased_Mag_F","20Rnd_650x39_Cased_Mag_F"};

    ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_07_ghex_F","","","optic_DMS_weathered_Kir_F",{"20Rnd_650x39_Cased_Mag_F",20},{},""},{},{},{"LOP_U_US_Fatigue_05",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EarPlugs",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_tourniquet",2},{"ACE_splint",1},{"SmokeShell",1,1},{"MiniGrenade",1,1}}},{"rhsgref_6b23_ttsko_digi_sniper",{{"40xtra_1Rnd_40mm_he3fuse",2,1},{"40xtra_1Rnd_40mm_mswhite",2,1},{"40xtra_1Rnd_40mm_msblack",2,1},{"ACE_20Rnd_65_Creedmor_mag",7,20}}},{},"PO_H_PASGT_ANA","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Chi_Combat_Life_Saver_01 : O_T_Medic_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Combat Life Saver";
    side = 0;
    faction = "I_Chi";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "LOP_U_US_Fatigue_05";

    linkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};
    respawnlinkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};

    weapons[] = {"arifle_CTAR_ghex_F"};
    respawnWeapons[] = {"arifle_CTAR_ghex_F"};

    magazines[] = {"30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F"};
    respawnMagazines[] = {"30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F"};

    backpack = "VKN_Kitbag_OD_Medical";

    ALiVE_orbatCreator_loadout[] = {{"arifle_CTAR_ghex_F","","","optic_MRCO",{"30Rnd_580x42_Mag_Tracer_F",30},{},""},{},{},{"LOP_U_US_Fatigue_05",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EarPlugs",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_tourniquet",2},{"ACE_splint",1},{"SmokeShell",1,1},{"MiniGrenade",1,1}}},{"rhsgref_6b23_ttsko_digi_rifleman",{{"40xtra_1Rnd_40mm_he3fuse",2,1},{"40xtra_1Rnd_40mm_mswhite",2,1},{"40xtra_1Rnd_40mm_msblack",2,1},{"30Rnd_580x42_Mag_F",4,30}}},{"VKN_Kitbag_OD_Medical",{{"ACE_elasticBandage",20},{"ACE_packingBandage",20},{"ACE_bloodIV",4},{"ACE_quikclot",20},{"ACE_epinephrine",10},{"ACE_morphine",15},{"ACE_splint",10},{"ACE_tourniquet",10},{"ACE_surgicalKit",1},{"ACE_personalAidKit",1},{"SmokeShell",4,1},{"SmokeShellGreen",2,1}}},"PO_H_PASGT_ANA","",{},{"ItemMap","ItemGPS","","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Chi_Autorifleman_01 : O_T_Soldier_AR_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Autorifleman";
    side = 0;
    faction = "I_Chi";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "LOP_U_US_Fatigue_05";

    linkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};
    respawnlinkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};

    weapons[] = {"arifle_CTARS_ghex_F"};
    respawnWeapons[] = {"arifle_CTARS_ghex_F"};

    magazines[] = {"100Rnd_580x42_ghex_Mag_Tracer_F","100Rnd_580x42_ghex_Mag_Tracer_F"};
    respawnMagazines[] = {"100Rnd_580x42_ghex_Mag_Tracer_F","100Rnd_580x42_ghex_Mag_Tracer_F"};

    ALiVE_orbatCreator_loadout[] = {{"arifle_CTARS_ghex_F","","","rhsusf_acc_ACOG_RMR",{"100Rnd_580x42_ghex_Mag_Tracer_F",100},{},""},{},{},{"LOP_U_US_Fatigue_05",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EarPlugs",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_tourniquet",2},{"ACE_splint",1},{"SmokeShell",1,1},{"MiniGrenade",1,1}}},{"rhsgref_6b23_ttsko_digi_rifleman",{{"40xtra_1Rnd_40mm_he3fuse",2,1},{"40xtra_1Rnd_40mm_mswhite",2,1},{"40xtra_1Rnd_40mm_msblack",2,1},{"100Rnd_580x42_ghex_Mag_Tracer_F",4,100}}},{},"PO_H_PASGT_ANA","",{},{"ItemMap","ItemGPS","","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Chi_Heavy_Gunner_01 : O_T_Soldier_AR_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Heavy Gunner";
    side = 0;
    faction = "I_Chi";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "LOP_U_US_Fatigue_05";

    linkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};
    respawnlinkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};

    weapons[] = {"rhs_weap_pkp"};
    respawnWeapons[] = {"rhs_weap_pkp"};

    magazines[] = {"rhs_100Rnd_762x54mmR_7N26","rhs_100Rnd_762x54mmR_7N26"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR_7N26","rhs_100Rnd_762x54mmR_7N26"};

    backpack = "B_AssaultPack_rgr";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_pso1m21",{"rhs_100Rnd_762x54mmR_7N26",100},{},""},{},{},{"LOP_U_US_Fatigue_05",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EarPlugs",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_tourniquet",2},{"ACE_splint",1},{"SmokeShell",1,1},{"MiniGrenade",1,1}}},{"rhsgref_6b23_ttsko_digi_rifleman",{{"40xtra_1Rnd_40mm_he3fuse",2,1},{"40xtra_1Rnd_40mm_mswhite",2,1},{"40xtra_1Rnd_40mm_msblack",2,1},{"rhs_100Rnd_762x54mmR_7N26",1,100}}},{"B_AssaultPack_rgr",{{"rhs_100Rnd_762x54mmR_7N26",2,100}}},"PO_H_PASGT_ANA","",{},{"ItemMap","ItemGPS","","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Chi_Crewman_01 : O_T_Crew_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Crewman";
    side = 0;
    faction = "I_Chi";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "LOP_U_US_Fatigue_05";

    linkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};
    respawnlinkedItems[] = {"rhsgref_6b23_ttsko_digi_rifleman","PO_H_PASGT_ANA","ItemMap","ItemGPS","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"};

    weapons[] = {"arifle_CTAR_ghex_F"};
    respawnWeapons[] = {"arifle_CTAR_ghex_F"};

    magazines[] = {"30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F"};
    respawnMagazines[] = {"30Rnd_580x42_Mag_Tracer_F","30Rnd_580x42_Mag_Tracer_F"};

    backpack = "B_AssaultPack_rgr";

    ALiVE_orbatCreator_loadout[] = {{"arifle_CTAR_ghex_F","","","optic_MRCO",{"30Rnd_580x42_Mag_Tracer_F",30},{},""},{},{},{"LOP_U_US_Fatigue_05",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_EarPlugs",1},{"ACE_elasticBandage",5},{"ACE_packingBandage",5},{"ACE_tourniquet",2},{"ACE_splint",1},{"SmokeShell",1,1},{"MiniGrenade",1,1}}},{"rhsgref_6b23_ttsko_digi_rifleman",{{"40xtra_1Rnd_40mm_he3fuse",2,1},{"40xtra_1Rnd_40mm_mswhite",2,1},{"40xtra_1Rnd_40mm_msblack",2,1},{"30Rnd_580x42_Mag_F",4,30}}},{"B_AssaultPack_rgr",{}},"PO_H_PASGT_ANA","",{},{"ItemMap","ItemGPS","","ItemCompass","tf_microdagr","VKN_Watchcap_khk_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Chi_Helicopter_Pilot_01 : O_T_Helipilot_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Helicopter Pilot";
    side = 0;
    faction = "I_Chi";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "U_O_PilotCoveralls";

    linkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"H_CrewHelmetHeli_O","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"SMG_02_ACO_F","hgun_Rook40_F"};
    respawnWeapons[] = {"SMG_02_ACO_F","hgun_Rook40_F"};

    magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green"};
    respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Green"};

    ALiVE_orbatCreator_loadout[] = {{"SMG_02_ACO_F","","","optic_ACO_grn_smg",{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",30},{},""},{},{"hgun_Rook40_F","","","",{},{},""},{"U_O_PilotCoveralls",{{"FirstAidKit",1},{"30Rnd_9x21_Mag_SMG_02_Tracer_Green",3,30},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}}},{},{},"H_CrewHelmetHeli_O","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Chi_Blackfoot_01 : B_Heli_Attack_01_dynamicLoadout_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Blackfoot";
    side = 0;
    faction = "I_Chi";
    crew = "I_Chi_Helicopter_Pilot_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Chi_Helicopter_Pilot_01"; };
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

class I_Chi_LSV_Mk_II_M134_01 : O_T_LSV_02_armed_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "LSV Mk. II (M134)";
    side = 0;
    faction = "I_Chi";
    crew = "I_Chi_Rifleman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Chi_Rifleman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa'];_unit setObjectTextureGlobal [4,'\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Arid";

};

class I_Chi_LSV_Mk_II_01 : O_T_LSV_02_unarmed_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "LSV Mk.II";
    side = 0;
    faction = "I_Chi";
    crew = "I_Chi_Rifleman_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa'];_unit setObjectTextureGlobal [4,'\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Arid";

};

class I_Chi_Rooikat_120_01 : B_AFV_Wheeled_01_cannon_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Rooikat 120";
    side = 0;
    faction = "I_Chi";
    crew = "I_Chi_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Chi_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT2_CO.paa'];_unit setObjectTextureGlobal [2,'a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa'];_unit setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Desert_CO.paa'];_unit setObjectTextureGlobal [4,'A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_sand_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Sand";

};

class I_Chi_Pandur_II_01 : I_APC_Wheeled_03_cannon_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Pandur II";
    side = 0;
    faction = "I_Chi";
    crew = "I_Chi_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Chi_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_IG_02_CO.paa'];_unit setObjectTextureGlobal [1,'A3\Data_F_Tacops\data\APC_Wheeled_03_Ext2_IG_02_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Data_F_Tacops\data\RCWS30_IG_02_CO.paa'];_unit setObjectTextureGlobal [3,'A3\Data_F_Tacops\data\APC_Wheeled_03_Ext_alpha_IG_02_CO.paa'];_unit setObjectTextureGlobal [4,'A3\Armor_F\Data\camonet_AAF_FIA_desert_CO.paa'];_unit setObjectTextureGlobal [5,'A3\armor_f\data\cage_sand_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Guerilla_02";

};

class I_Chi_AW159_Wildcat_Unarmed_01 : I_Heli_light_03_unarmed_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "AW159 Wildcat (Unarmed)";
    side = 0;
    faction = "I_Chi";
    crew = "I_Chi_Helicopter_Pilot_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Chi_Helicopter_Pilot_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa'];_unit setObjectTextureGlobal [1,'a3\weapons_f\ammoboxes\data\ammobox_co.paa'];_unit setObjectTextureGlobal [2,'a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Green";

};

class I_Chi_M02_Coyote_01 : rhssaf_army_o_nsv_tripod_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "M02 Coyote";
    side = 0;
    faction = "I_Chi";
    crew = "rhssaf_army_o_m93_oakleaf_summer_crew";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Chi_Rifleman_01"; };
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

class I_Chi_KORD_6U16_01 : LOP_ISTS_Kord_High_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "KORD (6U16)";
    side = 0;
    faction = "I_Chi";
    crew = "LOP_ISTS_Infantry_Rifleman";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Chi_Rifleman_01"; };
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

class I_Chi_Fennek_HMG_01 : I_MRAP_03_hmg_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Fennek (HMG)";
    side = 0;
    faction = "I_Chi";
    crew = "I_Chi_Rifleman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Chi_Rifleman_01"; };
        class CommanderTurret : CommanderTurret { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_co.paa'];_unit setObjectTextureGlobal [1,'\a3\data_f\vehicles\turret_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Blufor";

};
