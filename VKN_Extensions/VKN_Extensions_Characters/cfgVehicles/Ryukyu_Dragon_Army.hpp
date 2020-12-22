class O_Ryukyu_Dragons_Army_Tropical_Rifleman_01 : O_T_Soldier_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Rifleman_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4afg_OD","hgun_Rook40_F"};
    respawnWeapons[] = {"SMA_M4afg_OD","hgun_Rook40_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};

    backpack = "VSM_MulticamTropic_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4afg_OD","","acc_pointer_IR","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_fieldDressing",4},{"ACE_morphine",2}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"SmokeShell",2,1}}},{"VSM_MulticamTropic_Backpack_Compact",{}},"rhsusf_ach_bare_headset_ess","",{},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Rifleman_AT_01 : O_T_Soldier_LAT_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Rifleman_AT_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Rifleman (AT)";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4afg_OD_SM","rhs_weap_M136","hgun_Rook40_F"};
    respawnWeapons[] = {"SMA_M4afg_OD_SM","rhs_weap_M136","hgun_Rook40_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_m136_mag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_m136_mag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4afg_OD_SM","","","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{"rhs_weap_M136","","","",{"rhs_m136_mag",1},{},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_EarPlugs",2},{"ACE_fieldDressing",4},{"ACE_morphine",2},{"rhs_m136_mag",1,1}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{},"rhsusf_ach_bare_headset_ess","",{},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Auto_Rifleman_01 : O_T_Soldier_AR_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Auto_Rifleman_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Auto Rifleman";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_MG_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_MG_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"sma_minimi_mk3_762tsb_wdl","hgun_Rook40_F"};
    respawnWeapons[] = {"sma_minimi_mk3_762tsb_wdl","hgun_Rook40_F"};

    magazines[] = {"SMA_150Rnd_762_M80A1","16Rnd_9x21_Mag","SMA_150Rnd_762_M80A1","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"SMA_150Rnd_762_M80A1","16Rnd_9x21_Mag","SMA_150Rnd_762_M80A1","16Rnd_9x21_Mag"};

    backpack = "VSM_MulticamTropic_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"sma_minimi_mk3_762tsb_wdl","","acc_pointer_IR","SMA_ELCAN_SPECTER_TAN",{"SMA_150Rnd_762_M80A1",150},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",4},{"ACE_morphine",2}}},{"VSM_FAPC_MG_MulticamTropic",{{"16Rnd_9x21_Mag",1,17},{"HandGrenade",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"SMA_150Rnd_762_M80A1",4,150}}},{"VSM_MulticamTropic_Backpack_Compact",{{"SMA_150Rnd_762_M80A1",2,150}}},"rhsusf_ach_bare_headset_ess","",{},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Asst_Autorifleman_01 : O_Ryukyu_Dragons_Army_Tropical_Auto_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Asst_Autorifleman_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Asst. Autorifleman";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_MG_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_MG_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4MOE_OD","hgun_Rook40_F"};
    respawnWeapons[] = {"SMA_M4MOE_OD","hgun_Rook40_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};

    backpack = "VSM_MulticamTropic_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4MOE_OD","","acc_pointer_IR","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_EarPlugs",2},{"ACE_fieldDressing",4},{"ACE_morphine",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_FAPC_MG_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",1,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"SMA_150Rnd_762_M80A1",2,150}}},{"VSM_MulticamTropic_Backpack_Compact",{{"SMA_150Rnd_762_M80A1",3,150}}},"rhsusf_ach_bare_headset_ess","G_Squares",{},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Anti_Tank_01 : O_Ryukyu_Dragons_Army_Tropical_Rifleman_AT_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Anti_Tank_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Anti-Tank";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4afg_OD_SM","rhs_weap_maaws","hgun_Rook40_F"};
    respawnWeapons[] = {"SMA_M4afg_OD_SM","rhs_weap_maaws","hgun_Rook40_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_maaws_HEAT","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_maaws_HEAT","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};

    backpack = "VSM_MulticamTropic_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4afg_OD_SM","","","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{"rhs_weap_maaws","","","rhs_optic_maaws",{"rhs_mag_maaws_HEAT",1},{},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_EarPlugs",2},{"ACE_fieldDressing",4},{"ACE_morphine",2}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"rhs_mag_maaws_HEAT",3,1}}},"rhsusf_ach_bare_headset_ess","",{},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Anti_Air_01 : O_Ryukyu_Dragons_Army_Tropical_Anti_Tank_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Anti_Air_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Anti-Air";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4afg_OD_SM","rhs_weap_fim92","hgun_Rook40_F"};
    respawnWeapons[] = {"SMA_M4afg_OD_SM","rhs_weap_fim92","hgun_Rook40_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_fim92_mag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};

    backpack = "VSM_MulticamTropic_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4afg_OD_SM","","","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{"rhs_weap_fim92","","","",{"rhs_fim92_mag",1},{},""},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_EarPlugs",3},{"ACE_fieldDressing",4},{"ACE_morphine",2}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"SmokeShell",2,1},{"rhs_mag_m67",2,1}}},{"VSM_MulticamTropic_Backpack_Kitbag",{{"rhs_fim92_mag",2,1}}},"rhsusf_ach_bare_headset_ess","",{},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Fire_Team_Leader_01 : O_Ryukyu_Dragons_Army_Tropical_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Fire_Team_Leader_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Fire Team Leader";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4afg_OD","hgun_Rook40_F"};
    respawnWeapons[] = {"SMA_M4afg_OD","hgun_Rook40_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};

    backpack = "VSM_MulticamTropic_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4afg_OD","","acc_pointer_IR","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_fieldDressing",4},{"ACE_morphine",2},{"ACE_microDAGR",1}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"SmokeShell",2,1}}},{"VSM_MulticamTropic_Backpack_Compact",{}},"rhsusf_ach_bare_headset_ess","",{},{"ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Squad_Leader_01 : O_Ryukyu_Dragons_Army_Tropical_Fire_Team_Leader_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Squad_Leader_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Squad Leader";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4afg_OD","hgun_Rook40_F","Laserdesignator_02_ghex_F"};
    respawnWeapons[] = {"SMA_M4afg_OD","hgun_Rook40_F","Laserdesignator_02_ghex_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","Laserbatteries"};

    backpack = "tf_rt1523g_bwmod";

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4afg_OD","","acc_pointer_IR","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_fieldDressing",4},{"ACE_morphine",2},{"ACE_microDAGR",1},{"Laserbatteries",1,1}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"SmokeShell",2,1},{"Laserbatteries",1,1}}},{"tf_rt1523g_bwmod",{}},"rhsusf_ach_bare_headset_ess","G_Sport_BlackWhite",{"Laserdesignator_02_ghex_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Marksman_01 : O_Ryukyu_Dragons_Army_Tropical_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Marksman_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_sr25","hgun_Rook40_F"};
    respawnWeapons[] = {"rhs_weap_sr25","hgun_Rook40_F"};

    magazines[] = {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag","16Rnd_9x21_Mag","rhsusf_20Rnd_762x51_SR25_m118_special_Mag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag","16Rnd_9x21_Mag","rhsusf_20Rnd_762x51_SR25_m118_special_Mag","16Rnd_9x21_Mag"};

    backpack = "VSM_MulticamTropic_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_sr25","","acc_pointer_IR","optic_SOS",{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",20},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_fieldDressing",4},{"ACE_morphine",2},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",1,20}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"SmokeShell",2,1},{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",6,20}}},{"VSM_MulticamTropic_Backpack_Compact",{}},"rhsusf_ach_bare_headset_ess","",{},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Sniper_01 : O_Ryukyu_Dragons_Army_Tropical_Marksman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Sniper_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Sniper";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "U_O_T_FullGhillie_tna_F";

    linkedItems[] = {"VSM_CarrierRig_Operator_multicamTropic","VSM_MulticamTropic_Boonie","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_CarrierRig_Operator_multicamTropic","VSM_MulticamTropic_Boonie","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_XM2010","hgun_Rook40_F","ACE_Vector"};
    respawnWeapons[] = {"rhs_weap_XM2010","hgun_Rook40_F","ACE_Vector"};

    magazines[] = {"rhsusf_5Rnd_300winmag_xm2010","16Rnd_9x21_Mag","rhsusf_5Rnd_300winmag_xm2010","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhsusf_5Rnd_300winmag_xm2010","16Rnd_9x21_Mag","rhsusf_5Rnd_300winmag_xm2010","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_XM2010","","acc_pointer_IR","rhsusf_acc_premier_low",{"rhsusf_5Rnd_300winmag_xm2010",5},{},"rhsusf_acc_harris_bipod"},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_O_T_FullGhillie_tna_F",{{"ACE_fieldDressing",4},{"ACE_morphine",2},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"ACE_EarPlugs",1}}},{"VSM_CarrierRig_Operator_multicamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"SmokeShell",2,1},{"rhsusf_5Rnd_300winmag_xm2010",10,5}}},{},"VSM_MulticamTropic_Boonie","",{"ACE_Vector","","","",{},{},""},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Spotter_01 : O_Ryukyu_Dragons_Army_Tropical_Sniper_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Spotter_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Spotter";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "U_O_T_FullGhillie_tna_F";

    linkedItems[] = {"VSM_CarrierRig_Operator_multicamTropic","VSM_MulticamTropic_Boonie","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_CarrierRig_Operator_multicamTropic","VSM_MulticamTropic_Boonie","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4MOE_OD","hgun_Rook40_F","rhsusf_bino_leopold_mk4"};
    respawnWeapons[] = {"SMA_M4MOE_OD","hgun_Rook40_F","rhsusf_bino_leopold_mk4"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4MOE_OD","","acc_pointer_IR","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"U_O_T_FullGhillie_tna_F",{{"ACE_fieldDressing",4},{"ACE_morphine",2},{"ACE_microDAGR",1},{"ACE_RangeCard",1},{"ACE_Kestrel4500",1},{"ACE_EarPlugs",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_CarrierRig_Operator_multicamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"SmokeShell",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30}}},{},"VSM_MulticamTropic_Boonie","G_Squares",{"rhsusf_bino_leopold_mk4","","","",{},{},""},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Platoon_Commander_01 : O_Ryukyu_Dragons_Army_Tropical_Squad_Leader_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Platoon_Commander_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Platoon Commander";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4afg_OD","hgun_Rook40_F","Laserdesignator_02_ghex_F"};
    respawnWeapons[] = {"SMA_M4afg_OD","hgun_Rook40_F","Laserdesignator_02_ghex_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","Laserbatteries","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","Laserbatteries"};

    backpack = "tf_rt1523g_bwmod";

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4afg_OD","","acc_pointer_IR","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_fieldDressing",4},{"ACE_morphine",2},{"ACE_microDAGR",1},{"Laserbatteries",1,1}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"SmokeShell",2,1},{"Laserbatteries",1,1}}},{"tf_rt1523g_bwmod",{}},"rhsusf_ach_bare_headset_ess","",{"Laserdesignator_02_ghex_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_King_Hirohito_01 : O_Ryukyu_Dragons_Army_Tropical_Platoon_Commander_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_King_Hirohito_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "King Hirohito";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"V_Rangemaster_belt","VSM_MulticamTropic_Cap","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","VSM_MulticamTropic_Cap","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch"};

    weapons[] = {"hgun_Rook40_F","Laserdesignator_02_ghex_F"};
    respawnWeapons[] = {"hgun_Rook40_F","Laserdesignator_02_ghex_F"};

    magazines[] = {"16Rnd_9x21_Mag","Laserbatteries","16Rnd_9x21_Mag","Laserbatteries"};
    respawnMagazines[] = {"16Rnd_9x21_Mag","Laserbatteries","16Rnd_9x21_Mag","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_fieldDressing",4},{"ACE_morphine",2},{"ACE_microDAGR",1},{"Laserbatteries",1,1}}},{"V_Rangemaster_belt",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1}}},{},"VSM_MulticamTropic_Cap","G_Shades_Green",{"Laserdesignator_02_ghex_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Crewman_01 : O_Ryukyu_Dragons_Army_Tropical_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Crewman_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Crewman";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_CarrierRig_Breacher_multicamTropic","rhsusf_cvc_green_ess","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VSM_CarrierRig_Breacher_multicamTropic","rhsusf_cvc_green_ess","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch"};

    weapons[] = {"rhsusf_weap_MP7A2","hgun_Rook40_F"};
    respawnWeapons[] = {"rhsusf_weap_MP7A2","hgun_Rook40_F"};

    magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","16Rnd_9x21_Mag","rhsusf_mag_40Rnd_46x30_FMJ","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","16Rnd_9x21_Mag","rhsusf_mag_40Rnd_46x30_FMJ","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","acc_pointer_IR","rhsusf_acc_T1_high",{"rhsusf_mag_40Rnd_46x30_FMJ",40},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_fieldDressing",4},{"ACE_morphine",2}}},{"VSM_CarrierRig_Breacher_multicamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"SmokeShell",2,1},{"rhsusf_mag_40Rnd_46x30_FMJ",6,40}}},{},"rhsusf_cvc_green_ess","",{},{"ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Grenadier_01 : O_Ryukyu_Dragons_Army_Tropical_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Grenadier_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Grenadier";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"rhs_weap_m4_m203","hgun_Rook40_F"};
    respawnWeapons[] = {"rhs_weap_m4_m203","hgun_Rook40_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};

    backpack = "VSM_MulticamTropic_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4_m203","","acc_pointer_IR","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_fieldDressing",4},{"ACE_morphine",2},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"SmokeShell",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"rhs_mag_M441_HE",6,1},{"rhs_mag_M585_white",2,1},{"rhs_mag_m714_White",4,1}}},{"VSM_MulticamTropic_Backpack_Compact",{}},"rhsusf_ach_bare_headset_ess","",{},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Pilot_01 : O_T_Helipilot_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Pilot_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Helicopter Pilot";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "U_B_HeliPilotCoveralls";

    linkedItems[] = {"V_HarnessOGL_gry","rhsusf_hgu56p_visor_black","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"V_HarnessOGL_gry","rhsusf_hgu56p_visor_black","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"rhsusf_weap_MP7A2","hgun_Rook40_F"};
    respawnWeapons[] = {"rhsusf_weap_MP7A2","hgun_Rook40_F"};

    magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};
    respawnMagazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};

    ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","","optic_ACO_grn_smg",{"rhsusf_mag_40Rnd_46x30_FMJ",40},{},""},{},{"hgun_Rook40_F","","","",{},{},""},{"U_B_HeliPilotCoveralls",{{"ACE_fieldDressing",4},{"ACE_morphine",2},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}}},{"V_HarnessOGL_gry",{{"rhsusf_mag_40Rnd_46x30_FMJ",4,40}}},{},"rhsusf_hgu56p_visor_black","",{},{"ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Helicopter_Crew_01 : O_Ryukyu_Dragons_Army_Tropical_Pilot_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Helicopter_Crew_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Helicopter Crew";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "U_B_HeliPilotCoveralls";

    linkedItems[] = {"V_HarnessOGL_gry","rhsusf_hgu56p_visor_black","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"V_HarnessOGL_gry","rhsusf_hgu56p_visor_black","ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"rhsusf_weap_MP7A2","hgun_Rook40_F"};
    respawnWeapons[] = {"rhsusf_weap_MP7A2","hgun_Rook40_F"};

    magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};
    respawnMagazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};

    ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","","optic_ACO_grn_smg",{"rhsusf_mag_40Rnd_46x30_FMJ",40},{},""},{},{"hgun_Rook40_F","","","",{},{},""},{"U_B_HeliPilotCoveralls",{{"ACE_fieldDressing",4},{"ACE_morphine",2},{"SmokeShellRed",1,1},{"SmokeShellOrange",1,1},{"SmokeShellYellow",1,1},{"Chemlight_red",2,1}}},{"V_HarnessOGL_gry",{{"rhsusf_mag_40Rnd_46x30_FMJ",4,40}}},{},"rhsusf_hgu56p_visor_black","",{},{"ItemMap","ItemGPS","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Combat_Life_Saver_01 : O_Ryukyu_Dragons_Army_Tropical_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Combat_Life_Saver_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Combat Life Saver";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4afg_OD","hgun_Rook40_F"};
    respawnWeapons[] = {"SMA_M4afg_OD","hgun_Rook40_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};

    backpack = "VSM_MulticamTropic_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4afg_OD","","acc_pointer_IR","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_fieldDressing",4},{"ACE_morphine",2}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"SmokeShell",2,1}}},{"VSM_MulticamTropic_Backpack_Compact",{{"ACE_fieldDressing",30},{"ACE_bloodIV",2},{"ACE_bloodIV_250",6},{"ACE_bloodIV_500",6},{"ACE_epinephrine",20},{"ACE_morphine",20},{"ACE_personalAidKit",1},{"ACE_surgicalKit",1}}},"rhsusf_ach_bare_headset_ess","G_Sport_Blackred",{},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_Engineer_01 : O_Ryukyu_Dragons_Army_Tropical_Rifleman_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Engineer_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Engineer";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_Asian","LanguageCHI_F","G_CIVIL_male"};

    uniformClass = "VSM_MulticamTropic_BDU_Camo";

    linkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};
    respawnlinkedItems[] = {"VSM_FAPC_Operator_MulticamTropic","rhsusf_ach_bare_headset_ess","ItemMap","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"};

    weapons[] = {"SMA_M4afg_OD","hgun_Rook40_F"};
    respawnWeapons[] = {"SMA_M4afg_OD","hgun_Rook40_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag","rhs_mag_30Rnd_556x45_M855A1_Stanag","16Rnd_9x21_Mag"};

    backpack = "VSM_MulticamTropic_Backpack_Compact";

    ALiVE_orbatCreator_loadout[] = {{"SMA_M4afg_OD","","acc_pointer_IR","rhsusf_acc_ACOG2_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{"hgun_Rook40_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VSM_MulticamTropic_BDU_Camo",{{"ACE_fieldDressing",4},{"ACE_morphine",2}}},{"VSM_FAPC_Operator_MulticamTropic",{{"16Rnd_9x21_Mag",2,17},{"HandGrenade",2,1},{"SmokeShellRed",1,1},{"Chemlight_red",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30},{"SmokeShell",2,1}}},{"VSM_MulticamTropic_Backpack_Compact",{{"ACE_DefusalKit",1},{"ToolKit",1},{"ACE_wirecutter",1}}},"rhsusf_ach_bare_headset_ess","",{},{"ItemMap","","tf_anprc154","ItemCompass","ItemWatch","rhsusf_ANPVS_15"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this, 'AAF_1stRegiment'] call BIS_fnc_setUnitInsignia;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_insignia = "AAF_1stRegiment";

};

class O_Ryukyu_Dragons_Army_Tropical_T6A3_01 : B_MBT_01_cannon_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_T6A3_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "T6A3 MBT";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa'];_unit setObjectTextureGlobal [1,'A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa'];_unit setObjectTextureGlobal [2,'A3\Armor_F\Data\camonet_NATO_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class O_Ryukyu_Dragons_Army_Tropical_R3_Scout_01 : B_T_LSV_01_unarmed_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_R3_Scout_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "R3 Scout";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "B_T_Soldier_F";

    class Turrets : Turrets {
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa'];_unit setObjectTextureGlobal [4,'\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa'];_unit setObjectTextureGlobal [5,'\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class O_Ryukyu_Dragons_Army_Tropical_Wildcat_CAS_01 : UK3CB_BAF_Wildcat_AH1_CAS_8A_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Wildcat_CAS_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Wildcat CAS";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Pilot_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_Ryukyu_Dragons_Army_Tropical_Pilot_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "O_Ryukyu_Dragons_Army_Tropical_Helicopter_Crew_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\uk3cb_baf_vehicles\addons\UK3CB_BAF_Vehicles_Wildcat\data\wildcat_base_baf_grey_army_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "UK3CB_BAF_Wildcat_TextureSource_Army";

};

class O_Ryukyu_Dragons_Army_Tropical_Pilot_02 : B_Pilot_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Pilot_02.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Pilot";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_B_PilotCoveralls";

    linkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"H_PilotHelmetFighter_B","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhsusf_weap_MP7A2"};
    respawnWeapons[] = {"rhsusf_weap_MP7A2"};

    magazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};
    respawnMagazines[] = {"rhsusf_mag_40Rnd_46x30_FMJ","rhsusf_mag_40Rnd_46x30_FMJ"};

    backpack = "ACE_NonSteerableParachute";

    ALiVE_orbatCreator_loadout[] = {{"rhsusf_weap_MP7A2","","","optic_Holosight_smg",{"rhsusf_mag_40Rnd_46x30_FMJ",40},{},""},{},{},{"U_B_PilotCoveralls",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"SmokeShell",1,1},{"SmokeShellBlue",1,1},{"Chemlight_green",1,1},{"rhsusf_mag_40Rnd_46x30_FMJ",3,40}}},{},{"ACE_NonSteerableParachute",{}},"H_PilotHelmetFighter_B","rhs_googles_orange",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Ryukyu_Dragons_Army_Tropical_F16_Fighting_Dragon_01 : FIR_F16C_AV_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_F16_Fighting_Dragon_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "F-16 Fighting Dragon";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Pilot_02";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_greyhex_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_greyhex_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Grey";

};

class O_Ryukyu_Dragons_Army_Tropical_Apache_01 : RHS_AH64D_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Apache_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Apache";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Pilot_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_Ryukyu_Dragons_Army_Tropical_Helicopter_Crew_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_body_co.paa'];_unit setObjectTextureGlobal [1,'\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa'];_unit setObjectTextureGlobal [2,'\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_alfa_ca.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class O_Ryukyu_Dragons_Army_Tropical_M2A3_01 : RHS_M2A3_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_M2A3_01.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "M2A3 Bradley";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Ryukyu_Dragons_Army_Tropical_M113A3_M2 : rhsusf_m113_usarmy_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_M113A3_M2.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "M113A3 (M2)";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Ryukyu_Dragons_Army_Tropical_M113A3_M240 : rhsusf_m113_usarmy_M240_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_M113A3_M240.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "M11A3 (M240)";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Ryukyu_Dragons_Army_Tropical_Humvee_Unarmed : rhsusf_m1043_w_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Humvee_Unarmed.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Humvee (Unarmed)";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Rifleman_01";

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Ryukyu_Dragons_Army_Tropical_Humvee_M2 : rhsusf_m1043_w_m2_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Humvee_M2.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Humvee (M2)";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Rifleman_01";

    class Turrets : Turrets {
        class M2_Turret : M2_Turret { gunnerType = "O_Ryukyu_Dragons_Army_Tropical_Rifleman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Ryukyu_Dragons_Army_Tropical_Humvee_TOW : rhsusf_m1045_w_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Humvee_TOW.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "Humvee (TOW)";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Rifleman_01";

    class Turrets : Turrets {
        class TOW_Turret : TOW_Turret { gunnerType = "O_Ryukyu_Dragons_Army_Tropical_Rifleman_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Ryukyu_Dragons_Army_Tropical_Truck_Cargo : rhsusf_M977A4_usarmy_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_Truck_Cargo.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "M977A4 (Cargo)";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Ryukyu_Dragons_Army_Tropical_M977A4_Ammo : rhsusf_M977A4_AMMO_usarmy_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_M977A4_Ammo.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "M977A4 (Ammo)";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Ryukyu_Dragons_Army_Tropical_M977A4_Repair : rhsusf_M977A4_REPAIR_usarmy_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_M977A4_Repair.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "M977A4 (Repair)";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_Ryukyu_Dragons_Army_Tropical_M977A4_Fuel : rhsusf_M978A4_usarmy_wd_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\O_Ryukyu_Dragons_Army_Tropical_M977A4_Fuel.paa;
    author = "Curious";
    scope = public;
    scopeCurator = 2;
    displayName = "M977A4 (Fuel)";
    side = 0;
    faction = "O_Ryukyu_Dragons_Army_Tropical";
    crew = "O_Ryukyu_Dragons_Army_Tropical_Crewman_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
