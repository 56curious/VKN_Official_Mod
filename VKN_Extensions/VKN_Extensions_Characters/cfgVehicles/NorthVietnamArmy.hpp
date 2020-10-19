class O_North_VietnamArmy_Rifleman_01 : O_T_Soldier_F_OCimport_02 {
    author = "Franky";
    scope = public;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 0;
    faction = "O_NorthVietnamArmy";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "rhs_uniform_m88_patchless";

    linkedItems[] = {"rhsgref_chicom_m88","rhs_fieldcap_khk","tf_microdagr"};
    respawnlinkedItems[] = {"rhsgref_chicom_m88","rhs_fieldcap_khk","tf_microdagr"};

    weapons[] = {"hlc_rifle_akm"};
    respawnWeapons[] = {"hlc_rifle_akm"};

    magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
    respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_akm","","","",{"hlc_30Rnd_762x39_b_ak",30},{},""},{},{},{"rhs_uniform_m88_patchless",{{"ACE_fieldDressing",2},{"ACE_epinephrine",1},{"ACE_morphine",1},{"hlc_30Rnd_762x39_b_ak",2,30}}},{"rhsgref_chicom_m88",{{"hlc_30Rnd_762x39_b_ak",1,30}}},{},"rhs_fieldcap_khk","",{},{"","","","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_North_VietnamArmy_Automatic_Rifleman_01 : O_T_Soldier_AR_F_OCimport_02 {
    author = "Franky";
    scope = public;
    scopeCurator = 2;
    displayName = "Automatic Rifleman";
    side = 0;
    faction = "O_NorthVietnamArmy";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "rhs_uniform_m88_patchless";

    linkedItems[] = {"rhsgref_chicom_m88","rhs_fieldcap_khk","tf_microdagr"};
    respawnlinkedItems[] = {"rhsgref_chicom_m88","rhs_fieldcap_khk","tf_microdagr"};

    weapons[] = {"hlc_rifle_rpk"};
    respawnWeapons[] = {"hlc_rifle_rpk"};

    magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
    respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};

    backpack = "rhs_sidor";

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_rpk","","","",{"hlc_30Rnd_762x39_b_ak",30},{},""},{},{},{"rhs_uniform_m88_patchless",{{"ACE_fieldDressing",2},{"ACE_epinephrine",1},{"ACE_morphine",1}}},{"rhsgref_chicom_m88",{{"hlc_75Rnd_762x39_b_rpk",2,75}}},{"rhs_sidor",{{"HandGrenade",1,1},{"hlc_75Rnd_762x39_b_rpk",2,75}}},"rhs_fieldcap_khk","",{},{"","","","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_North_VietnamArmy_AT_Specialist_01 : O_T_Soldier_AT_F_OCimport_02 {
    author = "Franky";
    scope = public;
    scopeCurator = 2;
    displayName = "AT Specialist";
    side = 0;
    faction = "O_NorthVietnamArmy";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "rhs_uniform_m88_patchless";

    linkedItems[] = {"rhsgref_chicom_m88","rhs_fieldcap_khk","tf_microdagr"};
    respawnlinkedItems[] = {"rhsgref_chicom_m88","rhs_fieldcap_khk","tf_microdagr"};

    weapons[] = {"hlc_rifle_akm","launch_RPG7_F"};
    respawnWeapons[] = {"hlc_rifle_akm","launch_RPG7_F"};

    magazines[] = {"hlc_30Rnd_762x39_b_ak","RPG7_F","hlc_30Rnd_762x39_b_ak"};
    respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","RPG7_F","hlc_30Rnd_762x39_b_ak"};

    backpack = "rhs_rpg_empty";

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_akm","","","",{"hlc_30Rnd_762x39_b_ak",30},{},""},{"launch_RPG7_F","","","",{"RPG7_F",1},{},""},{},{"rhs_uniform_m88_patchless",{{"ACE_epinephrine",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"hlc_30Rnd_762x39_b_ak",2,30}}},{"rhsgref_chicom_m88",{{"hlc_30Rnd_762x39_b_ak",4,30}}},{"rhs_rpg_empty",{{"rhs_rpg7_PG7V_mag",3,1}}},"rhs_fieldcap_khk","",{},{"","","","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_North_VietnamArmy_Officer_01 : O_T_Officer_F_OCimport_02 {
    author = "Franky";
    scope = public;
    scopeCurator = 2;
    displayName = "Officer";
    side = 0;
    faction = "O_NorthVietnamArmy";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "rhs_uniform_m88_patchless";

    linkedItems[] = {"rhs_vest_commander","rhs_beret_mvd","tf_microdagr"};
    respawnlinkedItems[] = {"rhs_vest_commander","rhs_beret_mvd","tf_microdagr"};

    weapons[] = {"hgun_Pistol_01_F"};
    respawnWeapons[] = {"hgun_Pistol_01_F"};

    magazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
    respawnMagazines[] = {"10Rnd_9x21_Mag","10Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Pistol_01_F","","","",{"10Rnd_9x21_Mag",10},{},""},{"rhs_uniform_m88_patchless",{{"ACE_fieldDressing",3},{"ACE_epinephrine",1},{"ACE_morphine",1},{"10Rnd_9x21_Mag",3,10}}},{"rhs_vest_commander",{}},{},"rhs_beret_mvd","G_Aviator",{},{"","","","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_North_VietnamArmy_Marksman_01 : O_T_Soldier_M_F_OCimport_02 {
    author = "Franky";
    scope = public;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = "O_NorthVietnamArmy";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "rhs_uniform_m88_patchless";

    linkedItems[] = {"rhsgref_chicom_m88","rhs_fieldcap_khk","tf_microdagr"};
    respawnlinkedItems[] = {"rhsgref_chicom_m88","rhs_fieldcap_khk","tf_microdagr"};

    weapons[] = {"rhs_weap_m38_rail"};
    respawnWeapons[] = {"rhs_weap_m38_rail"};

    magazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38"};
    respawnMagazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m38_rail","","","optic_KHS_old",{"rhsgref_5Rnd_762x54_m38",5},{},""},{},{},{"rhs_uniform_m88_patchless",{{"ACE_fieldDressing",3},{"ACE_epinephrine",1},{"ACE_morphine",1},{"rhsgref_5Rnd_762x54_m38",3,5}}},{"rhsgref_chicom_m88",{{"HandGrenade",1,1},{"rhsgref_5Rnd_762x54_m38",4,5}}},{},"rhs_fieldcap_khk","",{},{"","","","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_North_VietnamArmy_Crewman_01 : O_T_Crew_F_OCimport_02 {
    author = "Franky";
    scope = public;
    scopeCurator = 2;
    displayName = "Crewman";
    side = 0;
    faction = "O_NorthVietnamArmy";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "rhs_uniform_m88_patchless";

    linkedItems[] = {"rhsgref_chicom_m88","rhs_tsh4","tf_microdagr"};
    respawnlinkedItems[] = {"rhsgref_chicom_m88","rhs_tsh4","tf_microdagr"};

    weapons[] = {"rhs_weap_m3a1"};
    respawnWeapons[] = {"rhs_weap_m3a1"};

    magazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG"};
    respawnMagazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m3a1","","","",{"rhsgref_30rnd_1143x23_M1911B_SMG",30},{},""},{},{},{"rhs_uniform_m88_patchless",{{"ACE_fieldDressing",2},{"ACE_epinephrine",1},{"ACE_morphine",1},{"rhsgref_30rnd_1143x23_M1911B_SMG",2,30}}},{"rhsgref_chicom_m88",{{"rhsgref_30rnd_1143x23_M1911B_SMG",3,30}}},{},"rhs_tsh4","",{},{"","","","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
