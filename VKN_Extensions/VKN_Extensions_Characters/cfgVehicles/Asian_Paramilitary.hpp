class I_AP_Bonesetter_01 : LOP_AFRCiv_Soldier_Medic_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bonesetter_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bonesetter";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Civ_01";

    linkedItems[] = {"V_TacVest_khk","rhs_Booniehat_m81","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_TacVest_khk","rhs_Booniehat_m81","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akms"};
    respawnWeapons[] = {"rhs_weap_akms"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    backpack = "LOP_AFR_Fieldpack_Med";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akms","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Civ_01",{{"ACE_fieldDressing",14},{"ACE_morphine",6}}},{"V_TacVest_khk",{{"ACE_morphine",4},{"ACE_fieldDressing",6},{"rhs_30Rnd_762x39mm",5,30},{"rhs_mag_rgd5",1,1}}},{"LOP_AFR_Fieldpack_Med",{{"ACE_epinephrine",4},{"ACE_bloodIV",2}}},"rhs_Booniehat_m81","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Warlord_01 : LOP_AFRCiv_Soldier_SL_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Warlord_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Warlord";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Civ_04S";

    linkedItems[] = {"V_Chestrig_khk","H_Booniehat_oli","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_Chestrig_khk","H_Booniehat_oli","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akms"};
    respawnWeapons[] = {"rhs_weap_akms"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akms","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Civ_04S",{}},{"V_Chestrig_khk",{{"rhs_30Rnd_762x39mm",5,30},{"rhs_mag_rgd5",1,1}}},{},"H_Booniehat_oli","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_PKM_01 : LOP_AFRCiv_Soldier_AR_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_PKM_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [PKM]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Civ_05";

    linkedItems[] = {"V_BandollierB_blk","rhs_Booniehat_m81","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_BandollierB_blk","rhs_Booniehat_m81","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_pkm"};
    respawnWeapons[] = {"rhs_weap_pkm"};

    magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};

    backpack = "LOP_AFR_Sidor_PKM";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkm","","","",{"rhs_100Rnd_762x54mmR",100},{},""},{},{},{"LOP_U_AFR_Civ_05",{{"rhs_mag_rdg2_white",1,1},{"rhs_mag_rdg2_black",1,1}}},{"V_BandollierB_blk",{{"ACE_EarPlugs",1},{"rhs_mag_rgd5",1,1}}},{"LOP_AFR_Sidor_PKM",{{"rhs_100Rnd_762x54mmR",2,100}}},"rhs_Booniehat_m81","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_RPG_01 : LOP_AFRCiv_Soldier_AT_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_RPG_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [RPG-7]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Civ_03";

    linkedItems[] = {"V_Rangemaster_belt","H_Cap_grn","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","H_Cap_grn","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akm","rhs_weap_rpg7"};
    respawnWeapons[] = {"rhs_weap_akm","rhs_weap_rpg7"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_rpg7_PG7VL_mag","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_rpg7_PG7VL_mag","rhs_30Rnd_762x39mm"};

    backpack = "LOP_AFR_RPG_Pack";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{"rhs_weap_rpg7","","","",{"rhs_rpg7_PG7VL_mag",1},{},""},{},{"LOP_U_AFR_Civ_03",{{"ACE_EarPlugs",1}}},{"V_Rangemaster_belt",{{"rhs_30Rnd_762x39mm",2,30},{"rhs_mag_rdg2_white",1,1}}},{"LOP_AFR_RPG_Pack",{{"rhs_rpg7_PG7VR_mag",1,1}}},"H_Cap_grn","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_SVD_01 : LOP_AFRCiv_Soldier_Marksman_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_SVD_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [SVD]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Civ_02";

    linkedItems[] = {"V_TacVest_oli","rhs_Booniehat_m81","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_TacVest_oli","rhs_Booniehat_m81","ItemMap","ItemCompass"};

    weapons[] = {"LOP_Weap_SVDS"};
    respawnWeapons[] = {"LOP_Weap_SVDS"};

    magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
    respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};

    backpack = "LOP_AFR_FalconII_SVD";

    ALiVE_orbatCreator_loadout[] = {{"LOP_Weap_SVDS","","","rhs_acc_pso1m2",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{},{"LOP_U_AFR_Civ_02",{{"ACE_EarPlugs",1},{"rhs_10Rnd_762x54mmR_7N1",2,10}}},{"V_TacVest_oli",{{"rhs_10Rnd_762x54mmR_7N1",4,10},{"rhs_mag_rdg2_white",1,1},{"rhs_mag_rdg2_black",1,1},{"rhs_mag_rgd5",2,1}}},{"LOP_AFR_FalconII_SVD",{{"rhs_10Rnd_762x54mmR_7N1",5,10},{"HandGrenade",2,1},{"rhs_mag_rdg2_white",1,1}}},"rhs_Booniehat_m81","G_Bandanna_oli",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bomber_01 : LOP_AFRCiv_Soldier_IED_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bomber_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bomber";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Civ_02";

    linkedItems[] = {"V_TacVestIR_blk","rhs_Booniehat_m81","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_TacVestIR_blk","rhs_Booniehat_m81","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akm"};
    respawnWeapons[] = {"rhs_weap_akm"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Civ_02",{}},{"V_TacVestIR_blk",{{"rhs_30Rnd_762x39mm",5,30},{"rhs_mag_rgd5",1,1}}},{},"rhs_Booniehat_m81","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_01 : LOP_AFRCiv_Soldier_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Civ_03";

    linkedItems[] = {"LOP_6sh46","rhs_Booniehat_m81","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_6sh46","rhs_Booniehat_m81","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akm"};
    respawnWeapons[] = {"rhs_weap_akm"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Civ_03",{}},{"LOP_6sh46",{{"rhs_30Rnd_762x39mm",5,30},{"rhs_mag_rgd5",1,1}}},{},"rhs_Booniehat_m81","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_Driver_01 : LOP_AFRCiv_Driver_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_Driver_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit Driver";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Civ_01";

    linkedItems[] = {"LOP_6sh46","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_6sh46","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akm"};
    respawnWeapons[] = {"rhs_weap_akm"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Civ_01",{}},{"LOP_6sh46",{{"rhs_30Rnd_762x39mm",5,30},{"rhs_mag_rgd5",1,1}}},{},"","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_AKM_GL_01 : LOP_AFRCiv_Soldier_GL_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_AKM_GL_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [AKM GL]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_African","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Civ_05S";

    linkedItems[] = {"V_BandollierB_oli","rhs_Booniehat_m81","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_BandollierB_oli","rhs_Booniehat_m81","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akm_gp25"};
    respawnWeapons[] = {"rhs_weap_akm_gp25"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_VOG25","rhs_30Rnd_762x39mm","rhs_VOG25"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_VOG25","rhs_30Rnd_762x39mm","rhs_VOG25"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm_gp25","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{"rhs_VOG25",1},""},{},{},{"LOP_U_AFR_Civ_05S",{}},{"V_BandollierB_oli",{{"rhs_30Rnd_762x39mm",3,30},{"rhs_VOG25",2,1},{"rhs_mag_rgd5",1,1}}},{},"rhs_Booniehat_m81","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Warlord_02 : LOP_AFR_Infantry_SL_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Warlord_02.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Warlord";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04_slv";

    linkedItems[] = {"V_Rangemaster_belt","PO_H_Cap_oli","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","PO_H_Cap_oli","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_ak74n"};
    respawnWeapons[] = {"rhs_weap_ak74n"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n","rhs_acc_dtk1983","","",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{},{"LOP_U_AFR_Fatigue_04_slv",{{"rhs_mag_rgd5",1,1},{"rhs_30Rnd_545x39_7N6M_AK",3,30}}},{"V_Rangemaster_belt",{{"rhs_30Rnd_545x39_7N6M_AK",4,30}}},{},"PO_H_Cap_oli","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bonesetter_02 : LOP_AFR_Infantry_Corpsman_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bonesetter_02.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bonesetter";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04";

    linkedItems[] = {"V_TacVest_khk","PO_H_Cap_oli","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_TacVest_khk","PO_H_Cap_oli","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akms"};
    respawnWeapons[] = {"rhs_weap_akms"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    backpack = "LOP_AFR_Fieldpack_Med";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akms","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Fatigue_04",{{"ACE_fieldDressing",11},{"ACE_morphine",5},{"rhs_30Rnd_762x39mm",2,30},{"rhs_mag_rgd5",1,1}}},{"V_TacVest_khk",{{"ACE_fieldDressing",9},{"ACE_morphine",5},{"rhs_30Rnd_762x39mm",1,30}}},{"LOP_AFR_Fieldpack_Med",{{"ACE_epinephrine",4},{"ACE_bloodIV",2}}},"PO_H_Cap_oli","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_PKM_02 : LOP_AFR_Infantry_AR_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_PKM_02.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [PKM]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04";

    linkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_TacVest_camo","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_pkm"};
    respawnWeapons[] = {"rhs_weap_pkm"};

    magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};

    backpack = "LOP_AFR_Sidor_PKM";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkm","","","",{"rhs_100Rnd_762x54mmR",100},{},""},{},{},{"LOP_U_AFR_Fatigue_04",{{"ACE_EarPlugs",1},{"rhs_mag_rgd5",1,1}}},{"V_TacVest_camo",{{"rhs_100Rnd_762x54mmR",1,100}}},{"LOP_AFR_Sidor_PKM",{{"rhs_100Rnd_762x54mmR",2,100}}},"","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Machine_Gunner_Assistant_01 : LOP_AFR_Infantry_AR_Asst_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Machine_Gunner_Assistant_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine Gunner Assistant";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04";

    linkedItems[] = {"V_BandollierB_blk","PO_H_Bandanna_sgg","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_BandollierB_blk","PO_H_Bandanna_sgg","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akms"};
    respawnWeapons[] = {"rhs_weap_akms"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    backpack = "LOP_AFR_Sidor_PKM";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akms","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Fatigue_04",{{"rhs_30Rnd_762x39mm",2,30},{"rhs_mag_rgd5",1,1}}},{"V_BandollierB_blk",{{"rhs_30Rnd_762x39mm",1,30}}},{"LOP_AFR_Sidor_PKM",{{"rhs_100Rnd_762x54mmR",2,100}}},"PO_H_Bandanna_sgg","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_RPG_02 : LOP_AFR_Infantry_AT_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_RPG_02.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [RPG-7]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04";

    linkedItems[] = {"V_Rangemaster_belt","PO_H_Bandanna_blu","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","PO_H_Bandanna_blu","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_pm63","rhs_weap_rpg7"};
    respawnWeapons[] = {"rhs_weap_pm63","rhs_weap_rpg7"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_rpg7_PG7VL_mag","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_rpg7_PG7VL_mag","rhs_30Rnd_762x39mm"};

    backpack = "LOP_AFR_RPG_Pack";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pm63","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{"rhs_weap_rpg7","","","",{"rhs_rpg7_PG7VL_mag",1},{},""},{},{"LOP_U_AFR_Fatigue_04",{{"ACE_EarPlugs",1},{"rhs_30Rnd_762x39mm",2,30}}},{"V_Rangemaster_belt",{{"rhs_30Rnd_762x39mm",1,30},{"rhs_mag_rdg2_white",1,1}}},{"LOP_AFR_RPG_Pack",{{"rhs_rpg7_PG7VR_mag",1,1}}},"PO_H_Bandanna_blu","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_SVD_02 : LOP_AFR_Infantry_Marksman_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_SVD_02.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [SVD]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04_slv";

    linkedItems[] = {"V_TacVest_oli","PO_H_Booniehat_khk","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_TacVest_oli","PO_H_Booniehat_khk","ItemMap","ItemCompass"};

    weapons[] = {"LOP_Weap_SVDS"};
    respawnWeapons[] = {"LOP_Weap_SVDS"};

    magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
    respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};

    backpack = "LOP_AFR_FalconII_SVD";

    ALiVE_orbatCreator_loadout[] = {{"LOP_Weap_SVDS","","","rhs_acc_pso1m2",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{},{"LOP_U_AFR_Fatigue_04_slv",{{"ACE_EarPlugs",1},{"rhs_10Rnd_762x54mmR_7N1",6,10},{"rhs_mag_rdg2_white",1,1}}},{"V_TacVest_oli",{{"rhs_mag_rdg2_black",1,1},{"rhs_mag_rgd5",2,1}}},{"LOP_AFR_FalconII_SVD",{{"rhs_10Rnd_762x54mmR_7N1",5,10},{"HandGrenade",2,1},{"rhs_mag_rdg2_white",1,1}}},"PO_H_Booniehat_khk","G_Bandanna_oli",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bomber_02 : LOP_AFR_Infantry_IED_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bomber_02.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bomber";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"V_TacVestIR_blk","PO_H_Cap_blu","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_TacVestIR_blk","PO_H_Cap_blu","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_pm63"};
    respawnWeapons[] = {"rhs_weap_pm63"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pm63","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Fatigue_02",{{"rhs_30Rnd_762x39mm",2,30},{"rhs_mag_rgd5",1,1}}},{"V_TacVestIR_blk",{{"rhs_30Rnd_762x39mm",1,30}}},{},"PO_H_Cap_blu","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_AKM_01 : LOP_AFR_Infantry_Rifleman_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_AKM_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [AKM]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04_slv";

    linkedItems[] = {"LOP_6sh46","PO_H_Booniehat_tan","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_6sh46","PO_H_Booniehat_tan","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akm"};
    respawnWeapons[] = {"rhs_weap_akm"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Fatigue_04_slv",{{"rhs_30Rnd_762x39mm",2,30},{"rhs_mag_rgd5",1,1}}},{"LOP_6sh46",{{"rhs_30Rnd_762x39mm",1,30}}},{},"PO_H_Booniehat_tan","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_M16A4_01 : LOP_AFR_Infantry_Rifleman_2_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_M16A4_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [M16A4]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_01";

    linkedItems[] = {"LOP_6sh46","PO_H_Bandanna_sgg","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_6sh46","PO_H_Bandanna_sgg","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_m16a4_carryhandle"};
    respawnWeapons[] = {"rhs_weap_m16a4_carryhandle"};

    magazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m16a4_carryhandle","","","",{"rhs_mag_30Rnd_556x45_Mk262_Stanag",30},{},""},{},{},{"LOP_U_AFR_Fatigue_01",{{"rhs_mag_30Rnd_556x45_Mk262_Stanag",4,30}}},{"LOP_6sh46",{{"rhs_mag_rdg2_white",1,1},{"rhs_mag_rdg2_black",1,1},{"HandGrenade",2,1}}},{},"PO_H_Bandanna_sgg","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_Lee_Enfield_01 : LOP_AFR_Infantry_Rifleman_3_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_Lee_Enfield_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [Lee Enfield]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04_slv";

    linkedItems[] = {"LOP_6sh46","PO_H_Bandanna_sand","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_6sh46","PO_H_Bandanna_sand","ItemMap","ItemCompass"};

    weapons[] = {"LOP_Weap_LeeEnfield"};
    respawnWeapons[] = {"LOP_Weap_LeeEnfield"};

    magazines[] = {"LOP_10rnd_77mm_mag","LOP_10rnd_77mm_mag"};
    respawnMagazines[] = {"LOP_10rnd_77mm_mag","LOP_10rnd_77mm_mag"};

    ALiVE_orbatCreator_loadout[] = {{"LOP_Weap_LeeEnfield","","","",{"LOP_10rnd_77mm_mag",10},{},""},{},{},{"LOP_U_AFR_Fatigue_04_slv",{{"ACE_EarPlugs",1},{"LOP_10rnd_77mm_mag",3,10}}},{"LOP_6sh46",{{"LOP_10rnd_77mm_mag",2,10},{"rhs_mag_rdg2_white",1,1},{"rhs_mag_rdg2_black",1,1},{"rhs_mag_rgd5",2,1}}},{},"PO_H_Bandanna_sand","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_AKM_PM_63_01 : LOP_AFR_Infantry_Rifleman_4_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_AKM_PM_63_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [AKM PM-63]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04";

    linkedItems[] = {"LOP_6sh46","PO_H_Bandanna_blu","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_6sh46","PO_H_Bandanna_blu","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_pm63"};
    respawnWeapons[] = {"rhs_weap_pm63"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pm63","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Fatigue_04",{{"rhs_30Rnd_762x39mm",2,30},{"rhs_mag_rgd5",1,1}}},{"LOP_6sh46",{{"rhs_30Rnd_762x39mm",1,30}}},{},"PO_H_Bandanna_blu","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_Driver_02 : LOP_AFR_Driver_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_Driver_02.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit Driver";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04";

    linkedItems[] = {"LOP_6sh46","PO_H_Bandanna_gry","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_6sh46","PO_H_Bandanna_gry","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akm"};
    respawnWeapons[] = {"rhs_weap_akm"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Fatigue_04",{{"rhs_30Rnd_762x39mm",2,30},{"rhs_mag_rgd5",1,1}}},{"LOP_6sh46",{{"rhs_30Rnd_762x39mm",1,30}}},{},"PO_H_Bandanna_gry","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_AKM_GL_02 : LOP_AFR_Infantry_GL_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_AKM_GL_02.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit [AKM GL]";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04_slv";

    linkedItems[] = {"V_BandollierB_oli","PO_H_Booniehat_tan","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"V_BandollierB_oli","PO_H_Booniehat_tan","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akm_gp25"};
    respawnWeapons[] = {"rhs_weap_akm_gp25"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_VOG25","rhs_30Rnd_762x39mm","rhs_VOG25"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_VOG25","rhs_30Rnd_762x39mm","rhs_VOG25"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm_gp25","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{"rhs_VOG25",1},""},{},{},{"LOP_U_AFR_Fatigue_04_slv",{{"rhs_30Rnd_762x39mm",2,30},{"rhs_VOG25",1,1}}},{"V_BandollierB_oli",{{"rhs_30Rnd_762x39mm",2,30},{"rhs_VOG25",2,1},{"rhs_mag_rdg2_white",1,1}}},{},"PO_H_Booniehat_tan","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Bandit_Crewman_01 : LOP_AFR_Driver_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Bandit_Crewman_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Bandit Crewman";
    side = 2;
    faction = "I_AP";

    identityTypes[] = {"Head_Asian","LanguageFRE_F","G_CIVIL_male","NoGlasses"};

    uniformClass = "LOP_U_AFR_Fatigue_04_slv";

    linkedItems[] = {"LOP_6sh46","rhs_tsh4","ItemMap","ItemCompass"};
    respawnlinkedItems[] = {"LOP_6sh46","rhs_tsh4","ItemMap","ItemCompass"};

    weapons[] = {"rhs_weap_akm"};
    respawnWeapons[] = {"rhs_weap_akm"};

    magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm",30},{},""},{},{},{"LOP_U_AFR_Fatigue_04_slv",{{"rhs_30Rnd_762x39mm",2,30},{"rhs_mag_rgd5",1,1}}},{"LOP_6sh46",{{"rhs_30Rnd_762x39mm",1,30}}},{},"rhs_tsh4","",{},{"ItemMap","","","ItemCompass","",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_BTR_60PB_01 : LOP_AFR_BTR60_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_BTR_60PB_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "BTR-60PB";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class CommanderOptics : CommanderOptics { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
        class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
        class Commander_Out : Commander_Out { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_T72B_obr_1984g_01 : LOP_AFR_T72BA_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_T72B_obr_1984g_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "T-72B [obr. 1984g.]";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_T72B_obr_1985_01 : LOP_AFR_T72BB_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_T72B_obr_1985_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "T-72B [obr. 1985 g.]";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_M113A3_M2_01 : LOP_AFR_M113_W_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_M113A3_M2_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M113A3 M2";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_T34_85M_01 : LOP_AFR_T34_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_T34_85M_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "T-34-85M";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class FrontGunner : FrontGunner { gunnerType = "I_AP_Bandit_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_T55A_01 : LOP_AFR_T55_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_T55A_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "T-55A";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Truck_cargo_01 : LOP_AFR_Truck_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Truck_cargo_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Truck [cargo]";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Driver_02";

    class Turrets : Turrets {
        class CargoTurret_L1 : CargoTurret_L1 { gunnerType = ""; };
        class CargoTurret_L2 : CargoTurret_L2 { gunnerType = ""; };
        class CargoTurret_L3 : CargoTurret_L3 { gunnerType = ""; };
        class CargoTurret_L4 : CargoTurret_L4 { gunnerType = ""; };
        class CargoTurret_L5 : CargoTurret_L5 { gunnerType = ""; };
        class CargoTurret_R1 : CargoTurret_R1 { gunnerType = ""; };
        class CargoTurret_R2 : CargoTurret_R2 { gunnerType = ""; };
        class CargoTurret_R3 : CargoTurret_R3 { gunnerType = ""; };
        class CargoTurret_R4 : CargoTurret_R4 { gunnerType = ""; };
        class CargoTurret_R5 : CargoTurret_R5 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Offroad_01 : LOP_AFR_Offroad_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Offroad_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroad";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Driver_02";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Offroad_M2_01 : LOP_AFR_Offroad_M2_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Offroad_M2_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroad [M2]";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Driver_02";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "I_AP_Bandit_AKM_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Land_Rover_01 : LOP_AFR_Landrover_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Land_Rover_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Land Rover";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Driver_02";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Land_rover_M2_01 : LOP_AFR_Landrover_M2_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Land_rover_M2_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Land rover [M2]";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Driver_02";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_AP_Bandit_Driver_02"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Land_Rover_SPG_01 : LOP_AFR_Landrover_SPG9_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Land_Rover_SPG_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Land Rover [SPG-9]";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Driver_02";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_AP_Bandit_Driver_02"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Nissan_PKM_01 : LOP_AFR_Nissan_PKM_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Nissan_PKM_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Nissan [PKM]";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Driver_02";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "I_AP_Bandit_Driver_02"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Mi_8MT_Cargo_01 : LOP_UA_Mi8MT_Cargo_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Mi_8MT_Cargo_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mi-8MT [Cargo]";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Crewman_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Mi_8MTV_3FAB_01 : LOP_UA_Mi8MTV3_FAB_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Mi_8MTV_3FAB_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mi-8MTV-3 [FAB]";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Crewman_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class SideTurret : SideTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class BackTurret : BackTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class FrontTurret : FrontTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_AP_Mi_8MTV_3UPK_01 : LOP_UA_Mi8MTV3_UPK23_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\I_AP_Mi_8MTV_3UPK_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mi-8MTV-3 [UPK]";
    side = 2;
    faction = "I_AP";
    crew = "I_AP_Bandit_Crewman_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class SideTurret : SideTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class BackTurret : BackTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
        class FrontTurret : FrontTurret { gunnerType = "I_AP_Bandit_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
