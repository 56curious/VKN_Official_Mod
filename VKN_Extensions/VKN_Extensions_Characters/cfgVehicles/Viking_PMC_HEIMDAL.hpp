class B_VKN_HEIMDAL_RIFLEMAN_PMC_01 : B_T_Soldier_A_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_RIFLEMAN_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_3";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18MOEBLK","","SMA_SFFL_BLK","SMA_eotech552",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_3",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_fieldDressing",25},{"30Rnd_556x45_Stanag_Tracer_Red",5,30}}},{"VSM_OGA_OD_Backpack_Compact",{{"ACE_EarPlugs",1},{"ACE_morphine",25},{"MineDetector",1},{"ACE_SpraypaintRed",1}}},"VSM_OGA_OD_OPS_2","VSM_Shemagh_OD",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_HEIMDAL_POINTMAN_PMC_01 : B_VKN_HEIMDAL_RIFLEMAN_PMC_01 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_POINTMAN_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Pointman";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_3";

    linkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_breacher_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"rhs_weap_m4a1","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m4a1","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};

    backpack = "VSM_OGA_OD_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1","","SMA_SFFL_BLK","SMA_eotech552",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_grip3"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_3",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_LBT6094_breacher_OGA_OD",{{"ACE_fieldDressing",25}}},{"VSM_OGA_OD_Backpack_Compact",{{"ACE_EarPlugs",1},{"ACE_morphine",25},{"MineDetector",1},{"ACE_SpraypaintRed",1}}},"VSM_OGA_OD_OPS_2","VSM_Shemagh_OD",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_HEIMDAL_EOD_PMC_01 : B_VKN_HEIMDAL_RIFLEMAN_PMC_01 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_EOD_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "EOD";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_3";

    linkedItems[] = {"None_Blue","rhs_altyn_visordown","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"None_Blue","rhs_altyn_visordown","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {};
    respawnMagazines[] = {};

    ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_3",{{"ACE_Clacker",1},{"ACE_DefusalKit",1},{"ACE_fieldDressing",20},{"rhsusf_mag_17Rnd_9x19_JHP",2,17}}},{"None_Blue",{{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_morphine",15},{"ACE_Clacker",1},{"DemoCharge_Remote_Mag",2,1},{"Laserbatteries",1,1}}},{},"rhs_altyn_visordown","G_Balaclava_TI_blk_F",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_HEIMDAL_MEDIC_PMC_01 : B_VKN_HEIMDAL_RIFLEMAN_PMC_01 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_MEDIC_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_3";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18MOEBLK","","SMA_SFFL_BLK","SMA_eotech552",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_3",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_fieldDressing",25},{"30Rnd_556x45_Stanag_Tracer_Red",5,30}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"ACE_EarPlugs",1},{"ACE_morphine",25},{"MineDetector",1},{"ACE_SpraypaintRed",1},{"ACE_bloodIV_250",5},{"ACE_bloodIV_500",5},{"ACE_bloodIV",5},{"ACE_epinephrine",25}}},"VSM_OGA_OD_OPS_2","VSM_Shemagh_OD",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_HEIMDAL_SQUADLEADER_PMC_01 : B_VKN_HEIMDAL_RIFLEMAN_PMC_01 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_SQUADLEADER_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "SquadLeader";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_3";

    linkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_operator_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18MOEBLK","","SMA_SFFL_BLK","SMA_eotech552",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_3",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_LBT6094_operator_OGA_OD",{{"ACE_fieldDressing",25},{"30Rnd_556x45_Stanag_Tracer_Red",5,30}}},{},"VSM_OGA_OD_OPS_2","VSM_Shemagh_OD",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_HEIMDAL_GRENADIER_PMC_01 : B_VKN_HEIMDAL_SQUADLEADER_PMC_01 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_GRENADIER_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_3";

    linkedItems[] = {"VSM_LBT6094_MG_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_LBT6094_MG_OGA_OD","VSM_OGA_OD_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_MK18BLK_GL","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK18BLK_GL","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VSM_OGA_OD_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18BLK_GL","","SMA_SFFL_BLK","SMA_eotech552",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_3",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30},{"Laserbatteries",1,1}}},{"VSM_LBT6094_MG_OGA_OD",{{"ACE_fieldDressing",25},{"30Rnd_556x45_Stanag_Tracer_Red",5,30},{"1Rnd_HE_Grenade_shell",4,1},{"1Rnd_SmokeBlue_Grenade_shell",3,1},{"UGL_FlareRed_F",2,1}}},{"VSM_OGA_OD_Backpack_Kitbag",{{"ACE_EarPlugs",1},{"ACE_morphine",25},{"MineDetector",1},{"ACE_SpraypaintRed",1},{"ACE_bloodIV_250",5},{"ACE_bloodIV_500",5},{"ACE_bloodIV",5},{"ACE_epinephrine",25}}},"VSM_OGA_OD_OPS_2","VSM_Shemagh_OD",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_HEIMDAL_TRANSPORT_PMC_01 : B_T_Truck_01_transport_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_TRANSPORT_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Transport";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";
    crew = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_HEIMDAL_SQUADLEADER_PMC_01"; };
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

class B_VKN_HEIMDAL_COVERED_PMC_01 : B_T_Truck_01_covered_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_COVERED_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Transport (Covered)";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";
    crew = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01"; };
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

class B_VKN_HEIMDAL_REPAIR_PMC_01 : B_T_Truck_01_Repair_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_REPAIR_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Repair";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";
    crew = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_HEIMDAL_MEDICAL_PMC_01 : B_T_Truck_01_medical_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_MEDICAL_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medical";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";
    crew = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_HEIMDAL_FUEL_PMC_01 : B_T_Truck_01_fuel_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_FUEL_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Fuel";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";
    crew = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_HEIMDAL_M2R_PMC_01 : rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_M2R_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "M2 - Repair";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";
    crew = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_hemtt_a4\data\ogpk_base_wd_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_woodland";

};

class B_VKN_HEIMDAL_M2A_PMC_01 : rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_M2A_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "M2 Ammo";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";
    crew = "rhsusf_army_ucp_driver_armored";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = ""; };
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

class B_VKN_HEIMDAL_HUMVEE_PMC_01 : B_VKN_ODIN_Humvee_M2_PMC_01 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_HUMVEE_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";
    crew = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_HEIMDAL_SQUADLEADER_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01"; };
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

class B_VKN_HEIMDAL_M113A3_PMC_01 : B_VKN_ODIN_M113A3_M2_Ammo_PMC_01 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_M113A3_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "M113A3 Ammo";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";
    crew = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_HEIMDAL_POINTMAN_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_HEIMDAL_SQUADLEADER_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_HEIMDAL_GRENADIER_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_m113\data_new\m113a3_01_sup_wd_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_wd_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class B_VKN_HEIMDAL_TRANSPORTO_PMC_01 : B_VKN_ODIN_M977A4_Transport_PMC_01 {
    editorPreview = \x\\addons\bvknpmcheimdal\data\preview\B_VKN_HEIMDAL_TRANSPORTO_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Transport Open";
    side = 1;
    faction = "B_VKN_PMC_HEIMDAL";
    crew = "B_VKN_HEIMDAL_RIFLEMAN_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_hemtt_a4\data\CAB_CO.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hemtt_a4\data\BKIT_CO.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_hemtt_a4\data\CARGO_CO.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_hemtt_a4\data\CHASSIS_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "rhs_woodland";

};