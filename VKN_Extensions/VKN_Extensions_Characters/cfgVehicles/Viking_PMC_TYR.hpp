class B_VKN_TYR_AR_PMC_01 : B_VKN_THOR_MARKSMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "AR";
    side = 1;
    faction = "B_VKN_PMC_TYR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_6";

    linkedItems[] = {"rhsusf_mbav_mg","VSM_oga_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"rhsusf_mbav_mg","VSM_oga_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_m249","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m249","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhsusf_200Rnd_556x45_box","Laserbatteries","rhsusf_200Rnd_556x45_box","Laserbatteries"};
    respawnMagazines[] = {"rhsusf_200Rnd_556x45_box","Laserbatteries","rhsusf_200Rnd_556x45_box","Laserbatteries"};

    backpack = "VSM_OGA_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m249","","","",{"rhsusf_200Rnd_556x45_box",200},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_6",{}},{"rhsusf_mbav_mg",{{"ACE_fieldDressing",25},{"rhs_mag_an_m8hc",2,1},{"rhsusf_200Rnd_556x45_box",3,200}}},{"VSM_OGA_Backpack_Kitbag",{{"ACE_EarPlugs",1},{"ACE_morphine",25},{"MineDetector",1},{"ACE_SpraypaintRed",1},{"ACE_bloodIV_250",7},{"ACE_bloodIV_500",3},{"rhsusf_200Rnd_556x45_box",5,200}}},"VSM_oga_OPS_2","rhsusf_shemagh2_gogg_tan",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_TYR_GRENADIER_PMC_01 : B_VKN_TYR_AR_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 1;
    faction = "B_VKN_PMC_TYR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_6";

    linkedItems[] = {"rhsusf_mbav_grenadier","VSM_oga_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"rhsusf_mbav_grenadier","VSM_oga_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMA_MK18BLK_GL","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK18BLK_GL","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "VSM_OGA_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18BLK_GL","","SMA_SFFL_BLK","SMA_eotech552",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_6",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30},{"Laserbatteries",1,1}}},{"rhsusf_mbav_grenadier",{{"ACE_fieldDressing",25},{"30Rnd_556x45_Stanag_Tracer_Red",7,30},{"rhs_mag_an_m8hc",2,1}}},{"VSM_OGA_Backpack_Compact",{{"ACE_EarPlugs",1},{"ACE_morphine",25},{"MineDetector",1},{"ACE_SpraypaintRed",1},{"1Rnd_HE_Grenade_shell",5,1},{"1Rnd_SmokeRed_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",2,1},{"UGL_FlareRed_F",2,1}}},"VSM_oga_OPS_2","rhsusf_shemagh2_gogg_tan",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_TYR_HGREN_PMC_01 : B_VKN_TYR_GRENADIER_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Heavy Grenadier";
    side = 1;
    faction = "B_VKN_PMC_TYR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_6";

    linkedItems[] = {"rhsusf_mbav_grenadier","VSM_oga_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"rhsusf_mbav_grenadier","VSM_oga_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_m32","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m32","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhsusf_mag_6Rnd_M441_HE","Laserbatteries","rhsusf_mag_6Rnd_M441_HE","Laserbatteries"};
    respawnMagazines[] = {"rhsusf_mag_6Rnd_M441_HE","Laserbatteries","rhsusf_mag_6Rnd_M441_HE","Laserbatteries"};

    backpack = "VSM_OGA_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m32","","SMA_SFFL_BLK","",{"rhsusf_mag_6Rnd_M441_HE",6},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_6",{{"rhsusf_mag_6Rnd_M433_HEDP",1,6}}},{"rhsusf_mbav_grenadier",{{"ACE_fieldDressing",25},{"30Rnd_556x45_Stanag_Tracer_Red",7,30},{"rhs_mag_an_m8hc",2,1},{"rhsusf_mag_6Rnd_M441_HE",1,6}}},{"VSM_OGA_Backpack_Kitbag",{{"ACE_EarPlugs",1},{"ACE_morphine",25},{"MineDetector",1},{"ACE_SpraypaintRed",1},{"1Rnd_HE_Grenade_shell",5,1},{"1Rnd_SmokeRed_Grenade_shell",2,1},{"1Rnd_SmokeBlue_Grenade_shell",2,1},{"UGL_FlareRed_F",2,1},{"rhsusf_mag_6Rnd_M441_HE",1,6},{"rhsusf_mag_6Rnd_M433_HEDP",2,6},{"rhsusf_mag_6Rnd_M714_white",1,6},{"rhsusf_mag_6Rnd_m662_red",1,1}}},"VSM_oga_OPS_2","rhsusf_shemagh2_gogg_tan",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_TYR_MEDIC_PMC_01 : B_VKN_TYR_GRENADIER_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 1;
    faction = "B_VKN_PMC_TYR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_6";

    linkedItems[] = {"rhsusf_mbav_medic","VSM_oga_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"rhsusf_mbav_medic","VSM_oga_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};

    backpack = "VSM_OGA_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18MOEBLK","","SMA_SFFL_BLK","SMA_eotech552",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_6",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"rhsusf_mbav_medic",{{"ACE_fieldDressing",25},{"30Rnd_556x45_Stanag_Tracer_Red",7,30},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_Backpack_Kitbag",{{"ACE_EarPlugs",1},{"ACE_morphine",25},{"MineDetector",1},{"ACE_SpraypaintRed",1},{"ACE_bloodIV_250",7},{"ACE_bloodIV_500",3}}},"VSM_oga_OPS_2","rhsusf_shemagh2_gogg_tan",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_TYR_RIFLEMAN_PMC_01 : B_VKN_TYR_MEDIC_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "B_VKN_PMC_TYR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_6";

    linkedItems[] = {"rhsusf_mbav_rifleman","VSM_oga_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"rhsusf_mbav_rifleman","VSM_oga_OPS_2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};

    backpack = "VSM_OGA_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18MOEBLK","","SMA_SFFL_BLK","SMA_eotech552",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_6",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"rhsusf_mbav_rifleman",{{"ACE_fieldDressing",25},{"30Rnd_556x45_Stanag_Tracer_Red",7,30},{"rhs_mag_an_m8hc",4,1},{"rhs_mag_m67",2,1}}},{"VSM_OGA_Backpack_Compact",{{"ACE_EarPlugs",1},{"ACE_morphine",25},{"MineDetector",1},{"ACE_SpraypaintRed",1}}},"VSM_oga_OPS_2","rhsusf_shemagh2_gogg_tan",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_TYR_SQL_PMC_01 : B_VKN_TYR_RIFLEMAN_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 1;
    faction = "B_VKN_PMC_TYR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_6";

    linkedItems[] = {"rhsusf_mbav_light","H_Cap_oli","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"rhsusf_mbav_light","H_Cap_oli","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_MK18MOEBLK","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK18MOEBLK","","SMA_SFFL_BLK","SMA_eotech552",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_6",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"rhsusf_mbav_light",{{"ACE_fieldDressing",25},{"30Rnd_556x45_Stanag_Tracer_Red",7,30},{"rhs_mag_an_m8hc",2,1}}},{},"H_Cap_oli","rhsusf_shemagh_tan",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_TYR_HUMVEE_PMC_01 : B_VKN_ODIN_Humvee_M2_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee";
    side = 1;
    faction = "B_VKN_PMC_TYR";
    crew = "B_VKN_TYR_HGREN_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_TYR_MEDIC_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_TYR_RIFLEMAN_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_TYR_RIFLEMAN_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_TYR_SQL_PMC_01"; };
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

class B_VKN_TYR_DHUMVEE_PMC_01 : B_VKN_TYR_HUMVEE_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Humvee (Desert)";
    side = 1;
    faction = "B_VKN_PMC_TYR";
    crew = "B_VKN_TYR_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "B_VKN_ODIN_Vehicle_Crew_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_TYR_MEDIC_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_TYR_SQL_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_TYR_RIFLEMAN_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa'];_unit setObjectTextureGlobal [6,'rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa'];_unit setObjectTextureGlobal [7,'rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa'];_unit setObjectTextureGlobal [8,'rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Desert";

};

class B_VKN_TYR_M11A3_PMC_01 : B_VKN_ODIN_M113A3_M2_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M11A3";
    side = 1;
    faction = "B_VKN_PMC_TYR";
    crew = "B_VKN_TYR_AR_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_TYR_MEDIC_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_TYR_RIFLEMAN_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_TYR_RIFLEMAN_PMC_01"; };
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

class B_VKN_TYR_DM11A3_PMC_01 : B_VKN_TYR_M11A3_PMC_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "M11A3 (Desert)";
    side = 1;
    faction = "B_VKN_PMC_TYR";
    crew = "B_VKN_TYR_AR_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_TYR_MEDIC_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_TYR_RIFLEMAN_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_TYR_RIFLEMAN_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_h_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_h_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa'];_unit setObjectTextureGlobal [4,'rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa'];_unit setObjectTextureGlobal [5,'rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_d_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Desert";

};

class B_VKN_TYR_TRANSPORT_PMC_01 : B_T_Truck_01_covered_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Transport";
    side = 1;
    faction = "B_VKN_PMC_TYR";
    crew = "B_VKN_TYR_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_TYR_RIFLEMAN_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_TYR_MEDIC_PMC_01"; };
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