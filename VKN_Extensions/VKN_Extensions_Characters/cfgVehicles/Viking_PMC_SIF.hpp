class B_VKN_SIF_RIFLEMAN_PMC_01 : B_VKN_ODIN_OPERATOR_PMC_01 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_RIFLEMAN_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "B_VKN_PMC_SIF";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Vest";

    linkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_ACRREMAFGCQBblk","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_ACRREMAFGCQBblk","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ"};
    respawnMagazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_ACRREMAFGCQBblk","","rhsusf_acc_anpeq15_bk","SMA_ELCAN_SPECTER",{"SMA_30Rnd_68x43_SPC_FMJ",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_M98_Vest",{{"30Rnd_556x45_Stanag_Tracer_Red",2,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"Laserbatteries",1,1}}},{"VSM_LBT6094_breacher_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_morphine",25},{"MineDetector",1},{"30Rnd_556x45_Stanag_Tracer_Red",9,30},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Compact",{}},"rhsusf_opscore_mc_pelt_nsw","VSM_balaclava2_Black",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_SIF_AA_PMC_01 : B_VKN_SIF_RIFLEMAN_PMC_01 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_AA_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "AA";
    side = 1;
    faction = "B_VKN_PMC_SIF";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Vest";

    linkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_ACRREMAFGCQBblk","rhs_weap_fim92","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_ACRREMAFGCQBblk","rhs_weap_fim92","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","rhs_fim92_mag","SMA_30Rnd_68x43_SPC_FMJ"};
    respawnMagazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","rhs_fim92_mag","SMA_30Rnd_68x43_SPC_FMJ"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_ACRREMAFGCQBblk","","rhsusf_acc_anpeq15_bk","SMA_ELCAN_SPECTER",{"SMA_30Rnd_68x43_SPC_FMJ",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_M98_Vest",{{"30Rnd_556x45_Stanag_Tracer_Red",2,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"Laserbatteries",1,1}}},{"VSM_LBT6094_breacher_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_morphine",25},{"MineDetector",1},{"30Rnd_556x45_Stanag_Tracer_Red",9,30},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Compact",{{"rhs_fim92_mag",1,1}}},"rhsusf_opscore_mc_pelt_nsw","VSM_balaclava2_Black",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_SIF_AT_PMC_01 : B_VKN_SIF_RIFLEMAN_PMC_01 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_AT_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT";
    side = 1;
    faction = "B_VKN_PMC_SIF";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Vest";

    linkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_ACRREMAFGCQBblk","rhs_weap_M136","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_ACRREMAFGCQBblk","rhs_weap_M136","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","rhs_m136_mag","SMA_30Rnd_68x43_SPC_FMJ"};
    respawnMagazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","rhs_m136_mag","SMA_30Rnd_68x43_SPC_FMJ"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_ACRREMAFGCQBblk","","rhsusf_acc_anpeq15_bk","SMA_ELCAN_SPECTER",{"SMA_30Rnd_68x43_SPC_FMJ",30},{},""},{"rhs_weap_M136","","","",{"rhs_m136_mag",1},{},""},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_M98_Vest",{{"30Rnd_556x45_Stanag_Tracer_Red",2,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"rhs_m136_mag",1,1},{"Laserbatteries",1,1}}},{"VSM_LBT6094_breacher_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_morphine",25},{"MineDetector",1},{"30Rnd_556x45_Stanag_Tracer_Red",9,30},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Compact",{}},"rhsusf_opscore_mc_pelt_nsw","VSM_balaclava2_Black",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_SIF_AR_PMC_01 : B_VKN_SIF_RIFLEMAN_PMC_01 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_AR_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "AR";
    side = 1;
    faction = "B_VKN_PMC_SIF";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Vest";

    linkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"rhs_weap_m249_pip_L_para","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m249_pip_L_para","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_200Rnd_556x45_box"};
    respawnMagazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_200Rnd_556x45_box"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249_pip_L_para","","SMA_ANPEQ15_BLK","SMA_ELCAN_SPECTER",{"rhsusf_200Rnd_556x45_box",200},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_M98_Vest",{{"30Rnd_556x45_Stanag_Tracer_Red",2,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"Laserbatteries",1,1}}},{"VSM_LBT6094_breacher_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_morphine",25},{"MineDetector",1},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_m67",2,1},{"rhsusf_200Rnd_556x45_box",1,200},{"rhsusf_100Rnd_556x45_soft_pouch",1,100},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"VSM_OGA_OD_Backpack_Compact",{{"rhsusf_200Rnd_556x45_box",4,200}}},"rhsusf_opscore_mc_pelt_nsw","VSM_balaclava2_Black",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_SIF_DEMO_PMC_01 : B_VKN_SIF_RIFLEMAN_PMC_01 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_DEMO_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Demolitions";
    side = 1;
    faction = "B_VKN_PMC_SIF";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Vest";

    linkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_ACRREMAFGCQBblk","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_ACRREMAFGCQBblk","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","Laserbatteries","SMA_30Rnd_68x43_SPC_FMJ","Laserbatteries"};
    respawnMagazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","Laserbatteries","SMA_30Rnd_68x43_SPC_FMJ","Laserbatteries"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"SMA_ACRREMAFGCQBblk","","rhsusf_acc_anpeq15_bk","SMA_ELCAN_SPECTER",{"SMA_30Rnd_68x43_SPC_FMJ",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_M98_Vest",{{"30Rnd_556x45_Stanag_Tracer_Red",2,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"Laserbatteries",1,1}}},{"VSM_LBT6094_breacher_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_morphine",25},{"MineDetector",1},{"30Rnd_556x45_Stanag_Tracer_Red",9,30},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"ACE_Clacker",1},{"DemoCharge_Remote_Mag",8,1}}},"rhsusf_opscore_mc_pelt_nsw","VSM_balaclava2_Black",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_SIF_MEDIC_PMC_01 : B_VKN_SIF_DEMO_PMC_01 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_MEDIC_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 1;
    faction = "B_VKN_PMC_SIF";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Vest";

    linkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_HK416vfg","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416vfg","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416vfg","","rhsusf_acc_anpeq15_bk","SMA_ELCAN_SPECTER",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_M98_Vest",{{"30Rnd_556x45_Stanag_Tracer_Red",2,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"Laserbatteries",1,1}}},{"VSM_LBT6094_breacher_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_morphine",25},{"MineDetector",1},{"30Rnd_556x45_Stanag_Tracer_Red",9,30},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"ACE_bloodIV",5},{"ACE_bloodIV_500",6},{"ACE_fieldDressing",30},{"ACE_epinephrine",20},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_Flashlight_XL50",1},{"MineDetector",1},{"ACE_morphine",31},{"ACE_bloodIV_250",5},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},"rhsusf_opscore_mc_pelt_nsw","VSM_balaclava2_Black",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_SIF_SQL_PMC_01 : B_VKN_SIF_RIFLEMAN_PMC_01 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_SQL_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "SquadLeader";
    side = 1;
    faction = "B_VKN_PMC_SIF";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Vest";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_ACRREMMOEblk","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_ACRREMMOEblk","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ"};
    respawnMagazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","SMA_30Rnd_68x43_SPC_FMJ"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_ACRREMMOEblk","","rhsusf_acc_anpeq15_bk","rhsusf_acc_ACOG_USMC",{"SMA_30Rnd_68x43_SPC_FMJ",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_M98_Vest",{{"30Rnd_556x45_Stanag_Tracer_Red",2,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"Laserbatteries",1,1}}},{"VSM_FAPC_Operator_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_morphine",25},{"MineDetector",1},{"30Rnd_556x45_Stanag_Tracer_Red",9,30},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_m67",2,1}}},{},"rhsusf_opscore_mc_pelt_nsw","VSM_Shemagh_Facemask_OD_Peltor",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_SIF_HUMVEE_PMC_01 : B_VKN_ODIN_Humvee_M2_PMC_01 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_HUMVEE_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee";
    side = 1;
    faction = "B_VKN_PMC_SIF";
    crew = "B_VKN_SIF_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_SIF_RIFLEMAN_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_SIF_SQL_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_SIF_AR_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'po_factions_me\ists\data\m998_exterior_b_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'po_factions_me\ists\data\A2_parts_b_co.paa'];_unit setObjectTextureGlobal [3,'po_factions_me\ists\data\wheel_wranglermt_b_co.paa'];_unit setObjectTextureGlobal [4,'po_factions_me\ists\data\m998_mainbody_b_co.paa'];_unit setObjectTextureGlobal [5,'po_factions_me\ists\data\gratting_b_co.paa'];_unit setObjectTextureGlobal [6,'po_factions_me\ists\data\tile_exmetal_b_co.paa'];_unit setObjectTextureGlobal [7,'po_factions_me\ists\data\m1025_b_co.paa'];_unit setObjectTextureGlobal [8,'po_factions_me\ists\data\mk64mount_b_co.paa'];_unit setObjectTextureGlobal [9,''];_unit setObjectTextureGlobal [10,''];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_ISTS";

};

class B_VKN_SIF_IFV_PMC_01 : B_VKN_ODIN_M2A3_PMC_01 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_IFV_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "M2A3";
    side = 1;
    faction = "B_VKN_PMC_SIF";
    crew = "B_VKN_SIF_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_SIF_RIFLEMAN_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\base_co.paa'];_unit setObjectTextureGlobal [1,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\a3_co.paa'];_unit setObjectTextureGlobal [2,'\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class B_VKN_SIF_SOC_PMC_01 : rhsusf_mkvsoc_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_SOC_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Mk.V SOC";
    side = 1;
    faction = "B_VKN_PMC_SIF";
    crew = "B_VKN_SIF_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class m2_s_gunTurret : m2_s_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class m134_p_gunTurret : m134_p_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class mk19_s_gunTurret : mk19_s_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class camera_b_gunTurret : camera_b_gunTurret { gunnerType = "rhsusf_socom_swcc_officer"; };
        class rem_spotL_gunTurret : rem_spotL_gunTurret { gunnerType = "rhsusf_socom_swcc_officer"; };
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

class B_VKN_SIF_BADGER_PMC_01 : B_T_APC_Wheeled_01_cannon_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_BADGER_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Badger";
    side = 1;
    faction = "B_VKN_PMC_SIF";
    crew = "B_VKN_SIF_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_SIF_RIFLEMAN_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_base_olive_CO.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_adds_olive_co.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F_Exp\APC_Wheeled_01\data\APC_Wheeled_01_tows_olive_co.paa'];_unit setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa'];_unit setObjectTextureGlobal [4,'a3\Armor_F\Data\cage_olive_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class B_VKN_SIF_RADIOMAN_PMC_01 : B_VKN_SIF_RIFLEMAN_PMC_01 {
    editorPreview = \x\\addons\bvknpmcsif\data\preview\B_VKN_SIF_RADIOMAN_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Radioman";
    side = 1;
    faction = "B_VKN_PMC_SIF";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Vest";

    linkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","rhsusf_opscore_mc_pelt_nsw","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_ACRREMAFGCQBblk","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_ACRREMAFGCQBblk","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","SMA_30Rnd_68x43_SPC_FMJ","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"SMA_30Rnd_68x43_SPC_FMJ","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","SMA_30Rnd_68x43_SPC_FMJ","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    backpack = "VKN_tf_rt1523g_OGA";

    ALiVE_orbatCreator_loadout[] = {{"SMA_ACRREMAFGCQBblk","","rhsusf_acc_anpeq15_bk","SMA_ELCAN_SPECTER",{"SMA_30Rnd_68x43_SPC_FMJ",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_M98_Vest",{{"30Rnd_556x45_Stanag_Tracer_Red",2,30},{"rhsusf_mag_17Rnd_9x19_JHP",2,17}}},{"VSM_LBT6094_breacher_OGA_OD",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_morphine",25},{"MineDetector",1},{"30Rnd_556x45_Stanag_Tracer_Red",9,30},{"rhs_mag_an_m8hc",3,1},{"rhs_mag_m67",2,1}}},{"VKN_tf_rt1523g_OGA",{}},"rhsusf_opscore_mc_pelt_nsw","G_Tactical_Clear",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};