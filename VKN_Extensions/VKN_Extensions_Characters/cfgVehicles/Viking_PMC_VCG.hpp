//Import due class being defined before base import
class B_VKN_THOR_Operator_PMC_01: B_VKN_ODIN_Operator_PMC_01 { scope = 0; };

class B_VKN_VCG_SUNRAY_PMC_01 : B_VKN_THOR_Operator_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Sunray";
    side = 1;
    faction = "B_VKN_PMC_VCG";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";

    linkedItems[] = {"VSM_OGA_OD_Vest_3","rhs_beret_milp","ItemMap","tf_anprc152_1","ItemCompass","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_3","rhs_beret_milp","ItemMap","tf_anprc152_1","ItemCompass","tf_microdagr"};

    weapons[] = {"LMG_Mk200_F","rhsusf_weap_glock17g4","Leupold_Mk4"};
    respawnWeapons[] = {"LMG_Mk200_F","rhsusf_weap_glock17g4","Leupold_Mk4"};

    magazines[] = {"200Rnd_65x39_cased_Box","rhsusf_mag_17Rnd_9x19_FMJ","200Rnd_65x39_cased_Box","rhsusf_mag_17Rnd_9x19_FMJ"};
    respawnMagazines[] = {"200Rnd_65x39_cased_Box","rhsusf_mag_17Rnd_9x19_FMJ","200Rnd_65x39_cased_Box","rhsusf_mag_17Rnd_9x19_FMJ"};

    backpack = "VKN_tf_rt1523g_OGA";

    ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","","rhsusf_acc_anpeq15_bk","SMA_ELCAN_SPECTER_4z",{"200Rnd_65x39_cased_Box",200},{},"bipod_01_F_blk"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_FMJ",17},{},""},{"VKN_CombatUniform_Tactical_Sweater_5",{{"ACE_fieldDressing",17},{"muzzle_snds_H_MG_blk_F",1},{"rhsusf_mag_17Rnd_9x19_JHP",2,17}}},{"VSM_OGA_OD_Vest_3",{{"ACE_fieldDressing",30},{"MineDetector",1},{"ACE_EntrenchingTool",1},{"200Rnd_65x39_cased_Box",1,200},{"rhs_mag_an_m8hc",2,1},{"ACE_Chemlight_HiGreen",1,1},{"SmokeShellRed",1,1},{"SmokeShellBlue",1,1}}},{"VKN_tf_rt1523g_OGA",{{"ACE_morphine",20}}},"rhs_beret_milp","rhs_googles_orange",{"Leupold_Mk4","","","",{},{},""},{"ItemMap","","tf_anprc152_1","ItemCompass","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VCG_BASEPLATE_PMC_01 : B_VKN_VCG_SUNRAY_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Baseplate";
    side = 1;
    faction = "B_VKN_PMC_VCG";

    identityTypes[] = {"Orange_Officer","LanguageENG_F","G_NATO_default"};

    uniformClass = "VSM_MulticamTropic_Crye_SS_od_shirt_Camo";

    linkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_Mich2000_2_MulticamTropic","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_RAV_operator_MulticamTropic","VSM_Mich2000_2_MulticamTropic","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMA_ACRREMblk","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_ACRREMblk","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","SMA_30Rnd_68x43_SPC_FMJ","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","SMA_30Rnd_68x43_SPC_FMJ","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    backpack = "VKN_tf_rt1523g_OGA";

    ALiVE_orbatCreator_loadout[] = {{"SMA_ACRREMblk","SMA_supp2BW_556","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_USMC",{"SMA_30Rnd_68x43_SPC_FMJ",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VSM_MulticamTropic_Crye_SS_od_shirt_Camo",{{"SMA_30Rnd_68x43_SPC_FMJ",5,30}}},{"VSM_RAV_operator_MulticamTropic",{{"SMA_30Rnd_68x43_SPC_FMJ",1,30},{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1},{"SmokeShellRed",3,1},{"SmokeShellBlue",3,1}}},{"VKN_tf_rt1523g_OGA",{}},"VSM_Mich2000_2_MulticamTropic","G_Aviator",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VCG_WOLFSDEN_PMC_01 : B_VKN_VCG_SUNRAY_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Wolfs Den";
    side = 1;
    faction = "B_VKN_PMC_VCG";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_1";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"rhs_weap_ak74m_desert_npz","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_ak74m_desert_npz","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_desert_AK"};
    respawnMagazines[] = {"rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_desert_AK"};

    backpack = "VKN_tf_rt1523g_OGA";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_ak74m_desert_npz","rhs_acc_uuk","rhs_acc_2dpZenit","rhsusf_acc_ACOG_USMC",{"rhs_30Rnd_545x39_7N22_desert_AK",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_1",{{"rhs_30Rnd_545x39_7N22_desert_AK",3,30},{"Laserbatteries",1,1}}},{"VSM_LBT6094_operator_OGA_OD",{{"rhs_30Rnd_545x39_7N22_desert_AK",11,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",3,1}}},{"VKN_tf_rt1523g_OGA",{}},"","VSM_Shemagh_Balaclava_OD_Peltor_Goggles",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VCG_FIREFLY_PMC_01 : B_VKN_VCG_WOLFSDEN_PMC_01 {
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Firefly";
    side = 1;
    faction = "B_VKN_PMC_VCG";

    identityTypes[] = {"Orange_Civilian","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_2";

    linkedItems[] = {"VSM_OGA_OD_Vest_3","H_Watchcap_camo","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_3","H_Watchcap_camo","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_AAC_MPW_9_Black","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_AAC_MPW_9_Black","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"SMA_30Rnd_762x35_BLK_EPR","SMA_30Rnd_762x35_BLK_EPR"};
    respawnMagazines[] = {"SMA_30Rnd_762x35_BLK_EPR","SMA_30Rnd_762x35_BLK_EPR"};

    backpack = "VKN_tf_rt1523g_OGA";

    ALiVE_orbatCreator_loadout[] = {{"SMA_AAC_MPW_9_Black","SMA_AAC_762_sdn6","rhsusf_acc_anpeq15_bk","SMA_eotech552_3XDOWN",{"SMA_30Rnd_762x35_BLK_EPR",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_2",{{"SMA_30Rnd_762x35_BLK_EPR",3,30},{"Laserbatteries",1,1}}},{"VSM_OGA_OD_Vest_3",{{"ACE_fieldDressing",26},{"ACE_EarPlugs",1},{"ACE_morphine",18},{"SMA_30Rnd_762x35_BLK_EPR",9,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17}}},{"VKN_tf_rt1523g_OGA",{}},"H_Watchcap_camo","VSM_Shemagh_OD",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};