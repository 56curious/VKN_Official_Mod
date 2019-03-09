class B_VKN_VIS_AGENT1_PMC_01 : B_VKN_ODIN_OPERATOR_PMC_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_AGENT1_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Agent 1";
    side = 1;
    faction = "B_VKN_PMC_VIS";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_OrestesBody";

    linkedItems[] = {"V_Rangemaster_belt","H_Bandanna_surfer","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","H_Bandanna_surfer","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_LegStrapBag_black_F";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBvfgB","","rhsusf_acc_anpeq15_bk_light","optic_Holosight_smg_blk_F",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"U_OrestesBody",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"V_Rangemaster_belt",{{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_morphine",9},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"B_LegStrapBag_black_F",{{"ACE_fieldDressing",23},{"ACE_morphine",10},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"H_Bandanna_surfer","G_Aviator",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'decal_sovietbear'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "decal_sovietbear";

};

class B_VKN_VIS_AGENT2_PMC_01 : B_VKN_VIS_AGENT1_PMC_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_AGENT2_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Agent 2";
    side = 1;
    faction = "B_VKN_PMC_VIS";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_C_HunterBody_grn";

    linkedItems[] = {"V_Rangemaster_belt","H_Booniehat_khk","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","H_Booniehat_khk","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_LegStrapBag_black_F";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBvfgB","","rhsusf_acc_anpeq15_bk_light","optic_Holosight_smg_blk_F",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"U_C_HunterBody_grn",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30},{"Laserbatteries",1,1}}},{"V_Rangemaster_belt",{{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_morphine",9},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"B_LegStrapBag_black_F",{{"ACE_fieldDressing",23},{"ACE_morphine",10},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"H_Booniehat_khk","G_Aviator",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'decal_sovietbear'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "decal_sovietbear";

};

class B_VKN_VIS_AGENT3_PMC_01 : B_VKN_VIS_AGENT2_PMC_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_AGENT3_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Agent 3";
    side = 1;
    faction = "B_VKN_PMC_VIS";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_BG_Guerilla3_1";

    linkedItems[] = {"V_Rangemaster_belt","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_LegStrapBag_black_F";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBvfgB","","rhsusf_acc_anpeq15_bk_light","optic_Holosight_smg_blk_F",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"U_BG_Guerilla3_1",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30},{"Laserbatteries",1,1}}},{"V_Rangemaster_belt",{{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_morphine",9},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"B_LegStrapBag_black_F",{{"ACE_fieldDressing",23},{"ACE_morphine",10},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"","G_Aviator",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'decal_sovietbear'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "decal_sovietbear";

};

class B_VKN_VIS_AGENT4_PMC_01 : B_VKN_VIS_AGENT3_PMC_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_AGENT4_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Agent 4";
    side = 1;
    faction = "B_VKN_PMC_VIS";

    identityTypes[] = {"Head_Euro","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_C_Poloshirt_salmon";

    linkedItems[] = {"V_Rangemaster_belt","H_StrawHat_dark","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","H_StrawHat_dark","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_LegStrapBag_black_F";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBvfgB","","rhsusf_acc_anpeq15_bk_light","optic_Holosight_smg_blk_F",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"U_C_Poloshirt_salmon",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"V_Rangemaster_belt",{{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_morphine",9},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"B_LegStrapBag_black_F",{{"ACE_fieldDressing",23},{"ACE_morphine",10},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"H_StrawHat_dark","G_Aviator",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'decal_sovietbear'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "decal_sovietbear";

};

class B_VKN_VIS_AGENT5_PMC_01 : B_VKN_VIS_AGENT4_PMC_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_AGENT5_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Agent 5";
    side = 1;
    faction = "B_VKN_PMC_VIS";

    identityTypes[] = {"Head_Euro","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_C_Mechanic_01_F";

    linkedItems[] = {"V_Rangemaster_belt","H_Cap_blk","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","H_Cap_blk","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_LegStrapBag_black_F";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBvfgB","","rhsusf_acc_anpeq15_bk_light","optic_Holosight_smg_blk_F",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"U_C_Mechanic_01_F",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"V_Rangemaster_belt",{{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_morphine",9},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"B_LegStrapBag_black_F",{{"ACE_fieldDressing",23},{"ACE_morphine",10},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"H_Cap_blk","G_Aviator",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VIS_AGENT6_PMC_01 : B_VKN_VIS_AGENT5_PMC_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_AGENT6_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Agent 6";
    side = 1;
    faction = "B_VKN_PMC_VIS";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_C_IDAP_Man_Jeans_F";

    linkedItems[] = {"V_Rangemaster_belt","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhsusf_mag_17Rnd_9x19_JHP","Laserbatteries"};

    backpack = "B_LegStrapBag_black_F";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBvfgB","","rhsusf_acc_anpeq15_bk_light","optic_Holosight_smg_blk_F",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_C_IDAP_Man_Jeans_F",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"V_Rangemaster_belt",{{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_morphine",9},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"B_LegStrapBag_black_F",{{"ACE_fieldDressing",23},{"ACE_morphine",10},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"","G_Combat",{"Laserdesignator_03","","","",{"Laserbatteries",1},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VIS_AGENT7_PMC_01 : B_VKN_VIS_AGENT6_PMC_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_AGENT7_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Agent 7";
    side = 1;
    faction = "B_VKN_PMC_VIS";

    identityTypes[] = {"Head_African","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_C_IDAP_Man_cargo_F";

    linkedItems[] = {"V_Rangemaster_belt","H_Hat_brown","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","H_Hat_brown","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};
    respawnWeapons[] = {"SMA_HK416CUSTOMCQBvfgB","rhsusf_weap_glock17g4","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_LegStrapBag_black_F";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK416CUSTOMCQBvfgB","","rhsusf_acc_anpeq15_bk_light","optic_Holosight_smg_blk_F",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"SMA_Gripod_01"},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"U_C_IDAP_Man_cargo_F",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30},{"rhs_mag_30Rnd_556x45_Mk318_Stanag",1,30}}},{"V_Rangemaster_belt",{{"ACE_fieldDressing",5},{"ACE_EarPlugs",1},{"ACE_morphine",9},{"rhsusf_mag_17Rnd_9x19_JHP",1,17},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"B_LegStrapBag_black_F",{{"ACE_fieldDressing",23},{"ACE_morphine",10},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},"H_Hat_brown","G_Aviator",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'decal_sovietbear'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "decal_sovietbear";

};

class B_VKN_VIS_ECHO_PMC_01 : B_VKN_VIS_AGENT7_PMC_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_ECHO_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Strike Team Echo";
    side = 1;
    faction = "B_VKN_PMC_VIS";

    identityTypes[] = {"Orange_FIA","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Black_Vest";

    linkedItems[] = {"V_PlateCarrier1_blk","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"V_PlateCarrier1_blk","VSM_Black_OPS","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"rhs_weap_hk416d10_m320","hgun_ACPC2_F","Laserdesignator_03"};
    respawnWeapons[] = {"rhs_weap_hk416d10_m320","hgun_ACPC2_F","Laserdesignator_03"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","9Rnd_45ACP_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","9Rnd_45ACP_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","9Rnd_45ACP_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","9Rnd_45ACP_Mag"};

    backpack = "VKN_Kitbag_Black";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_hk416d10_m320","rhsusf_acc_nt4_black","rhsusf_acc_anpeq15_bk_h","SMA_ELCAN_SPECTER",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_ACPC2_F","muzzle_snds_acp","","",{"9Rnd_45ACP_Mag",8},{},""},{"VKN_CombatUniform_Black_Vest",{{"rhs_mag_100Rnd_556x45_M855A1_cmag",1,100}}},{"V_PlateCarrier1_blk",{{"9Rnd_45ACP_Mag",3,8},{"rhs_mag_100Rnd_556x45_M855A1_cmag",3,100},{"Laserbatteries",1,1}}},{"VKN_Kitbag_Black",{{"ACE_fieldDressing",30},{"ACE_EarPlugs",1},{"ACE_EntrenchingTool",1},{"ACE_morphine",20},{"MineDetector",1},{"rhs_mag_100Rnd_556x45_M855A1_cmag",3,100},{"rhs_mag_m4009",2,1},{"1Rnd_HE_Grenade_shell",2,1},{"1Rnd_Smoke_Grenade_shell",6,1},{"rhs_mag_an_m8hc",2,1},{"Chemlight_green",5,1}}},"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD_Goggles",{"Laserdesignator_03","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VIS_Motorboat_PMC_01 : C_Boat_Civil_01_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_Motorboat_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Motorboat";
    side = 1;
    faction = "B_VKN_PMC_VIS";
    crew = "B_VKN_VIS_AGENT1_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa'];_unit setObjectTextureGlobal [1,'\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Civilian";

};

class B_VKN_VIS_OFFROAD_PMC_01 : C_Offroad_01_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_OFFROAD_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroad";
    side = 1;
    faction = "B_VKN_PMC_VIS";
    crew = "B_VKN_VIS_AGENT1_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_VIS_AGENT2_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_VIS_AGENT3_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_VIS_AGENT4_PMC_01"; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = "B_VKN_VIS_AGENT5_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\po_vehicles\data\camo\offroad\offroad_khk_co.paa'];_unit setObjectTextureGlobal [1,'\po_vehicles\data\camo\offroad\offroad_khk_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_khk";

};

class B_VKN_VIS_HATCHBACK_PMC_01 : C_Hatchback_01_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_HATCHBACK_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Hatchback";
    side = 1;
    faction = "B_VKN_PMC_VIS";
    crew = "B_VKN_VIS_AGENT1_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Beigecustom";

};

class B_VKN_VIS_MD500_PMC_01 : C_Heli_Light_01_civil_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_MD500_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "MD 500";
    side = 1;
    faction = "B_VKN_PMC_VIS";
    crew = "B_VKN_VIS_AGENT1_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VIS_AGENT5_PMC_01"; };
    };



    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Graywatcher";

};

class B_VKN_VIS_DRONE_PMC_01 : C_UAV_06_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_DRONE_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Utility Drone";
    side = 1;
    faction = "B_VKN_PMC_VIS";
    crew = "B_VKN_VIS_AGENT1_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Air_F_Orange\UAV_06\Data\C_UAV_06_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Civ";

};

class B_VKN_VIS_LANDROVER_PMC_01 : LOP_TAK_Civ_Landrover_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_LANDROVER_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "LandRover";
    side = 1;
    faction = "B_VKN_PMC_VIS";
    crew = "B_VKN_VIS_AGENT6_PMC_01";


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'po_vehicles\lr\data\camo\lr_base_am_co.paa'];_unit setObjectTextureGlobal [1,'po_vehicles\lr\data\camo\lr_special_w_baf_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "LOP_AM";

};

class B_VKN_VIS_URAL_PMC_01 : RHS_Ural_Civ_03_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_VIS_URAL_PMC_01.paa;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Ural-4320";
    side = 1;
    faction = "B_VKN_PMC_VIS";
    crew = "B_VKN_VIS_AGENT1_PMC_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_VIS_AGENT7_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_VIS_AGENT4_PMC_01"; };
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