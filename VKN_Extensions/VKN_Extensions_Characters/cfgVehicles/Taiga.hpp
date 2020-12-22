class B_Gen_Squad_Leader_02 : B_Soldier_SL_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 1;
    faction = "B_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_R_Gorka_01_camo_F";

    linkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
    respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};

    weapons[] = {"arifle_MX_khk_F","Laserdesignator_03"};
    respawnWeapons[] = {"arifle_MX_khk_F","Laserdesignator_03"};

    magazines[] = {"ACE_30Rnd_65_Creedmor_mag","Laserbatteries","ACE_30Rnd_65_Creedmor_mag","Laserbatteries"};
    respawnMagazines[] = {"ACE_30Rnd_65_Creedmor_mag","Laserbatteries","ACE_30Rnd_65_Creedmor_mag","Laserbatteries"};

    backpack = "tf_rt1523g_big_bwmod";

    ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","","","optic_Hamr_khk_F",{"ACE_30Rnd_65_Creedmor_mag",30},{},""},{},{},{"U_O_R_Gorka_01_camo_F",{{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_tourniquet",2},{"ACE_elasticBandage",6},{"ACE_packingBandage",6},{"ACE_splint",3},{"40xtra_nade_ms_pink",2,1},{"40xtra_nade_ms_black",2,1}}},{"V_TacVest_oli",{{"ACE_30Rnd_65_Creedmor_mag",5,30}}},{"tf_rt1523g_big_bwmod",{}},"H_HelmetAggressor_cover_taiga_F","",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Gen_Rifleman_01 : B_Soldier_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "B_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_R_Gorka_01_camo_F";

    linkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"arifle_MX_khk_F","Laserdesignator_03"};
    respawnWeapons[] = {"arifle_MX_khk_F","Laserdesignator_03"};

    magazines[] = {"ACE_30Rnd_65_Creedmor_mag","Laserbatteries","ACE_30Rnd_65_Creedmor_mag","Laserbatteries"};
    respawnMagazines[] = {"ACE_30Rnd_65_Creedmor_mag","Laserbatteries","ACE_30Rnd_65_Creedmor_mag","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","","","optic_Hamr_khk_F",{"ACE_30Rnd_65_Creedmor_mag",30},{},""},{},{},{"U_O_R_Gorka_01_camo_F",{{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_tourniquet",2},{"ACE_elasticBandage",6},{"ACE_packingBandage",6},{"ACE_splint",3},{"40xtra_nade_ms_pink",2,1},{"40xtra_nade_ms_black",2,1}}},{"V_TacVest_oli",{{"NVGoggles",1},{"ACE_30Rnd_65_Creedmor_mag",5,30},{"rhs_mag_f1",1,1},{"40xtra_nade_ms_black",2,1}}},{},"H_HelmetAggressor_cover_taiga_F","",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Gen_Marksman_01 : B_soldier_M_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 1;
    faction = "B_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_R_Gorka_01_camo_F";

    linkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"};
    respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"};

    weapons[] = {"srifle_DMR_03_khaki_F","Laserdesignator_03"};
    respawnWeapons[] = {"srifle_DMR_03_khaki_F","Laserdesignator_03"};

    magazines[] = {"ACE_20Rnd_762x51_M993_AP_Mag","Laserbatteries","ACE_20Rnd_762x51_M993_AP_Mag","Laserbatteries"};
    respawnMagazines[] = {"ACE_20Rnd_762x51_M993_AP_Mag","Laserbatteries","ACE_20Rnd_762x51_M993_AP_Mag","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_khaki_F","","","optic_SOS",{"ACE_20Rnd_762x51_M993_AP_Mag",20},{},""},{},{},{"U_O_R_Gorka_01_camo_F",{{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_tourniquet",2},{"ACE_elasticBandage",6},{"ACE_packingBandage",6},{"ACE_splint",3},{"40xtra_nade_ms_pink",2,1},{"40xtra_nade_ms_black",2,1}}},{"V_TacVest_oli",{{"rhs_mag_f1",1,1},{"40xtra_nade_ms_black",2,1},{"ACE_20Rnd_762x51_M993_AP_Mag",4,20}}},{},"H_HelmetAggressor_cover_taiga_F","",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles_INDEP"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Gen_Autorifleman_01 : B_soldier_AR_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Autorifleman";
    side = 1;
    faction = "B_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_R_Gorka_01_camo_F";

    linkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
    respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};

    weapons[] = {"arifle_RPK12_lush_F","Laserdesignator_03"};
    respawnWeapons[] = {"arifle_RPK12_lush_F","Laserdesignator_03"};

    magazines[] = {"hlc_75Rnd_762x39_AP_rpk","Laserbatteries","hlc_75Rnd_762x39_AP_rpk","Laserbatteries"};
    respawnMagazines[] = {"hlc_75Rnd_762x39_AP_rpk","Laserbatteries","hlc_75Rnd_762x39_AP_rpk","Laserbatteries"};

    backpack = "B_FieldPack_taiga_F";

    ALiVE_orbatCreator_loadout[] = {{"arifle_RPK12_lush_F","","","optic_ERCO_khk_F",{"hlc_75Rnd_762x39_AP_rpk",75},{},""},{},{},{"U_O_R_Gorka_01_camo_F",{{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_tourniquet",2},{"ACE_elasticBandage",6},{"ACE_packingBandage",6},{"ACE_splint",3},{"40xtra_nade_ms_pink",2,1},{"40xtra_nade_ms_black",2,1}}},{"V_TacVest_oli",{{"rhs_mag_f1",1,1},{"40xtra_nade_ms_black",2,1}}},{"B_FieldPack_taiga_F",{{"hlc_75Rnd_762x39_AP_rpk",5,75}}},"H_HelmetAggressor_cover_taiga_F","",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Gen_Heavy_Gunner_01 : B_HeavyGunner_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Heavy Gunner";
    side = 1;
    faction = "B_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_R_Gorka_01_camo_F";

    linkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
    respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};

    weapons[] = {"hlc_lmg_M60E4","Laserdesignator_03"};
    respawnWeapons[] = {"hlc_lmg_M60E4","Laserdesignator_03"};

    magazines[] = {"hlc_200Rnd_762x51_Barrier_M60E4","Laserbatteries","hlc_200Rnd_762x51_Barrier_M60E4","Laserbatteries"};
    respawnMagazines[] = {"hlc_200Rnd_762x51_Barrier_M60E4","Laserbatteries","hlc_200Rnd_762x51_Barrier_M60E4","Laserbatteries"};

    backpack = "B_Carryall_taiga_F";

    ALiVE_orbatCreator_loadout[] = {{"hlc_lmg_M60E4","","","rhsusf_acc_ACOG2_USMC",{"hlc_200Rnd_762x51_Barrier_M60E4",200},{},""},{},{},{"U_O_R_Gorka_01_camo_F",{{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_tourniquet",2},{"ACE_elasticBandage",6},{"ACE_packingBandage",6},{"ACE_splint",3},{"40xtra_nade_ms_pink",2,1},{"40xtra_nade_ms_black",2,1}}},{"V_TacVest_oli",{{"rhs_mag_f1",1,1},{"40xtra_nade_ms_black",2,1}}},{"B_Carryall_taiga_F",{{"hlc_200Rnd_762x51_M_M60E4",2,200}}},"H_HelmetAggressor_cover_taiga_F","",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Gen_Combat_Life_Saver_01 : B_medic_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Combat Life Saver";
    side = 1;
    faction = "B_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_R_Gorka_01_camo_F";

    linkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
    respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};

    weapons[] = {"arifle_MX_khk_F","Laserdesignator_03"};
    respawnWeapons[] = {"arifle_MX_khk_F","Laserdesignator_03"};

    magazines[] = {"ACE_30Rnd_65_Creedmor_mag","Laserbatteries","ACE_30Rnd_65_Creedmor_mag","Laserbatteries"};
    respawnMagazines[] = {"ACE_30Rnd_65_Creedmor_mag","Laserbatteries","ACE_30Rnd_65_Creedmor_mag","Laserbatteries"};

    backpack = "TRYK_B_Medbag_OD";

    ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","","","optic_Hamr_khk_F",{"ACE_30Rnd_65_Creedmor_mag",30},{},""},{},{},{"U_O_R_Gorka_01_camo_F",{{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_tourniquet",2},{"ACE_elasticBandage",6},{"ACE_packingBandage",6},{"ACE_splint",3},{"40xtra_nade_ms_pink",2,1},{"40xtra_nade_ms_black",2,1}}},{"V_TacVest_oli",{{"ACE_30Rnd_65_Creedmor_mag",5,30},{"rhs_mag_f1",1,1},{"40xtra_nade_ms_black",2,1}}},{"TRYK_B_Medbag_OD",{{"ACE_quikclot",20},{"ACE_packingBandage",20},{"ACE_salineIV",5},{"ACE_splint",14},{"ACE_surgicalKit",1},{"ACE_tourniquet",14},{"ACE_personalAidKit",1},{"ACE_epinephrine",10},{"ACE_morphine",11},{"ACE_elasticBandage",20},{"40xtra_nade_ms_orange",2,1},{"40xtra_nade_ms_pink",2,1}}},"H_HelmetAggressor_cover_taiga_F","",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Gen_Rifleman_AT_01 : B_soldier_LAT_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Rifleman (AT)";
    side = 1;
    faction = "B_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_R_Gorka_01_camo_F";

    linkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
    respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};

    weapons[] = {"arifle_MX_khk_F","launch_RPG32_green_F","Laserdesignator_03"};
    respawnWeapons[] = {"arifle_MX_khk_F","launch_RPG32_green_F","Laserdesignator_03"};

    magazines[] = {"ACE_30Rnd_65_Creedmor_mag","RPG32_F","Laserbatteries","ACE_30Rnd_65_Creedmor_mag","Laserbatteries"};
    respawnMagazines[] = {"ACE_30Rnd_65_Creedmor_mag","RPG32_F","Laserbatteries","ACE_30Rnd_65_Creedmor_mag","Laserbatteries"};

    backpack = "B_Carryall_taiga_F";

    ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","","","optic_Hamr_khk_F",{"ACE_30Rnd_65_Creedmor_mag",30},{},""},{"launch_RPG32_green_F","","","",{"RPG32_F",1},{},""},{},{"U_O_R_Gorka_01_camo_F",{{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_tourniquet",2},{"ACE_elasticBandage",6},{"ACE_packingBandage",6},{"ACE_splint",3},{"40xtra_nade_ms_pink",2,1},{"40xtra_nade_ms_black",2,1}}},{"V_TacVest_oli",{{"ACE_30Rnd_65_Creedmor_mag",5,30},{"rhs_mag_f1",1,1},{"40xtra_nade_ms_black",2,1}}},{"B_Carryall_taiga_F",{{"RPG32_HE_F",2,1},{"RPG32_F",2,1}}},"H_HelmetAggressor_cover_taiga_F","",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Gen_Crewman_01 : B_crew_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Crewman";
    side = 1;
    faction = "B_Gen";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_O_R_Gorka_01_camo_F";

    linkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};
    respawnlinkedItems[] = {"V_TacVest_oli","H_HelmetAggressor_cover_taiga_F","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"};

    weapons[] = {"arifle_MX_khk_F","Laserdesignator_03"};
    respawnWeapons[] = {"arifle_MX_khk_F","Laserdesignator_03"};

    magazines[] = {"ACE_30Rnd_65_Creedmor_mag","Laserbatteries","ACE_30Rnd_65_Creedmor_mag","Laserbatteries"};
    respawnMagazines[] = {"ACE_30Rnd_65_Creedmor_mag","Laserbatteries","ACE_30Rnd_65_Creedmor_mag","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{"arifle_MX_khk_F","","","optic_Hamr_khk_F",{"ACE_30Rnd_65_Creedmor_mag",30},{},""},{},{},{"U_O_R_Gorka_01_camo_F",{{"ACE_epinephrine",2},{"ACE_morphine",2},{"ACE_tourniquet",2},{"ACE_elasticBandage",6},{"ACE_packingBandage",6},{"ACE_splint",3},{"40xtra_nade_ms_pink",2,1},{"40xtra_nade_ms_black",2,1}}},{"V_TacVest_oli",{{"ACE_30Rnd_65_Creedmor_mag",5,30},{"rhs_mag_f1",1,1},{"40xtra_nade_ms_black",2,1}}},{},"H_HelmetAggressor_cover_taiga_F","",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch","NVGoggles"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Gen_Otokar_01 : O_APC_Wheeled_02_rcws_v2_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Otokar";
    side = 1;
    faction = "B_Gen";
    crew = "B_Gen_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_Gen_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_01_ghex_CO.paa'];_unit setObjectTextureGlobal [1,'a3\Armor_F_Exp\APC_Wheeled_02\Data\APC_Wheeled_02_ext_02_ghex_CO.paa'];_unit setObjectTextureGlobal [2,'a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa'];_unit setObjectTextureGlobal [3,'A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa'];_unit setObjectTextureGlobal [4,'A3\armor_f\data\cage_csat_green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "GreenHex";

};

class B_Gen_BM_2T_01 : O_APC_Tracked_02_cannon_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "BM-2T";
    side = 1;
    faction = "B_Gen";
    crew = "B_Gen_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_Gen_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_01_ghex_CO.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_Exp\APC_Tracked_02\Data\APC_Tracked_02_ext_02_ghex_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F_Exp\APC_Tracked_02\Data\RCWS30_ghex_CO.paa'];_unit setObjectTextureGlobal [3,'A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa'];_unit setObjectTextureGlobal [4,'A3\armor_f\data\cage_csat_green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "GreenHex";

};

class B_Gen_Land_Rover_M2_01 : LOP_NAPA_Landrover_M2_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Land Rover (M2)";
    side = 1;
    faction = "B_Gen";
    crew = "B_Gen_Rifleman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_Gen_Rifleman_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'po_vehicles\lr\data\camo\lr_base_am_co.paa'];_unit setObjectTextureGlobal [1,'po_vehicles\lr\data\camo\lr_special_w_baf_co.paa'];_unit setObjectTextureGlobal [2,'po_vehicles\lr\data\camo\lr_mg-spg9_w_baf_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_AM";

};

class B_Gen_M2_HMG_50_01 : I_E_HMG_02_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "M2 HMG .50";
    side = 1;
    faction = "B_Gen";
    crew = "I_E_Soldier_F";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_Gen_Rifleman_01"; };
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

class B_Gen_DShKM_01 : rhsgref_cdf_DSHKM_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "DShKM";
    side = 1;
    faction = "B_Gen";
    crew = "rhsgref_cdf_reg_rifleman";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_Gen_Rifleman_01"; };
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

class B_Gen_Merkava_01 : B_MBT_01_cannon_F_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Merkava";
    side = 1;
    faction = "B_Gen";
    crew = "B_Gen_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_Gen_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F\Data\camonet_NATO_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class B_Gen_Land_Rover_01 : LOP_RACS_Landrover_OCimport_02 {
    author = "Kissing";
    scope = public;
    scopeCurator = 2;
    displayName = "Land Rover";
    side = 1;
    faction = "B_Gen";
    crew = "B_Gen_Rifleman_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'po_vehicles\lr\data\camo\lr_base_am_co.paa'];_unit setObjectTextureGlobal [1,'po_vehicles\lr\data\camo\lr_special_w_baf_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_AM";

};
