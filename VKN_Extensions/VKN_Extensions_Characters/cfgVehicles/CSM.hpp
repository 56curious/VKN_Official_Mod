class O_CHArmy_Rifleman_01 : LOP_ChDKZ_Infantry_Commander_OCimport_02 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    side = 0;
    faction = "O_CHArmy";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_ChDKZ_Fatigue_04";

    linkedItems[] = {"rhssaf_helmet_m59_85_nocamo","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};
    respawnlinkedItems[] = {"rhssaf_helmet_m59_85_nocamo","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};

    weapons[] = {"rhs_weap_m70b1n","Binocular"};
    respawnWeapons[] = {"rhs_weap_m70b1n","Binocular"};

    magazines[] = {"rhs_10Rnd_762x39mm","rhs_10Rnd_762x39mm"};
    respawnMagazines[] = {"rhs_10Rnd_762x39mm","rhs_10Rnd_762x39mm"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m70b1n","","","",{"rhs_10Rnd_762x39mm",10},{},""},{},{},{"LOP_U_ChDKZ_Fatigue_04",{{"rhs_10Rnd_762x39mm",10,10}}},{},{},"rhssaf_helmet_m59_85_nocamo","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Rifleman_Ex_DDR_01 : LOP_ChDKZ_Infantry_Commander_OCimport_02 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman - Ex DDR";
    side = 0;
    faction = "O_CHArmy";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_US_Fatigue_03";

    linkedItems[] = {"rhs_6b5","rhsgref_M56","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};
    respawnlinkedItems[] = {"rhs_6b5","rhsgref_M56","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};

    weapons[] = {"rhs_weap_m70b1n","Binocular"};
    respawnWeapons[] = {"rhs_weap_m70b1n","Binocular"};

    magazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};
    respawnMagazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m70b1n","","","rhs_acc_ekp1",{"rhssaf_30Rnd_762x39mm_M67",30},{},""},{},{},{"LOP_U_US_Fatigue_03",{{"rhssaf_30Rnd_762x39mm_M67",1,30}}},{"rhs_6b5",{{"rhs_30Rnd_762x39mm_polymer",5,30}}},{},"rhsgref_M56","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Rifleman_Female_01 : LOP_ChDKZ_Infantry_Commander_OCimport_02 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rifleman - Female";
    side = 0;
    faction = "O_CHArmy";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "B_FEM_NATO_M81_rolled";

    linkedItems[] = {"rhssaf_vest_md98_rifleman","rhssaf_helmet_m59_85_oakleaf","ItemMap","ItemGPS","tf_anprc152_2","ItemCompass","ACE_Altimeter"};
    respawnlinkedItems[] = {"rhssaf_vest_md98_rifleman","rhssaf_helmet_m59_85_oakleaf","ItemMap","ItemGPS","tf_anprc152_2","ItemCompass","ACE_Altimeter"};

    weapons[] = {"rhs_weap_m92","Binocular"};
    respawnWeapons[] = {"rhs_weap_m92","Binocular"};

    magazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};
    respawnMagazines[] = {"rhssaf_30Rnd_762x39mm_M67","rhssaf_30Rnd_762x39mm_M67"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m92","","","",{"rhssaf_30Rnd_762x39mm_M67",30},{},""},{},{},{"B_FEM_NATO_M81_rolled",{}},{"rhssaf_vest_md98_rifleman",{{"rhssaf_30Rnd_762x39mm_M67",5,30}}},{},"rhssaf_helmet_m59_85_oakleaf","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_2","ItemCompass","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_SubMachinegunner_01 : LOP_ChDKZ_Infantry_Commander_OCimport_02 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "SubMachinegunner";
    side = 0;
    faction = "O_CHArmy";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_US_Fatigue_14";

    linkedItems[] = {"H_Cap_oli","ItemMap","tf_anprc148jem_1","ItemCompass","tf_microdagr"};
    respawnlinkedItems[] = {"H_Cap_oli","ItemMap","tf_anprc148jem_1","ItemCompass","tf_microdagr"};

    weapons[] = {"rhs_weap_pp2000","Binocular"};
    respawnWeapons[] = {"rhs_weap_pp2000","Binocular"};

    magazines[] = {"rhs_mag_9x19mm_7n21_44","rhs_mag_9x19mm_7n21_44"};
    respawnMagazines[] = {"rhs_mag_9x19mm_7n21_44","rhs_mag_9x19mm_7n21_44"};

    backpack = "rhs_sidor";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pp2000","","","rhs_acc_ekp8_18",{"rhs_mag_9x19mm_7n21_44",44},{},""},{},{},{"LOP_U_US_Fatigue_14",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"HandGrenade",1,1},{"SmokeShell",1,1},{"Chemlight_green",1,1},{"rhs_mag_9x19mm_7n21_44",2,44}}},{},{"rhs_sidor",{{"rhs_mag_9x19mm_7n21_44",2,44}}},"H_Cap_oli","rhs_scarf",{"Binocular","","","",{},{},""},{"ItemMap","","tf_anprc148jem_1","ItemCompass","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Marksman_Hooded_01 : LOP_ChDKZ_Infantry_Commander_OCimport_02 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman (Hooded)";
    side = 0;
    faction = "O_CHArmy";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_NAPA_Fatigue_03";

    linkedItems[] = {"V_Rangemaster_belt","ItemMap","tf_anprc148jem_1","ItemCompass","tf_microdagr"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","ItemMap","tf_anprc148jem_1","ItemCompass","tf_microdagr"};

    weapons[] = {"rhs_weap_m76","hgun_Pistol_01_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_m76","hgun_Pistol_01_F","Binocular"};

    magazines[] = {"rhsgref_10Rnd_792x57_m76","10Rnd_9x21_Mag","rhsgref_10Rnd_792x57_m76","10Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","10Rnd_9x21_Mag","rhsgref_10Rnd_792x57_m76","10Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_m76","","","rhs_acc_pso1m2",{"rhsgref_10Rnd_792x57_m76",10},{},""},{},{"hgun_Pistol_01_F","","","",{"10Rnd_9x21_Mag",10},{},""},{"LOP_U_NAPA_Fatigue_03",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"HandGrenade",1,1},{"SmokeShell",1,1},{"Chemlight_green",1,1},{"rhsgref_10Rnd_792x57_m76",5,10},{"10Rnd_9x21_Mag",3,10}}},{"V_Rangemaster_belt",{{"rhsgref_10Rnd_792x57_m76",2,10},{"10Rnd_9x21_Mag",1,10}}},{},"","G_Bandanna_oli",{"Binocular","","","",{},{},""},{"ItemMap","","tf_anprc148jem_1","ItemCompass","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_CHArmy_Marksman_01 : LOP_ChDKZ_Infantry_Commander_OCimport_02 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Marksman ";
    side = 0;
    faction = "O_CHArmy";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_NAPA_Fatigue_02";

    linkedItems[] = {"V_Rangemaster_belt","ItemMap","tf_anprc148jem_1","ItemCompass","tf_microdagr"};
    respawnlinkedItems[] = {"V_Rangemaster_belt","ItemMap","tf_anprc148jem_1","ItemCompass","tf_microdagr"};

    weapons[] = {"rhs_weap_kar98k","hgun_Pistol_01_F","Binocular"};
    respawnWeapons[] = {"rhs_weap_kar98k","hgun_Pistol_01_F","Binocular"};

    magazines[] = {"rhsgref_5Rnd_792x57_kar98k","10Rnd_9x21_Mag","rhsgref_5Rnd_792x57_kar98k","10Rnd_9x21_Mag"};
    respawnMagazines[] = {"rhsgref_5Rnd_792x57_kar98k","10Rnd_9x21_Mag","rhsgref_5Rnd_792x57_kar98k","10Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_kar98k","","","",{"rhsgref_5Rnd_792x57_kar98k",5},{},""},{},{"hgun_Pistol_01_F","","","",{"10Rnd_9x21_Mag",10},{},""},{"LOP_U_NAPA_Fatigue_02",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"HandGrenade",1,1},{"SmokeShell",1,1},{"Chemlight_green",1,1},{"10Rnd_9x21_Mag",3,10},{"rhsgref_5Rnd_792x57_kar98k",3,5}}},{"V_Rangemaster_belt",{{"10Rnd_9x21_Mag",1,10},{"rhsgref_5Rnd_792x57_kar98k",9,5}}},{},"","G_Balaclava_oli",{"Binocular","","","",{},{},""},{"ItemMap","","tf_anprc148jem_1","ItemCompass","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
