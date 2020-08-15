class B_Gen_Squad_Leader_01 : B_Soldier_SL_F_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 1;
    faction = "I_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Legion_Forest_Black";

    linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};
    respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};

    weapons[] = {"hlc_rifle_SG551SB_TAC","Rangefinder"};
    respawnWeapons[] = {"hlc_rifle_SG551SB_TAC","Rangefinder"};

    magazines[] = {"hlc_30Rnd_556x45_T_sg550","hlc_30Rnd_556x45_T_sg550"};
    respawnMagazines[] = {"hlc_30Rnd_556x45_T_sg550","hlc_30Rnd_556x45_T_sg550"};

    backpack = "B_RadioBag_01_wdl_F";

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_SG551SB_TAC","","","hlc_optic_HensoldtZO_lo_Docter",{"hlc_30Rnd_556x45_T_sg550",30},{},""},{},{},{"VKN_CombatUniform_Legion_Forest_Black",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_elasticBandage",4},{"ACE_fieldDressing",4},{"ACE_tourniquet",2},{"ACE_splint",1},{"HandGrenade",1,1},{"SmokeShellBlue",1,1},{"SmokeShell",2,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"hlc_30Rnd_556x45_T_sg550",5,30}}},{"B_RadioBag_01_wdl_F",{}},"H_HelmetSpecB_paint1","",{"Rangefinder","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Gen_Rifleman_01 : B_Soldier_F_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "I_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Legion_Forest_Black";

    linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};
    respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};

    weapons[] = {"hlc_rifle_SG551SB_TAC"};
    respawnWeapons[] = {"hlc_rifle_SG551SB_TAC"};

    magazines[] = {"hlc_30Rnd_556x45_T_sg550","hlc_30Rnd_556x45_T_sg550"};
    respawnMagazines[] = {"hlc_30Rnd_556x45_T_sg550","hlc_30Rnd_556x45_T_sg550"};

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_SG551SB_TAC","","","hlc_optic_HensoldtZO_lo_Docter",{"hlc_30Rnd_556x45_T_sg550",30},{},""},{},{},{"VKN_CombatUniform_Legion_Forest_Black",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_elasticBandage",4},{"ACE_fieldDressing",4},{"ACE_tourniquet",2},{"ACE_splint",1},{"HandGrenade",1,1},{"SmokeShell",1,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"hlc_30Rnd_556x45_T_sg550",5,30}}},{},"H_HelmetSpecB_paint1","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Gen_Rifleman_AT_01 : B_soldier_LAT_F_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (AT)";
    side = 1;
    faction = "I_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Legion_Forest_Black";

    linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};
    respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};

    weapons[] = {"hlc_rifle_SG551SB_TAC","rhs_weap_maaws"};
    respawnWeapons[] = {"hlc_rifle_SG551SB_TAC","rhs_weap_maaws"};

    magazines[] = {"hlc_30Rnd_556x45_T_sg550","rhs_mag_maaws_HEAT","hlc_30Rnd_556x45_T_sg550"};
    respawnMagazines[] = {"hlc_30Rnd_556x45_T_sg550","rhs_mag_maaws_HEAT","hlc_30Rnd_556x45_T_sg550"};

    backpack = "B_Carryall_mcamo";

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_SG551SB_TAC","","","hlc_optic_HensoldtZO_lo_Docter",{"hlc_30Rnd_556x45_T_sg550",30},{},""},{"rhs_weap_maaws","","","rhs_optic_maaws",{"rhs_mag_maaws_HEAT",1},{},""},{},{"VKN_CombatUniform_Legion_Forest_Black",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_elasticBandage",4},{"ACE_fieldDressing",4},{"ACE_tourniquet",2},{"ACE_splint",1},{"HandGrenade",1,1},{"SmokeShell",1,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"hlc_30Rnd_556x45_T_sg550",5,30}}},{"B_Carryall_mcamo",{{"rhs_mag_maaws_HE",2,1},{"rhs_mag_maaws_HEAT",2,1}}},"H_HelmetSpecB_paint1","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Gen_Heavy_Gunner_01 : B_HeavyGunner_F_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Heavy Gunner";
    side = 1;
    faction = "I_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Legion_Forest_Black";

    linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};
    respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};

    weapons[] = {"hlc_lmg_mg42kws_g"};
    respawnWeapons[] = {"hlc_lmg_mg42kws_g"};

    magazines[] = {"hlc_200Rnd_792x57_T_MG42","hlc_200Rnd_792x57_T_MG42"};
    respawnMagazines[] = {"hlc_200Rnd_792x57_T_MG42","hlc_200Rnd_792x57_T_MG42"};

    backpack = "B_Kitbag_sgg";

    ALiVE_orbatCreator_loadout[] = {{"hlc_lmg_mg42kws_g","","","hlc_optic_HensoldtZO_lo_Docter",{"hlc_200Rnd_792x57_T_MG42",200},{},""},{},{},{"VKN_CombatUniform_Legion_Forest_Black",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_elasticBandage",4},{"ACE_fieldDressing",4},{"ACE_tourniquet",2},{"ACE_splint",1},{"HandGrenade",1,1},{"SmokeShell",1,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{}},{"B_Kitbag_sgg",{{"hlc_200Rnd_792x57_T_MG42",2,200}}},"H_HelmetSpecB_paint1","G_Tactical_Clear",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Gen_Autorifleman_01 : B_soldier_AR_F_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Autorifleman";
    side = 1;
    faction = "I_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Legion_Forest_Black";

    linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};
    respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};

    weapons[] = {"rhs_weap_m27iar_grip"};
    respawnWeapons[] = {"rhs_weap_m27iar_grip"};

    magazines[] = {"150Rnd_556x45_Drum_Mag_Tracer_F","150Rnd_556x45_Drum_Mag_Tracer_F"};
    respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_Tracer_F","150Rnd_556x45_Drum_Mag_Tracer_F"};

    backpack = "B_Kitbag_sgg";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m27iar_grip","","","hlc_optic_HensoldtZO_lo_Docter",{"150Rnd_556x45_Drum_Mag_Tracer_F",150},{},""},{},{},{"VKN_CombatUniform_Legion_Forest_Black",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_elasticBandage",4},{"ACE_fieldDressing",4},{"ACE_tourniquet",2},{"ACE_splint",1},{"HandGrenade",1,1},{"SmokeShell",1,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{}},{"B_Kitbag_sgg",{{"150Rnd_556x45_Drum_Mag_Tracer_F",4,150}}},"H_HelmetSpecB_paint1","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Gen_Crewman_01 : B_crew_F_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Crewman";
    side = 1;
    faction = "I_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Legion_Forest_Black";

    linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};
    respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};

    weapons[] = {"hlc_rifle_SG551SB_TAC"};
    respawnWeapons[] = {"hlc_rifle_SG551SB_TAC"};

    magazines[] = {"hlc_30Rnd_556x45_T_sg550","hlc_30Rnd_556x45_T_sg550"};
    respawnMagazines[] = {"hlc_30Rnd_556x45_T_sg550","hlc_30Rnd_556x45_T_sg550"};

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_SG551SB_TAC","","","hlc_optic_HensoldtZO_lo_Docter",{"hlc_30Rnd_556x45_T_sg550",30},{},""},{},{},{"VKN_CombatUniform_Legion_Forest_Black",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_elasticBandage",4},{"ACE_fieldDressing",4},{"ACE_tourniquet",2},{"ACE_splint",1},{"HandGrenade",1,1},{"SmokeShell",1,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"hlc_30Rnd_556x45_T_sg550",5,30}}},{},"H_HelmetSpecB_paint1","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Gen_Combat_Life_Saver_01 : B_medic_F_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Combat Life Saver";
    side = 1;
    faction = "I_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Legion_Forest_Black";

    linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};
    respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};

    weapons[] = {"hlc_rifle_SG551SB_TAC"};
    respawnWeapons[] = {"hlc_rifle_SG551SB_TAC"};

    magazines[] = {"hlc_30Rnd_556x45_T_sg550","hlc_30Rnd_556x45_T_sg550"};
    respawnMagazines[] = {"hlc_30Rnd_556x45_T_sg550","hlc_30Rnd_556x45_T_sg550"};

    backpack = "VKN_Kitbag_OCP_Medical";

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_SG551SB_TAC","","","hlc_optic_HensoldtZO_lo_Docter",{"hlc_30Rnd_556x45_T_sg550",30},{},""},{},{},{"VKN_CombatUniform_Legion_Forest_Black",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_elasticBandage",4},{"ACE_fieldDressing",4},{"ACE_tourniquet",2},{"ACE_splint",1},{"HandGrenade",1,1},{"SmokeShell",1,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"hlc_30Rnd_556x45_T_sg550",5,30}}},{"VKN_Kitbag_OCP_Medical",{{"ACE_quikclot",20},{"ACE_fieldDressing",20},{"ACE_epinephrine",12},{"ACE_morphine",15},{"ACE_plasmaIV",5},{"ACE_personalAidKit",1},{"ACE_splint",12},{"ACE_surgicalKit",1},{"ACE_tourniquet",12},{"SmokeShellOrange",4,1},{"40xtra_nade_smoke_cyan",4,1},{"40xtra_nade_smoke_brown",4,1}}},"H_HelmetSpecB_paint1","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Gen_Marksman_01 : B_soldier_M_F_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 1;
    faction = "I_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Legion_Forest_Black";

    linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};
    respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","H_HelmetSpecB_paint1","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"};

    weapons[] = {"hlc_rifle_m14sopmod"};
    respawnWeapons[] = {"hlc_rifle_m14sopmod"};

    magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14"};
    respawnMagazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_B_M14"};

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_m14sopmod","","","optic_SOS",{"hlc_20Rnd_762x51_B_M14",20},{},"bipod_01_F_blk"},{},{},{"VKN_CombatUniform_Legion_Forest_Black",{{"ACE_morphine",2},{"ACE_epinephrine",1},{"ACE_elasticBandage",4},{"ACE_fieldDressing",4},{"ACE_tourniquet",2},{"ACE_splint",1},{"HandGrenade",1,1},{"SmokeShell",1,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"hlc_20Rnd_762x51_B_M14",5,20}}},{},"H_HelmetSpecB_paint1","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","VKN_Bowman_NVG"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_Gen_Badger_IFV_01 : B_APC_Wheeled_01_cannon_F_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Badger IFV";
    side = 1;
    faction = "I_Gen";
    crew = "I_Gen_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Gen_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_base_olive_CO.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_tows_olive_co.paa'];_unit setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa'];_unit setObjectTextureGlobal [4,'a3\Armor_F\Data\cage_olive_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class I_Gen_Polaris_Unarmed_01 : B_LSV_01_unarmed_F_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Polaris Unarmed";
    side = 1;
    faction = "I_Gen";
    crew = "I_Gen_Rifleman_01";

    class Turrets : Turrets {
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa'];_unit setObjectTextureGlobal [4,'\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa'];_unit setObjectTextureGlobal [5,'\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Dazzle";

};

class I_Gen_M1240_M240_01 : rhsusf_m1240a1_m240_usarmy_wd_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "M1240 (M240)";
    side = 1;
    faction = "I_Gen";
    crew = "I_Gen_Rifleman_01";

    class Turrets : Turrets {
        class OGPK_Turret : OGPK_Turret { gunnerType = "I_Gen_Rifleman_01"; };
        class CoDriverTurret : CoDriverTurret { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_o_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_wd_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_o_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_olive";

};

class I_Gen_M2HB_M3_AA_01 : RHS_M2StaticMG_WD_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "M2HB (M3 AA)";
    side = 1;
    faction = "I_Gen";
    crew = "rhsusf_army_ucp_rifleman";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Gen_Rifleman_01"; };
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

class I_Gen_M2HB_M3_01 : LOP_IRAN_Static_M2_MiniTripod_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "M2HB (M3)";
    side = 1;
    faction = "I_Gen";
    crew = "LOP_IRAN_Infantry_Rifleman";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Gen_Rifleman_01"; };
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

class I_Gen_M1A1_Abrams_01 : rhsusf_m1a1aimwd_usarmy_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "M1A1 Abrams";
    side = 1;
    faction = "I_Gen";
    crew = "I_Gen_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_Gen_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_02_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "woodland";

};
