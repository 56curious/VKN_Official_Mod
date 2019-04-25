class O_CHRArmy_Officer_WDL_01 : LOP_ChDKZ_Infantry_Commander_OCimport_02 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Officer";
    side = 0;
    faction = "O_CHRArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_UA_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_CrewOfficer_OLV","rhs_beret_milp","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};
    respawnlinkedItems[] = {"LOP_V_6B23_CrewOfficer_OLV","rhs_beret_milp","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};

    weapons[] = {"rhs_weap_ak74m_camo","rhs_weap_makarov_pm","Binocular"};
    respawnWeapons[] = {"rhs_weap_ak74m_camo","rhs_weap_makarov_pm","Binocular"};

    magazines[] = {"rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_mag_9x18_8_57N181S"};

    backpack = "rhsusf_falconii";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74m_camo","rhs_acc_dtk1983","","rhs_acc_ekp8_02",{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",30},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_UA_Fatigue_02",{{"rhs_mag_9x18_8_57N181S",1,8}}},{"LOP_V_6B23_CrewOfficer_OLV",{{"rhssaf_mag_br_m84",2,1},{"rhssaf_mag_brd_m83_white",3,1},{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",1,30}}},{"rhsusf_falconii",{{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",7,30}}},"rhs_beret_milp","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHRArmy_Rifleman_WDL_01 : O_CHRArmy_Officer_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 0;
    faction = "O_CHRArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_UA_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_6Sh92_OLV","LOP_H_SSh68Helmet_BLK","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};
    respawnlinkedItems[] = {"LOP_V_6B23_6Sh92_OLV","LOP_H_SSh68Helmet_BLK","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};

    weapons[] = {"rhs_weap_akm","rhs_weap_makarov_pm","Binocular"};
    respawnWeapons[] = {"rhs_weap_akm","rhs_weap_makarov_pm","Binocular"};

    magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_mag_9x18_8_57N181S","rhs_30Rnd_762x39mm_bakelite","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_mag_9x18_8_57N181S","rhs_30Rnd_762x39mm_bakelite","rhs_mag_9x18_8_57N181S"};

    backpack = "rhsusf_falconii";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_UA_Fatigue_02",{{"rhs_mag_9x18_8_57N181S",1,8},{"rhs_30Rnd_762x39mm_bakelite",2,30}}},{"LOP_V_6B23_6Sh92_OLV",{{"rhssaf_mag_brd_m83_white",3,1},{"rhs_30Rnd_762x39mm_bakelite",5,30}}},{"rhsusf_falconii",{}},"LOP_H_SSh68Helmet_BLK","rhs_balaclava",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHRArmy_Autorifleman_WDL_01 : O_CHRArmy_Rifleman_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Autorifleman";
    side = 0;
    faction = "O_CHRArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_UA_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_6Sh92_OLV","LOP_H_SSh68Helmet_BLK","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};
    respawnlinkedItems[] = {"LOP_V_6B23_6Sh92_OLV","LOP_H_SSh68Helmet_BLK","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};

    weapons[] = {"rhs_weap_m84","rhs_weap_makarov_pm","Binocular"};
    respawnWeapons[] = {"rhs_weap_m84","rhs_weap_makarov_pm","Binocular"};

    magazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S","rhs_100Rnd_762x54mmR","rhs_mag_9x18_8_57N181S"};

    backpack = "rhsusf_falconii";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m84","","","",{"rhs_100Rnd_762x54mmR",100},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_UA_Fatigue_02",{{"rhs_mag_9x18_8_57N181S",1,8}}},{"LOP_V_6B23_6Sh92_OLV",{{"rhssaf_mag_brd_m83_white",3,1},{"rhs_100Rnd_762x54mmR",1,100}}},{"rhsusf_falconii",{{"rhs_100Rnd_762x54mmR",2,100}}},"LOP_H_SSh68Helmet_BLK","rhs_balaclava",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHRArmy_Marksman_WDL_01 : O_CHRArmy_Rifleman_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = "O_CHRArmy_WDL";

    identityTypes[] = {"Head_NATO_camo_semiarid","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_UA_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_OLV","rhs_beanie_green","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};
    respawnlinkedItems[] = {"LOP_V_6B23_OLV","rhs_beanie_green","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};

    weapons[] = {"rhs_weap_svdp","rhs_weap_makarov_pm","Binocular"};
    respawnWeapons[] = {"rhs_weap_svdp","rhs_weap_makarov_pm","Binocular"};

    magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S"};

    backpack = "rhsusf_falconii";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp","","","rhs_acc_pso1m21",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_makarov_pm","","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_UA_Fatigue_02",{{"rhs_mag_9x18_8_57N181S",1,8},{"rhs_10Rnd_762x54mmR_7N1",8,10}}},{"LOP_V_6B23_OLV",{{"rhssaf_mag_brd_m83_red",1,1},{"rhs_10Rnd_762x54mmR_7N1",1,10}}},{"rhsusf_falconii",{}},"rhs_beanie_green","G_Bandanna_oli",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};