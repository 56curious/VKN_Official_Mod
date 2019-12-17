class B_VKN_VALKYRIE_DECKCREW_PMC_01 : rhsusf_airforce_jetpilot_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_DECKCREW_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Deck Crew";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

    uniformClass = "VKN_CombatUniform_Black_Vest";

    linkedItems[] = {"V_DeckCrew_blue_F","H_Cap_headphones","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"V_DeckCrew_blue_F","H_Cap_headphones","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"rhsusf_weap_glock17g4","rhs_pdu4"};
    respawnWeapons[] = {"rhsusf_weap_glock17g4","rhs_pdu4"};

    magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};
    respawnMagazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP"};

    ALiVE_orbatCreator_loadout[] = {{},{},{"rhsusf_weap_glock17g4","","","",{"rhsusf_mag_17Rnd_9x19_JHP",17},{},""},{"VKN_CombatUniform_Black_Vest",{{"ACE_morphine",15},{"ACE_fieldDressing",21}}},{"V_DeckCrew_blue_F",{{"rhsusf_mag_17Rnd_9x19_JHP",3,17}}},{},"H_Cap_headphones","G_Sport_Blackred",{"rhs_pdu4","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VALKYRIE_JETPILOT_PMC_01 : B_VKN_VALKYRIE_DECKCREW_PMC_01 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_JETPILOT_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Jet Pilot";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

    uniformClass = "U_I_pilotCoveralls";

    linkedItems[] = {"RHS_jetpilot_usaf","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};
    respawnlinkedItems[] = {"RHS_jetpilot_usaf","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr"};

    weapons[] = {"SMG_05_F","rhsusf_weap_glock17g4","rhs_pdu4"};
    respawnWeapons[] = {"SMG_05_F","rhsusf_weap_glock17g4","rhs_pdu4"};

    magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};

    ALiVE_orbatCreator_loadout[] = {{"SMG_05_F","","","",{"30Rnd_9x21_Mag_SMG_02",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"U_I_pilotCoveralls",{{"30Rnd_9x21_Mag_SMG_02",4,30},{"rhsusf_mag_17Rnd_9x19_FMJ",2,17}}},{},{},"RHS_jetpilot_usaf","",{"rhs_pdu4","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr",""}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VALKYRIE_PILOT_PMC_01 : B_VKN_VALKYRIE_JETPILOT_PMC_01 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_PILOT_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Rotar Pilot";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

    uniformClass = "VKN_CombatUniform_Black_Vest";

    linkedItems[] = {"VSM_LBT1961_OGA_OD","rhsusf_hgu56p_visor_mask","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT1961_OGA_OD","rhsusf_hgu56p_visor_mask","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMG_05_F","rhsusf_weap_glock17g4","rhs_pdu4"};
    respawnWeapons[] = {"SMG_05_F","rhsusf_weap_glock17g4","rhs_pdu4"};

    magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};

    ALiVE_orbatCreator_loadout[] = {{"SMG_05_F","","","",{"30Rnd_9x21_Mag_SMG_02",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Black_Vest",{{"ACE_morphine",15},{"ACE_fieldDressing",21}}},{"VSM_LBT1961_OGA_OD",{{"rhsusf_mag_17Rnd_9x19_FMJ",2,17},{"30Rnd_9x21_Mag_SMG_02",5,30}}},{},"rhsusf_hgu56p_visor_mask","VSM_Shemagh_OD",{"rhs_pdu4","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VALKYRIE_CREW_PMC_01 : B_VKN_VALKYRIE_DECKCREW_PMC_01 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_CREW_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Crew";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";

    identityTypes[] = {"Head_NATO","LanguageENG_F","rhsusf_g_usmc"};

    uniformClass = "VKN_CombatUniform_Black_Vest";

    linkedItems[] = {"VSM_LBT1961_OGA_OD","rhsusf_hgu56p_visor","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};
    respawnlinkedItems[] = {"VSM_LBT1961_OGA_OD","rhsusf_hgu56p_visor","ItemMap","O_UavTerminal","tf_anprc152_2","tf_microdagr","ACE_NVG_Gen1"};

    weapons[] = {"SMG_05_F","rhsusf_weap_glock17g4","rhs_pdu4"};
    respawnWeapons[] = {"SMG_05_F","rhsusf_weap_glock17g4","rhs_pdu4"};

    magazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};
    respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02","30Rnd_9x21_Mag_SMG_02"};

    ALiVE_orbatCreator_loadout[] = {{"SMG_05_F","","","",{"30Rnd_9x21_Mag_SMG_02",30},{},""},{},{"rhsusf_weap_glock17g4","","","",{},{},""},{"VKN_CombatUniform_Black_Vest",{{"ACE_morphine",15},{"ACE_fieldDressing",21}}},{"VSM_LBT1961_OGA_OD",{{"rhsusf_mag_17Rnd_9x19_FMJ",2,17},{"30Rnd_9x21_Mag_SMG_02",5,30}}},{},"rhsusf_hgu56p_visor","VSM_Shemagh_OD",{"rhs_pdu4","","","",{},{},""},{"ItemMap","O_UavTerminal","tf_anprc152_2","","tf_microdagr","ACE_NVG_Gen1"}};


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VALKYRIE_A10_PMC_01 : RHS_A10_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_A10_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "A-10A";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_JETPILOT_PMC_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VALKYRIE_F22_PMC_01 : rhsusf_f22_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_F22_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "F-22A";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_JETPILOT_PMC_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\rhsusf\addons\rhsusf_f22\data\f22_b1.paa'];_unit setObjectTextureGlobal [1,'\rhsusf\addons\rhsusf_f22\data\f22_wing_spads.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class B_VKN_VALKYRIE_F16_PMC_01 : FIR_F16C_WP_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_F16_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "F-16";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_JETPILOT_PMC_01";


    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_greyhex_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_greyhex_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Grey";

};

class B_VKN_VALKYRIE_BLACKFISH_PMC_01 : B_T_VTOL_01_armed_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_BLACKFISH_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Blackfish";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
        class GunnerTurret_01 : GunnerTurret_01 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class GunnerTurret_02 : GunnerTurret_02 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa'];_unit setObjectTextureGlobal [4,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_signs_CA.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class B_VKN_VALKYRIE_BLACKFISHI_PMC_01 : B_T_VTOL_01_infantry_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_BLACKFISHI_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Blackfish (Infantry)";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
        class PassengerTurret_01 : PassengerTurret_01 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class PassengerTurret_02 : PassengerTurret_02 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa'];_unit setObjectTextureGlobal [3,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa'];_unit setObjectTextureGlobal [4,'\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_signs_CA.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Olive";

};

class B_VKN_VALKYRIE_BLACKFISHV_PMC_01 : B_T_VTOL_01_vehicle_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_BLACKFISHV_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "Blackfish (Vehicle)";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
        class PassengerTurret_01 : PassengerTurret_01 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class PassengerTurret_02 : PassengerTurret_02 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VALKYRIE_AH64D_PMC_01 : RHS_AH64D_wd_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_AH64D_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "AH-64D";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
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

class B_VKN_VALKYRIE_CH47F_PMC_01 : RHS_CH_47F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_CH47F_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "CH-47F";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
        class MainTurret : MainTurret { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class RightDoorGun : RightDoorGun { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class B_VKN_VALKYRIE_CH47FD_PMC_01 : B_VKN_VALKYRIE_CH47F_PMC_01 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_CH47FD_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "CH-47F (Desert)";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
        class MainTurret : MainTurret { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class RightDoorGun : RightDoorGun { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_light_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_light_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_light_mlod_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Desert";

};

class B_VKN_VALKYRIE_UH60M_PMC_01 : RHS_UH60M_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_UH60M_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "UH-60M";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
        class MainTurret : MainTurret { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class RightDoorGun : RightDoorGun { gunnerType = "rhsusf_army_ucp_helicrew"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class B_VKN_VALKYRIE_UH60MMED_PMC_01 : RHS_UH60M_MEV_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_UH60MMED_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "UH-60M MED";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_fuselage_mev_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_engine_mev_co.paa'];_unit setObjectTextureGlobal [2,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa'];_unit setObjectTextureGlobal [3,'rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class B_VKN_VALKYRIE_UH_1Y_PMC_01 : RHS_UH1Y_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_UH_1Y_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "UH-1Y";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class MainTurret : MainTurret { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class RightDoorGun : RightDoorGun { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
        class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_ext_co.paa'];_unit setObjectTextureGlobal [1,'rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "standard";

};

class B_VKN_VALKYRIE_CH53E_PMC_01 : rhsusf_CH53E_USMC_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_CH53E_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "CH-53E";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VALKYRIE_UCAV_PMC_01 : B_UAV_05_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_UCAV_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "UCAV Sentinel";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_JETPILOT_PMC_01";

    class Turrets : Turrets {
        class MainTurret : MainTurret { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'A3\Air_F_Jets\UAV_05\Data\UAV05_fuselage_01_Camo_co.paa'];_unit setObjectTextureGlobal [1,'A3\Air_F_Jets\UAV_05\Data\UAV05_fuselage_02_Camo_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "DarkGreyCamo";

};

class B_VKN_VALKYRIE_UH80_PMC_01 : B_Heli_Transport_01_F_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_UH80_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "UH-80 Stealth";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
        class MainTurret : MainTurret { gunnerType = "B_VKN_VALKYRIE_CREW_PMC_01"; };
        class RightDoorGun : RightDoorGun { gunnerType = "B_helicrew_F"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext01_BLUFOR_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Air_F_Beta\Heli_Transport_01\Data\Heli_Transport_01_ext02_BLUFOR_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;
    ALiVE_orbatCreator_texture = "Green";

};

class B_VKN_VALKYRIE_AH6M_PMC_01 : RHS_MELB_AH6M_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_AH6M_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "AH-6M Littlebird";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};

class B_VKN_VALKYRIE_OH6M_PMC_01 : RHS_MELB_MH6M_OCimport_02 {
    editorPreview = \x\\addons\bvknpmcvalkyrie\data\preview\B_VKN_VALKYRIE_OH6M_PMC_01.JPG;
    author = "Lion";
    scope = 2;
    scopeCurator = 2;
    displayName = "OH-6M Littlebird";
    side = 1;
    faction = "B_VKN_PMC_VALKYRIE";
    crew = "B_VKN_VALKYRIE_PILOT_PMC_01";

    class Turrets : Turrets {
        class CopilotTurret : CopilotTurret { gunnerType = "B_VKN_VALKYRIE_PILOT_PMC_01"; };
        class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
        class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
    };



    class EventHandlers : EventHandlers {


        class ALiVE_orbatCreator {
            init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
        };

    };

    // custom attributes (do not delete)
    ALiVE_orbatCreator_owned = 1;

};
