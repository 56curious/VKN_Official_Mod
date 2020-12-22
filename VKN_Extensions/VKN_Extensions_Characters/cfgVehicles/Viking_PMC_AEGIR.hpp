class B_VKN_AEGIR_RIFLEMAN_PMC_01 : B_VKN_LOKI_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_UCP";

    linkedItems[] = {"VSM_OGA_OD_Vest_3","rhsusf_opscore_bk_pelt","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_3","rhsusf_opscore_bk_pelt","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMA_HK416CUSTOMCQBafgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBafgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBafgB","","rhsusf_acc_anpeq15_bk","SMA_eotechG33_3XDOWN",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_UCP",{}},{"VSM_OGA_OD_Vest_3",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30}}},{},"rhsusf_opscore_bk_pelt","rhs_ess_black",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","B_UavTerminal","tf_anprc154_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_LEADER_PMC_01 : B_VKN_AEGIR_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Leader";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_UCP";

    linkedItems[] = {"VSM_OGA_OD_Vest_1","VSM_Black_OPS_2","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_1","VSM_Black_OPS_2","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMA_HK416CUSTOMCQBafgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBafgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    backpack = "B_AssaultPack_rgr";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBafgB","","rhsusf_acc_anpeq15_bk","SMA_eotechG33_3XDOWN",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_UCP",{}},{"VSM_OGA_OD_Vest_1",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30}}},{"B_AssaultPack_rgr",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},"VSM_Black_OPS_2","rhsusf_shemagh_gogg_od",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","B_UavTerminal","tf_anprc154_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_RADIOMAN_PMC_01 : B_VKN_AEGIR_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Radioman";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_UCP";

    linkedItems[] = {"VSM_OGA_OD_Vest_3","VSM_Black_OPS_2","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_3","VSM_Black_OPS_2","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMA_HK416CUSTOMCQBafgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBafgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VKN_rt1523g_OD";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBafgB","","rhsusf_acc_anpeq15_bk","SMA_eotechG33_3XDOWN",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_UCP",{}},{"VSM_OGA_OD_Vest_3",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30}}},{"VKN_rt1523g_OD",{{"30Rnd_556x45_Stanag",6,30}}},"VSM_Black_OPS_2","rhs_ess_black",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","B_UavTerminal","tf_anprc154_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_CAPTAIN_PMC_01 : B_VKN_AEGIR_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Captain";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_2";

    linkedItems[] = {"rhs_beret_vdv2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"rhs_beret_vdv2","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"rhsusf_weap_glock17g4","rhs_pdu4"};
    respawnWeapons[] = {"rhsusf_weap_glock17g4","rhs_pdu4"};

    magazines[] = {};
    respawnMagazines[] = {};

    ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_2",{}},{},{},"rhs_beret_vdv2","",{"rhs_pdu4","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_ADMIRAL_PMC_01 : B_VKN_AEGIR_CAPTAIN_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Admiral";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_Tactical_Sweater_2";

    linkedItems[] = {"rhs_8point_marpatd","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"rhs_8point_marpatd","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"rhsusf_weap_glock17g4","rhs_pdu4"};
    respawnWeapons[] = {"rhsusf_weap_glock17g4","rhs_pdu4"};

    magazines[] = {};
    respawnMagazines[] = {};

    ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Tactical_Sweater_2",{}},{},{},"rhs_8point_marpatd","",{"rhs_pdu4","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_BREACHER_PMC_01 : B_VKN_AEGIR_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Breacher";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_UCP";

    linkedItems[] = {"VSM_OGA_OD_Vest_3","VSM_Black_OPS_2","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_3","VSM_Black_OPS_2","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_M590_5RD","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_M590_5RD","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhsusf_5Rnd_00Buck","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_5Rnd_00Buck","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhsusf_5Rnd_00Buck","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_5Rnd_00Buck","rhsusf_mag_17Rnd_9x19_JHP"};

    backpack = "VKN_Kitbag_Black";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_M590_5RD","","","",{"rhsusf_5Rnd_00Buck",5},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_UCP",{}},{"VSM_OGA_OD_Vest_3",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"rhsusf_5Rnd_00Buck",12,5}}},{"VKN_Kitbag_Black",{}},"VSM_Black_OPS_2","rhs_ess_black",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","B_UavTerminal","tf_anprc154_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_CREW_PMC_01 : B_VKN_AEGIR_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Crew";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_UCP";

    linkedItems[] = {"VSM_OGA_OD_Vest_3","rhs_beret_vdv2","ItemMap","B_UavTerminal","tf_anprc154","tf_microdagr"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_3","rhs_beret_vdv2","ItemMap","B_UavTerminal","tf_anprc154","tf_microdagr"};

    weapons[] = {"rhs_weap_m4a1_blockII_KAC_bk","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_m4a1_blockII_KAC_bk","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_blockII_KAC_bk","","","optic_Holosight_blk_F",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_UCP",{}},{"VSM_OGA_OD_Vest_3",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30}}},{},"rhs_beret_vdv2","rhs_googles_black",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","B_UavTerminal","tf_anprc154","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_DEMOLITIONS_PMC_01 : B_VKN_AEGIR_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Demolitions";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_UCP";

    linkedItems[] = {"VSM_OGA_OD_Vest_3","VSM_Black_OPS_2","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_3","VSM_Black_OPS_2","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMA_HK416CUSTOMCQBafgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBafgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    backpack = "B_AssaultPack_rgr";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBafgB","","rhsusf_acc_anpeq15_bk","SMA_eotechG33_3XDOWN",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_UCP",{}},{"VSM_OGA_OD_Vest_3",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30}}},{"B_AssaultPack_rgr",{{"ACE_Clacker",1},{"DemoCharge_Remote_Mag",7,1}}},"VSM_Black_OPS_2","rhsusf_shemagh_gogg_od",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","B_UavTerminal","tf_anprc154_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_MEDIC_PMC_01 : B_VKN_AEGIR_RIFLEMAN_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Medic";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "VKN_CombatUniform_UCP";

    linkedItems[] = {"VSM_OGA_OD_Vest_3","VKN_B_OPS2_Black_Medical","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_OGA_OD_Vest_3","VKN_B_OPS2_Black_Medical","ItemMap","B_UavTerminal","tf_anprc154_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMA_HK416CUSTOMCQBafgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBafgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    backpack = "VKN_Kitbag_Black_Medical";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBafgB","","rhsusf_acc_anpeq15_bk","SMA_eotechG33_3XDOWN",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_UCP",{}},{"VSM_OGA_OD_Vest_3",{{"ACE_fieldDressing",25},{"ACE_EarPlugs",1},{"ACE_morphine",25},{"rhsusf_mag_17Rnd_9x19_JHP",3,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30}}},{"VKN_Kitbag_Black_Medical",{{"ACE_bloodIV_250",14},{"ACE_bloodIV_500",7},{"ACE_fieldDressing",20},{"ACE_epinephrine",18},{"ACE_morphine",14}}},"VKN_B_OPS2_Black_Medical","rhsusf_shemagh_gogg_od",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","B_UavTerminal","tf_anprc154_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_SCUBA_PMC_01 : B_VKN_AEGIR_MEDIC_PMC_01 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Scuba";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_army"};

    uniformClass = "U_B_Wetsuit";

    linkedItems[] = {"V_RebreatherB","rhs_beret_vdv2","ItemMap","O_UavTerminal","tf_anprc154","ItemCompass","tf_microdagr","O_NVGoggles_urb_F"};
    respawnlinkedItems[] = {"V_RebreatherB","rhs_beret_vdv2","ItemMap","O_UavTerminal","tf_anprc154","ItemCompass","tf_microdagr","O_NVGoggles_urb_F"};

    weapons[] = {"SMA_AUG_A3_F","rhsusf_weap_glock17g4","rhs_pdu4"};
    respawnWeapons[] = {"SMA_AUG_A3_F","rhsusf_weap_glock17g4","rhs_pdu4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"SMA_AUG_A3_F","SMA_supp1BB_556","rhsusf_acc_anpeq15_bk","SMA_MICRO_T2_3XDOWN",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"U_B_Wetsuit",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",7,30},{"rhsusf_mag_17Rnd_9x19_JHP",2,17}}},{"V_RebreatherB",{}},{"B_AssaultPack_blk",{{"ACE_morphine",20},{"MineDetector",1},{"ACE_EarPlugs",1},{"ACE_fieldDressing",25},{"rhs_mag_an_m8hc",2,1},{"rhs_mag_m67",2,1}}},"rhs_beret_vdv2","G_B_Diving",{"rhs_pdu4","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc154","ItemCompass","tf_microdagr","O_NVGoggles_urb_F"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_ASSUALTBOAT_PMC_01 : rhsusf_mkvsoc_OCimport_02 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Assualt boat";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";
    crew = "B_VKN_AEGIR_CREW_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class m2_s_gunTurret : m2_s_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class m134_p_gunTurret : m134_p_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class mk19_s_gunTurret : mk19_s_gunTurret { gunnerType = "rhsusf_socom_swcc_crewman"; };
        class camera_b_gunTurret : camera_b_gunTurret { gunnerType = "B_VKN_AEGIR_CREW_PMC_01"; };
        class rem_spotL_gunTurret : rem_spotL_gunTurret { gunnerType = "rhsusf_socom_swcc_officer"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_AEGIR_BOARDING_PMC_01 : B_T_Boat_Transport_01_F_OCimport_02 {
    author = "Lion";
    scope = public;
    scopeCurator = 2;
    displayName = "Boarding team";
    side = 1;
    faction = "B_VKN_PMC_AEGIR";
    crew = "B_VKN_AEGIR_RIFLEMAN_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_AEGIR_LEADER_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_AEGIR_RIFLEMAN_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_AEGIR_BREACHER_PMC_01"; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = "B_VKN_AEGIR_MEDIC_PMC_01"; };
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
