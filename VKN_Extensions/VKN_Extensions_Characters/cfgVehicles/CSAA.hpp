class O_INTArmy_Adrian_Kowalski_WDL_01 : LOP_ChDKZ_Infantry_Commander_OCimport_02 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Adrian Kowalski";
    side = 0;
    faction = "O_INTArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "VSM_M81_Crye_Camo";

    linkedItems[] = {"VSM_CarrierRig_Breacher_M81","VSM_Beanie_Black","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};
    respawnlinkedItems[] = {"VSM_CarrierRig_Breacher_M81","VSM_Beanie_Black","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};

    weapons[] = {"SMA_HK417vfg","Binocular"};
    respawnWeapons[] = {"SMA_HK417vfg","Binocular"};

    magazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR"};
    respawnMagazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR","SMA_20Rnd_762x51mm_M80A1_EPR"};

    backpack = "VSM_M81_Backpack_Kitbag";

    ALiVE_orbatCreator_loadout[] = {{"SMA_HK417vfg","","SMA_ANPEQ15_BLK","SMA_ELCAN_SPECTER_RDS",{"SMA_20Rnd_762x51mm_M80A1_EPR",20},{},"SMA_Gripod_01"},{},{},{"VSM_M81_Crye_Camo",{{"SMA_20Rnd_762x51mm_M80A1_EPR",2,20}}},{"VSM_CarrierRig_Breacher_M81",{{"SMA_20Rnd_762x51mm_M80A1_EPR",7,20}}},{"VSM_M81_Backpack_Kitbag",{}},"VSM_Beanie_Black","G_Aviator",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_INTArmy_Stepan_Andrijovych_Klymenko_WDL_01 : O_INTArmy_Adrian_Kowalski_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Stepan Andrijovych Klymenko";
    side = 0;
    faction = "O_INTArmy_WDL";

    identityTypes[] = {"Head_Euro","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_UKR_Fatigue_TTsKO";

    linkedItems[] = {"LOP_V_6B23_6Sh92_TTKO","rhs_altyn_visordown","ItemMap","ItemGPS","tf_anprc152_5","ItemCompass","ACE_Altimeter"};
    respawnlinkedItems[] = {"LOP_V_6B23_6Sh92_TTKO","rhs_altyn_visordown","ItemMap","ItemGPS","tf_anprc152_5","ItemCompass","ACE_Altimeter"};

    weapons[] = {"rhs_weap_pkp","rhs_weap_pya","Binocular"};
    respawnWeapons[] = {"rhs_weap_pkp","rhs_weap_pya","Binocular"};

    magazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_9x19_17","rhs_100Rnd_762x54mmR","rhs_mag_9x19_17"};
    respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_9x19_17","rhs_100Rnd_762x54mmR","rhs_mag_9x19_17"};

    backpack = "B_TacticalPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"rhs_weap_pkp","","","rhs_acc_nita",{"rhs_100Rnd_762x54mmR",100},{},""},{},{"rhs_weap_pya","","","",{"rhs_mag_9x19_17",17},{},""},{"LOP_U_UKR_Fatigue_TTsKO",{{"rhs_mag_9x19_17",3,17}}},{"LOP_V_6B23_6Sh92_TTKO",{{"rhs_100Rnd_762x54mmR",1,100}}},{"B_TacticalPack_blk",{{"rhs_100Rnd_762x54mmR",2,100}}},"rhs_altyn_visordown","VSM_balaclava2_Black",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_5","ItemCompass","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class O_INTArmy_Harun_Al_Bashir_WDL_01 : O_INTArmy_Adrian_Kowalski_WDL_01 {
    author = "Theodore";
    scope = 2;
    scopeCurator = 2;
    displayName = "Harun Al-Bashir";
    side = 0;
    faction = "O_INTArmy_WDL";

    identityTypes[] = {"Head_TK","LanguageRUS","G_IRAN_default"};

    uniformClass = "LOP_U_IA_Fatigue_03";

    linkedItems[] = {"LOP_V_Carrier_BLK","LOP_H_6B27M_BLK","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};
    respawnlinkedItems[] = {"LOP_V_Carrier_BLK","LOP_H_6B27M_BLK","ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter"};

    weapons[] = {"SMA_ACRREMblk_N","Binocular"};
    respawnWeapons[] = {"SMA_ACRREMblk_N","Binocular"};

    magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
    respawnMagazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};

    backpack = "B_FieldPack_blk";

    ALiVE_orbatCreator_loadout[] = {{"SMA_ACRREMblk_N","","","SMA_eotech552_3XDOWN",{"rhs_mag_30Rnd_556x45_M855A1_Stanag",30},{},""},{},{},{"LOP_U_IA_Fatigue_03",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"LOP_V_Carrier_BLK",{{"rhs_mag_30Rnd_556x45_M855A1_Stanag",4,30}}},{"B_FieldPack_blk",{}},"LOP_H_6B27M_BLK","rhs_googles_black",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","tf_anprc152_1","ItemCompass","ACE_Altimeter",""}};


    class EventHandlers : EventHandlers {
        class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};