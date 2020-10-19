class O_Abu_Gunner_Bakr_01 : LOP_ISTS_OPF_Infantry_Rifleman_OCimport_02 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Gunner";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VKN_CombatUniform_3CD_Black_Rolled";

    linkedItems[] = {"LOP_V_CarrierRig_BLK","LOP_H_Shemag_RED1","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_V_CarrierRig_BLK","LOP_H_Shemag_RED1","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akms"};
    respawnWeapons[] = {"rhs_weap_akms"};

    magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akms","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{},{"VKN_CombatUniform_3CD_Black_Rolled",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_762x39mm_bakelite",1,30}}},{"LOP_V_CarrierRig_BLK",{{"rhs_mag_rdg2_white",1,1},{"rhs_30Rnd_762x39mm_bakelite",5,30}}},{},"LOP_H_Shemag_RED1","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Gunner_Light_Bakr_01 : O_Abu_Gunner_Bakr_01 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Gunner (Light)";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "U_C_Man_casual_5_F";

    linkedItems[] = {"H_Hat_brown","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"H_Hat_brown","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_aks74u"};
    respawnWeapons[] = {"rhs_weap_aks74u"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74u","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{},{"U_C_Man_casual_5_F",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N6M_AK",1,30}}},{},{},"H_Hat_brown","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Bomber_Bakr_01 : LOP_AM_OPF_Infantry_Engineer_OCimport_02 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Explosive Engineer";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_UA_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","H_Shemag_olive_hs","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","H_Shemag_olive_hs","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_ak74m_fullplum"};
    respawnWeapons[] = {"rhs_weap_ak74m_fullplum"};

    magazines[] = {"rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_plum_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_plum_AK"};

    backpack = "B_AssaultPack_rgr";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74m_fullplum","rhs_acc_dtk","","rhs_acc_ekp1",{"rhs_30Rnd_545x39_7N10_plum_AK",30},{},""},{},{},{"LOP_U_UA_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N10_plum_AK",3,30}}},{"LOP_V_6B23_Rifleman_OLV",{}},{"B_AssaultPack_rgr",{}},"H_Shemag_olive_hs","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Machine_Gunner_Light_Bakr_01 : LOP_AM_OPF_Infantry_AR_OCimport_02 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Machine Gunner (Light)";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "U_C_Man_casual_5_F";

    linkedItems[] = {"H_Cap_blk","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"H_Cap_blk","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_pkm"};
    respawnWeapons[] = {"rhs_weap_pkm"};

    magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};

    backpack = "LOP_AM_Fieldpack_PKM";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkm","","","",{"rhs_100Rnd_762x54mmR",100},{},""},{},{},{"U_C_Man_casual_5_F",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rdg2_white",1,1}}},{},{"LOP_AM_Fieldpack_PKM",{{"rhs_100Rnd_762x54mmR",3,100}}},"H_Cap_blk","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Marksman_Bakr_01 : LOP_AM_OPF_Infantry_Marksman_OCimport_02 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_UVF_Fatigue_GREY_GSW";

    linkedItems[] = {"LOP_V_CarrierLite_BLK","LOP_H_Shemag_BLU","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_BLK","LOP_H_Shemag_BLU","ItemMap","ItemCompass"};

    weapons[] = {"LOP_Weap_SVDS"};
    respawnWeapons[] = {"LOP_Weap_SVDS"};

    magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
    respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};

    ALiVE_orbatCreator_loadout[] = {{"LOP_Weap_SVDS","","","rhs_acc_pso1m2",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{},{"LOP_U_UVF_Fatigue_GREY_GSW",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_10Rnd_762x54mmR_7N1",6,10},{"rhs_mag_rdg2_white",1,1},{"rhs_mag_rdg2_black",1,1},{"rhs_mag_rgd5",2,1}}},{"LOP_V_CarrierLite_BLK",{{"rhs_10Rnd_762x54mmR_7N1",3,10}}},{},"LOP_H_Shemag_BLU","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Bonesetter_Bakr_01 : LOP_AM_OPF_Infantry_Corpsman_OCimport_02 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Bonesetter";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_UVF_Fatigue_BL_OSW";

    linkedItems[] = {"LOP_H_Beanie_m81","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_H_Beanie_m81","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_ak105"};
    respawnWeapons[] = {"rhs_weap_ak105"};

    magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};

    backpack = "LOP_AM_Sidor_Med";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak105","rhs_acc_dtk1983","","rhs_acc_ekp8_02",{"rhs_30Rnd_545x39_7N10_AK",30},{},""},{},{},{"LOP_U_UVF_Fatigue_BL_OSW",{{"ACE_fieldDressing",32},{"ACE_morphine",16},{"rhs_mag_rdg2_white",1,1},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N10_AK",3,30}}},{},{"LOP_AM_Sidor_Med",{{"ACE_epinephrine",4},{"ACE_bloodIV",2},{"rhs_30Rnd_545x39_7N10_AK",5,30}}},"LOP_H_Beanie_m81","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Undercover_Bakr_01 : O_Abu_Gunner_Light_Bakr_01 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Undercover";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_Greek","LanguagePER_F","G_IRAN_default"};

    uniformClass = "U_C_Man_casual_5_F";

    linkedItems[] = {"ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"ItemMap","ItemCompass"};

    weapons[] = {"hgun_P07_F"};
    respawnWeapons[] = {"hgun_P07_F"};

    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Man_casual_5_F",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rgd5",1,1},{"16Rnd_9x21_Mag",3,17}}},{},{},"","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Undercover_Bakr_02 : O_Abu_Undercover_Bakr_01 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Undercover";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Orange_Civilian","LanguagePER_F","G_IRAN_default"};

    uniformClass = "U_C_Man_casual_6_F";

    linkedItems[] = {"ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"ItemMap","ItemCompass"};

    weapons[] = {"hgun_P07_F"};
    respawnWeapons[] = {"hgun_P07_F"};

    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Man_casual_6_F",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rgd5",1,1},{"16Rnd_9x21_Mag",3,17}}},{},{},"","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Undercover_Bakr_03 : O_Abu_Undercover_Bakr_01 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Undercover";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Orange_EOD","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_AFR_Civ_04S";

    linkedItems[] = {"ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"ItemMap","ItemCompass"};

    weapons[] = {"hgun_P07_F"};
    respawnWeapons[] = {"hgun_P07_F"};

    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"LOP_U_AFR_Civ_04S",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rgd5",1,1},{"16Rnd_9x21_Mag",1,17}}},{},{},"","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Undercover_Bakr_04 : O_Abu_Undercover_Bakr_01 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Undercover";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_Greek","LanguagePER_F","G_IRAN_default"};

    uniformClass = "U_C_Mechanic_01_F";

    linkedItems[] = {"ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"ItemMap","ItemCompass"};

    weapons[] = {"hgun_P07_F"};
    respawnWeapons[] = {"hgun_P07_F"};

    magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_C_Mechanic_01_F",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rgd5",1,1},{"16Rnd_9x21_Mag",3,17}}},{},{},"","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Offroader_Armed_Bakr_01 : I_C_Offroad_02_LMG_F_OCimport_02 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Offroader (Armed)";
    side = 0;
    faction = "O_Abu_Bakr";
    crew = "O_Abu_Gunner_Light_Bakr_01";

    class Turrets : Turrets {
        class LMG_Turret : LMG_Turret { gunnerType = "O_Abu_Gunner_Light_Bakr_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_Abu_Gunner_Bakr_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa'];_unit setObjectTextureGlobal [3,'\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class O_Abu_Van_Bakr_01 : I_G_Van_02_vehicle_F_OCimport_02 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Van";
    side = 0;
    faction = "O_Abu_Bakr";
    crew = "O_Abu_Gunner_Bakr_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_Abu_Gunner_Bakr_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Soft_F_Orange\Van_02\Data\van_body_Blue_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\soft_f_orange\van_02\data\van_wheel_co.paa'];_unit setObjectTextureGlobal [2,'\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa'];_unit setObjectTextureGlobal [3,'\a3\Soft_F_Orange\Van_02\Data\van_body_Blue_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Blue";

};

class O_Abu_Machine_Gunner_Bakr_01 : O_Abu_Machine_Gunner_Light_Bakr_01 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Machine Gunner";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "U_I_C_Soldier_Para_4_F";

    linkedItems[] = {"LOP_V_6B23_6Sh92_OLV","H_Cap_blk","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_V_6B23_6Sh92_OLV","H_Cap_blk","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_pkm"};
    respawnWeapons[] = {"rhs_weap_pkm"};

    magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};

    backpack = "LOP_AM_Fieldpack_PKM";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkm","","","",{"rhs_100Rnd_762x54mmR",100},{},""},{},{},{"U_I_C_Soldier_Para_4_F",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rdg2_white",1,1}}},{"LOP_V_6B23_6Sh92_OLV",{{"HandGrenade",3,1}}},{"LOP_AM_Fieldpack_PKM",{{"rhs_100Rnd_762x54mmR",3,100}}},"H_Cap_blk","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Gunner_Bakr_02 : O_Abu_Gunner_Bakr_01 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Gunner";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_PMC_Fatigue_04";

    linkedItems[] = {"LOP_V_6B23_6Sh92_M81_OLV","LOP_H_Shemag_BLK","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_V_6B23_6Sh92_M81_OLV","LOP_H_Shemag_BLK","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_ak74m_fullplum_gp25"};
    respawnWeapons[] = {"rhs_weap_ak74m_fullplum_gp25"};

    magazines[] = {"rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_plum_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_plum_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74m_fullplum_gp25","rhs_acc_dtk","","",{"rhs_30Rnd_545x39_7N10_plum_AK",30},{},""},{},{},{"LOP_U_PMC_Fatigue_04",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N10_plum_AK",3,30}}},{"LOP_V_6B23_6Sh92_M81_OLV",{{"rhs_mag_rdg2_white",1,1},{"rhs_VOG25",3,1}}},{},"LOP_H_Shemag_BLK","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Abu_Gunner_Bakr_03 : O_Abu_Gunner_Bakr_01 {
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Gunner";
    side = 0;
    faction = "O_Abu_Bakr";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VKN_CombatUniform_Black_OD_Rolled";

    linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","H_Shemag_olive_hs","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","H_Shemag_olive_hs","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akms"};
    respawnWeapons[] = {"rhs_weap_akms"};

    magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akms","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{},{"VKN_CombatUniform_Black_OD_Rolled",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_762x39mm_bakelite",1,30}}},{"LOP_V_6B23_Rifleman_OLV",{{"rhs_mag_rdg2_white",1,1}}},{},"H_Shemag_olive_hs","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
