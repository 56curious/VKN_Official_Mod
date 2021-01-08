	class O_ION_Rifleman_Winter_01 : rhssaf_army_o_m10_para_rifleman_m21_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m21s_pr_aco"};
        respawnWeapons[] = {"rhs_weap_m21s_pr_aco"};

        magazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21"};
        respawnMagazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21"};

        backpack = "rhssaf_Kitbag_smb_std_m21";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m21s_pr_aco","","","optic_Aco",{"rhsgref_30rnd_556x45_m21",30},{},""},{},{},{"TRYK_U_B_GRY_PCUs",{{"FirstAidKit",1},{"rhsgref_30rnd_556x45_m21",2,30}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhssaf_mag_br_m75",2,1},{"rhssaf_mag_brd_m83_white",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_std_m21",{{"FirstAidKit",4},{"rhsgref_30rnd_556x45_m21",6,30},{"rhssaf_mag_br_m84",2,1}}},"rhssaf_helmet_m97_olive_nocamo","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Rifleman_Winter_02 : rhssaf_army_o_m10_para_rifleman_g36_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_Wood_PCUs";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_g36kv_grip3_eo"};
        respawnWeapons[] = {"rhs_weap_g36kv_grip3_eo"};

        magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};

        backpack = "rhssaf_Kitbag_smb_std_g36";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36kv_grip3_eo","rhssaf_acc_G36_Rotex","","rhsusf_acc_eotech_552",{"rhssaf_30rnd_556x45_EPR_G36",30},{},"rhs_acc_grip_ffg2"},{},{},{"TRYK_U_B_Wood_PCUs",{{"FirstAidKit",1},{"rhssaf_30rnd_556x45_EPR_G36",4,30}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_std_g36",{{"FirstAidKit",4},{"rhssaf_30rnd_556x45_EPR_G36",6,30},{"rhssaf_mag_br_m84",2,1}}},"rhssaf_helmet_m97_black_nocamo_black_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Rifleman_Winter_03 : rhssaf_army_o_m10_para_rifleman_hk416_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_UCP_PCUs";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_hk416d10_compm4"};
        respawnWeapons[] = {"rhs_weap_hk416d10_compm4"};

        magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};

        backpack = "rhssaf_Kitbag_smb_std_hk416";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10_compm4","","","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{},{},{"TRYK_U_B_UCP_PCUs",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30},{"rhssaf_mag_br_m75",1,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhssaf_mag_brd_m83_white",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_std_hk416",{{"FirstAidKit",4},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30},{"rhssaf_mag_br_m84",2,1}}},"rhssaf_helmet_m97_olive_nocamo_black_ess_bare","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Rifleman_Ammo_Bearer_Winter_01 : rhssaf_army_o_m10_para_rifleman_ammo_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman Ammo Bearer";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m21s_pr_aco"};
        respawnWeapons[] = {"rhs_weap_m21s_pr_aco"};

        magazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21"};
        respawnMagazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21"};

        backpack = "rhssaf_Kitbag_smb_Ammo";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m21s_pr_aco","","","optic_Aco",{"rhsgref_30rnd_556x45_m21",30},{},""},{},{},{"TRYK_U_B_GRY_PCUs",{{"FirstAidKit",1},{"rhsgref_30rnd_556x45_m21",3,30}}},{"V_CarrierRigKBT_01_Olive_F",{{"rhssaf_mag_br_m75",2,1},{"rhssaf_mag_brd_m83_white",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_Ammo",{{"FirstAidKit",4},{"rhssaf_30Rnd_762x39mm_M67",5,30},{"rhssaf_mag_br_m84",2,1},{"rhssaf_mag_br_m75",2,1},{"rhsgref_10Rnd_792x57_m76",5,10},{"rhs_VOG25",3,1},{"rhs_GRD40_White",3,1}}},"rhssaf_helmet_m97_black_nocamo_black_ess_bare","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Grenadier_Winter_01 : rhssaf_army_o_m10_para_gl_ag36_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs_R";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_g36kv_ag36_eo"};
        respawnWeapons[] = {"rhs_weap_g36kv_ag36_eo"};

        magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhs_mag_M433_HEDP","rhssaf_30rnd_556x45_EPR_G36","rhs_mag_M433_HEDP"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhs_mag_M433_HEDP","rhssaf_30rnd_556x45_EPR_G36","rhs_mag_M433_HEDP"};

        backpack = "rhssaf_Kitbag_smb_std_g36";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36kv_ag36_eo","","","rhsusf_acc_eotech_552",{"rhssaf_30rnd_556x45_EPR_G36",30},{"rhs_mag_M433_HEDP",1},""},{},{},{"TRYK_U_B_GRY_PCUs_R",{{"FirstAidKit",1},{"rhssaf_30rnd_556x45_EPR_G36",4,30},{"rhs_mag_M433_HEDP",2,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhs_mag_M433_HEDP",1,1},{"rhs_mag_m714_White",1,1},{"rhs_mag_m715_Green",1,1},{"rhs_mag_m713_Red",1,1},{"rhssaf_mag_br_m75",2,1},{"rhssaf_mag_brd_m83_white",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_std_g36",{{"FirstAidKit",4},{"rhssaf_30rnd_556x45_EPR_G36",6,30},{"rhssaf_mag_br_m84",2,1}}},"rhssaf_helmet_m97_olive_nocamo_black_ess_bare","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Machinegunner_Winter_01 : rhssaf_army_o_m10_para_mgun_minimi_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo_black_ess","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo_black_ess","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_minimi_para_railed_eot552_m952v_sfmb"};
        respawnWeapons[] = {"rhs_weap_minimi_para_railed_eot552_m952v_sfmb"};

        magazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};
        respawnMagazines[] = {"rhsusf_200rnd_556x45_mixed_box","rhsusf_200rnd_556x45_mixed_box"};

        backpack = "rhssaf_Kitbag_smb_std_mgun_minimi";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_minimi_para_railed_eot552_m952v_sfmb","","rhsusf_acc_M952V","rhsusf_acc_eotech_552",{"rhsusf_200rnd_556x45_mixed_box",200},{},"rhsusf_acc_saw_bipod"},{},{},{"TRYK_U_B_GRY_PCUs",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"rhssaf_mag_br_m75",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhsusf_200rnd_556x45_mixed_box",1,200},{"rhssaf_mag_br_m75",1,1},{"rhssaf_mag_brd_m83_white",1,1}}},{"rhssaf_Kitbag_smb_std_mgun_minimi",{{"FirstAidKit",4},{"rhsusf_200rnd_556x45_mixed_box",2,200},{"rhssaf_mag_br_m84",2,1}}},"rhssaf_helmet_m97_olive_nocamo_black_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Asst_Machinegunner_Winter_01 : rhssaf_army_o_m10_para_asst_mgun_minimi_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Machinegunner";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_g36c_grip3_eo"};
        respawnWeapons[] = {"rhs_weap_g36c_grip3_eo"};

        magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};

        backpack = "rhssaf_Kitbag_smb_std_asst_mgun_minimi";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36c_grip3_eo","rhssaf_acc_G36_Rotex","","rhsusf_acc_eotech_552",{"rhssaf_30rnd_556x45_EPR_G36",30},{},"rhs_acc_grip_ffg2"},{},{},{"TRYK_U_B_GRY_PCUs",{{"FirstAidKit",1},{"rhssaf_30rnd_556x45_EPR_G36",4,30},{"rhssaf_mag_br_m75",2,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_std_asst_mgun_minimi",{{"FirstAidKit",4},{"rhs_200rnd_556x45_M_SAW",3,200},{"rhssaf_30rnd_556x45_EPR_G36",4,30},{"rhssaf_mag_br_m84",2,1}}},"rhssaf_helmet_m97_black_nocamo_black_ess_bare","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Squad_Leader_Winter_01 : rhssaf_army_o_m10_para_sq_lead_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_Wood_PCUs_R";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess_bare","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess_bare","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_hk416d10_compm4","Binocular"};
        respawnWeapons[] = {"rhs_weap_hk416d10_compm4","Binocular"};

        magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};

        backpack = "rhssaf_Kitbag_smb_std_hk416";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10_compm4","","","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{},{},{"TRYK_U_B_Wood_PCUs_R",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhssaf_mag_brd_m83_red",1,1},{"rhssaf_mag_brd_m83_blue",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_std_hk416",{{"FirstAidKit",4},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30},{"rhssaf_mag_br_m84",2,1}}},"rhssaf_helmet_m97_black_nocamo_black_ess_bare","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Fireteam_Leader_Winter_01 : rhssaf_army_o_m10_para_ft_lead_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fireteam Leader";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_UCP_PCUs_R";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_hk416d10_compm4","Binocular"};
        respawnWeapons[] = {"rhs_weap_hk416d10_compm4","Binocular"};

        magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};

        backpack = "rhssaf_Kitbag_smb_std_hk416";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10_compm4","","","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{},{},{"TRYK_U_B_UCP_PCUs_R",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhssaf_mag_brd_m83_red",1,1},{"rhssaf_mag_brd_m83_blue",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_std_hk416",{{"FirstAidKit",4},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",6,30},{"rhssaf_mag_br_m84",2,1}}},"rhssaf_helmet_m97_olive_nocamo_black_ess_bare","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Marksman_Winter_01 : rhssaf_army_o_m10_para_sniper_scarH_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs_R";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhssaf_helmet_m97_olive_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_SCARH_STD_grip2_su230a","Rangefinder"};
        respawnWeapons[] = {"rhs_weap_SCARH_STD_grip2_su230a","Rangefinder"};

        magazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m118_special","rhs_mag_20Rnd_SCAR_762x51_m118_special"};
        respawnMagazines[] = {"rhs_mag_20Rnd_SCAR_762x51_m118_special","rhs_mag_20Rnd_SCAR_762x51_m118_special"};

        backpack = "rhssaf_Kitbag_smb_std_scarh";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_SCARH_STD_grip2_su230a","","","rhsusf_acc_su230a",{"rhs_mag_20Rnd_SCAR_762x51_m118_special",20},{},"rhs_acc_grip_ffg2"},{},{},{"TRYK_U_B_GRY_PCUs_R",{{"FirstAidKit",1},{"rhs_mag_20Rnd_SCAR_762x51_m118_special",2,20}}},{"V_CarrierRigKBT_01_Olive_F",{{"rhs_mag_20Rnd_SCAR_762x51_m118_special",2,20},{"rhssaf_mag_br_m75",1,1},{"rhssaf_mag_brd_m83_white",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_std_scarh",{{"FirstAidKit",4},{"rhs_mag_20Rnd_SCAR_762x51_m118_special",6,20},{"rhssaf_mag_br_m84",2,1}}},"rhssaf_helmet_m97_olive_nocamo_black_ess_bare","",{"Rangefinder","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Rifleman_AT_Winter_01 : rhssaf_army_o_m10_para_rifleman_at_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman AT";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_g36c_grip3_eo","rhs_weap_m80"};
        respawnWeapons[] = {"rhs_weap_g36c_grip3_eo","rhs_weap_m80"};

        magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};

        backpack = "rhssaf_Kitbag_smb_std_g36";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36c_grip3_eo","rhssaf_acc_G36_Rotex","","rhsusf_acc_eotech_552",{"rhssaf_30rnd_556x45_EPR_G36",30},{},"rhs_acc_grip_ffg2"},{"rhs_weap_m80","","","",{},{},""},{},{"TRYK_U_B_GRY_PCUs",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"rhssaf_30rnd_556x45_EPR_G36",4,30}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_std_g36",{{"FirstAidKit",4},{"rhssaf_30rnd_556x45_EPR_G36",6,30},{"rhssaf_mag_br_m84",2,1}}},"rhssaf_helmet_m97_black_nocamo_black_ess","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Missile_Specialist_AT_Winter_01 : rhssaf_army_o_m10_para_spec_at_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist AT";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs_R";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_g36c_grip3_eo","rhs_weap_smaw_green"};
        respawnWeapons[] = {"rhs_weap_g36c_grip3_eo","rhs_weap_smaw_green"};

        magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhs_mag_smaw_HEAA","rhssaf_30rnd_556x45_EPR_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhs_mag_smaw_HEAA","rhssaf_30rnd_556x45_EPR_G36"};

        backpack = "rhssaf_Kitbag_smb_AT";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36c_grip3_eo","rhssaf_acc_G36_Rotex","","rhsusf_acc_eotech_552",{"rhssaf_30rnd_556x45_EPR_G36",30},{},"rhs_acc_grip_ffg2"},{"rhs_weap_smaw_green","","","",{"rhs_mag_smaw_HEAA",1},{"rhs_mag_smaw_SR",5},""},{},{"TRYK_U_B_GRY_PCUs_R",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"rhssaf_30rnd_556x45_EPR_G36",4,30},{"rhssaf_mag_br_m75",2,1}}},{"V_CarrierRigKBT_01_Olive_F",{{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_AT",{{"rhssaf_30Rnd_762x39mm_M67",4,30},{"rhs_mag_smaw_HEAA",1,1}}},"rhssaf_helmet_m97_black_nocamo_black_ess_bare","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Missile_Specialist_AA_Winter_01 : rhssaf_army_o_m10_para_spec_aa_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist [AA]";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_black_nocamo_black_ess_bare","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_g36c_compm4","rhs_weap_igla"};
        respawnWeapons[] = {"rhs_weap_g36c_compm4","rhs_weap_igla"};

        magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhs_mag_9k38_rocket","rhssaf_30rnd_556x45_EPR_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhs_mag_9k38_rocket","rhssaf_30rnd_556x45_EPR_G36"};

        backpack = "rhssaf_Kitbag_smb_AA";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36c_compm4","rhssaf_acc_G36_Rotex","","rhsusf_acc_compm4",{"rhssaf_30rnd_556x45_EPR_G36",30},{},""},{"rhs_weap_igla","","","",{"rhs_mag_9k38_rocket",1},{},""},{},{"TRYK_U_B_GRY_PCUs",{{"FirstAidKit",1},{"ACE_EarPlugs",1},{"rhssaf_30rnd_556x45_EPR_G36",4,30},{"rhssaf_mag_br_m75",2,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_AA",{{"rhssaf_30Rnd_762x39mm_M67",4,30},{"rhs_mag_9k38_rocket",1,1}}},"rhssaf_helmet_m97_black_nocamo_black_ess_bare","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Field_Medic_Winter_01 : rhssaf_army_o_m10_para_medic_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Field Medic";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_UCP_PCUs";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_g36c_grip3_eo"};
        respawnWeapons[] = {"rhs_weap_g36c_grip3_eo"};

        magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};

        backpack = "rhssaf_Kitbag_smb_Medic";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36c_grip3_eo","rhssaf_acc_G36_Rotex","","rhsusf_acc_eotech_552",{"rhssaf_30rnd_556x45_EPR_G36",30},{},"rhs_acc_grip_ffg2"},{},{},{"TRYK_U_B_UCP_PCUs",{{"FirstAidKit",1},{"rhssaf_30rnd_556x45_EPR_G36",4,30},{"rhssaf_mag_br_m75",2,1}}},{"V_CarrierRigKBT_01_Olive_F",{{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_Medic",{{"Medikit",1},{"FirstAidKit",10}}},"rhssaf_helmet_m97_olive_nocamo","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Engineer_Winter_01 : rhssaf_army_o_m10_para_engineer_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs_R";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_helmet_m97_olive_nocamo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_g36c_grip3_eo"};
        respawnWeapons[] = {"rhs_weap_g36c_grip3_eo"};

        magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};
        respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhssaf_30rnd_556x45_EPR_G36"};

        backpack = "rhssaf_Kitbag_smb_Eng";

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36c_grip3_eo","rhssaf_acc_G36_Rotex","","rhsusf_acc_eotech_552",{"rhssaf_30rnd_556x45_EPR_G36",30},{},"rhs_acc_grip_ffg2"},{},{},{"TRYK_U_B_GRY_PCUs_R",{{"FirstAidKit",1},{"rhssaf_30rnd_556x45_EPR_G36",4,30},{"rhssaf_mag_br_m75",2,1}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_Eng",{{"ToolKit",1},{"MineDetector",1},{"SatchelCharge_Remote_Mag",1,1}}},"rhssaf_helmet_m97_olive_nocamo","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Crewman_Light_Winter_01 : rhssaf_army_o_m10_para_crew_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman Light";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_B_GRY_PCUs_R";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhsusf_cvc_green_alt_helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhsusf_cvc_green_alt_helmet","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhsusf_weap_MP7A2"};
        respawnWeapons[] = {"rhsusf_weap_MP7A2"};

        magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};
        respawnMagazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};

        backpack = "rhssaf_Kitbag_smb_std_mp7a1";

        ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","","",{"rhsusf_mag_40Rnd_46x30_FMJ",40},{},""},{},{},{"TRYK_U_B_GRY_PCUs_R",{{"FirstAidKit",1},{"rhsusf_mag_40Rnd_46x30_FMJ",4,40}}},{"V_CarrierRigKBT_01_Olive_F",{{"rhssaf_mag_br_m75",2,1},{"rhssaf_mag_brd_m83_white",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{"rhssaf_Kitbag_smb_std_mp7a1",{{"FirstAidKit",4},{"rhsusf_mag_40Rnd_46x30_FMJ",6,40},{"rhssaf_mag_br_m84",2,1}}},"rhsusf_cvc_green_alt_helmet","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Officer_Winter_01 : rhssaf_army_o_m10_para_officer_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","NoGlasses"};

        uniformClass = "TRYK_U_Bts_Wood_PCUs";

        linkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_beret_para","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_light_Olive_F","rhssaf_beret_para","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_hk416d10_compm4","Binocular"};
        respawnWeapons[] = {"rhs_weap_hk416d10_compm4","Binocular"};

        magazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};
        respawnMagazines[] = {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk318_Stanag"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10_compm4","","","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_Mk318_Stanag",30},{},""},{},{},{"TRYK_U_Bts_Wood_PCUs",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",3,30}}},{"V_CarrierRigKBT_01_light_Olive_F",{{"rhssaf_mag_brd_m83_red",1,1},{"rhssaf_mag_brd_m83_blue",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{},"rhssaf_beret_para","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_ZSU_23_4V_Winter_01 : LOP_IRAN_ZSU234_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZSU-23-4V";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Crewman_Light_Winter_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_ION_Crewman_Light_Winter_01"; };
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

    class O_ION_BTR_60PB_Winter_01 : LOP_IRAN_BTR60_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-60PB";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Crewman_Light_Winter_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_ION_Crewman_Light_Winter_01"; };
            class CommanderOptics : CommanderOptics { gunnerType = "O_ION_Crewman_Light_Winter_01"; };
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
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_BTR_70_Winter_01 : LOP_IRAN_BTR70_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-70";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Crewman_Light_Winter_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_ION_Crewman_Light_Winter_01"; };
            class CommanderOptics : CommanderOptics { gunnerType = "O_ION_Crewman_Light_Winter_01"; };
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
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_BTR_80_Winter_01 : LOP_IRAN_BTR80_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "BTR-80";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Crewman_Light_Winter_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_ION_Crewman_Light_Winter_01"; };
            class CommanderOptics : CommanderOptics { gunnerType = "O_ION_Crewman_Light_Winter_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
            class Commander_Out : Commander_Out { gunnerType = ""; };
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

    class O_ION_Mi_8MT_Cargo_Winter_01 : LOP_IRAN_Mi8MT_Cargo_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-8MT Cargo";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Helicopter_Pilot_Winter_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "O_ION_Helicopter_Pilot_Winter_01"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
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

    class O_ION_Helicopter_Pilot_Winter_01 : rhssaf_airforce_o_pilot_transport_heli_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_NATO_pilot"};

        uniformClass = "U_C_CBRN_Suit_01_Blue_F";

        linkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhsusf_hgu56p_visor_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_Olive_F","rhsusf_hgu56p_visor_green","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_m92"};
        respawnWeapons[] = {"rhs_weap_m92"};

        magazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};
        respawnMagazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m92","","","",{"rhssaf_30Rnd_762x39mm_M67",30},{},""},{},{},{"U_C_CBRN_Suit_01_Blue_F",{{"FirstAidKit",1},{"rhssaf_30Rnd_762x39mm_M67",1,30}}},{"V_CarrierRigKBT_01_Olive_F",{{"rhssaf_30Rnd_762x39mm_M67",2,30}}},{},"rhsusf_hgu56p_visor_green","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Mi_8MTV_3FAB_Winter_01 : LOP_IRAN_Mi8MTV3_FAB_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-8MTV-3 FAB";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Helicopter_Pilot_Winter_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "O_ION_Helicopter_Pilot_Winter_01"; };
            class SideTurret : SideTurret { gunnerType = ""; };
            class BackTurret : BackTurret { gunnerType = ""; };
            class FrontTurret : FrontTurret { gunnerType = ""; };
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

    class O_ION_Mi_8MTV_3UPK_Winter_01 : LOP_IRAN_Mi8MTV3_UPK23_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Mi-8MTV-3 UPK";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Helicopter_Pilot_Winter_01";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = "O_ION_Helicopter_Pilot_Winter_01"; };
            class SideTurret : SideTurret { gunnerType = ""; };
            class BackTurret : BackTurret { gunnerType = ""; };
            class FrontTurret : FrontTurret { gunnerType = ""; };
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

    class O_ION_M1097A2_2D_Open_Winter_01 : rhssaf_army_o_m998_olive_2dr_halftop_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1097A2 2D/Open";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
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

    class O_ION_M1097A2_2D_Open_Winter_02 : rhssaf_army_o_m998_olive_2dr_fulltop_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1097A2 2D/Open";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
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

    class O_ION_M1025A2_Unarmed_Winter_01 : rhssaf_army_o_m1025_olive_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1025A2 Unarmed";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
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

    class O_ION_M1025A2_M2_Winter_01 : rhssaf_army_o_m1025_olive_m2_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1025A2 M2";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_01";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = "O_ION_Rifleman_Winter_02"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
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

    class O_ION_M1151A1_Winter_01 : rhssaf_army_o_m1151_olive_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1151A1";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_03";

        class Turrets : Turrets {
            class CoDriverTurret : CoDriverTurret { gunnerType = ""; };
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

    class O_ION_M1151A1_PKM_Winter_01 : rhssaf_army_o_m1151_olive_pkm_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1151A1 PKM";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_02";

        class Turrets : Turrets {
            class GPK_Turret : GPK_Turret { gunnerType = "O_ION_Rifleman_Winter_03"; };
            class CoDriverTurret : CoDriverTurret { gunnerType = ""; };
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

    class O_ION_M1152A1_Cargo_Winter_01 : rhssaf_army_o_m1152_olive_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1152A1 Cargo";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_01";

        class Turrets : Turrets {
            class CoDriverTurret : CoDriverTurret { gunnerType = "O_ION_Rifleman_Winter_02"; };
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

    class O_ION_M1152A1_RSV_Winter_01 : rhssaf_army_o_m1152_rsv_olive_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1152A1 RSV";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_01";

        class Turrets : Turrets {
            class CoDriverTurret : CoDriverTurret { gunnerType = "O_ION_Rifleman_Winter_03"; };
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

    class O_ION_M1152A1_Transport_Winter_01 : rhssaf_army_o_m1152_tcv_olive_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1152A1 Transport";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_01";

        class Turrets : Turrets {
            class CoDriverTurret : CoDriverTurret { gunnerType = "O_ION_Rifleman_Winter_02"; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
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

    class O_ION_T72MS_Winter_01 : rhssaf_army_o_t72s_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "T-72MS";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Crewman_Light_Winter_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_ION_Crewman_Light_Winter_01"; };
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

    class O_ION_Ural_3750_Winter_01 : rhssaf_army_o_ural_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural 3750";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_02";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
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

    class O_ION_Ural_3750_Open_Winter_01 : rhssaf_army_o_ural_open_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural 3750 Open";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Rifleman_Winter_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
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

    class O_ION_Ural_3750_Fuel_Winter_01 : rhssaf_army_o_ural_fuel_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural 3750 Fuel";
        side = 0;
        faction = "O_ION_Winter";
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_ABG_M93_Winter_01 : rhssaf_army_o_ags30_tripod_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "ABG M93";
        side = 0;
        faction = "O_ION_Winter";
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_ION_Rifleman_Winter_02"; };
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

    class O_ION_M02_Coyote_Winter_01 : rhssaf_army_o_nsv_tripod_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M02 Coyote";
        side = 0;
        faction = "O_ION_Winter";
        crew = "rhssaf_army_o_m93_oakleaf_summer_crew";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_ION_Rifleman_Winter_01"; };
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

    class O_ION_9K115_2Metis_M_Winter_01 : rhssaf_army_o_metis_9k115_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "9K115-2 Metis-M";
        side = 0;
        faction = "O_ION_Winter";
        crew = "rhssaf_army_o_m10_para_crew";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_ION_Rifleman_Winter_02"; };
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

    class O_ION_M2_Browning_Winter_01 : rhssaf_army_o_m2staticmg_minitripod_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 Browning";
        side = 0;
        faction = "O_ION_Winter";
        crew = "rhssaf_army_o_m10_para_crew";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "O_ION_Rifleman_Winter_03"; };
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

    class O_ION_L18_101_CAP_Winter_01 : rhssaf_airforce_o_l_18_101_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "L-18 101/CAP";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Fighter_Pilot_Winter_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_L18_Winter_01 : rhssaf_airforce_o_l_18_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "L-18";
        side = 0;
        faction = "O_ION_Winter";
        crew = "O_ION_Fighter_Pilot_Winter_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_ION_Fighter_Pilot_Winter_01 : rhssaf_airforce_o_pilot_mig29_OCimport_02 {
        author = "jonmo";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fighter Pilot";
        side = 0;
        faction = "O_ION_Winter";

        identityTypes[] = {"Head_Euro","LanguageGRE_F","G_NATO_pilot"};

        uniformClass = "rhssaf_uniform_mig29_pilot";

        linkedItems[] = {"rhs_zsh7a_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"rhs_zsh7a_alt","ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"rhs_weap_scorpion"};
        respawnWeapons[] = {"rhs_weap_scorpion"};

        magazines[] = {"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61"};
        respawnMagazines[] = {"rhsgref_20rnd_765x17_vz61","rhsgref_20rnd_765x17_vz61"};

        ALiVE_orbatCreator_loadout[] = {{"rhs_weap_scorpion","","","",{"rhsgref_20rnd_765x17_vz61",20},{},""},{},{},{"rhssaf_uniform_mig29_pilot",{{"FirstAidKit",1},{"rhsgref_20rnd_765x17_vz61",4,20},{"rhssaf_mag_br_m75",2,1},{"rhssaf_mag_brd_m83_white",1,1},{"rhssaf_mag_brd_m83_green",1,1}}},{},{},"rhs_zsh7a_alt","",{},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };
