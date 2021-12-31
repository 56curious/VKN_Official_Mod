class B_VKN_Operator_Full_01 : B_Soldier_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_Full_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator_Full";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Blue_Jeans";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    backpack = "VKN_Kitbag_Black";

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Blue_Jeans",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{"VKN_Kitbag_Black",{{"30Rnd_556x45_Stanag",4,30}}},"H_Watchcap_blk","G_Shades_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Operator_Light_01 : B_VKN_Operator_Full_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_Light_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator_Light";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Blue_Khaki";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Blue_Khaki",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{},"H_Watchcap_blk","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Operator_AT_01 : B_VKN_Operator_Full_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_AT_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator AT";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Blue_Jeans";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","launch_RPG7_F","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","launch_RPG7_F","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","RPG7_F","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","RPG7_F","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    backpack = "VKN_Kitbag_Black";

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{"launch_RPG7_F","","","",{"RPG7_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Blue_Jeans",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{"VKN_Kitbag_Black",{{"30Rnd_556x45_Stanag",4,30},{"RPG7_F",3,1}}},"H_Watchcap_blk","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Operator_AT_Heavy_01 : B_VKN_Operator_AT_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_AT_Heavy_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator AT (Heavy)";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Blue_Jeans";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","launch_MRAWS_green_F","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","launch_MRAWS_green_F","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","MRAWS_HEAT_F","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","MRAWS_HEAT_F","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    backpack = "VKN_Kitbag_Black";

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{"launch_MRAWS_green_F","","","",{"MRAWS_HEAT_F",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Blue_Jeans",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{"VKN_Kitbag_Black",{{"30Rnd_556x45_Stanag",4,30},{"MRAWS_HEAT_F",3,1}}},"H_Watchcap_blk","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Operator_AA_01 : B_VKN_Operator_AT_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_AA_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator AA";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Blue_Multicam";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","launch_B_Titan_olive_F","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","launch_B_Titan_olive_F","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","Titan_AA","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","Titan_AA","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    backpack = "VKN_Kitbag_Black";

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{"launch_B_Titan_olive_F","","","",{"Titan_AA",1},{},""},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Blue_Multicam",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{"VKN_Kitbag_Black",{{"30Rnd_556x45_Stanag",4,30},{"Titan_AA",2,1}}},"H_Watchcap_blk","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Operator_Medic_01 : B_VKN_Operator_Full_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_Medic_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator Medic";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Green_Khaki";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    backpack = "VKN_Kitbag_Black_Medical";

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Green_Khaki",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{"VKN_Kitbag_Black_Medical",{{"Medikit",1},{"FirstAidKit",20},{"30Rnd_556x45_Stanag",4,30}}},"H_Watchcap_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Operator_Grenadier_01 : B_VKN_Operator_Light_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_Grenadier_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator Grenadier";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Green_Jeans";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"arifle_MX_GL_Black_F","hgun_P07_F"};
    respawnWeapons[] = {"arifle_MX_GL_Black_F","hgun_P07_F"};

    magazines[] = {"30Rnd_65x39_caseless_black_mag","1Rnd_HE_Grenade_shell","16Rnd_9x21_Mag","30Rnd_65x39_caseless_black_mag","1Rnd_HE_Grenade_shell","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","1Rnd_HE_Grenade_shell","16Rnd_9x21_Mag","30Rnd_65x39_caseless_black_mag","1Rnd_HE_Grenade_shell","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"arifle_MX_GL_Black_F","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"30Rnd_65x39_caseless_black_mag",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Green_Jeans",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"HandGrenade",4,1},{"30Rnd_65x39_caseless_black_mag",4,30},{"1Rnd_HE_Grenade_shell",6,1},{"1Rnd_Smoke_Grenade_shell",4,1},{"3Rnd_Smoke_Grenade_shell",2,3}}},{},"H_Watchcap_blk","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Operator_Light_Gunner_01 : B_VKN_Operator_Light_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_Light_Gunner_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator Light Gunner";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Blue_Khaki";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"LMG_Mk200_F","hgun_P07_F"};
    respawnWeapons[] = {"LMG_Mk200_F","hgun_P07_F"};

    magazines[] = {"200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","200Rnd_65x39_cased_Box","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"200Rnd_65x39_cased_Box","16Rnd_9x21_Mag","200Rnd_65x39_cased_Box","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"200Rnd_65x39_cased_Box",200},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Blue_Khaki",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"HandGrenade",1,1},{"200Rnd_65x39_cased_Box",3,200}}},{},"H_Watchcap_blk","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Operator_Heavy_Gunner_01 : B_VKN_Operator_Light_Gunner_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_Heavy_Gunner_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator Heavy Gunner";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Blue_Khaki";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"MMG_02_black_F","hgun_P07_F"};
    respawnWeapons[] = {"MMG_02_black_F","hgun_P07_F"};

    magazines[] = {"130Rnd_338_Mag","16Rnd_9x21_Mag","130Rnd_338_Mag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"130Rnd_338_Mag","16Rnd_9x21_Mag","130Rnd_338_Mag","16Rnd_9x21_Mag"};

    backpack = "VKN_Kitbag_Black";

    ALiVE_orbatCreator_loadout[] = {{"MMG_02_black_F","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"130Rnd_338_Mag",130},{},"bipod_01_F_blk"},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Blue_Khaki",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"HandGrenade",1,1},{"130Rnd_338_Mag",2,130}}},{"VKN_Kitbag_Black",{{"130Rnd_338_Mag",2,130}}},"H_Watchcap_blk","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Operator_Medic_Alternative_01 : B_VKN_Operator_Medic_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_Medic_Alternative_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator Medic Alternative";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Green_Khaki";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    backpack = "TRYK_B_Medbag_BK";

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Green_Khaki",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{"TRYK_B_Medbag_BK",{{"Medikit",1},{"FirstAidKit",20},{"30Rnd_556x45_Stanag",4,30}}},"H_Watchcap_blk","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Operator_Engineer_Demo_01 : B_VKN_Operator_Full_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Operator_Engineer_Demo_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Operator Engineer/Demo";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_I_mntsuit_Brown_Jeans";

    linkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Vest_V_HarnessO_drk_F","H_Watchcap_camo","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    backpack = "VKN_Kitbag_Black";

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","","acc_pointer_IR","optic_Holosight_smg_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_I_mntsuit_Brown_Jeans",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"VKN_Vest_V_HarnessO_drk_F",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{"VKN_Kitbag_Black",{{"MineDetector",1},{"ToolKit",1},{"30Rnd_556x45_Stanag",4,30},{"DemoCharge_Remote_Mag",4,1},{"APERSBoundingMine_Range_Mag",2,1}}},"H_Watchcap_camo","G_Tactical_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_Pilot_01 : B_Pilot_F_OCimport_02 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_Pilot_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Pilot";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "U_I_G_Story_Protagonist_F";

    linkedItems[] = {"V_Chestrig_blk","H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_Chestrig_blk","H_CrewHelmetHeli_B","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_Remington870"};
    respawnWeapons[] = {"VKN_Remington870"};

    magazines[] = {"VKN_8Rnd_12Gauge_Pellets","VKN_8Rnd_12Gauge_Pellets"};
    respawnMagazines[] = {"VKN_8Rnd_12Gauge_Pellets","VKN_8Rnd_12Gauge_Pellets"};

    backpack = "B_Parachute";

    ALiVE_orbatCreator_loadout[] = {{"VKN_Remington870","","acc_pointer_IR","optic_Holosight_blk_F",{"VKN_8Rnd_12Gauge_Pellets",8},{},""},{},{},{"U_I_G_Story_Protagonist_F",{{"FirstAidKit",1},{"Chemlight_green",1,1},{"VKN_8Rnd_12Gauge_Pellets",3,8}}},{"V_Chestrig_blk",{{"VKN_8Rnd_12Gauge_Slugs",4,8},{"Chemlight_blue",4,1},{"SmokeShellBlue",3,1}}},{"B_Parachute",{}},"H_CrewHelmetHeli_B","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_Operator_01 : B_VKN_Operator_Light_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_LOKI_Operator_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "LOKI Operator";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_u_Foxcoat";

    linkedItems[] = {"V_PlateCarrier1_blk","H_Cap_oli_hs","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_PlateCarrier1_blk","H_Cap_oli_hs","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","muzzle_snds_M","acc_pointer_IR","optic_ERCO_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_u_Foxcoat",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"V_PlateCarrier1_blk",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{},"H_Cap_oli_hs","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_Medic_01 : B_VKN_LOKI_Operator_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_LOKI_Medic_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "LOKI Medic";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_Marpat_Black_Top";

    linkedItems[] = {"V_PlateCarrier1_blk","H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_PlateCarrier1_blk","H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","muzzle_snds_M","acc_pointer_IR","optic_ERCO_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_CombatUniform_Marpat_Black_Top",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"V_PlateCarrier1_blk",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{"B_AssaultPack_blk",{{"Medikit",1},{"FirstAidKit",10}}},"H_Bandanna_gry","G_Tactical_Clear",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_LOKI_UAV_01 : B_VKN_LOKI_Operator_01 {
    editorPreview = VKN_Extensions_Characters\Editor Preview Images\B_VKN_LOKI_UAV_01.paa;
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "LOKI UAV";
    side = 1;
    faction = "B_VKN";
    editorCategory = "VKN_Units";

    identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

    uniformClass = "VKN_CombatUniform_TshirtB_Tan";

    linkedItems[] = {"V_PlateCarrier1_blk","H_Booniehat_khk_hs","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_PlateCarrier1_blk","H_Booniehat_khk_hs","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"VKN_AK5C_bl","hgun_P07_F"};
    respawnWeapons[] = {"VKN_AK5C_bl","hgun_P07_F"};

    magazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_556x45_Stanag","16Rnd_9x21_Mag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag"};

    backpack = "B_UAV_01_backpack_F";

    ALiVE_orbatCreator_loadout[] = {{"VKN_AK5C_bl","muzzle_snds_M","acc_pointer_IR","optic_ERCO_blk_F",{"30Rnd_556x45_Stanag",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",16},{},""},{"VKN_CombatUniform_TshirtB_Tan",{{"FirstAidKit",4},{"Chemlight_green",1,1}}},{"V_PlateCarrier1_blk",{{"30Rnd_556x45_Stanag",5,30},{"HandGrenade",4,1}}},{"B_UAV_01_backpack_F",{}},"H_Booniehat_khk_hs","G_Combat",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};