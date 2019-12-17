class B_Greek_Officer_Basic_Police_01 : B_GEN_Soldier_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Officer (Basic)";
    side = 1;
    faction = "B_Greek_Police";

    identityTypes[] = {"LanguageGRE_F","Head_Greek","G_CIVIL_male"};

    uniformClass = "VKN_Police_Coveralls";

    linkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {};
    respawnWeapons[] = {};

    magazines[] = {};
    respawnMagazines[] = {};

    ALiVE_orbatCreator_loadout[] = {{},{},{},{"VKN_Police_Coveralls",{{"ACE_fieldDressing",2},{"ACE_morphine",1}}},{"V_TacVest_blk_POLICE",{}},{},"H_Cap_police","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Greek_Officer_Armed_Police_01 : B_Greek_Officer_Basic_Police_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Officer (Armed)";
    side = 1;
    faction = "B_Greek_Police";

    identityTypes[] = {"LanguageGRE_F","Head_Greek","G_CIVIL_male"};

    uniformClass = "VKN_Police_Coveralls";

    linkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"SMG_05_F","hgun_P07_F"};
    respawnWeapons[] = {"SMG_05_F","hgun_P07_F"};

    magazines[] = {"30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag"};
    respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag","30Rnd_9x21_Mag_SMG_02","16Rnd_9x21_Mag"};

    ALiVE_orbatCreator_loadout[] = {{"SMG_05_F","","","",{"30Rnd_9x21_Mag_SMG_02",30},{},""},{},{"hgun_P07_F","","","",{"16Rnd_9x21_Mag",17},{},""},{"VKN_Police_Coveralls",{{"ACE_fieldDressing",2},{"ACE_morphine",1}}},{"V_TacVest_blk_POLICE",{{"30Rnd_9x21_Mag_SMG_02",3,30}}},{},"H_Cap_police","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Greek_Officer_Commander_Police_01 : B_Greek_Officer_Basic_Police_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Officer (Commander)";
    side = 1;
    faction = "B_Greek_Police";

    identityTypes[] = {"LanguageGRE_F","Head_Greek","G_CIVIL_male"};

    uniformClass = "U_Marshal";

    linkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"V_TacVest_blk_POLICE","H_Cap_police","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"rhsusf_weap_glock17g4"};

    magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"U_Marshal",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"rhsusf_mag_17Rnd_9x19_JHP",2,17}}},{"V_TacVest_blk_POLICE",{{"rhsusf_mag_17Rnd_9x19_JHP",2,17}}},{},"H_Cap_police","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Greek_Riot_Officer_Police_01 : B_Greek_Officer_Basic_Police_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Riot Officer";
    side = 1;
    faction = "B_Greek_Police";

    identityTypes[] = {"LanguageGRE_F","Head_Greek","G_CIVIL_male"};

    uniformClass = "VKN_Police_Riot_Greek_1";

    linkedItems[] = {"VKN_Carrier_Spec_Police_Riot","VKN_Riot_Helmet_Visor_Up_Balaklava","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Carrier_Spec_Police_Riot","VKN_Riot_Helmet_Visor_Up_Balaklava","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"SMA_AAC_MPW_12_Black","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_AAC_MPW_12_Black","rhsusf_weap_glock17g4"};

    magazines[] = {"SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP","SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP","SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_AAC_MPW_12_Black","SMA_AAC_762_sdn6","acc_flashlight","SMA_eotech552_kf",{"SMA_30Rnd_762x35_BLK_EPR",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_Police_Riot_Greek_1",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"SMA_30Rnd_762x35_BLK_EPR",4,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17}}},{"VKN_Carrier_Spec_Police_Riot",{{"SMA_30Rnd_762x35_BLK_EPR",1,30}}},{},"VKN_Riot_Helmet_Visor_Up_Balaklava","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Greek_Riot_Officer_Heavy_Police_01 : B_GEN_Soldier_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Riot Officer (Heavy)";
    side = 1;
    faction = "B_Greek_Police";

    identityTypes[] = {"LanguageGRE_F","Head_Greek","G_CIVIL_male"};

    uniformClass = "VKN_Police_Riot_Greek_1";

    linkedItems[] = {"VKN_Carrier_Spec_Police_Riot","VKN_Riot_Helmet_Visor_Down","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Carrier_Spec_Police_Riot","VKN_Riot_Helmet_Visor_Down","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"SMA_AAC_MPW_12_Black","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_AAC_MPW_12_Black","rhsusf_weap_glock17g4"};

    magazines[] = {"SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP","SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP","SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_AAC_MPW_12_Black","SMA_AAC_762_sdn6","acc_flashlight","SMA_eotech552_kf",{"SMA_30Rnd_762x35_BLK_EPR",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_Police_Riot_Greek_1",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"SMA_30Rnd_762x35_BLK_EPR",4,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17}}},{"VKN_Carrier_Spec_Police_Riot",{{"SMA_30Rnd_762x35_BLK_EPR",1,30}}},{},"VKN_Riot_Helmet_Visor_Down","VSM_Balaclava2_black_Peltor",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Greek_Riot_Officer_Light_Police_01 : B_Greek_Officer_Basic_Police_01 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Riot Officer (Light)";
    side = 1;
    faction = "B_Greek_Police";

    identityTypes[] = {"LanguageGRE_F","Head_Greek","G_CIVIL_male"};

    uniformClass = "VKN_Police_Riot_Greek_1";

    linkedItems[] = {"VKN_Carrier_Spec_Police_Riot","VKN_Riot_Helmet_Visor_Up","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
    respawnlinkedItems[] = {"VKN_Carrier_Spec_Police_Riot","VKN_Riot_Helmet_Visor_Up","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

    weapons[] = {"SMA_AAC_MPW_12_Black","rhsusf_weap_glock17g4"};
    respawnWeapons[] = {"SMA_AAC_MPW_12_Black","rhsusf_weap_glock17g4"};

    magazines[] = {"SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP","SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP","SMA_30Rnd_762x35_BLK_EPR","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{"SMA_AAC_MPW_12_Black","SMA_AAC_762_sdn6","acc_flashlight","SMA_eotech552_kf",{"SMA_30Rnd_762x35_BLK_EPR",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_Police_Riot_Greek_1",{{"ACE_fieldDressing",2},{"ACE_morphine",1},{"SMA_30Rnd_762x35_BLK_EPR",4,30},{"rhsusf_mag_17Rnd_9x19_JHP",3,17}}},{"VKN_Carrier_Spec_Police_Riot",{{"SMA_30Rnd_762x35_BLK_EPR",1,30}}},{},"VKN_Riot_Helmet_Visor_Up","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Greek_Offroader_Police_01 : B_GEN_Offroad_01_gen_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Offroader";
    side = 1;
    faction = "B_Greek_Police";
    crew = "B_Greek_Officer_Basic_Police_01";

    editorCategory = "B_Greek_Police";
    editorSubcategory = "EdSubcat_Cars";

    class textureSources {
      class Police {
				// Display name of the texture
				displayName = "Police Texture";
				// Author of the texture
				author = "Curious";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\VKN_Extensions_Characters\data\retextures\Greek_Police_Offroader.paa"};
				// This source should be available for the following factions
				factions[] = {
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
    };

    hiddenSelections[] = {"camo", "camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Extensions_Characters\data\retextures\Greek_Police_Offroader.paa", "\VKN_Extensions_Characters\data\retextures\Greek_Police_Offroader.paa"};

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0; _unit setObjectTextureGlobal [0, '\VKN_Extensions_Characters\data\retextures\Greek_Police_Offroader.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Greek_Tahoe_SUV_Police_01 : B_VKN_tahoe_UNM_PMC_01_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Tahoe SUV";
    side = 1;
    faction = "B_Greek_Police";
    crew = "B_Greek_Officer_Basic_Police_01";

    editorCategory = "B_Greek_Police";
    editorSubcategory = "EdSubcat_Cars";

    hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","camo11","camo12","camo13","camo14","camo15","camo16","camo17","camo18","camo19","camo20","license1","license2","license3","license4","license5","license6","license7"};
    hiddenSelectionsTextures[] = {"\VKN_Extensions_Characters\data\retextures\Greek_Police_Tahoe.paa","\tahoe_08\data\GMT_rad_co.paa","\tahoe_08\data\glass_black.paa","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""};

    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_Greek_Van_Police_01 : B_GEN_Van_02_transport_F_OCimport_02 {
    author = "Curious";
    scope = 2;
    scopeCurator = 2;
    displayName = "Van";
    side = 1;
    faction = "B_Greek_Police";
    crew = "B_Greek_Officer_Basic_Police_01";
    editorCategory = "B_Greek_Police";
    editorSubcategory = "EdSubcat_Cars";

    class textureSources
		{
      class Police
			{
				// Display name of the texture
				displayName = "Police Texture";
				// Author of the texture
				author = "Curious";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\VKN_Extensions_Characters\data\retextures\Greek_Police_Van.paa"};
				// This source should be available for the following factions
				factions[] =
				{
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
    };
    hiddenSelections[] = {"camo1","camo2","camo3","emergency_lights"};
    hiddenSelectionsTextures[] = {"\VKN_Extensions_Characters\data\retextures\Greek_Police_Van.paa","\a3\soft_f_orange\van_02\data\van_wheel_co.paa","\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa","\a3\soft_f_orange\van_02\data\van_body_gen_CO.paa"};

    class Turrets : Turrets {
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0; _unit setObjectTextureGlobal [0, '\VKN_Extensions_Characters\data\retextures\Greek_Police_Van.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
