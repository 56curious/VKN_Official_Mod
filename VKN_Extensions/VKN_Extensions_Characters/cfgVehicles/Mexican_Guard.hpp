class O_MexicoGuard_Rifleman_01 : rhsusf_army_ucp_rifleman_m16_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_Rifleman_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 0;
    faction = "O_MexicoGuard";

    identityTypes[] = {"Head_Euro","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "rhs_uniform_cu_ucp";

    linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m16a4_carryhandle"};
    respawnWeapons[] = {"rhs_weap_m16a4_carryhandle"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "rhsusf_assault_eagleaiii_ucp";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{},{"rhs_uniform_cu_ucp",{{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_fieldDressing",2},{"ACE_morphine",1}}},{"rhsusf_iotv_ucp_Rifleman",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"rhs_mag_m67",2,1}}},{"rhsusf_assault_eagleaiii_ucp",{}},"rhsusf_ach_helmet_ucp","rhsusf_shemagh2_gogg_od",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_MexicoGuard_Grenadier_01 : rhsusf_army_ucp_grenadier_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_Grenadier_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 0;
    faction = "O_MexicoGuard";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "rhs_uniform_cu_ucp";

    linkedItems[] = {"rhsusf_iotv_ucp_Grenadier","rhsusf_ach_helmet_ESS_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsusf_iotv_ucp_Grenadier","rhsusf_ach_helmet_ESS_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_m4_m203_compm4"};
    respawnWeapons[] = {"rhs_m4_m203_compm4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE"};

    backpack = "rhsusf_assault_eagleaiii_ucp";

    ALiVE_orbatCreator_loadout[] = {{"rhs_m4_m203_compm4","","rhsusf_acc_anpeq15side","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M441_HE",1},""},{},{},{"rhs_uniform_cu_ucp",{{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_fieldDressing",2},{"ACE_morphine",1}}},{"rhsusf_iotv_ucp_Grenadier",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"rhs_mag_M441_HE",5,1},{"rhs_mag_m67",1,1}}},{"rhsusf_assault_eagleaiii_ucp",{{"rhs_mag_M441_HE",7,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30}}},"rhsusf_ach_helmet_ESS_ucp","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_MexicoGuard_Squad_Leader_01 : rhsusf_army_ucp_squadleader_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_Squad_Leader_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 0;
    faction = "O_MexicoGuard";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "rhs_uniform_cu_ucp";

    linkedItems[] = {"rhsusf_iotv_ucp_Squadleader","rhsusf_ach_helmet_headset_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsusf_iotv_ucp_Squadleader","rhsusf_ach_helmet_headset_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_m4a1_acog3","Binocular"};
    respawnWeapons[] = {"rhs_m4a1_acog3","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_m4a1_acog3","","rhsusf_acc_anpeq15_top","rhsusf_acc_ACOG3",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{},{"rhs_uniform_cu_ucp",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1}}},{"rhsusf_iotv_ucp_Squadleader",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"rhs_mag_m18_red",1,1},{"rhs_mag_m18_purple",1,1},{"rhs_mag_m18_yellow",1,1},{"rhs_mag_m67",1,1},{"Chemlight_red",2,1}}},{},"rhsusf_ach_helmet_headset_ucp","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_MexicoGuard_Team_Leader_01 : rhsusf_army_ucp_teamleader_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_Team_Leader_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Team Leader";
    side = 0;
    faction = "O_MexicoGuard";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "rhs_uniform_cu_ucp";

    linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_ESS_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_ESS_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4a1_carryhandle_grip3","Binocular"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_grip3","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_grip3","","rhsusf_acc_anpeq15_top","rhsusf_acc_ACOG2",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{},{"rhs_uniform_cu_ucp",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"rhsusf_iotv_ucp_Teamleader",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhs_mag_m18_purple",1,1},{"rhs_mag_m18_yellow",1,1},{"rhs_mag_m67",1,1}}},{},"rhsusf_ach_helmet_ESS_ucp","",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_MexicoGuard_Auto_Rifleman_01 : rhsusf_army_ucp_autorifleman_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_Auto_Rifleman_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Auto-Rifleman";
    side = 0;
    faction = "O_MexicoGuard";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "rhs_uniform_cu_ucp";

    linkedItems[] = {"rhsusf_iotv_ucp_SAW","rhsusf_ach_helmet_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsusf_iotv_ucp_SAW","rhsusf_ach_helmet_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m249_pip_elcan"};
    respawnWeapons[] = {"rhs_weap_m249_pip_elcan"};

    magazines[] = {"rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch"};
    respawnMagazines[] = {"rhsusf_100Rnd_556x45_soft_pouch","rhsusf_100Rnd_556x45_soft_pouch"};

    backpack = "rhsusf_assault_eagleaiii_ucp_ar";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_elcan","","","rhsusf_acc_ELCAN_ard",{"rhsusf_100Rnd_556x45_soft_pouch",100},{},""},{},{},{"rhs_uniform_cu_ucp",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_EarPlugs",1},{"rhs_mag_m67",1,1}}},{"rhsusf_iotv_ucp_SAW",{{"rhsusf_100Rnd_556x45_soft_pouch",2,100},{"rhs_mag_m67",1,1}}},{"rhsusf_assault_eagleaiii_ucp_ar",{{"rhsusf_100Rnd_556x45_soft_pouch",4,100},{"rhs_200rnd_556x45_T_SAW",1,200}}},"rhsusf_ach_helmet_ucp","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_MexicoGuard_Marksman_01 : rhsusf_army_ucp_marksman_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_Marksman_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = "O_MexicoGuard";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "rhs_uniform_cu_ucp";

    linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ucp","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m14ebrri_leu"};
    respawnWeapons[] = {"rhs_weap_m14ebrri_leu"};

    magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag"};
    respawnMagazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri_leu","","","rhsusf_acc_LEUPOLDMK4",{"rhsusf_20Rnd_762x51_m118_special_Mag",20},{},""},{},{},{"rhs_uniform_cu_ucp",{{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_EarPlugs",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_m67",1,1}}},{"rhsusf_iotv_ucp_Rifleman",{{"rhsusf_20Rnd_762x51_m118_special_Mag",5,20},{"rhsusf_20Rnd_762x51_m62_Mag",1,20}}},{},"rhsusf_ach_helmet_ucp","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_MexicoGuard_M11A3_01 : rhsusf_m113_usarmy_medical_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_M11A3_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M11A3";
    side = 0;
    faction = "O_MexicoGuard";
    crew = "O_MexicoGuard_Rifleman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_MexicoGuard_Rifleman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_MexicoGuard_Rifleman_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_MexicoGuard_Rifleman_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_med_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Desert";

};

class O_MexicoGuard_M1220_01 : rhsusf_M1220_MK19_usarmy_wd_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_M1220_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M1220";
    side = 0;
    faction = "O_MexicoGuard";
    crew = "O_MexicoGuard_Rifleman_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "O_MexicoGuard_Squad_Leader_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_caiman\data\cmn_Body_CO.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_CO.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_CO.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_caiman\data\cmn_Armor_CO.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_caiman\data\cmn_wheel_d_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_caiman\data\cmn_AMB_CO.paa'];_unit setObjectTextureGlobal [8,'rhsusf\addons\rhsusf_caiman\data\M153_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_desert";

};

class O_MexicoGuard_M2A3_01 : RHS_M2A3_BUSKIII_wd_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_M2A3_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M2A3";
    side = 0;
    faction = "O_MexicoGuard";
    crew = "O_MexicoGuard_Rifleman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_MexicoGuard_Rifleman_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\base_co.paa'];_unit setObjectTextureGlobal [1,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii\a3_co.paa'];_unit setObjectTextureGlobal [2,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\ultralp_co.paa'];_unit setObjectTextureGlobal [3,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\buskiii_co.paa'];_unit setObjectTextureGlobal [4,'\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Desert";

};

class O_MexicoGuard_UH_60M_01 : RHS_UH60M_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_UH_60M_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "UH-60M";
    side = 0;
    faction = "O_MexicoGuard";
    crew = "O_MexicoGuard_Helicopter_Pilot_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "O_MexicoGuard_Helicopter_Pilot_01"; };
        class MainTurret : MainTurret { gunnerType = "O_MexicoGuard_Helicopter_Crew_01"; };
        class RightDoorGun : RightDoorGun { gunnerType = "O_MexicoGuard_Helicopter_Crew_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
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

class O_MexicoGuard_Helicopter_Pilot_01 : rhsusf_army_ucp_helipilot_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_Helicopter_Pilot_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Helicopter Pilot";
    side = 0;
    faction = "O_MexicoGuard";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "rhs_uniform_cu_ucp";

    linkedItems[] = {"rhsusf_iotv_ucp","rhsusf_hgu56p","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsusf_iotv_ucp","rhsusf_hgu56p","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m9"};
    respawnWeapons[] = {"rhs_weap_m4_carryhandle","rhsusf_weap_m9"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_FMJ","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_FMJ"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_FMJ","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_15Rnd_9x19_FMJ"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4_carryhandle","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_cu_ucp",{{"FirstAidKit",1},{"rhsusf_ANPVS_15",1},{"rhsusf_patrolcap_ucp",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"rhsusf_iotv_ucp",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{},"rhsusf_hgu56p","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_MexicoGuard_Helicopter_Crew_01 : rhsusf_army_ucp_helicrew_OCimport_02 {
    editorPreview = \Editor Preview Images\O_MexicoGuard_Helicopter_Crew_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Helicopter Crew";
    side = 0;
    faction = "O_MexicoGuard";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "rhs_uniform_cu_ucp";

    linkedItems[] = {"rhsusf_iotv_ucp","rhsusf_hgu56p_visor_mask","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsusf_iotv_ucp","rhsusf_hgu56p_visor_mask","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhsusf_weap_m9"};
    respawnWeapons[] = {"rhsusf_weap_m9"};

    magazines[] = {"rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ"};
    respawnMagazines[] = {"rhsusf_mag_15Rnd_9x19_FMJ","rhsusf_mag_15Rnd_9x19_FMJ"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_m9","","","",{"rhsusf_mag_15Rnd_9x19_FMJ",15},{},""},{"rhs_uniform_cu_ucp",{{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_an_m8hc",1,1}}},{"rhsusf_iotv_ucp",{{"rhsusf_mag_15Rnd_9x19_FMJ",3,15}}},{},"rhsusf_hgu56p_visor_mask","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
