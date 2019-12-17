class O_CHArmy_Commander_WDL_01 : LOP_ChDKZ_Infantry_Commander_OCimport_02 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Commander";
    side = 0;
    faction = "O_CHArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "rhssaf_uniform_m10_digital";

    linkedItems[] = {"rhssaf_vest_md98_digital","rhs_beret_milp","ItemMap","ItemGPS","tf_anprc148jem_2","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhssaf_vest_md98_digital","rhs_beret_milp","ItemMap","ItemGPS","tf_anprc148jem_2","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_tt33","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"rhs_weap_tt33","Laserdesignator_01_khk_F"};

    magazines[] = {"rhs_mag_762x25_8","Laserbatteries","rhs_mag_762x25_8","Laserbatteries"};
    respawnMagazines[] = {"rhs_mag_762x25_8","Laserbatteries","rhs_mag_762x25_8","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"rhs_weap_tt33","","","",{"rhs_mag_762x25_8",8},{},""},{"rhssaf_uniform_m10_digital",{{"rhsgref_30rnd_556x45_vhs2",3,30},{"rhs_mag_762x25_8",3,8}}},{"rhssaf_vest_md98_digital",{{"rhsgref_30rnd_556x45_vhs2",6,30},{"rhssaf_mag_brd_m83_white",2,1}}},{},"rhs_beret_milp","",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","tf_anprc148jem_2","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Rifleman_WDL_01 : O_CHArmy_Commander_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 0;
    faction = "O_CHArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "rhssaf_uniform_m10_digital";

    linkedItems[] = {"rhssaf_vest_md99_digital_rifleman_radio","rhssaf_helmet_m97_digital_black_ess","ItemMap","ItemGPS","tf_anprc148jem_6","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhssaf_vest_md99_digital_rifleman_radio","rhssaf_helmet_m97_digital_black_ess","ItemMap","ItemGPS","tf_anprc148jem_6","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_g36kv","rhs_weap_pya"};
    respawnWeapons[] = {"rhs_weap_g36kv","rhs_weap_pya"};

    magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhs_mag_9x19_17","rhssaf_30rnd_556x45_EPR_G36","rhs_mag_9x19_17"};
    respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhs_mag_9x19_17","rhssaf_30rnd_556x45_EPR_G36","rhs_mag_9x19_17"};

    backpack = "rhssaf_kitbag_digital";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36kv","","","optic_ERCO_blk_F",{"rhssaf_30rnd_556x45_EPR_G36",30},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"rhssaf_uniform_m10_digital",{{"rhs_mag_9x19_17",3,17},{"rhssaf_30rnd_556x45_EPR_G36",3,30}}},{"rhssaf_vest_md99_digital_rifleman_radio",{{"rhssaf_30rnd_556x45_EPR_G36",7,30}}},{"rhssaf_kitbag_digital",{}},"rhssaf_helmet_m97_digital_black_ess","",{},{"ItemMap","ItemGPS","tf_anprc148jem_6","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Advanced_Rifleman_WDL_01 : O_CHArmy_Rifleman_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Advanced Rifleman";
    side = 0;
    faction = "O_CHArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "rhssaf_uniform_m10_digital";

    linkedItems[] = {"rhssaf_vest_md99_digital_rifleman_radio","rhssaf_helmet_m97_digital_black_ess_bare","ItemMap","ItemGPS","tf_anprc148jem_7","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhssaf_vest_md99_digital_rifleman_radio","rhssaf_helmet_m97_digital_black_ess_bare","ItemMap","ItemGPS","tf_anprc148jem_7","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_vhsd2","rhs_weap_pya"};
    respawnWeapons[] = {"rhs_weap_vhsd2","rhs_weap_pya"};

    magazines[] = {"rhsgref_30rnd_556x45_vhs2","rhs_mag_9x19_17","rhsgref_30rnd_556x45_vhs2","rhs_mag_9x19_17"};
    respawnMagazines[] = {"rhsgref_30rnd_556x45_vhs2","rhs_mag_9x19_17","rhsgref_30rnd_556x45_vhs2","rhs_mag_9x19_17"};

    backpack = "rhssaf_kitbag_digital";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2","","","rhsusf_acc_RX01_NoFilter",{"rhsgref_30rnd_556x45_vhs2",30},{},"rhsusf_acc_grip2"},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"rhssaf_uniform_m10_digital",{{"rhsgref_30rnd_556x45_vhs2",3,30},{"rhs_mag_9x19_17",3,17}}},{"rhssaf_vest_md99_digital_rifleman_radio",{{"rhsgref_30rnd_556x45_vhs2",7,30}}},{"rhssaf_kitbag_digital",{}},"rhssaf_helmet_m97_digital_black_ess_bare","",{},{"ItemMap","ItemGPS","tf_anprc148jem_7","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Autorifleman_WDL_01 : O_CHArmy_Advanced_Rifleman_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Autorifleman";
    side = 0;
    faction = "O_CHArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "rhssaf_uniform_m10_digital";

    linkedItems[] = {"rhssaf_vest_md12_digital","rhssaf_helmet_m97_digital","ItemMap","ItemGPS","tf_anprc148jem_5","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhssaf_vest_md12_digital","rhssaf_helmet_m97_digital","ItemMap","ItemGPS","tf_anprc148jem_5","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_minimi_para_railed","rhs_weap_pya"};
    respawnWeapons[] = {"rhs_weap_minimi_para_railed","rhs_weap_pya"};

    magazines[] = {"rhsusf_200Rnd_556x45_box","rhs_mag_9x19_17","rhsusf_200Rnd_556x45_box","rhs_mag_9x19_17"};
    respawnMagazines[] = {"rhsusf_200Rnd_556x45_box","rhs_mag_9x19_17","rhsusf_200Rnd_556x45_box","rhs_mag_9x19_17"};

    backpack = "rhssaf_kitbag_digital";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_minimi_para_railed","","","rhsusf_acc_ACOG2_USMC",{"rhsusf_200Rnd_556x45_box",200},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"rhssaf_uniform_m10_digital",{{"ACE_EarPlugs",1},{"rhs_mag_9x19_17",3,17}}},{"rhssaf_vest_md12_digital",{{"rhsusf_200Rnd_556x45_box",1,200}}},{"rhssaf_kitbag_digital",{{"rhsusf_200Rnd_556x45_box",2,200},{"MiniGrenade",2,1}}},"rhssaf_helmet_m97_digital","",{},{"ItemMap","ItemGPS","tf_anprc148jem_5","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Marksman_WDL_01 : O_CHArmy_Autorifleman_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman";
    side = 0;
    faction = "O_CHArmy_WDL";

    identityTypes[] = {"Head_NATO_camo_semiarid","LanguageRUS","G_IRAN_default"};

    uniformClass = "rhssaf_uniform_m10_digital";

    linkedItems[] = {"rhssaf_vest_md98_digital","rhssaf_bandana_digital","ItemMap","ItemGPS","tf_anprc148jem_3","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhssaf_vest_md98_digital","rhssaf_bandana_digital","ItemMap","ItemGPS","tf_anprc148jem_3","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_svds_npz","hgun_Rook40_F","Laserdesignator_01_khk_F"};
    respawnWeapons[] = {"rhs_weap_svds_npz","hgun_Rook40_F","Laserdesignator_01_khk_F"};

    magazines[] = {"rhs_10Rnd_762x54mmR_7N1","16Rnd_9x21_Mag","Laserbatteries","rhs_10Rnd_762x54mmR_7N1","16Rnd_9x21_Mag","Laserbatteries"};
    respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","16Rnd_9x21_Mag","Laserbatteries","rhs_10Rnd_762x54mmR_7N1","16Rnd_9x21_Mag","Laserbatteries"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_svds_npz","","","optic_SOS",{"rhs_10Rnd_762x54mmR_7N1",10},{},""},{},{"hgun_Rook40_F","muzzle_snds_L","","",{"16Rnd_9x21_Mag",17},{},""},{"rhssaf_uniform_m10_digital",{{"16Rnd_9x21_Mag",3,17},{"rhs_10Rnd_762x54mmR_7N1",3,10}}},{"rhssaf_vest_md98_digital",{{"rhssaf_mag_brd_m83_white",2,1},{"rhs_10Rnd_762x54mmR_7N1",7,10}}},{},"rhssaf_bandana_digital","VSM_Facemask_OD_Peltor",{"Laserdesignator_01_khk_F","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","tf_anprc148jem_3","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Rifleman_Light_AT_WDL_01 : O_CHArmy_Rifleman_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Light AT)";
    side = 0;
    faction = "O_CHArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "rhssaf_uniform_m10_digital";

    linkedItems[] = {"rhssaf_vest_md99_digital_rifleman_radio","rhssaf_helmet_m97_digital_black_ess","ItemMap","ItemGPS","tf_anprc148jem_6","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhssaf_vest_md99_digital_rifleman_radio","rhssaf_helmet_m97_digital_black_ess","ItemMap","ItemGPS","tf_anprc148jem_6","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_g36kv","rhs_weap_m80","rhs_weap_pya"};
    respawnWeapons[] = {"rhs_weap_g36kv","rhs_weap_m80","rhs_weap_pya"};

    magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhs_m80_mag","rhs_mag_9x19_17","rhssaf_30rnd_556x45_EPR_G36","rhs_mag_9x19_17"};
    respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","rhs_m80_mag","rhs_mag_9x19_17","rhssaf_30rnd_556x45_EPR_G36","rhs_mag_9x19_17"};

    backpack = "rhssaf_kitbag_digital";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36kv","","","optic_ERCO_blk_F",{"rhssaf_30rnd_556x45_EPR_G36",30},{},""},{"rhs_weap_m80","","","",{"rhs_m80_mag",1},{},""},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"rhssaf_uniform_m10_digital",{{"rhs_mag_9x19_17",3,17},{"rhssaf_30rnd_556x45_EPR_G36",3,30}}},{"rhssaf_vest_md99_digital_rifleman_radio",{{"rhssaf_30rnd_556x45_EPR_G36",7,30}}},{"rhssaf_kitbag_digital",{{"rhs_m80_mag",1,1}}},"rhssaf_helmet_m97_digital_black_ess","",{},{"ItemMap","ItemGPS","tf_anprc148jem_6","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Rifleman_Heavy_AT_WDL_01 : O_CHArmy_Rifleman_Light_AT_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman (Heavy AT)";
    side = 0;
    faction = "O_CHArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "rhssaf_uniform_m10_digital";

    linkedItems[] = {"rhssaf_vest_md99_digital_rifleman_radio","rhssaf_helmet_m97_digital_black_ess","ItemMap","ItemGPS","tf_anprc148jem_6","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhssaf_vest_md99_digital_rifleman_radio","rhssaf_helmet_m97_digital_black_ess","ItemMap","ItemGPS","tf_anprc148jem_6","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_g36kv","launch_O_Vorona_green_F","rhs_weap_pya"};
    respawnWeapons[] = {"rhs_weap_g36kv","launch_O_Vorona_green_F","rhs_weap_pya"};

    magazines[] = {"rhssaf_30rnd_556x45_EPR_G36","Vorona_HEAT","rhs_mag_9x19_17","rhssaf_30rnd_556x45_EPR_G36","rhs_mag_9x19_17"};
    respawnMagazines[] = {"rhssaf_30rnd_556x45_EPR_G36","Vorona_HEAT","rhs_mag_9x19_17","rhssaf_30rnd_556x45_EPR_G36","rhs_mag_9x19_17"};

    backpack = "rhssaf_kitbag_digital";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_g36kv","","","optic_ERCO_blk_F",{"rhssaf_30rnd_556x45_EPR_G36",30},{},""},{"launch_O_Vorona_green_F","","","",{"Vorona_HEAT",1},{},""},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"rhssaf_uniform_m10_digital",{{"rhs_mag_9x19_17",3,17},{"rhssaf_30rnd_556x45_EPR_G36",3,30}}},{"rhssaf_vest_md99_digital_rifleman_radio",{{"rhssaf_30rnd_556x45_EPR_G36",7,30}}},{"rhssaf_kitbag_digital",{{"Vorona_HEAT",2,1}}},"rhssaf_helmet_m97_digital_black_ess","",{},{"ItemMap","ItemGPS","tf_anprc148jem_6","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Medic_WDL_01 : O_CHArmy_Rifleman_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Medic";
    side = 0;
    faction = "O_CHArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "rhssaf_uniform_m10_digital";

    linkedItems[] = {"rhssaf_vest_md99_digital_radio","rhssaf_helmet_m97_digital_black_ess","ItemMap","ItemGPS","tf_anprc148jem_4","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"rhssaf_vest_md99_digital_radio","rhssaf_helmet_m97_digital_black_ess","ItemMap","ItemGPS","tf_anprc148jem_4","ItemCompass","ItemWatch"};

    weapons[] = {"rhs_weap_vhsd2","rhs_weap_pya"};
    respawnWeapons[] = {"rhs_weap_vhsd2","rhs_weap_pya"};

    magazines[] = {"rhsgref_30rnd_556x45_vhs2","rhs_mag_9x19_17","rhsgref_30rnd_556x45_vhs2","rhs_mag_9x19_17"};
    respawnMagazines[] = {"rhsgref_30rnd_556x45_vhs2","rhs_mag_9x19_17","rhsgref_30rnd_556x45_vhs2","rhs_mag_9x19_17"};

    backpack = "rhssaf_kitbag_digital";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_vhsd2","","","ACE_optic_MRCO_2D",{"rhsgref_30rnd_556x45_vhs2",30},{},"rhsusf_acc_grip2"},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"rhssaf_uniform_m10_digital",{{"rhsgref_30rnd_556x45_vhs2",3,30},{"rhs_mag_9x19_17",3,17}}},{"rhssaf_vest_md99_digital_radio",{{"rhsgref_30rnd_556x45_vhs2",7,30}}},{"rhssaf_kitbag_digital",{{"ACE_bloodIV",2},{"ACE_bloodIV_250",4},{"ACE_epinephrine",13},{"ACE_morphine",15},{"ACE_elasticBandage",34}}},"rhssaf_helmet_m97_digital_black_ess","",{},{"ItemMap","ItemGPS","tf_anprc148jem_4","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
