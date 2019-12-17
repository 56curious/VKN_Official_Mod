
class O_CartelCartel_Rifleman_Tropical_01 : I_C_Soldier_Para_1_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","H_Bandanna_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","H_Bandanna_khk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_akm"};
    respawnWeapons[] = {"rhs_weap_akm"};

    magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_30Rnd_762x39mm_bakelite",2,30}}},{"LOP_V_6B23_Rifleman_OLV",{{"HandGrenade",2,1},{"rhs_30Rnd_762x39mm_bakelite",4,30}}},{},"H_Bandanna_khk","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Sharpshooter_Tropical_01 : O_CartelCartel_Rifleman_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sharpshooter";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","rhsgref_bcap_specter","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","rhsgref_bcap_specter","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m38_rail"};
    respawnWeapons[] = {"rhs_weap_m38_rail"};

    magazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38"};
    respawnMagazines[] = {"rhsgref_5Rnd_762x54_m38","rhsgref_5Rnd_762x54_m38"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m38_rail","","","optic_DMS",{"rhsgref_5Rnd_762x54_m38",5},{},""},{},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhsgref_5Rnd_762x54_m38",3,5}}},{"LOP_V_6B23_Rifleman_OLV",{{"HandGrenade",2,1},{"rhsgref_5Rnd_762x54_m38",10,5}}},{},"rhsgref_bcap_specter","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Close_Combatant_Tropical_01 : O_CartelCartel_Rifleman_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Close Combatant";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_MP44"};
    respawnWeapons[] = {"rhs_weap_MP44"};

    magazines[] = {"rhsgref_30Rnd_792x33_SmE_StG","rhsgref_30Rnd_792x33_SmE_StG"};
    respawnMagazines[] = {"rhsgref_30Rnd_792x33_SmE_StG","rhsgref_30Rnd_792x33_SmE_StG"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_MP44","","","",{"rhsgref_30Rnd_792x33_SmE_StG",30},{},""},{},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhsgref_30Rnd_792x33_SmE_StG",3,30}}},{"LOP_V_6B23_Rifleman_OLV",{{"HandGrenade",2,1},{"rhsgref_30Rnd_792x33_SmE_StG",5,30}}},{},"H_Watchcap_blk","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Machine_Gunner_Tropical_01 : O_CartelCartel_Rifleman_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Machine Gunner";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_6Sh92_OLV","rhs_Booniehat_flora","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_6Sh92_OLV","rhs_Booniehat_flora","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_mg42"};
    respawnWeapons[] = {"rhs_weap_mg42"};

    magazines[] = {"rhsgref_50Rnd_792x57_SmE_drum","rhsgref_50Rnd_792x57_SmE_drum"};
    respawnMagazines[] = {"rhsgref_50Rnd_792x57_SmE_drum","rhsgref_50Rnd_792x57_SmE_drum"};

    backpack = "rhs_sidor";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mg42","","","",{"rhsgref_50Rnd_792x57_SmE_drum",50},{},""},{},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACE_EarPlugs",1},{"rhsgref_50Rnd_792x57_SmE_drum",1,50}}},{"LOP_V_6B23_6Sh92_OLV",{{"HandGrenade",2,1},{"rhsgref_50Rnd_792x57_SmE_drum",4,50}}},{"rhs_sidor",{{"rhsgref_50Rnd_792x57_SmE_drum",3,50}}},"rhs_Booniehat_flora","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Rifleman_AT_Tropical_01 : O_CartelCartel_Rifleman_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (AT)";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","VSM_BackwardsHat_Peltor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","VSM_BackwardsHat_Peltor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_akm","rhs_weap_panzerfaust60"};
    respawnWeapons[] = {"rhs_weap_akm","rhs_weap_panzerfaust60"};

    magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_panzerfaust60_mag","rhs_30Rnd_762x39mm_bakelite"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_panzerfaust60_mag","rhs_30Rnd_762x39mm_bakelite"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{"rhs_weap_panzerfaust60","","","",{"rhs_panzerfaust60_mag",1},{},""},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACE_EarPlugs",1},{"rhs_30Rnd_762x39mm_bakelite",2,30}}},{"LOP_V_6B23_Rifleman_OLV",{{"HandGrenade",2,1},{"rhs_30Rnd_762x39mm_bakelite",4,30}}},{},"VSM_BackwardsHat_Peltor_black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Group_Leader_Tropical_01 : O_CartelCartel_Rifleman_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Group Leader";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_01";

    linkedItems[] = {"LOP_V_6B23_CrewOfficer_OLV","rhsusf_protech_helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_CrewOfficer_OLV","rhsusf_protech_helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_ak74m"};
    respawnWeapons[] = {"rhs_weap_ak74m"};

    magazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_AK"};

    backpack = "tf_rt1523g_bwmod";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74m","rhs_acc_dtk","","rhs_acc_pkas",{"rhs_30Rnd_545x39_7N10_AK",30},{},""},{},{},{"LOP_U_AFR_Fatigue_01",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_30Rnd_545x39_7N10_AK",3,30}}},{"LOP_V_6B23_CrewOfficer_OLV",{{"HandGrenade",2,1}}},{"tf_rt1523g_bwmod",{}},"rhsusf_protech_helmet","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Medic_Tropical_01 : O_CartelCartel_Rifleman_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "'Medic'";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","H_Cap_blu","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","H_Cap_blu","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m3a1"};
    respawnWeapons[] = {"rhs_weap_m3a1"};

    magazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG"};
    respawnMagazines[] = {"rhsgref_30rnd_1143x23_M1911B_SMG","rhsgref_30rnd_1143x23_M1911B_SMG"};

    backpack = "B_FieldPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m3a1","","","",{"rhsgref_30rnd_1143x23_M1911B_SMG",30},{},""},{},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhsgref_30rnd_1143x23_M1911B_SMG",1,30}}},{"LOP_V_6B23_Rifleman_OLV",{{"HandGrenade",2,1},{"rhsgref_30rnd_1143x23_M1911B_SMG",3,30}}},{"B_FieldPack_blk",{{"ACE_fieldDressing",20},{"ACE_bloodIV",2},{"ACE_bloodIV_250",2},{"ACE_bloodIV_500",2},{"ACE_epinephrine",10},{"ACE_morphine",10},{"ACE_personalAidKit",1},{"ACE_surgicalKit",1}}},"H_Cap_blu","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Anti_Air_Tropical_01 : O_CartelCartel_Rifleman_AT_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Anti-Air";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","VSM_BackwardsHat_Peltor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","VSM_BackwardsHat_Peltor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_akm","rhs_weap_igla"};
    respawnWeapons[] = {"rhs_weap_akm","rhs_weap_igla"};

    magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_mag_9k38_rocket","rhs_30Rnd_762x39mm_bakelite"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_mag_9k38_rocket","rhs_30Rnd_762x39mm_bakelite"};

    backpack = "rhs_rpg_empty";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACE_EarPlugs",1},{"rhs_30Rnd_762x39mm_bakelite",2,30}}},{"LOP_V_6B23_Rifleman_OLV",{{"HandGrenade",2,1},{"rhs_30Rnd_762x39mm_bakelite",4,30}}},{"rhs_rpg_empty",{{"rhs_mag_9k38_rocket",1,1}}},"VSM_BackwardsHat_Peltor_black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Anti_Tank_Tropical_01 : O_CartelCartel_Anti_Air_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Anti-Tank";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_Rifleman_OLV","VSM_BackwardsHat_Peltor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_Rifleman_OLV","VSM_BackwardsHat_Peltor_black","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_akm","launch_RPG7_F"};
    respawnWeapons[] = {"rhs_weap_akm","launch_RPG7_F"};

    magazines[] = {"rhs_30Rnd_762x39mm_bakelite","RPG7_F","rhs_30Rnd_762x39mm_bakelite"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm_bakelite","RPG7_F","rhs_30Rnd_762x39mm_bakelite"};

    backpack = "rhs_rpg_empty";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{"launch_RPG7_F","","","",{"RPG7_F",1},{},""},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACE_EarPlugs",2},{"rhs_30Rnd_762x39mm_bakelite",2,30}}},{"LOP_V_6B23_Rifleman_OLV",{{"HandGrenade",2,1},{"rhs_30Rnd_762x39mm_bakelite",4,30}}},{"rhs_rpg_empty",{{"RPG7_F",3,1}}},"VSM_BackwardsHat_Peltor_black","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Rifleman_Light_Tropical_01 : O_CartelCartel_Rifleman_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Light)";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"rhsgref_alice_webbing","VSM_Multicam_Boonie","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhsgref_alice_webbing","VSM_Multicam_Boonie","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_akm"};
    respawnWeapons[] = {"rhs_weap_akm"};

    magazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm_bakelite","rhs_30Rnd_762x39mm_bakelite"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_akm","rhs_acc_dtkakm","","",{"rhs_30Rnd_762x39mm_bakelite",30},{},""},{},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhs_30Rnd_762x39mm_bakelite",2,30}}},{"rhsgref_alice_webbing",{{"HandGrenade",2,1},{"rhs_30Rnd_762x39mm_bakelite",4,30}}},{},"VSM_Multicam_Boonie","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Autorifleman_Tropical_01 : O_CartelCartel_Machine_Gunner_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Autorifleman";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_02";

    linkedItems[] = {"LOP_V_6B23_6Sh92_OLV","rhs_Booniehat_flora","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_6Sh92_OLV","rhs_Booniehat_flora","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_pkp"};
    respawnWeapons[] = {"rhs_weap_pkp"};

    magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};

    backpack = "VSM_OGA_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","",{"rhs_100Rnd_762x54mmR",100},{},""},{},{},{"LOP_U_AFR_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACE_EarPlugs",2}}},{"LOP_V_6B23_6Sh92_OLV",{{"HandGrenade",2,1},{"150Rnd_762x51_Box",1,150}}},{"VSM_OGA_Backpack_Compact",{{"150Rnd_762x51_Box",3,150}}},"rhs_Booniehat_flora","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CartelCartel_Team_Leader_Tropical_01 : O_CartelCartel_Group_Leader_Tropical_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Team Leader";
    side = 0;
    faction = "O_CartelCartel_Tropical";

    identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

    uniformClass = "LOP_U_AFR_Fatigue_03";

    linkedItems[] = {"LOP_V_6B23_CrewOfficer_CDF","rhsgref_ssh68_vsr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_6B23_CrewOfficer_CDF","rhsgref_ssh68_vsr","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_MP44"};
    respawnWeapons[] = {"rhs_weap_MP44"};

    magazines[] = {"rhsgref_30Rnd_792x33_SmE_StG","rhsgref_30Rnd_792x33_SmE_StG"};
    respawnMagazines[] = {"rhsgref_30Rnd_792x33_SmE_StG","rhsgref_30Rnd_792x33_SmE_StG"};

    backpack = "tf_rt1523g_bwmod";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_MP44","","","",{"rhsgref_30Rnd_792x33_SmE_StG",30},{},""},{},{},{"LOP_U_AFR_Fatigue_03",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhsgref_30Rnd_792x33_SmE_StG",3,30}}},{"LOP_V_6B23_CrewOfficer_CDF",{{"HandGrenade",2,1},{"rhsgref_30Rnd_792x33_SmE_StG",3,30}}},{"tf_rt1523g_bwmod",{}},"rhsgref_ssh68_vsr","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OCartelCartelTropical_Offroad_Technical_01 : I_G_Offroad_01_armed_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroad Technical";
    side = 0;
    faction = "O_CartelCartel_Tropical";
    crew = "O_CartelCartel_Rifleman_Tropical_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "O_CartelCartel_Close_Combatant_Tropical_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0; _texture = selectRandom ['VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_01_lightgreen.paa','VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_01_multicam.paa', 'VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_darkgreen_01.paa','VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_woodland_dark_01.paa'];_unit setObjectTextureGlobal [0, _texture];_unit setObjectTextureGlobal [1, _texture];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Guerilla_09";

};

class O_OCartelCartelTropical_Offroad_Anti_Tank_01 : I_G_Offroad_01_AT_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroad Anti-Tank";
    side = 0;
    faction = "O_CartelCartel_Tropical";
    crew = "O_CartelCartel_Rifleman_Tropical_01";

    class Turrets : Turrets {
        class AT_Turret : AT_Turret { gunnerType = "O_CartelCartel_Close_Combatant_Tropical_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "  if (local (_this select 0)) then { _onSpawn = {    sleep 0.3; _unit = _this select 0;_texture = selectRandom ['VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_01_lightgreen.paa', 'VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_01_multicam.paa','VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_darkgreen_01.paa','VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_woodland_dark_01.paa'];_unit setObjectTextureGlobal [0, _texture];_unit setObjectTextureGlobal [1, _texture];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OCartelCartelTropical_Mounted_Turret_DShKM_01 : rhsgref_ins_DSHKM_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mounted Turret (DShKM)";
    side = 0;
    faction = "O_CartelCartel_Tropical";
    crew = "O_CartelCartel_Rifleman_Tropical_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_CartelCartel_Rifleman_Tropical_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_rhsfactionvdv_Ural_Fuel_01 : RHS_Ural_Fuel_VDV_01_OCimport_02 {
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural (Fuel)";
    side = 0;
    faction = "O_CartelCartel_Tropical";
    crew = "O_CartelCartel_Rifleman_Tropical_01";
    hiddenSelectionsTextures[] = {"VKN_Extensions_Characters\data\Retextures\O_Cartel_Ural_Kabina_darkgreen.paa" , "", "", "", "", "", "", "", "", "VKN_Extensions_Characters\data\Retextures\O_Cartel_Ural_Fuel_01_darkgreen.paa"};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3;_unit = _this select 0; }; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OCartelCartelTropical_Offroad_Transport_01 : O_G_Offroad_01_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroad Transport";
    side = 0;
    faction = "O_CartelCartel_Tropical";
    crew = "O_CartelCartel_Rifleman_Tropical_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "  if (local (_this select 0)) then { _onSpawn = {   sleep 0.3;    _unit = _this select 0;   _texture = selectRandom [   'VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_01_lightgreen.paa',   'VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_01_multicam.paa', 'VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_darkgreen_01.paa',     'VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_woodland_dark_01.paa'  ];  _unit setObjectTextureGlobal [0, _texture];     _unit setObjectTextureGlobal [1, _texture];   }; _this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };
    };
    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OCartelCartelTropical_Offroad_Transport_02 : O_G_Offroad_01_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroad Transport (FULL)";
    side = 0;
    faction = "O_CartelCartel_Tropical";
    crew = "O_CartelCartel_Rifleman_Tropical_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_CartelCartel_Rifleman_Tropical_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_CartelCartel_Rifleman_Tropical_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_CartelCartel_Rifleman_Tropical_01"; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = "O_CartelCartel_Rifleman_Tropical_01"; };
    };


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "  if (local (_this select 0)) then {  _onSpawn = { sleep 0.3; _unit = _this select 0; _texture = selectRandom ['VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_01_lightgreen.paa','VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_01_multicam.paa','VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_darkgreen_01.paa', 'VKN_Extensions_Characters\data\Retextures\O_Cartel_Offroad_woodland_dark_01.paa'                  ];    _unit setObjectTextureGlobal [0, _texture];   _unit setObjectTextureGlobal [1, _texture];       };      _this spawn _onSpawn;   (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn]; };";
        };
    };
    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};


class O_OCartelCartelTropical_Mortar_01 : O_G_Mortar_01_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mortar";
    side = 0;
    faction = "O_CartelCartel_Tropical";
    crew = "O_CartelCartel_Rifleman_Tropical_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_CartelCartel_Rifleman_Tropical_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OCartelCartelTropical_Ural_Transport_01 : RHS_Ural_Open_Civ_01_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural (Transport)";
    side = 0;
    faction = "O_CartelCartel_Tropical";
    crew = "O_CartelCartel_Rifleman_Tropical_01";
    hiddenSelectionsTextures[] = {"VKN_Extensions_Characters\data\Retextures\O_Cartel_Ural_Kabina_darkgreen.paa", "VKN_Extensions_Characters\data\Retextures\O_Cartel_Ural_Open_01_darkgreen.paa"};

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {   _onSpawn = {    sleep 0.3;   _unit = _this select 0;    };_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OCartelCartelTropical_Transport_Helicopter_MI_01 : RHS_Mi8amt_civilian_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Transport Helicopter (MI-8)";
    side = 0;
    faction = "O_CartelCartel_Tropical";
    crew = "O_CartelCartel_Rifleman_Tropical_01";
    hiddenSelectionsTextures[] = {"VKN_Extensions_Characters\data\Retextures\O_Cartel_MI8_Body_00_darkgreen.paa"};
    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = ""; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;  };_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_OCartelCartelTropical_Cessna_TTX_01 : C_Plane_Civil_01_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Cessna TTX";
    side = 0;
    faction = "O_CartelCartel_Tropical";
    crew = "O_CartelCartel_Rifleman_Tropical_01";
    hiddenSelectionsTextures[] = {"VKN_Extensions_Characters\data\Retextures\O_Cartel_Plane_00_lightgreen.paa","VKN_Extensions_Characters\data\Retextures\O_Cartel_Plane_01_lightgreen.paa"};


    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {    _onSpawn = {          sleep 0.3;       _unit = _this select 0;    _unit setObjectTextureGlobal [0, 'VKN_Extensions_Characters\data\Retextures\O_Cartel_Plane_00_lightgreen.paa'];  _unit setObjectTextureGlobal [1, 'VKN_Extensions_Characters\data\Retextures\O_Cartel_Plane_01_lightgreen.paa'];          };  _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};


class O_recon_M_F;
class O_OPFVF__01_OCimport_01 : O_recon_M_F { scope = 0; class EventHandlers; };
class O_OPFVF__01_OCimport_02 : O_OPFVF__01_OCimport_01 { class EventHandlers; };

class O_OPFF_Deathguard_AT_01_OCimport_01 : O_recon_M_F { scope = 0; class EventHandlers; };
class O_OPFF_Deathguard_AT_01_OCimport_02 : O_OPFF_Deathguard_AT_01_OCimport_01 { class EventHandlers; };

class O_OPFF_DeathGuard_Marksman_01_OCimport_01 : O_recon_M_F { scope = 0; class EventHandlers; };
class O_OPFF_DeathGuard_Marksman_01_OCimport_02 : O_OPFF_DeathGuard_Marksman_01_OCimport_01 { class EventHandlers; };

class O_OPFF_DeathGuard_Light_01_OCimport_01 : O_recon_M_F { scope = 0; class EventHandlers; };
class O_OPFF_DeathGuard_Light_01_OCimport_02 : O_OPFF_DeathGuard_Light_01_OCimport_01 { class EventHandlers; };

class O_OPFF_DeathGuard_Medic_01_OCimport_01 : O_recon_M_F { scope = 0; class EventHandlers; };
class O_OPFF_DeathGuard_Medic_01_OCimport_02 : O_OPFF_DeathGuard_Medic_01_OCimport_01 { class EventHandlers; };

class O_OPFF_DeathGuard_AR_01_OCimport_01 : O_recon_M_F { scope = 0; class EventHandlers; };
class O_OPFF_DeathGuard_AR_01_OCimport_02 : O_OPFF_DeathGuard_AR_01_OCimport_01 { class EventHandlers; };

class O_Deathguard_DeathGuard_01 : O_OPFVF__01_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Deathguard";
    side = 0;
    faction = "O_DeathgaurdDeathGuard_DeathGuard";

    identityTypes[] = {"Head_NATO_camo_arid","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_Multicam_Crye_grey_pants_Camo";

    linkedItems[] = {"rhs_6b23_6sh116_flora","rhs_tsh4_bala","ItemMap","O_UavTerminal","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"rhs_6b23_6sh116_flora","rhs_tsh4_bala","ItemMap","O_UavTerminal","NVGogglesB_blk_F"};

    weapons[] = {"rhs_weap_ak103","rhs_weap_tt33","ACE_MX2A"};
    respawnWeapons[] = {"rhs_weap_ak103","rhs_weap_tt33","ACE_MX2A"};

    magazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_mag_762x25_8","rhs_30Rnd_762x39mm_polymer","rhs_mag_762x25_8"};
    respawnMagazines[] = {"rhs_30Rnd_762x39mm_polymer","rhs_mag_762x25_8","rhs_30Rnd_762x39mm_polymer","rhs_mag_762x25_8"};

    backpack = "B_AssaultPack_rgr";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak103","rhs_acc_dtk4screws","rhs_acc_perst1ik","rhs_acc_ekp8_02",{"rhs_30Rnd_762x39mm_polymer",30},{},""},{},{"rhs_weap_tt33","","","",{"rhs_mag_762x25_8",8},{},""},{"VSM_Multicam_Crye_grey_pants_Camo",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"MiniGrenade",1,1},{"Chemlight_red",1,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"rhs_mag_762x25_8",3,8},{"rhs_30Rnd_762x39mm_polymer",1,30}}},{"rhs_6b23_6sh116_flora",{{"ACE_morphine",15},{"ACE_fieldDressing",15},{"MiniGrenade",1,1},{"O_IR_Grenade",1,1},{"Chemlight_red",1,1},{"HandGrenade",2,1},{"rhs_mag_fakel",3,1},{"rhs_mag_an_m14_th3",1,1},{"rhs_mag_an_m8hc",2,1},{"rhs_30Rnd_762x39mm_polymer",2,30}}},{"B_AssaultPack_rgr",{{"rhs_75Rnd_762x39mm",3,75}}},"rhs_tsh4_bala","",{"ACE_MX2A","","","",{},{},""},{"ItemMap","O_UavTerminal","","","","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'decal_communistcat'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "decal_communistcat";

};

class O_AT_DeathGuard_01 : O_OPFF_Deathguard_AT_01_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Deathguard_AT";
    side = 0;
    faction = "O_DeathgaurdDeathGuard_DeathGuard";

    identityTypes[] = {"Orange_AAF","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_OGA_Crye_grey_Camo";

    linkedItems[] = {"VSM_OGA_Vest_3","VSM_Bowman_cap_balaclava_Black","tf_anprc152","tf_microdagr","ACE_NVG_Gen2"};
    respawnlinkedItems[] = {"VSM_OGA_Vest_3","VSM_Bowman_cap_balaclava_Black","tf_anprc152","tf_microdagr","ACE_NVG_Gen2"};

    weapons[] = {"SMA_L85RIS","launch_MRAWS_green_rail_F","hgun_Pistol_Signal_F","ACE_VectorDay"};
    respawnWeapons[] = {"SMA_L85RIS","launch_MRAWS_green_rail_F","hgun_Pistol_Signal_F","ACE_VectorDay"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","MRAWS_HEAT_F","6Rnd_GreenSignal_F","rhs_mag_30Rnd_556x45_M855A1_Stanag","6Rnd_GreenSignal_F"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","MRAWS_HEAT_F","6Rnd_GreenSignal_F","rhs_mag_30Rnd_556x45_M855A1_Stanag","6Rnd_GreenSignal_F"};

    backpack = "VSM_Multicam_carryall";

    ALiVE_orbatCreator_loadout[] = {{"SMA_L85RIS","SMA_supp1TW_556","ACE_acc_pointer_green","SMA_ELCAN_SPECTER_4z",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{"launch_MRAWS_green_rail_F","","","",{"MRAWS_HEAT_F",1},{},""},{"hgun_Pistol_Signal_F","","","",{"6Rnd_GreenSignal_F",6},{},""},{"VSM_OGA_Crye_grey_Camo",{{"ACE_EarPlugs",4},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"MiniGrenade",1,1},{"Chemlight_red",1,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"VSM_OGA_Vest_3",{{"ACE_morphine",15},{"ACE_fieldDressing",15},{"ACE_M84",2,1},{"HandGrenade",4,1},{"rhs_mag_an_m8hc",4,1}}},{"VSM_Multicam_carryall",{{"MRAWS_HEAT_F",2,1},{"MRAWS_HE_F",3,1},{"rhs_mag_30Rnd_556x45_Mk262_Stanag",8,30}}},"VSM_Bowman_cap_balaclava_Black","",{"ACE_VectorDay","","","",{},{},""},{"","","tf_anprc152","","tf_microdagr","ACE_NVG_Gen2"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Decal_riseup'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "Decal_riseup";

};

class O_Marks_DeathGuard_01 : O_OPFF_DeathGuard_Marksman_01_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Deathguard_Marks";
    side = 0;
    faction = "O_DeathgaurdDeathGuard_DeathGuard";

    identityTypes[] = {"Head_TK_camo_semiarid","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_ISTS_Fatigue_13";

    linkedItems[] = {"rhsgref_otv_digi","H_ShemagOpen_tan","ItemMap","ItemGPS","tf_anprc152","ACE_Altimeter"};
    respawnlinkedItems[] = {"rhsgref_otv_digi","H_ShemagOpen_tan","ItemMap","ItemGPS","tf_anprc152","ACE_Altimeter"};

    weapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};
    respawnWeapons[] = {"rhs_weap_svdp_npz","rhs_weap_pb_6p9","ACE_Yardage450"};

    magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S"};
    respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S","rhs_10Rnd_762x54mmR_7N1","rhs_mag_9x18_8_57N181S"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_npz","rhs_acc_tgpv2","","optic_DMS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"LOP_U_ISTS_Fatigue_13",{{"ACE_EarPlugs",4},{"ACE_fieldDressing",2},{"ACE_morphine",1},{"SmokeShell",1,1},{"rhs_mag_9x18_8_57N181S",3,8},{"rhs_10Rnd_762x54mmR_7N1",3,10}}},{"rhsgref_otv_digi",{{"ACE_morphine",9},{"ACE_fieldDressing",11},{"MiniGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_10Rnd_762x54mmR_7N1",8,10}}},{},"H_ShemagOpen_tan","",{"ACE_Yardage450","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152","","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Decal_iowa1'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "Decal_iowa1";

};

class O_Light_DeathGuard_01 : O_OPFF_DeathGuard_Light_01_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "DeathGuard_Light";
    side = 0;
    faction = "O_DeathgaurdDeathGuard_DeathGuard";

    identityTypes[] = {"Head_NATO_camo_arid","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_Multicam_Crye_grey_pants_Camo";

    linkedItems[] = {"rhs_6b43","H_MilCap_gry","ItemMap","O_UavTerminal","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"rhs_6b43","H_MilCap_gry","ItemMap","O_UavTerminal","NVGogglesB_blk_F"};

    weapons[] = {"SMA_SAR21MMS_F","rhs_weap_tt33","ACE_MX2A"};
    respawnWeapons[] = {"SMA_SAR21MMS_F","rhs_weap_tt33","ACE_MX2A"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_762x25_8","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_762x25_8"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_762x25_8","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_762x25_8"};

    backpack = "B_AssaultPack_rgr";

    ALiVE_orbatCreator_loadout[] = {{"SMA_SAR21MMS_F","SMA_supp2BW_556","SMA_ANPEQ15_BLK","rhsusf_acc_T1_high",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhs_weap_tt33","","","",{"rhs_mag_762x25_8",8},{},""},{"VSM_Multicam_Crye_grey_pants_Camo",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"MiniGrenade",1,1},{"Chemlight_red",1,1},{"1Rnd_SmokeRed_Grenade_shell",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"rhs_mag_762x25_8",3,8},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"rhs_6b43",{{"ACE_morphine",15},{"ACE_fieldDressing",5}}},{"B_AssaultPack_rgr",{{"ACE_fieldDressing",9},{"ACE_morphine",7}}},"H_MilCap_gry","",{"ACE_MX2A","","","",{},{},""},{"ItemMap","O_UavTerminal","","","","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'decal_communistcat'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "decal_communistcat";

};

class O_Medi_DeathGuard_01 : O_OPFF_DeathGuard_Medic_01_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Deathguard_Medi";
    side = 0;
    faction = "O_DeathgaurdDeathGuard_DeathGuard";

    identityTypes[] = {"Head_TK_camo_arid","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_TKA_Fatigue_02";

    linkedItems[] = {"rhsusf_mbav_mg","rhs_6b27m_ess_bala","FIR_PDU","ItemALiVEPhoneOld","ItemCompass","ACE_Altimeter","NVGogglesB_blk_F"};
    respawnlinkedItems[] = {"rhsusf_mbav_mg","rhs_6b27m_ess_bala","FIR_PDU","ItemALiVEPhoneOld","ItemCompass","ACE_Altimeter","NVGogglesB_blk_F"};

    weapons[] = {"arifle_CTAR_blk_F","rhs_weap_rpg26","hgun_Pistol_heavy_01_F","ACE_Vector"};
    respawnWeapons[] = {"arifle_CTAR_blk_F","rhs_weap_rpg26","hgun_Pistol_heavy_01_F","ACE_Vector"};

    magazines[] = {"30Rnd_580x42_Mag_F","rhs_rpg26_mag","11Rnd_45ACP_Mag","30Rnd_580x42_Mag_F","11Rnd_45ACP_Mag"};
    respawnMagazines[] = {"30Rnd_580x42_Mag_F","rhs_rpg26_mag","11Rnd_45ACP_Mag","30Rnd_580x42_Mag_F","11Rnd_45ACP_Mag"};

    backpack = "B_ViperHarness_oli_F";

    ALiVE_orbatCreator_loadout[] = {{"arifle_CTAR_blk_F","muzzle_snds_58_blk_F","ACE_acc_pointer_green","rhs_acc_rakursPM",{"30Rnd_580x42_Mag_F",30},{},""},{"rhs_weap_rpg26","","","",{"rhs_rpg26_mag",1},{},""},{"hgun_Pistol_heavy_01_F","","","",{"11Rnd_45ACP_Mag",11},{},""},{"LOP_U_TKA_Fatigue_02",{{"ACE_fieldDressing",12},{"ACE_morphine",6},{"ACE_EarPlugs",4},{"Chemlight_red",1,1},{"30Rnd_580x42_Mag_F",2,30}}},{"rhsusf_mbav_mg",{{"ACE_Banana",5},{"ACE_fieldDressing",5},{"ACE_elasticBandage",4},{"ACE_bloodIV_250",3},{"11Rnd_45ACP_Mag",2,11},{"30Rnd_580x42_Mag_F",6,30},{"rhs_rpg26_mag",1,1}}},{"B_ViperHarness_oli_F",{{"ACE_bloodIV_250",10},{"ACE_elasticBandage",20},{"ACE_morphine",20},{"ACE_epinephrine",20},{"HandGrenade",3,1},{"rhs_mag_m18_red",4,1}}},"rhs_6b27m_ess_bala","",{"ACE_Vector","","","",{},{},""},{"","FIR_PDU","ItemALiVEPhoneOld","ItemCompass","ACE_Altimeter","NVGogglesB_blk_F"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'PO_Insignia_ana'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "PO_Insignia_ana";

};

class O_DeathGuardAR_01 : O_OPFF_DeathGuard_AR_01_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "DeathAR";
    side = 0;
    faction = "O_DeathgaurdDeathGuard_DeathGuard";

    identityTypes[] = {"Head_TK_camo_lush","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_Crye_SS_Camo";

    linkedItems[] = {"VSM_LBT6094_operator_OCP","rhs_Booniehat_m81","ItemMap","O_UavTerminal","tf_anprc148jem","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OCP","rhs_Booniehat_m81","ItemMap","O_UavTerminal","tf_anprc148jem","tf_microdagr"};

    weapons[] = {"arifle_CTARS_blk_F","rhs_weap_m72a7","rhs_weap_pb_6p9","Laserdesignator_02_ghex_F"};
    respawnWeapons[] = {"arifle_CTARS_blk_F","rhs_weap_m72a7","rhs_weap_pb_6p9","Laserdesignator_02_ghex_F"};

    magazines[] = {"100Rnd_580x42_Mag_F","rhs_m72a7_mag","rhs_mag_9x18_8_57N181S","Laserbatteries","100Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","Laserbatteries"};
    respawnMagazines[] = {"100Rnd_580x42_Mag_F","rhs_m72a7_mag","rhs_mag_9x18_8_57N181S","Laserbatteries","100Rnd_580x42_Mag_F","rhs_mag_9x18_8_57N181S","Laserbatteries"};

    backpack = "B_ViperLightHarness_oli_F";

    ALiVE_orbatCreator_loadout[] = {{"arifle_CTARS_blk_F","muzzle_snds_58_blk_F","","ACE_optic_Hamr_2D",{"100Rnd_580x42_Mag_F",100},{},""},{"rhs_weap_m72a7","","rhsusf_acc_anpeq15side","",{"rhs_m72a7_mag",1},{},""},{"rhs_weap_pb_6p9","rhs_acc_6p9_suppressor","","",{"rhs_mag_9x18_8_57N181S",8},{},""},{"VSM_MulticamTropic_Crye_SS_Camo",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"ACE_EarPlugs",1},{"MiniGrenade",1,1},{"Chemlight_red",1,1},{"1Rnd_SmokeOrange_Grenade_shell",1,1},{"rhs_m72a7_mag",1,1},{"rhs_mag_9x18_8_57N181S",3,8},{"100Rnd_580x42_Mag_F",1,100}}},{"VSM_LBT6094_operator_OCP",{{"ACE_morphine",15},{"ACE_fieldDressing",15},{"ACE_packingBandage",15},{"MiniGrenade",1,1},{"O_IR_Grenade",1,1},{"Chemlight_red",1,1},{"HandGrenade",2,1},{"rhs_mag_fakel",3,1},{"100Rnd_580x42_Mag_F",2,100}}},{"B_ViperLightHarness_oli_F",{{"100Rnd_580x42_Mag_F",6,100}}},"rhs_Booniehat_m81","",{"Laserdesignator_02_ghex_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc148jem","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'Curator'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "Curator";

};
