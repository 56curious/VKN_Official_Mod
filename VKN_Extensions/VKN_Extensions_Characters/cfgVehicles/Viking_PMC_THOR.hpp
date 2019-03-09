class B_VKN_THOR_AT_PMC_01 : B_VKN_ODIN_Operator_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "AT";
    side = 1;
    faction = "B_VKN_PMC_THOR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","rhs_weap_M136_hedp","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","rhs_weap_M136_hedp","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_m136_hedp_mag"};
    respawnMagazines[] = {"rhs_m136_hedp_mag"};

    backpack = "B_Parachute";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","rhsusf_acc_M952V","SMA_eotech552",{},{},"rhsusf_acc_rvg_blk"},{"rhs_weap_M136_hedp","","","",{"rhs_m136_hedp_mag",1},{},""},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_4",{{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2,30},{"rhs_m136_hedp_mag",1,1},{"Laserbatteries",1,1}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_morphine",16},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",20},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",12,30},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1}}},{"B_Parachute",{}},"VSM_Black_OPS","VSM_Balaclava2_OD_Peltor",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_THOR_BREACHER_PMC_01 : B_VKN_THOR_AT_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Breacher";
    side = 1;
    faction = "B_VKN_PMC_THOR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_M590_5RD","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_M590_5RD","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhsusf_5Rnd_00Buck","rhsusf_5Rnd_00Buck"};
    respawnMagazines[] = {"rhsusf_5Rnd_00Buck","rhsusf_5Rnd_00Buck"};

    backpack = "B_Parachute";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_M590_5RD","","","",{"rhsusf_5Rnd_00Buck",5},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_4",{{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"rhsusf_5Rnd_00Buck",5,5}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_morphine",16},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",20},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhsusf_5Rnd_00Buck",6,5},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"Laserbatteries",1,1}}},{"B_Parachute",{}},"VSM_Black_OPS","VSM_Balaclava2_OD_Peltor",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_THOR_DEMO_PMC_01 : B_VKN_THOR_BREACHER_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Demolitions";
    side = 1;
    faction = "B_VKN_PMC_THOR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {};
    respawnMagazines[] = {};

    backpack = "B_Parachute";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","rhsusf_acc_M952V","SMA_ELCAN_SPECTER",{},{},"rhsusf_acc_rvg_blk"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_4",{{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2,30},{"Laserbatteries",1,1}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_morphine",16},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",20},{"ACE_Clacker",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",6,30},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhsusf_m112x4_mag",1,1}}},{"B_Parachute",{}},"VSM_Black_OPS","VSM_Balaclava2_OD_Peltor",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_THOR_GRENADIER_PMC_01 : B_VKN_THOR_DEMO_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 1;
    faction = "B_VKN_PMC_THOR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_m4a1_carryhandle_m203","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_Parachute";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203","","rhsusf_acc_M952V","SMA_eotech552",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_4",{{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"Laserbatteries",1,1}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_morphine",16},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",20},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30},{"rhs_mag_M441_HE",3,1},{"rhs_mag_m662_red",3,1},{"1Rnd_SmokeRed_Grenade_shell",6,1}}},{"B_Parachute",{}},"VSM_Black_OPS","VSM_Balaclava2_OD_Peltor",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_THOR_MARKSMAN_PMC_01 : B_VKN_THOR_GRENADIER_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 1;
    faction = "B_VKN_PMC_THOR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m14ebrri","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag"};
    respawnMagazines[] = {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m118_special_Mag"};

    backpack = "B_Parachute";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m14ebrri","","rhsusf_acc_M952V","optic_AMS",{"rhsusf_20Rnd_762x51_m118_special_Mag",20},{},"bipod_01_F_blk"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_4",{{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"rhsusf_20Rnd_762x51_m118_special_Mag",1,20},{"Laserbatteries",1,1}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_morphine",16},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",20},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhsusf_20Rnd_762x51_m118_special_Mag",7,20}}},{"B_Parachute",{}},"VSM_Black_OPS","VSM_Balaclava2_OD_Peltor",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_THOR_MEDIC_PMC_01 : B_VKN_THOR_MARKSMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 1;
    faction = "B_VKN_PMC_THOR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {};
    respawnMagazines[] = {};

    backpack = "B_Parachute";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","rhsusf_acc_M952V","SMA_eotech552",{},{},"rhsusf_acc_rvg_blk"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_4",{{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2,30},{"Laserbatteries",1,1}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_morphine",25},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_fieldDressing",35},{"ACE_epinephrine",20},{"ACE_bloodIV_250",10},{"ACE_bloodIV_500",4},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",4,30},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1}}},{"B_Parachute",{}},"VSM_Black_OPS","VSM_Balaclava2_OD_Peltor",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_THOR_RIFLEMAN_PMC_01 : B_VKN_THOR_MARKSMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "B_VKN_PMC_THOR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {};
    respawnMagazines[] = {};

    backpack = "B_Parachute";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","rhsusf_acc_M952V","SMA_eotech552",{},{},"rhsusf_acc_rvg_blk"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_4",{{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",2,30},{"Laserbatteries",1,1}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_morphine",16},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",20},{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",12,30},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1}}},{"B_Parachute",{}},"VSM_Black_OPS","VSM_Balaclava2_OD_Peltor",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_THOR_SMG_PMC_01 : B_VKN_THOR_RIFLEMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "SMG";
    side = 1;
    faction = "B_VKN_PMC_THOR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_mk18","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_mk18","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_Parachute";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_mk18","","rhsusf_acc_anpeq15","rhsusf_acc_T1_high",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_4",{{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"Laserbatteries",1,1}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_morphine",16},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",20},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"B_Parachute",{}},"VSM_Black_OPS","VSM_Balaclava2_OD_Peltor",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_THOR_LEAD_PMC_01 : B_VKN_THOR_SMG_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squadleader";
    side = 1;
    faction = "B_VKN_PMC_THOR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_hk416d10","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_hk416d10","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_Parachute";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10","","rhsusf_acc_M952V","rhsusf_acc_ACOG_RMR",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_rvg_blk"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_4",{{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30},{"Laserbatteries",1,1}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_morphine",16},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_bloodIV_250",1},{"ACE_fieldDressing",20},{"ACE_Clacker",1},{"rhs_mag_an_m8hc",2,1},{"SmokeShellRed",2,1},{"rhsusf_m112x4_mag",1,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"B_Parachute",{}},"VSM_Black_OPS","G_Bandanna_khk",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_THOR_C130J_PMC_01 : RHS_C130J_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "C-130J";
    side = 1;
    faction = "B_VKN_PMC_THOR";
    crew = "";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_body_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air\c130j\data\c130j_wings_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};