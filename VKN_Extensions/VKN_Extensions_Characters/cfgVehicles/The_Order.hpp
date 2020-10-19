class O_the_order_Rifleman_01 : O_Soldier_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Rifleman_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";

    linkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"SMA_Mk17_16_black","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"SMA_Mk17_16_black","hgun_P07_F","Binocular"};

    magazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR"};
    respawnMagazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"SMA_Mk17_16_black","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG2_USMC",{"SMA_20Rnd_762x51mm_M80A1_EPR",20},{},""},{},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_od_shirt_Camo_SS",{{"30Rnd_556x45_Stanag",5,30}}},{"VSM_LBT1961_Black",{{"ACE_fieldDressing",23},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1},{"SmokeShellRed",1,1},{"30Rnd_556x45_Stanag",1,30}}},{"B_AssaultPack_blk",{{"ACE_CableTie",5},{"ACE_EntrenchingTool",1},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",12},{"MineDetector",1},{"ACE_fieldDressing",30},{"30Rnd_556x45_Stanag",4,30}}},"H_HelmetSpecB_blk","rhsusf_shemagh2_gogg_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Marksman_01 : O_the_order_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Marksman_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";

    linkedItems[] = {"VSM_LBT1961_Black","H_Booniehat_khk_hs","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"VSM_LBT1961_Black","H_Booniehat_khk_hs","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"srifle_DMR_06_olive_F","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"srifle_DMR_06_olive_F","hgun_P07_F","Binocular"};

    magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
    respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_06_olive_F","muzzle_snds_B_khk_F","","optic_AMS_khk",{"20Rnd_762x51_Mag",20},{},"bipod_01_F_blk"},{},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_od_shirt_Camo_SS",{{"20Rnd_762x51_Mag",3,20}}},{"VSM_LBT1961_Black",{{"ACE_fieldDressing",23},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1},{"SmokeShellRed",1,1},{"20Rnd_762x51_Mag",1,20}}},{"B_AssaultPack_blk",{{"ACE_CableTie",5},{"ACE_EntrenchingTool",1},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",12},{"MineDetector",1},{"ACE_20Rnd_762x51_Mag_Tracer",8,20}}},"H_Booniehat_khk_hs","rhsusf_shemagh2_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_AR_01 : O_the_order_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_AR_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "AR";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";

    linkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"rhs_weap_m249_pip_L","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_m249_pip_L","hgun_P07_F","Binocular"};

    magazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_200Rnd_556x45_box"};
    respawnMagazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_200Rnd_556x45_box"};

    backpack = "B_TacticalPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_L","","rhsusf_acc_anpeq16a","rhsusf_acc_ACOG2_USMC",{"rhsusf_200Rnd_556x45_box",200},{},""},{},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_od_shirt_Camo_SS",{{"rhsusf_200Rnd_556x45_box",1,200}}},{"VSM_LBT1961_Black",{{"ACE_fieldDressing",30}}},{"B_TacticalPack_blk",{{"rhsusf_200Rnd_556x45_box",6,200}}},"H_HelmetSpecB_blk","rhsusf_shemagh2_gogg_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Sniper_01 : O_the_order_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Sniper_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Sniper";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "U_O_FullGhillie_ard";

    linkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr"};

    weapons[] = {"rhs_weap_m40a5","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_m40a5","hgun_P07_F","Binocular"};

    magazines[] = {"rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag"};
    respawnMagazines[] = {"rhsusf_5Rnd_762x51_AICS_m118_special_Mag","rhsusf_5Rnd_762x51_AICS_m118_special_Mag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m40a5","","","optic_AMS",{"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",5},{},"rhsusf_acc_harris_swivel"},{},{"hgun_P07_F","","","",{},{},""},{"U_O_FullGhillie_ard",{{"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",13,5}}},{"VSM_LBT1961_Black",{{"ACE_fieldDressing",23},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1},{"SmokeShellRed",1,1}}},{"B_AssaultPack_blk",{{"ACE_CableTie",5},{"ACE_EntrenchingTool",1},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",12},{"MineDetector",1}}},"H_HelmetSpecB_blk","rhsusf_shemagh2_gogg_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_AA_01 : O_the_order_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_AA_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "AA";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";

    linkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"rhs_weap_hk416d10","rhs_weap_fim92","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_hk416d10","rhs_weap_fim92","hgun_P07_F","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10","","rhsusf_acc_anpeq15","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{"rhs_weap_fim92","","","",{},{},""},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_od_shirt_Camo_SS",{{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"ACE_morphine",7},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_LBT1961_Black",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},{"B_AssaultPack_blk",{{"rhs_fim92_mag",1,1},{"rhs_mag_30Rnd_556x45_M855A1_PMAG",4,30}}},"H_HelmetSpecB_blk","rhsusf_shemagh2_gogg_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_AT_01 : O_the_order_AA_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_AT_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "AT";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";

    linkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"rhs_weap_m4a1_blockII","rhs_weap_M136","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_m4a1_blockII","rhs_weap_M136","hgun_P07_F","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_m136_mag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_m136_mag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_blockII","","rhsusf_acc_anpeq15_wmx","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{"rhs_weap_M136","","","",{"rhs_m136_mag",1},{},""},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_od_shirt_Camo_SS",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhs_m136_mag",1,1}}},{"VSM_LBT1961_Black",{{"ACE_fieldDressing",23},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1},{"SmokeShellRed",1,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"B_AssaultPack_blk",{{"ACE_CableTie",5},{"ACE_EntrenchingTool",1},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",12},{"MineDetector",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},"H_HelmetSpecB_blk","rhsusf_shemagh2_gogg_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Personal_Guard_01 : O_the_order_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Personal_Guard_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Personal Guard";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "rhs_uniform_g3_blk";

    linkedItems[] = {"VSM_LBT1961_Black","rhsusf_opscore_bk_pelt","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"VSM_LBT1961_Black","rhsusf_opscore_bk_pelt","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"rhs_weap_mk18","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_mk18","hgun_P07_F","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk","optic_Hamr",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"hgun_P07_F","","","",{},{},""},{"rhs_uniform_g3_blk",{{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"ACE_morphine",7},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"VSM_LBT1961_Black",{{"ACE_fieldDressing",23},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",3},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1}}},{"B_AssaultPack_blk",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",9,30}}},"rhsusf_opscore_bk_pelt","G_Balaclava_TI_G_blk_F",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_SMG_01 : O_the_order_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_SMG_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "SMG";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";

    linkedItems[] = {"LOP_V_CarrierLite_BLK","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_BLK","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"rhs_weap_hk416d10","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_hk416d10","hgun_P07_F","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10","","rhsusf_acc_anpeq15_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_od_shirt_Camo_SS",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",5,30}}},{"LOP_V_CarrierLite_BLK",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",5,30},{"rhs_mag_an_m8hc",4,1},{"SmokeShellRed",4,1},{"HandGrenade",2,1}}},{"B_AssaultPack_blk",{{"ACE_CableTie",5},{"ACE_EntrenchingTool",1},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",12},{"MineDetector",1}}},"H_HelmetSpecB_blk","rhsusf_shemagh2_gogg_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Grenadier_01 : O_the_order_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Grenadier_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";

    linkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"VSM_LBT1961_Black","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"SMA_MK16_EGLM_black","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"SMA_MK16_EGLM_black","hgun_P07_F","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK16_EGLM_black","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_od_shirt_Camo_SS",{{"30Rnd_556x45_Stanag",5,30}}},{"VSM_LBT1961_Black",{{"ACE_fieldDressing",23},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1},{"SmokeShellRed",1,1},{"30Rnd_556x45_Stanag",1,30},{"1Rnd_HE_Grenade_shell",1,1}}},{"B_AssaultPack_blk",{{"ACE_CableTie",5},{"ACE_EntrenchingTool",1},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",12},{"MineDetector",1},{"ACE_fieldDressing",30},{"30Rnd_556x45_Stanag",4,30},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30},{"1Rnd_HE_Grenade_shell",1,1},{"1Rnd_Smoke_Grenade_shell",1,1}}},"H_HelmetSpecB_blk","rhsusf_shemagh2_gogg_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_AK_01 : O_the_order_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_AK_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "AK";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";

    linkedItems[] = {"VSM_MBSS_BLK","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"VSM_MBSS_BLK","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"rhs_weap_ak74n_npz","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_ak74n_npz","hgun_P07_F","Binocular"};

    magazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_AK"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74n_npz","rhs_acc_dtk1983","rhs_acc_2dpZenit","rhsusf_acc_ACOG2_USMC",{"rhs_30Rnd_545x39_7N6M_AK",30},{},""},{},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_od_shirt_Camo_SS",{{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"ACE_morphine",7},{"rhs_30Rnd_545x39_7N6M_AK",2,30},{"rhs_30Rnd_545x39_7N22_AK",1,30}}},{"VSM_MBSS_BLK",{{"ACE_fieldDressing",23},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",3},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1}}},{"B_AssaultPack_blk",{{"rhs_30Rnd_545x39_7N6M_AK",1,30},{"rhs_30Rnd_545x39_7N22_AK",10,30}}},"H_HelmetSpecB_blk","rhsusf_shemagh2_gogg_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Officer_01 : O_the_order_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Officer_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Officer";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";

    linkedItems[] = {"VSM_LBT1961_Black","rhs_beret_mp2","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT1961_Black","rhs_beret_mp2","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr"};

    weapons[] = {"SMG_02_F","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"SMG_02_F","hgun_P07_F","Binocular"};

    magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"SMG_02_F","muzzle_snds_L","rhsusf_acc_anpeq15_bk","rhsusf_acc_g33_T1",{"30Rnd_9x21_Mag_SMG_02",30},{},""},{},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_od_shirt_Camo_SS",{{"30Rnd_9x21_Mag_SMG_02",5,30}}},{"VSM_LBT1961_Black",{{"ACE_fieldDressing",23},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1},{"SmokeShellRed",1,1}}},{"B_AssaultPack_blk",{{"ACE_CableTie",5},{"ACE_EntrenchingTool",1},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",12},{"MineDetector",1},{"30Rnd_9x21_Mag_SMG_02",5,30}}},"rhs_beret_mp2","rhsusf_shemagh2_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Radioman_01 : O_the_order_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Radioman_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Radioman";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_od_shirt_Camo_SS";

    linkedItems[] = {"VSM_MBSS_BLK","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"VSM_MBSS_BLK","H_HelmetSpecB_blk","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"rhs_weap_hk416d145","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_hk416d145","hgun_P07_F","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "tf_rt1523g_big_bwmod";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d145","","rhsusf_acc_anpeq15","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip1"},{},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_od_shirt_Camo_SS",{{"ACE_CableTie",4},{"ACE_EntrenchingTool",1},{"ACE_morphine",7},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_MBSS_BLK",{{"ACE_fieldDressing",23},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",3},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1}}},{"tf_rt1523g_big_bwmod",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",10,30}}},"H_HelmetSpecB_blk","rhsusf_shemagh2_gogg_grn",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Pilot_01 : O_the_order_SMG_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Pilot_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Pilot";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "U_B_PilotCoveralls";

    linkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr"};
    respawnlinkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr"};

    weapons[] = {"SMG_05_F","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"SMG_05_F","hgun_P07_F","Binocular"};

    magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};

    backpack = "rhsusf_eject_Parachute_backpack";

    ALiVE_orbatCreator_loadout[] = {{"SMG_05_F","muzzle_snds_L","","rhsusf_acc_T1_high",{"30Rnd_9x21_Mag_SMG_02",30},{},""},{},{"hgun_P07_F","","","",{},{},""},{"U_B_PilotCoveralls",{{"30Rnd_9x21_Mag_SMG_02",5,30}}},{},{"rhsusf_eject_Parachute_backpack",{}},"H_PilotHelmetFighter_B","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Crewman_01 : O_the_order_Pilot_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Crewman_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Crewman";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_Camo_SS";

    linkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","H_HelmetCrew_B","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","H_HelmetCrew_B","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"rhs_weap_hk416d10","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_hk416d10","hgun_P07_F","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10","","rhsusf_acc_anpeq15_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_Camo_SS",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",5,30}}},{"VSM_LBT6094_breacher_OGA_OD",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",7,30},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",1,1}}},{"VSM_OGA_OD_Backpack_Compact",{{"ACE_CableTie",5},{"ACE_EntrenchingTool",1},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",12},{"MineDetector",1}}},"H_HelmetCrew_B","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Leader_01 : O_the_order_Officer_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Leader_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Leader";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Tanker","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_Crye_Tee_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","rhsusf_Bowman","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","rhsusf_Bowman","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr"};

    weapons[] = {"SMG_03_TR_khaki","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"SMG_03_TR_khaki","hgun_P07_F","Binocular"};

    magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};
    respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03"};

    ALiVE_orbatCreator_loadout[] = {{"SMG_03_TR_khaki","muzzle_snds_570","ACE_acc_pointer_green","optic_ACO_grn",{"50Rnd_570x28_SMG_03",50},{},""},{},{"hgun_P07_F","","","",{},{},""},{"VSM_MulticamTropic_Crye_Tee_Camo",{{"50Rnd_570x28_SMG_03",1,50}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_fieldDressing",34},{"ALIVE_Tablet",1},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1},{"SmokeShellRed",1,1},{"16Rnd_9x21_red_Mag",19,17}}},{},"rhsusf_Bowman","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Humvee_01 : rhsusf_m1043_w_m2_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Humvee_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Humvee";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Rifleman_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "O_the_order_Rifleman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_hmmwv\textures\m1043_g_co.paa'];_unit setObjectTextureGlobal [8,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class O_the_order_M2A3_01 : RHS_M2A3_BUSKIII_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_M2A3_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "M2A3";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_the_order_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa'];_unit setObjectTextureGlobal [1,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa'];_unit setObjectTextureGlobal [2,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa'];_unit setObjectTextureGlobal [3,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa'];_unit setObjectTextureGlobal [4,'\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class O_the_order_M1A1_01 : rhsusf_m1a1fep_d_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_M1A1_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "M1A1";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_the_order_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_01_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1fep_od_02_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_m1a1\data\rhsusf_m1a1aim_03_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_m1a1\loaderspintle\data\loaderspintle_wd_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "OD";

};

class O_the_order_Navy_01 : O_the_order_SMG_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Navy_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Navy";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_OGA_od_Camo";

    linkedItems[] = {"LOP_V_CarrierLite_BLK","rhsusf_opscore_bk_pelt","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};
    respawnlinkedItems[] = {"LOP_V_CarrierLite_BLK","rhsusf_opscore_bk_pelt","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"};

    weapons[] = {"rhs_weap_hk416d10","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_hk416d10","hgun_P07_F","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk","rhsusf_acc_compm4",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"hgun_P07_F","","","",{},{},""},{"VSM_OGA_od_Camo",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",4,30}}},{"LOP_V_CarrierLite_BLK",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",5,30},{"rhs_mag_an_m8hc",4,1},{"SmokeShellRed",4,1},{"HandGrenade",2,1}}},{"B_AssaultPack_blk",{{"ACE_CableTie",5},{"ACE_EntrenchingTool",1},{"ACE_SpraypaintGreen",1},{"ACE_Flashlight_XL50",1},{"ACE_MapTools",1},{"ACE_morphine",12},{"MineDetector",1}}},"rhsusf_opscore_bk_pelt","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr","NVGoggles_OPFOR"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_assualt_boat_01 : B_Boat_Transport_01_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_assualt_boat_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "assualt_boat";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Navy_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_the_order_Navy_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_the_order_Navy_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_the_order_Navy_01"; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = "O_the_order_Navy_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\boat_f\boat_transport_01\data\boat_transport_01_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Black";

};

class O_the_order_MRAP_01 : rhsusf_M1220_M2_usarmy_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_MRAP_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "MRAP";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Rifleman_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "O_the_order_Rifleman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_caiman\data\cmn_Body_WD_CO.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_caiman\data\cmn_Chassis_WD_CO.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_caiman\data\cmn_Accessory2_WD_CO.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_caiman\data\cmn_Armor_WD_CO.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_caiman\data\cmn_wheel_wd_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_caiman\data\cmn_AMB_WD_CO.paa'];_unit setObjectTextureGlobal [8,'rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_woodland";

};

class O_the_order_F22_01 : rhsusf_f22_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_F22_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "F-22";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Pilot_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsusf\addons\rhsusf_f22\data\f22_b1.paa'];_unit setObjectTextureGlobal [1,'\rhsusf\addons\rhsusf_f22\data\f22_wing_spads.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class O_the_order_A10A_01 : RHS_A10_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_A10A_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "A-10A";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Pilot_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Bardelas_01 : B_APC_Tracked_01_AA_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Bardelas_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Bardelas";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_the_order_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_body_olive_co.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_tower_olive_co.paa'];_unit setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class O_the_order_CH_47F_01 : RHS_CH_47F_light_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_CH_47F_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "CH-47F";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Pilot_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "O_the_order_Pilot_01"; };
        class MainTurret : MainTurret { gunnerType = "O_the_order_Crewman_01"; };
        class RightDoorGun : RightDoorGun { gunnerType = "O_the_order_Crewman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_the_order_Rifleman_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_the_order_Rifleman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class O_the_order_UH_60M_01 : RHS_UH60M_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_UH_60M_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "UH-60M";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Pilot_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "O_the_order_Pilot_01"; };
        class MainTurret : MainTurret { gunnerType = "O_the_order_Crewman_01"; };
        class RightDoorGun : RightDoorGun { gunnerType = "O_the_order_Crewman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class O_the_order_AH_1Z_01 : RHS_AH1Z_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_AH_1Z_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "AH-1Z";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Pilot_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_the_order_Pilot_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Sholef_01 : B_MBT_01_arty_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Sholef_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Sholef";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_the_order_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_Exp\MBT_01\data\MBT_01_scorcher_olive_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa'];_unit setObjectTextureGlobal [3,'A3\Armor_F\Data\camonet_NATO_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class O_the_order_HEMMT_01 : rhsusf_M977A4_BKIT_M2_usarmy_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_HEMMT_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "HEMMT";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Rifleman_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "O_the_order_Rifleman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_wd_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_woodland";

};

class O_the_order_AMMO_01 : rhsusf_M977A4_AMMO_usarmy_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_AMMO_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "AMMO";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Rifleman_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_Repair_01 : rhsusf_M977A4_REPAIR_usarmy_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Repair_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Repair";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Rifleman_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_SOC_01 : rhsusf_mkvsoc_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_SOC_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "SOC";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Navy_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_the_order_Navy_01"; };
        class m2_s_gunTurret : m2_s_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class m134_p_gunTurret : m134_p_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class mk19_s_gunTurret : mk19_s_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class camera_b_gunTurret : camera_b_gunTurret { gunnerType = "O_the_order_Officer_01"; };
        class rem_spotL_gunTurret : rem_spotL_gunTurret { gunnerType = "O_the_order_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_the_order_C130J_01 : RHS_C130J_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_C130J_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "C-130J";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Pilot_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "O_the_order_Pilot_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class O_the_order_Humvee_Unarmed_01 : rhsusf_m1025_w_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Humvee_Unarmed_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Humvee Unarmed";
    side = 0;
    faction = "O_ODR";
    crew = "O_the_order_Rifleman_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_the_order_Rifleman_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "O_the_order_Rifleman_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "O_the_order_Officer_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class O_the_order_Second_01 : O_the_order_Leader_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_the_order_Second_01.paa;
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Second";
    side = 0;
    faction = "O_ODR";

    identityTypes[] = {"Head_Tanoan","LanguagePER_F","G_IRAN_default"};

    uniformClass = "VSM_MulticamTropic_tan_pants_Camo_SS";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","rhsusf_bowman_cap","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","rhsusf_bowman_cap","ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr"};

    weapons[] = {"SMA_L85RIS","hgun_P07_F","Binocular"};
    respawnWeapons[] = {"SMA_L85RIS","hgun_P07_F","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_red_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_red_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_red_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_red_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_L85RIS","SMA_supp2b_556","ACE_acc_pointer_green","SMA_ELCAN_SPECTER_ARDRDS",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_red_Mag",17},{},""},{"VSM_MulticamTropic_tan_pants_Camo_SS",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_fieldDressing",34},{"ALIVE_Tablet",1},{"rhs_mag_an_m8hc",3,1},{"SmokeShellBlue",1,1},{"SmokeShellRed",1,1},{"16Rnd_9x21_red_Mag",18,17}}},{},"rhsusf_bowman_cap","VSM_Shemagh_OD",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_4","ItemCompass","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

//////
//////
//////

/*
class Box_East_Ammo_F; // CUP_RUBasicAmmunitionBox
class Box_NATO_Ammo_F; // CUP_USBasicAmmunitionBox
class Box_East_Wps_F; // CUP_RUBasicWeaponsBox
class Box_NATO_Wps_F; // CUP_USBasicWeaponsBox
class Box_East_Support_F; // CUP_RUSpecialWeaponsBox
class Box_NATO_Support_F; // CUP_USSpecialWeaponsBox
class Box_East_WpsLaunch_F; // CUP_RULaunchersBox
class Box_NATO_WpsLaunch_F; // CUP_USLaunchersBox
class Box_East_Uniforms_F; // CUP_RUBasicWeaponsBox
class Box_NATO_Uniforms_F; // CUP_USBasicWeaponsBox
class O_SupplyCrate_F; // CUP_RUVehicleBox
class B_SupplyCrate_F; // CUP_USVehicleBox

class O_ODR_AmmoBox : Box_East_Ammo_F {
    author = ALiVE ORBAT CREATOR;
    displayName = The Order Ammo Box;
    class TransportMagazines {
        mag_xx(30Rnd_556x45_Stanag,50);
        mag_xx(rhs_mag_an_m8hc,50);
        mag_xx(SmokeShellBlue,50);
        mag_xx(SmokeShellRed,50);
        mag_xx(20Rnd_762x51_Mag,50);
        mag_xx(ACE_20Rnd_762x51_Mag_Tracer,50);
        mag_xx(rhsusf_200Rnd_556x45_box,50);
        mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855A1_PMAG,50);
        mag_xx(rhs_m136_mag,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,50);
        mag_xx(HandGrenade,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(1Rnd_Smoke_Grenade_shell,50);
        mag_xx(rhs_30Rnd_545x39_7N6M_AK,50);
        mag_xx(rhs_30Rnd_545x39_7N22_AK,50);
        mag_xx(30Rnd_9x21_Mag_SMG_02,50);
        mag_xx(50Rnd_570x28_SMG_03,50);
        mag_xx(16Rnd_9x21_red_Mag,50);
    };
    class TransportWeapons {
    };
    class TransportItems {
    };
};
class O_ODR_WeaponsBox : Box_East_Wps_F {
    author = ALiVE ORBAT CREATOR;
    displayName = The Order Weapons Box;
    class TransportMagazines {
        mag_xx(SMA_20Rnd_762x51mm_M80A1_EPR,50);
        mag_xx(20Rnd_762x51_Mag,50);
        mag_xx(rhsusf_200Rnd_556x45_box,50);
        mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(rhs_30Rnd_545x39_7N6M_AK,50);
        mag_xx(30Rnd_9x21_Mag_SMG_02,50);
        mag_xx(50Rnd_570x28_SMG_03,50);
        mag_xx(16Rnd_9x21_red_Mag,50);
    };
    class TransportWeapons {
        weap_xx(SMA_Mk17_16_black,10);
        weap_xx(hgun_P07_F,10);
        weap_xx(srifle_DMR_06_olive_F,10);
        weap_xx(rhs_weap_m249_pip_L,10);
        weap_xx(rhs_weap_m40a5,10);
        weap_xx(rhs_weap_hk416d10,10);
        weap_xx(rhs_weap_m4a1_blockII,10);
        weap_xx(rhs_weap_mk18,10);
        weap_xx(SMA_MK16_EGLM_black,10);
        weap_xx(rhs_weap_ak74n_npz,10);
        weap_xx(SMG_02_F,10);
        weap_xx(rhs_weap_hk416d145,10);
        weap_xx(SMG_05_F,10);
        weap_xx(SMG_03_TR_khaki,10);
        weap_xx(SMA_L85RIS,10);
    };
    class TransportItems {
        item_xx(rhsusf_acc_anpeq15_bk,10);
        item_xx(rhsusf_acc_ACOG2_USMC,10);
        item_xx(muzzle_snds_B_khk_F,10);
        item_xx(optic_AMS_khk,10);
        item_xx(bipod_01_F_blk,10);
        item_xx(rhsusf_acc_anpeq16a,10);
        item_xx(optic_AMS,10);
        item_xx(rhsusf_acc_harris_swivel,10);
        item_xx(rhsusf_acc_anpeq15,10);
        item_xx(rhsusf_acc_grip3,10);
        item_xx(rhsusf_acc_anpeq15_wmx,10);
        item_xx(rhsusf_acc_nt4_black,10);
        item_xx(optic_Hamr,10);
        item_xx(rhsusf_acc_compm4,10);
        item_xx(rhs_acc_dtk1983,10);
        item_xx(rhs_acc_2dpZenit,10);
        item_xx(muzzle_snds_L,10);
        item_xx(rhsusf_acc_g33_T1,10);
        item_xx(rhsusf_acc_grip1,10);
        item_xx(rhsusf_acc_T1_high,10);
        item_xx(muzzle_snds_570,10);
        item_xx(ACE_acc_pointer_green,10);
        item_xx(optic_ACO_grn,10);
        item_xx(SMA_supp2b_556,10);
        item_xx(SMA_ELCAN_SPECTER_ARDRDS,10);
        item_xx(SMA_Gripod_01,10);
    };
};
class O_ODR_LaunchersBox : Box_East_WpsLaunch_F {
    author = ALiVE ORBAT CREATOR;
    displayName = The Order Launchers Box;
    class TransportMagazines {
        mag_xx(rhs_fim92_mag,5);
        mag_xx(rhs_m136_mag,5);
    };
    class TransportWeapons {
        weap_xx(rhs_weap_fim92,5);
        weap_xx(rhs_weap_M136,5);
    };
    class TransportItems {
    };
};
class O_ODR_UniformBox : Box_East_Uniforms_F {
    author = ALiVE ORBAT CREATOR;
    displayName = The Order Uniform Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(VSM_MulticamTropic_od_shirt_Camo_SS,15);
        item_xx(U_O_FullGhillie_ard,15);
        item_xx(rhs_uniform_g3_blk,15);
        item_xx(U_B_PilotCoveralls,15);
        item_xx(VSM_MulticamTropic_Camo_SS,15);
        item_xx(VSM_MulticamTropic_Crye_Tee_Camo,15);
        item_xx(VSM_OGA_od_Camo,15);
        item_xx(VSM_MulticamTropic_tan_pants_Camo_SS,15);
    };
};
class O_ODR_SupportBox : Box_East_Support_F {
    author = ALiVE ORBAT CREATOR;
    displayName = The Order Support Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(Binocular,10);
        item_xx(VSM_LBT1961_Black,10);
        item_xx(H_HelmetSpecB_blk,10);
        item_xx(rhsusf_shemagh2_gogg_grn,10);
        item_xx(B_AssaultPack_blk,10);
        item_xx(NVGoggles_OPFOR,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(tf_microdagr,10);
        item_xx(tf_anprc152_4,10);
        item_xx(ItemGPS,10);
        item_xx(H_Booniehat_khk_hs,10);
        item_xx(rhsusf_shemagh2_grn,10);
        item_xx(B_TacticalPack_blk,10);
        item_xx(rhsusf_opscore_bk_pelt,10);
        item_xx(G_Balaclava_TI_G_blk_F,10);
        item_xx(LOP_V_CarrierLite_BLK,10);
        item_xx(VSM_MBSS_BLK,10);
        item_xx(rhs_beret_mp2,10);
        item_xx(tf_rt1523g_big_bwmod,10);
        item_xx(H_PilotHelmetFighter_B,10);
        item_xx(rhsusf_eject_Parachute_backpack,10);
        item_xx(VSM_LBT6094_breacher_OGA_OD,10);
        item_xx(H_HelmetCrew_B,10);
        item_xx(VSM_OGA_OD_Backpack_Compact,10);
        item_xx(VSM_FAPC_Operator_OGA_OD,10);
        item_xx(rhsusf_Bowman,10);
        item_xx(VSM_Shemagh_Balaclava2_OD_Peltor_Goggles,10);
        item_xx(rhsusf_bowman_cap,10);
        item_xx(VSM_Shemagh_OD,10);
    };
};
class O_ODR_SupplyBox : O_SupplyCrate_F {
    author = ALiVE ORBAT CREATOR;
    displayName = The Order Supply Box;
    class TransportMagazines {
        mag_xx(30Rnd_556x45_Stanag,50);
        mag_xx(rhs_mag_an_m8hc,50);
        mag_xx(SmokeShellBlue,50);
        mag_xx(SmokeShellRed,50);
        mag_xx(20Rnd_762x51_Mag,50);
        mag_xx(ACE_20Rnd_762x51_Mag_Tracer,50);
        mag_xx(rhsusf_200Rnd_556x45_box,50);
        mag_xx(rhsusf_5Rnd_762x51_AICS_m118_special_Mag,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855A1_PMAG,50);
        mag_xx(rhs_m136_mag,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,50);
        mag_xx(HandGrenade,50);
        mag_xx(1Rnd_HE_Grenade_shell,50);
        mag_xx(1Rnd_Smoke_Grenade_shell,50);
        mag_xx(rhs_30Rnd_545x39_7N6M_AK,50);
        mag_xx(rhs_30Rnd_545x39_7N22_AK,50);
        mag_xx(30Rnd_9x21_Mag_SMG_02,50);
        mag_xx(50Rnd_570x28_SMG_03,50);
        mag_xx(16Rnd_9x21_red_Mag,50);
    };
    class TransportWeapons {
        weap_xx(SMA_Mk17_16_black,10);
        weap_xx(hgun_P07_F,10);
        weap_xx(srifle_DMR_06_olive_F,10);
        weap_xx(rhs_weap_m249_pip_L,10);
        weap_xx(rhs_weap_m40a5,10);
        weap_xx(rhs_weap_hk416d10,10);
        weap_xx(rhs_weap_m4a1_blockII,10);
        weap_xx(rhs_weap_mk18,10);
        weap_xx(SMA_MK16_EGLM_black,10);
        weap_xx(rhs_weap_ak74n_npz,10);
        weap_xx(SMG_02_F,10);
        weap_xx(rhs_weap_hk416d145,10);
        weap_xx(SMG_05_F,10);
        weap_xx(SMG_03_TR_khaki,10);
        weap_xx(SMA_L85RIS,10);
        weap_xx(rhs_weap_fim92,10);
        weap_xx(rhs_weap_M136,10);
    };
    class TransportItems {
        item_xx(rhsusf_acc_anpeq15_bk,10);
        item_xx(rhsusf_acc_ACOG2_USMC,10);
        item_xx(muzzle_snds_B_khk_F,10);
        item_xx(optic_AMS_khk,10);
        item_xx(bipod_01_F_blk,10);
        item_xx(rhsusf_acc_anpeq16a,10);
        item_xx(optic_AMS,10);
        item_xx(rhsusf_acc_harris_swivel,10);
        item_xx(rhsusf_acc_anpeq15,10);
        item_xx(rhsusf_acc_grip3,10);
        item_xx(rhsusf_acc_anpeq15_wmx,10);
        item_xx(rhsusf_acc_nt4_black,10);
        item_xx(optic_Hamr,10);
        item_xx(rhsusf_acc_compm4,10);
        item_xx(rhs_acc_dtk1983,10);
        item_xx(rhs_acc_2dpZenit,10);
        item_xx(muzzle_snds_L,10);
        item_xx(rhsusf_acc_g33_T1,10);
        item_xx(rhsusf_acc_grip1,10);
        item_xx(rhsusf_acc_T1_high,10);
        item_xx(muzzle_snds_570,10);
        item_xx(ACE_acc_pointer_green,10);
        item_xx(optic_ACO_grn,10);
        item_xx(SMA_supp2b_556,10);
        item_xx(SMA_ELCAN_SPECTER_ARDRDS,10);
        item_xx(SMA_Gripod_01,10);
        item_xx(Binocular,10);
        item_xx(VSM_LBT1961_Black,10);
        item_xx(H_HelmetSpecB_blk,10);
        item_xx(rhsusf_shemagh2_gogg_grn,10);
        item_xx(B_AssaultPack_blk,10);
        item_xx(NVGoggles_OPFOR,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(tf_microdagr,10);
        item_xx(tf_anprc152_4,10);
        item_xx(ItemGPS,10);
        item_xx(H_Booniehat_khk_hs,10);
        item_xx(rhsusf_shemagh2_grn,10);
        item_xx(B_TacticalPack_blk,10);
        item_xx(rhsusf_opscore_bk_pelt,10);
        item_xx(G_Balaclava_TI_G_blk_F,10);
        item_xx(LOP_V_CarrierLite_BLK,10);
        item_xx(VSM_MBSS_BLK,10);
        item_xx(rhs_beret_mp2,10);
        item_xx(tf_rt1523g_big_bwmod,10);
        item_xx(H_PilotHelmetFighter_B,10);
        item_xx(rhsusf_eject_Parachute_backpack,10);
        item_xx(VSM_LBT6094_breacher_OGA_OD,10);
        item_xx(H_HelmetCrew_B,10);
        item_xx(VSM_OGA_OD_Backpack_Compact,10);
        item_xx(VSM_FAPC_Operator_OGA_OD,10);
        item_xx(rhsusf_Bowman,10);
        item_xx(VSM_Shemagh_Balaclava2_OD_Peltor_Goggles,10);
        item_xx(rhsusf_bowman_cap,10);
        item_xx(VSM_Shemagh_OD,10);
        item_xx(VSM_MulticamTropic_od_shirt_Camo_SS,10);
        item_xx(U_O_FullGhillie_ard,10);
        item_xx(rhs_uniform_g3_blk,10);
        item_xx(U_B_PilotCoveralls,10);
        item_xx(VSM_MulticamTropic_Camo_SS,10);
        item_xx(VSM_MulticamTropic_Crye_Tee_Camo,10);
        item_xx(VSM_OGA_od_Camo,10);
        item_xx(VSM_MulticamTropic_tan_pants_Camo_SS,10);
    };
};

// Copy this part to ALiVE logistics static data
[ALIVE_factionDefaultSupplies, "O_ODR", ["O_ODR_AmmoBox","O_ODR_WeaponsBox","O_ODR_LaunchersBox","O_ODR_UniformBox","O_ODR_SupportBox","O_ODR_SupplyBox"]] call ALIVE_fnc_hashSet;
*/
