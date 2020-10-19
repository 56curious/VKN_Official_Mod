class I_SC_Sicario_01 : rhsgref_nat_commander_OCimport_02 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Sicario";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "VKN_Shirt_Black_Jeans_Black";

    linkedItems[] = {"V_TacVest_blk","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacVest_blk","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m70b3n","Binocular"};
    respawnWeapons[] = {"rhs_weap_m70b3n","Binocular"};

    magazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};
    respawnMagazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m70b3n","","","",{"rhssaf_30Rnd_762x39mm_M67",30},{},""},{},{},{"VKN_Shirt_Black_Jeans_Black",{{"FirstAidKit",1},{"rhssaf_30Rnd_762x39mm_M67",1,30}}},{"V_TacVest_blk",{{"rhs_mag_rdg2_black",2,1},{"rhs_mag_f1",1,1},{"rhssaf_30Rnd_762x39mm_M67",4,30}}},{},"H_Cap_blk","G_Bandanna_oli",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Sicario_02 : I_SC_Sicario_01 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Sicario";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "VKN_Shirt_Black_Jeans";

    linkedItems[] = {"V_TacVest_blk","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacVest_blk","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","Binocular"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{},{"VKN_Shirt_Black_Jeans",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"V_TacVest_blk",{{"rhs_mag_rdg2_black",2,1},{"rhs_mag_f1",1,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30}}},{},"H_Cap_blk","G_Bandanna_oli",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Sicario_03 : I_SC_Sicario_02 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Sicario";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "VKN_Shirt_Green_Jeans";

    linkedItems[] = {"V_TacChestrig_cbr_F","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacChestrig_cbr_F","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","Binocular"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{},{"VKN_Shirt_Green_Jeans",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"V_TacChestrig_cbr_F",{{"rhs_mag_rdg2_black",2,1},{"rhs_mag_f1",1,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{},"H_Cap_blk","G_Bandanna_oli",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;


};

class I_SC_Sicario_04 : I_SC_Sicario_03 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Sicario";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "VKN_Shirt_Green_Jeans";

    linkedItems[] = {"V_TacChestrig_cbr_F","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacChestrig_cbr_F","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","Binocular"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{},{"VKN_Shirt_Green_Jeans",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"V_TacChestrig_cbr_F",{{"rhs_mag_rdg2_black",2,1},{"rhs_mag_f1",1,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{},"H_Cap_blk","G_Bandanna_oli",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Sicario_AT_01 : I_SC_Sicario_04 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Sicario [AT]";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "VKN_Shirt_Green_Jeans";

    linkedItems[] = {"V_HarnessO_brn","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_HarnessO_brn","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m70b3n","launch_RPG7_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_m70b3n","launch_RPG7_F","Binocular"};

    magazines[] = {"rhssaf_30Rnd_762x39mm_M67","RPG7_F","rhssaf_30Rnd_762x39mm_M67"};
    respawnMagazines[] = {"rhssaf_30Rnd_762x39mm_M67","RPG7_F","rhssaf_30Rnd_762x39mm_M67"};

    backpack = "rhs_rpg_empty";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m70b3n","","","",{"rhssaf_30Rnd_762x39mm_M67",30},{},""},{"launch_RPG7_F","","","",{"RPG7_F",1},{},""},{},{"VKN_Shirt_Green_Jeans",{{"FirstAidKit",1},{"rhssaf_30Rnd_762x39mm_M67",1,30}}},{"V_HarnessO_brn",{{"rhs_mag_rdg2_black",2,1},{"rhs_mag_f1",1,1},{"rhssaf_30Rnd_762x39mm_M67",4,30}}},{"rhs_rpg_empty",{{"rhs_rpg7_PG7V_mag",3,1}}},"H_Cap_blk","G_Bandanna_oli",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Sicario_AR_01 : I_SC_Sicario_04 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Sicario [AR]";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "VKN_Shirt_Blue_Jeans_Black";

    linkedItems[] = {"V_TacChestrig_grn_F","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacChestrig_grn_F","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_minimi_para_railed","Binocular"};
    respawnWeapons[] = {"rhs_weap_minimi_para_railed","Binocular"};

    magazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_200Rnd_556x45_box"};
    respawnMagazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_200Rnd_556x45_box"};

    backpack = "B_TacticalPack_oli";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_minimi_para_railed","","","",{"rhsusf_200Rnd_556x45_box",200},{},"rhsusf_acc_saw_bipod"},{},{},{"VKN_Shirt_Blue_Jeans_Black",{{"FirstAidKit",1}}},{"V_TacChestrig_grn_F",{{"rhs_mag_rdg2_black",2,1},{"rhs_mag_f1",1,1},{"rhsusf_200Rnd_556x45_box",1,200}}},{"B_TacticalPack_oli",{{"rhsusf_200Rnd_556x45_box",1,200}}},"H_Cap_blk","G_Bandanna_oli",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Sicario_Grenadier_01 : I_SC_Sicario_04 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Sicario [Grenadier]";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "VKN_Shirt_Green_Jeans";

    linkedItems[] = {"V_HarnessOGL_brn","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_HarnessOGL_brn","H_Cap_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4a1_carryhandle_m203","Binocular"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle_m203","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle_m203","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M441_HE",1},""},{},{},{"VKN_Shirt_Green_Jeans",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30},{"rhs_mag_M441_HE",1,1}}},{"V_HarnessOGL_brn",{{"rhs_mag_rdg2_black",2,1},{"rhs_mag_f1",1,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30},{"rhs_mag_M441_HE",2,1},{"1Rnd_HE_Grenade_shell",4,1}}},{},"H_Cap_blk","G_Bandanna_oli",{"Binocular","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Soldado_01 : rhsgref_nat_pmil_saboteur_OCimport_02 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Soldado";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "U_I_L_Uniform_01_tshirt_skull_F";

    linkedItems[] = {"V_TacChestrig_grn_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4a1_carryhandle"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_AssaultPack_khk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_tdstubby_blk"},{},{},{"U_I_L_Uniform_01_tshirt_skull_F",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"V_TacChestrig_grn_F",{{"rhs_mag_f1",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"B_AssaultPack_khk",{{"HandGrenade",2,1},{"SmokeShell",1,1}}},"","G_Balaclava_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Grenadisto_01 : I_SC_Soldado_01 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Grenadisto";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "U_I_L_Uniform_01_tshirt_skull_F";

    linkedItems[] = {"V_TacChestrig_grn_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4a1_m203s"};
    respawnWeapons[] = {"rhs_weap_m4a1_m203s"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_M441_HE"};

    backpack = "B_AssaultPack_khk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_m203s","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{"rhs_mag_M441_HE",1},""},{},{},{"U_I_L_Uniform_01_tshirt_skull_F",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30},{"rhs_mag_M441_HE",1,1}}},{"V_TacChestrig_grn_F",{{"rhs_mag_f1",2,1},{"rhs_mag_M441_HE",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30},{"1Rnd_HE_Grenade_shell",3,1}}},{"B_AssaultPack_khk",{{"HandGrenade",2,1},{"SmokeShell",1,1}}},"","G_Balaclava_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Lider_01 : I_SC_Soldado_01 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Lider";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "U_I_L_Uniform_01_tshirt_black_F";

    linkedItems[] = {"V_TacVest_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacVest_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4a1_carryhandle"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","","rhsusf_acc_ACOG3_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_tdstubby_blk"},{},{},{"U_I_L_Uniform_01_tshirt_black_F",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",1,30}}},{"V_TacVest_blk",{{"rhs_mag_f1",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{},"","G_Balaclava_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Medico_01 : I_SC_Soldado_01 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Medico";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "U_I_L_Uniform_01_tshirt_black_F";

    linkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacVestIR_blk","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4a1_carryhandle"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_AssaultPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","","rhsusf_acc_ACOG_USMC",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_tdstubby_blk"},{},{},{"U_I_L_Uniform_01_tshirt_black_F",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",2,30}}},{"V_TacVestIR_blk",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"B_AssaultPack_blk",{{"ACE_epinephrine",4},{"ACE_morphine",4},{"ACE_surgicalKit",1},{"ACE_fieldDressing",10},{"ACE_personalAidKit",1},{"HandGrenade",2,1},{"SmokeShell",1,1}}},"","G_Balaclava_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Death_Guard_01 : LOP_IRAN_Infantry_SF_Rifleman_OCimport_02 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Death Guard";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Greek","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_Fatigue_BDU_BLK_01";

    linkedItems[] = {"V_PlateCarrierIAGL_oli","FIR_HGU56P_Skull","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_PlateCarrierIAGL_oli","FIR_HGU56P_Skull","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"LMG_Mk200_black_F"};
    respawnWeapons[] = {"LMG_Mk200_black_F"};

    magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
    respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};

    ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_black_F","","","optic_Arco_AK_blk_F",{"200Rnd_65x39_cased_Box",200},{},""},{},{},{"LOP_U_Fatigue_BDU_BLK_01",{}},{"V_PlateCarrierIAGL_oli",{{"200Rnd_65x39_cased_Box",2,200}}},{},"FIR_HGU56P_Skull","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Death_Guard_Grenadier_01 : I_SC_Death_Guard_01 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Death Guard (Grenadier)";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Greek","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_Fatigue_BDU_BLK_01";

    linkedItems[] = {"V_PlateCarrierIAGL_oli","FIR_HGU56P_Skull","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_PlateCarrierIAGL_oli","FIR_HGU56P_Skull","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"SMA_MK17_EGLM_black"};
    respawnWeapons[] = {"SMA_MK17_EGLM_black"};

    magazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR","1Rnd_HE_Grenade_shell","SMA_20Rnd_762x51mm_M80A1_EPR","1Rnd_HE_Grenade_shell"};
    respawnMagazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR","1Rnd_HE_Grenade_shell","SMA_20Rnd_762x51mm_M80A1_EPR","1Rnd_HE_Grenade_shell"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_MK17_EGLM_black","","","",{"SMA_20Rnd_762x51mm_M80A1_EPR",20},{"1Rnd_HE_Grenade_shell",1},""},{},{},{"LOP_U_Fatigue_BDU_BLK_01",{{"SMA_20Rnd_762x51mm_M80A1_EPR",3,20},{"1Rnd_HE_Grenade_shell",1,1}}},{"V_PlateCarrierIAGL_oli",{{"SMA_20Rnd_762x51mm_M80A1_EPR",4,20},{"1Rnd_HE_Grenade_shell",4,1}}},{},"FIR_HGU56P_Skull","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Death_Guard_Leader_01 : I_SC_Death_Guard_01 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Death Guard (Leader)";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Greek","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_Fatigue_BDU_BLK_01";

    linkedItems[] = {"V_PlateCarrierIAGL_oli","FIR_HGU56P_Skull_Death","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_PlateCarrierIAGL_oli","FIR_HGU56P_Skull_Death","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"srifle_DMR_03_F"};
    respawnWeapons[] = {"srifle_DMR_03_F"};

    magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
    respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_F","","","optic_DMS",{"20Rnd_762x51_Mag",20},{},""},{},{},{"LOP_U_Fatigue_BDU_BLK_01",{{"20Rnd_762x51_Mag",3,20}}},{"V_PlateCarrierIAGL_oli",{}},{},"FIR_HGU56P_Skull_Death","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Soldado_RPG_01 : I_SC_Soldado_01 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Soldado (RPG-7)";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "U_I_L_Uniform_01_tshirt_skull_F";

    linkedItems[] = {"V_TacChestrig_grn_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_m4a1_carryhandle","launch_RPG7_F"};
    respawnWeapons[] = {"rhs_weap_m4a1_carryhandle","launch_RPG7_F"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","RPG7_F","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","RPG7_F","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "rhs_rpg_empty";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m4a1_carryhandle","","","",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},"rhsusf_acc_tdstubby_blk"},{"launch_RPG7_F","","","",{"RPG7_F",1},{},""},{},{"U_I_L_Uniform_01_tshirt_skull_F",{{"FirstAidKit",1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",3,30}}},{"V_TacChestrig_grn_F",{{"rhs_mag_f1",2,1},{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"rhs_rpg_empty",{{"HandGrenade",2,1},{"SmokeShell",1,1},{"RPG7_F",2,1},{"rhs_rpg7_PG7V_mag",1,1}}},"","G_Balaclava_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Soldado_AR_01 : I_SC_Soldado_01 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Soldado (AR)";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Euro","LanguageCZ","rhs_scarf","G_CIVIL_male"};

    uniformClass = "U_I_L_Uniform_01_tshirt_skull_F";

    linkedItems[] = {"V_TacChestrig_grn_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacChestrig_grn_F","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_minimi_para_railed"};
    respawnWeapons[] = {"rhs_weap_minimi_para_railed"};

    magazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_200Rnd_556x45_box"};
    respawnMagazines[] = {"rhsusf_200Rnd_556x45_box","rhsusf_200Rnd_556x45_box"};

    backpack = "B_AssaultPack_khk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_minimi_para_railed","","","",{"rhsusf_200Rnd_556x45_box",200},{},"rhsusf_acc_saw_bipod"},{},{},{"U_I_L_Uniform_01_tshirt_skull_F",{{"FirstAidKit",1}}},{"V_TacChestrig_grn_F",{{"rhs_mag_f1",2,1},{"rhsusf_200Rnd_556x45_box",2,200}}},{"B_AssaultPack_khk",{{"HandGrenade",2,1},{"SmokeShell",1,1},{"rhsusf_200Rnd_556x45_box",2,200}}},"","G_Balaclava_blk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class I_SC_Death_Guard_AT_01 : I_SC_Death_Guard_01 {
    author = "jonmo";
    scope = public;
    scopeCurator = 2;
    displayName = "Death Guard (AT)";
    side = 2;
    faction = "I_SC";

    identityTypes[] = {"Head_Greek","LanguagePER_F","G_IRAN_default"};

    uniformClass = "LOP_U_Fatigue_BDU_BLK_01";

    linkedItems[] = {"V_PlateCarrierIAGL_oli","FIR_HGU56P_Skull","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_PlateCarrierIAGL_oli","FIR_HGU56P_Skull","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"LMG_Mk200_black_F","rhs_weap_rpg26"};
    respawnWeapons[] = {"LMG_Mk200_black_F","rhs_weap_rpg26"};

    magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
    respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};

    ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_black_F","","","optic_Arco_AK_blk_F",{"200Rnd_65x39_cased_Box",200},{},""},{"rhs_weap_rpg26","","","",{},{},""},{},{"LOP_U_Fatigue_BDU_BLK_01",{}},{"V_PlateCarrierIAGL_oli",{{"200Rnd_65x39_cased_Box",2,200}}},{},"FIR_HGU56P_Skull","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
