class B_VKN_FENRIR_COMMANDER_PMC_01 : B_VKN_VCG_SUNRAY_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Commander";
    side = 1;
    faction = "B_VKN_PMC_FENRIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Full";

    linkedItems[] = {"VSM_OGA_OD_Vest_2","VSM_MulticamTropic_Cap","ItemMap","ItemGPS","tf_anprc152_1","ItemWatch"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_2","VSM_MulticamTropic_Cap","ItemMap","ItemGPS","tf_anprc152_1","ItemWatch"};

    weapons[] = {"SMA_AUG_A3_F","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_AUG_A3_F","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_AUG_A3_F","","SMA_SFFL_BLK","rhsusf_acc_T1_low",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_M98_Full",{}},{"VSM_OGA_OD_Vest_2",{{"ACE_fieldDressing",15},{"ACE_EarPlugs",1},{"ACE_morphine",15},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"SmokeShellRed",4,1},{"SmokeShellBlue",3,1},{"Laserbatteries",1,1}}},{},"VSM_MulticamTropic_Cap","G_Combat",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_FENRIR_CREW_PMC_01 : B_VKN_FENRIR_COMMANDER_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Crew";
    side = 1;
    faction = "B_VKN_PMC_FENRIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Roll";

    linkedItems[] = {"VSM_OGA_OD_Vest_2","rhsusf_mich_bare_norotos_arc_alt","ItemMap","ItemGPS","tf_anprc152_1","ItemWatch"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_2","rhsusf_mich_bare_norotos_arc_alt","ItemMap","ItemGPS","tf_anprc152_1","ItemWatch"};

    weapons[] = {"SMA_AUG_A3_F","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_AUG_A3_F","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_AUG_A3_F","","SMA_SFFL_BLK","rhsusf_acc_T1_low",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_M98_Roll",{}},{"VSM_OGA_OD_Vest_2",{{"ACE_fieldDressing",15},{"ACE_EarPlugs",1},{"ACE_morphine",15},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"SmokeShellRed",4,1},{"SmokeShellBlue",3,1},{"Laserbatteries",1,1}}},{},"rhsusf_mich_bare_norotos_arc_alt","G_Tactical_Clear",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_FENRIR_MORTARB_PMC_01 : B_VKN_FENRIR_CREW_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Mortar (Bipod)";
    side = 1;
    faction = "B_VKN_PMC_FENRIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Roll";

    linkedItems[] = {"VSM_OGA_OD_Vest_2","rhsusf_mich_bare_norotos_arc_alt","ItemMap","ItemGPS","tf_anprc152_1","ItemWatch"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_2","rhsusf_mich_bare_norotos_arc_alt","ItemMap","ItemGPS","tf_anprc152_1","ItemWatch"};

    weapons[] = {"SMA_AUG_A3_F","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_AUG_A3_F","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    backpack = "I_Mortar_01_support_F";

    ALiVE_orbatCreator_loadout[] = {{"SMA_AUG_A3_F","","SMA_SFFL_BLK","rhsusf_acc_T1_low",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_M98_Roll",{}},{"VSM_OGA_OD_Vest_2",{{"ACE_fieldDressing",15},{"ACE_EarPlugs",1},{"ACE_morphine",15},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"SmokeShellRed",4,1},{"SmokeShellBlue",3,1},{"Laserbatteries",1,1}}},{"I_Mortar_01_support_F",{}},"rhsusf_mich_bare_norotos_arc_alt","G_Balaclava_TI_blk_F",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_FENRIR_MORTART_PMC_01 : B_VKN_FENRIR_MORTARB_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Mortar (Tube)";
    side = 1;
    faction = "B_VKN_PMC_FENRIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_M98_Full";

    linkedItems[] = {"VSM_OGA_OD_Vest_2","rhsusf_mich_bare_norotos_arc_alt","ItemMap","ItemGPS","tf_anprc152_1","ItemWatch"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_2","rhsusf_mich_bare_norotos_arc_alt","ItemMap","ItemGPS","tf_anprc152_1","ItemWatch"};

    weapons[] = {"SMA_AUG_A3_F","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_AUG_A3_F","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    backpack = "I_Mortar_01_weapon_F";

    ALiVE_orbatCreator_loadout[] = {{"SMA_AUG_A3_F","","SMA_SFFL_BLK","rhsusf_acc_T1_low",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_M98_Full",{}},{"VSM_OGA_OD_Vest_2",{{"ACE_fieldDressing",15},{"ACE_EarPlugs",1},{"ACE_morphine",15},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30},{"rhsusf_mag_17Rnd_9x19_JHP",2,17},{"SmokeShellRed",4,1},{"SmokeShellBlue",3,1},{"Laserbatteries",1,1}}},{"I_Mortar_01_weapon_F",{}},"rhsusf_mich_bare_norotos_arc_alt","G_Balaclava_TI_blk_F",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_FENRIR_SHOLEF_PMC_01 : B_T_MBT_01_arty_F_OCimport_02 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Sholef";
    side = 1;
    faction = "B_VKN_PMC_FENRIR";
    crew = "B_VKN_FENRIR_CREW_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_FENRIR_CREW_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_Exp\MBT_01\data\MBT_01_scorcher_olive_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa'];_unit setObjectTextureGlobal [3,'A3\Armor_F\Data\camonet_NATO_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class B_VKN_FENRIR_BARDELAS_PMC_01 : B_T_APC_Tracked_01_AA_F_OCimport_02 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Bardelas";
    side = 1;
    faction = "B_VKN_PMC_FENRIR";
    crew = "B_VKN_FENRIR_CREW_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_FENRIR_CREW_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_body_olive_co.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_exp\APC_Tracked_01\Data\mbt_01_body_olive_co.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F_exp\APC_Tracked_01\Data\apc_tracked_01_aa_tower_olive_co.paa'];_unit setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class B_VKN_FENRIR_M252_PMC_01 : RHS_M252_USMC_D_OCimport_02 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "M252";
    side = 1;
    faction = "B_VKN_PMC_FENRIR";
    crew = "rhsusf_usmc_marpat_d_rifleman";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = ""; };
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

class B_VKN_FENRIR_CANNON_PMC_01 : rhs_D30_at_vmf_OCimport_02 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Cannon";
    side = 1;
    faction = "B_VKN_PMC_FENRIR";
    crew = "rhs_vmf_flora_rifleman";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = ""; };
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
