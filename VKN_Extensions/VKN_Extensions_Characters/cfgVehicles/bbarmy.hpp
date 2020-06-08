class B_BArmy_Squad_leader_01 : rhsgref_hidf_squadleader_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad leader";
    side = 1;
    faction = "B_BArmy";

    identityTypes[] = {"Head_Tanoan","LanguageENGFRE_F"};

    uniformClass = "LOP_U_ISTS_Fatigue_22";

    linkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"hlc_rifle_hk33a2RIS","Rangefinder"};
    respawnWeapons[] = {"hlc_rifle_hk33a2RIS","Rangefinder"};

    magazines[] = {"hlc_30rnd_556x45_b_HK33","hlc_30rnd_556x45_b_HK33"};
    respawnMagazines[] = {"hlc_30rnd_556x45_b_HK33","hlc_30rnd_556x45_b_HK33"};

    backpack = "B_RadioBag_01_oucamo_F";

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_hk33a2RIS","","","optic_ERCO_blk_F",{"hlc_30rnd_556x45_b_HK33",30},{},""},{},{},{"LOP_U_ISTS_Fatigue_22",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_elasticBandage",3},{"ACE_tourniquet",2},{"ACE_morphine",1},{"ACE_splint",2}}},{"LOP_V_CarrierLite_TRI",{{"hlc_30rnd_556x45_b_HK33",3,30},{"SmokeShell",1,1},{"HandGrenade",1,1}}},{"B_RadioBag_01_oucamo_F",{}},"rhsgref_helmet_pasgt_3color_desert","",{"Rangefinder","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_BArmy_Rifleman_01 : rhsgref_hidf_rifleman_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "B_BArmy";

    identityTypes[] = {"Head_Tanoan","LanguageENGFRE_F"};

    uniformClass = "LOP_U_ISTS_Fatigue_22";

    linkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"hlc_rifle_hk33a2RIS","rhsusf_bino_m24_ARD"};
    respawnWeapons[] = {"hlc_rifle_hk33a2RIS","rhsusf_bino_m24_ARD"};

    magazines[] = {"hlc_30rnd_556x45_b_HK33","hlc_30rnd_556x45_b_HK33"};
    respawnMagazines[] = {"hlc_30rnd_556x45_b_HK33","hlc_30rnd_556x45_b_HK33"};

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_hk33a2RIS","","","optic_ERCO_blk_F",{"hlc_30rnd_556x45_b_HK33",30},{},""},{},{},{"LOP_U_ISTS_Fatigue_22",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_elasticBandage",3},{"ACE_tourniquet",2},{"ACE_morphine",1},{"ACE_splint",2}}},{"LOP_V_CarrierLite_TRI",{{"hlc_30rnd_556x45_b_HK33",3,30},{"SmokeShell",1,1},{"HandGrenade",1,1}}},{},"rhsgref_helmet_pasgt_3color_desert","",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_BArmy_Auto_Rifleman_01 : rhsgref_hidf_autorifleman_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Auto Rifleman";
    side = 1;
    faction = "B_BArmy";

    identityTypes[] = {"Head_Tanoan","LanguageENGFRE_F"};

    uniformClass = "LOP_U_ISTS_Fatigue_22";

    linkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"LMG_Zafir_F","rhsusf_bino_m24_ARD"};
    respawnWeapons[] = {"LMG_Zafir_F","rhsusf_bino_m24_ARD"};

    magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box"};
    respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box"};

    backpack = "B_Messenger_Coyote_F";

    ALiVE_orbatCreator_loadout[] = {{"LMG_Zafir_F","","","rhsusf_acc_ACOG3_USMC",{"150Rnd_762x54_Box",150},{},""},{},{},{"LOP_U_ISTS_Fatigue_22",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_elasticBandage",3},{"ACE_tourniquet",2},{"ACE_morphine",1},{"ACE_splint",2}}},{"LOP_V_CarrierLite_TRI",{{"SmokeShell",1,1},{"HandGrenade",1,1},{"150Rnd_762x54_Box",2,150}}},{"B_Messenger_Coyote_F",{{"150Rnd_762x54_Box_Tracer",2,150}}},"rhsgref_helmet_pasgt_3color_desert","",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_BArmy_AT_Specialist_01 : rhsgref_cdf_b_reg_grenadier_rpg_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT Specialist";
    side = 1;
    faction = "B_BArmy";

    identityTypes[] = {"Head_Euro","LanguageCZ"};

    uniformClass = "LOP_U_ISTS_Fatigue_22";

    linkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","tf_anprc148jem_4","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","tf_anprc148jem_4","ItemCompass","ItemWatch"};

    weapons[] = {"hlc_rifle_hk33a2RIS","launch_MRAWS_olive_F","rhsusf_bino_m24_ARD"};
    respawnWeapons[] = {"hlc_rifle_hk33a2RIS","launch_MRAWS_olive_F","rhsusf_bino_m24_ARD"};

    magazines[] = {"hlc_30rnd_556x45_b_HK33","MRAWS_HEAT_F","hlc_30rnd_556x45_b_HK33"};
    respawnMagazines[] = {"hlc_30rnd_556x45_b_HK33","MRAWS_HEAT_F","hlc_30rnd_556x45_b_HK33"};

    backpack = "B_Carryall_ocamo";

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_hk33a2RIS","","","optic_ERCO_blk_F",{"hlc_30rnd_556x45_b_HK33",30},{},""},{"launch_MRAWS_olive_F","","","",{"MRAWS_HEAT_F",1},{},""},{},{"LOP_U_ISTS_Fatigue_22",{{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_elasticBandage",3},{"ACE_tourniquet",3},{"ACE_morphine",2},{"ACE_splint",2},{"ACE_fieldDressing",1},{"ACE_packingBandage",1}}},{"LOP_V_CarrierLite_TRI",{{"hlc_30rnd_556x45_b_HK33",3,30},{"SmokeShell",1,1},{"HandGrenade",1,1}}},{"B_Carryall_ocamo",{{"ACE_splint",8},{"ACE_tourniquet",6},{"ACE_surgicalKit",1},{"ACE_salineIV",1},{"ACE_morphine",3},{"MRAWS_HEAT_F",2,1},{"MRAWS_HE_F",1,1}}},"rhsgref_helmet_pasgt_3color_desert","",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","tf_anprc148jem_4","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_BArmy_Combat_Life_Saver_01 : rhsgref_hidf_medic_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Combat Life Saver";
    side = 1;
    faction = "B_BArmy";

    identityTypes[] = {"Head_Tanoan","LanguageENGFRE_F"};

    uniformClass = "LOP_U_ISTS_Fatigue_22";

    linkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","tf_anprc148jem_3","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","tf_anprc148jem_3","ItemCompass","ItemWatch"};

    weapons[] = {"hlc_rifle_hk33a2RIS","rhsusf_bino_m24_ARD"};
    respawnWeapons[] = {"hlc_rifle_hk33a2RIS","rhsusf_bino_m24_ARD"};

    magazines[] = {"hlc_30rnd_556x45_b_HK33","hlc_30rnd_556x45_b_HK33"};
    respawnMagazines[] = {"hlc_30rnd_556x45_b_HK33","hlc_30rnd_556x45_b_HK33"};

    backpack = "B_Kitbag_tan";

    ALiVE_orbatCreator_loadout[] = {{"hlc_rifle_hk33a2RIS","","","optic_ERCO_blk_F",{"hlc_30rnd_556x45_b_HK33",30},{},""},{},{},{"LOP_U_ISTS_Fatigue_22",{{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_elasticBandage",3},{"ACE_tourniquet",3},{"ACE_morphine",2},{"ACE_splint",2},{"ACE_fieldDressing",1},{"ACE_packingBandage",1}}},{"LOP_V_CarrierLite_TRI",{{"hlc_30rnd_556x45_b_HK33",3,30},{"SmokeShell",1,1},{"HandGrenade",1,1}}},{"B_Kitbag_tan",{{"ACE_splint",8},{"ACE_tourniquet",6},{"ACE_surgicalKit",1},{"ACE_salineIV",3},{"ACE_morphine",16},{"ACE_epinephrine",12},{"ACE_elasticBandage",20},{"ACE_quikclot",20},{"ACE_fieldDressing",20}}},"rhsgref_helmet_pasgt_3color_desert","",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","tf_anprc148jem_3","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_BArmy_Marksman_01 : rhsgref_hidf_marksman_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 1;
    faction = "B_BArmy";

    identityTypes[] = {"Head_Tanoan","LanguageENGFRE_F"};

    uniformClass = "LOP_U_ISTS_Fatigue_22";

    linkedItems[] = {"LOP_V_CarrierLite_TRI","H_Booniehat_tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_TRI","H_Booniehat_tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_svdp_wd_npz","rhsusf_bino_m24_ARD"};
    respawnWeapons[] = {"rhs_weap_svdp_wd_npz","rhsusf_bino_m24_ARD"};

    magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
    respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svdp_wd_npz","","","optic_SOS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{},{"LOP_U_ISTS_Fatigue_22",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_elasticBandage",3},{"ACE_tourniquet",2},{"ACE_morphine",1},{"ACE_splint",2}}},{"LOP_V_CarrierLite_TRI",{{"SmokeShell",1,1},{"HandGrenade",1,1},{"rhs_10Rnd_762x54mmR_7N1",4,10}}},{},"H_Booniehat_tan","",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_BArmy_Heavy_Gunner_01 : rhsgref_hidf_machinegunner_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Heavy Gunner";
    side = 1;
    faction = "B_BArmy";

    identityTypes[] = {"Head_Tanoan","LanguageENGFRE_F"};

    uniformClass = "LOP_U_ISTS_Fatigue_22";

    linkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_TRI","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"MMG_02_sand_F","rhsusf_bino_m24_ARD"};
    respawnWeapons[] = {"MMG_02_sand_F","rhsusf_bino_m24_ARD"};

    magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag"};
    respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag"};

    backpack = "B_Kitbag_tan";

    ALiVE_orbatCreator_loadout[] = {{"MMG_02_sand_F","","","rhsusf_acc_ACOG3_USMC",{"130Rnd_338_Mag",130},{},"bipod_01_F_snd"},{},{},{"LOP_U_ISTS_Fatigue_22",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_elasticBandage",3},{"ACE_tourniquet",2},{"ACE_morphine",1},{"ACE_splint",2}}},{"LOP_V_CarrierLite_TRI",{{"SmokeShell",1,1},{"HandGrenade",1,1},{"130Rnd_338_Mag",1,130}}},{"B_Kitbag_tan",{{"150Rnd_762x54_Box_Tracer",2,150},{"130Rnd_338_Mag",1,130}}},"rhsgref_helmet_pasgt_3color_desert","",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_BArmy_Crewman_01 : rhsgref_hidf_crewman_OCimport_02 {
    author = "Kissing";
    scope = 2;
    scopeCurator = 2;
    displayName = "Crewman";
    side = 1;
    faction = "B_BArmy";

    identityTypes[] = {"Head_Tanoan","LanguageENGFRE_F"};

    uniformClass = "LOP_U_ISTS_Fatigue_22";

    linkedItems[] = {"LOP_V_CarrierLite_TRI","H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_TRI","H_HelmetCrew_I","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_aks74un","rhsusf_bino_m24_ARD"};
    respawnWeapons[] = {"rhs_weap_aks74un","rhsusf_bino_m24_ARD"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_aks74un","rhs_acc_pgs64_74un","","rhs_acc_ekp8_02",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{},{"LOP_U_ISTS_Fatigue_22",{{"FirstAidKit",1},{"rhsusf_ANPVS_14",1},{"rhsusf_patrolcap_ucp",1},{"ACE_elasticBandage",3},{"ACE_tourniquet",2},{"ACE_morphine",1},{"ACE_splint",2}}},{"LOP_V_CarrierLite_TRI",{{"SmokeShell",1,1},{"HandGrenade",1,1},{"rhs_30Rnd_545x39_7N6M_AK",3,30}}},{},"H_HelmetCrew_I","",{"rhsusf_bino_m24_ARD","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
