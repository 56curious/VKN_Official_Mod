diag_log "VKN - XEH Exec";

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
// Viking Misc Settings
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

_strategicMapVal = profileNamespace getVariable ["VKN_strategicMapValue_var", true];
[
    "VKN_strategicMapsetting",
    "CHECKBOX",
    ["strategic Map", "toggle if you want the strategic Map (ALT + M keybind) on your client. Shows map in a simulated environment."],
    ["Viking PMC Settings", "Miscellaneous"],
    _strategicMapVal,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_strategicMapValue_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;

_VKN_ArsenalAnimation = profileNamespace getVariable ["VKN_VKN_ArsenalAnimation_var", false];
[
    "VKN_arsenal_animations",
    "CHECKBOX",
    ["Arsenal Animation", "Toggle animations playing in the arsenal."],
    ["Viking PMC Settings", "Miscellaneous"],
    _VKN_ArsenalAnimation,
    true,
    {
        params ["_value"];
        _VKN_ArsenalAnimation = profileNamespace setVariable ["VKN_VKN_ArsenalAnimation_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;





////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
// Viking Main Menu Server Quick Join Settings
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

_MainMenuServerIPVal = profileNamespace getVariable ["VKN_MainMenuServerIPVal_var", "127.0.0.1"];
_MainMenuServerPortVal = profileNamespace getVariable ["VKN_MainMenuServerPortVal_var", "2302"];
_MainMenuServerPasswordVal = profileNamespace getVariable ["VKN_MainMenuServerPasswordVal_var", ""];
[
    "VKN_joinserver_ip",
    "EDITBOX",
    ["Main Menu Server IP", "set the IP for the server you'd like to instantly join to."],
    ["Viking PMC Settings", "Main Menu Server Quick Join"],
    _MainMenuServerIPVal,
    true,
    {
        params ["_value"];
        _MainMenuServerIPVal = profileNamespace setVariable ["VKN_MainMenuServerIPVal_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_joinserver_port",
    "EDITBOX",
    ["Main Menu Server Port", "set the port for the server you'd like to instantly join to."],
    ["Viking PMC Settings", "Main Menu Server Quick Join"],
    _MainMenuServerPortVal,
    true,
    {
        params ["_value"];
        _MainMenuServerPortVal = profileNamespace setVariable ["VKN_MainMenuServerPortVal_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_joinserver_password",
    "EDITBOX",
    ["Main Menu Server Password", "set the password for the server you'd like to instantly join to."],
    ["Viking PMC Settings", "Main Menu Server Quick Join"],
    _MainMenuServerPasswordVal,
    true,
    {
        params ["_value"];
        _MainMenuServerPasswordVal = profileNamespace setVariable ["VKN_MainMenuServerPasswordVal_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;





////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
// Viking Soldier Tracking Settings
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

_MapiconVal = profileNamespace getVariable ["VKN_MapiconValue_var", true];
_showMapicons_Val = profileNamespace getVariable ["VKN_showMapicons_Var", true];
_showGPSIcons_Val = profileNamespace getVariable ["VKN_showGPSIcons_Var", true];
_Showgroupicons_Val = profileNamespace getVariable ["VKN_Showgroupicons_Var", true];
_ShowMedicalWounded_Val = profileNamespace getVariable ["VKN_ShowMedicalWounded_Var", true];
_ShowfactionOnly_Val = profileNamespace getVariable ["VKN_ShowfactionOnly_Var", true];
_ShowIconMaptext_Val = profileNamespace getVariable ["VKN_ShowIconMaptext_Var", true];
_ShowMOS_Val = profileNamespace getVariable ["VKN_ShowMOS_Var", true];
_showGPSnames_Val = profileNamespace getVariable ["VKN_showGPSnames_Var", false];
_showGPSgroupOnly_Val = profileNamespace getVariable ["VKN_showGPSgroupOnly_Var", false];
_ShowgroupMapicons_Val = profileNamespace getVariable ["VKN_ShowgroupMapicons_Var", true];
_Show3Dgroupicons_Val = profileNamespace getVariable ["VKN_Show3Dgroupicons_Var", false];

[
    "VKN_showTrackingGlobal",
    "CHECKBOX",
    ["Soldier Tracking", "toggle if you want Soldier Tracking on your client. Show 2D/3D markers for side."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _MapiconVal,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_MapiconValue_var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showMapicons",
    "CHECKBOX",
    ["Show Map Icons (2D)", "toggle map unit + vehicle icon tracking."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _showMapicons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_showMapicons_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showGPSIcons",
    "CHECKBOX",
    ["Show GPS Icons (2D)", "toggle GPS unit + vehicle icon tracking."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _showGPSIcons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_showGPSIcons_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_Showgroupicons",
    "CHECKBOX",
    ["Show group Icons (2D + 3D)", "toggle Map + GPS + HUD group icon tracking."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _Showgroupicons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_Showgroupicons_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showMedicalWounded",
    "CHECKBOX",
    ["Show Wounded (2D)", "toggle to show wounded units on map + GPS."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _ShowMedicalWounded_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowMedicalWounded_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showfactionOnly",
    "CHECKBOX",
    ["Show faction Only (2D + 3D)", "toggle to display only your faction, or all friendly factions."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _ShowfactionOnly_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowfactionOnly_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showIconMaptext",
    "CHECKBOX",
    ["Show Map text (2D)", "toggle to display unit + vehicle names/text on the map."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _ShowIconMaptext_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowIconMaptext_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showMOS",
    "CHECKBOX",
    ["Show Map MOS information (2D)", "toggle to display Military Occupational Specialty text (unit/vehicle class/role display name) via the map."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _ShowMOS_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowMOS_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showGPSnames",
    "CHECKBOX",
    ["Show GPS names (2D)", "toggle to display name tags on units + vehicles"],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _showGPSnames_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_showGPSnames_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showGPSgroupOnly",
    "CHECKBOX",
    ["Show GPS group Only (2D)", "toggle to only show group icons on the GPS."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _showGPSgroupOnly_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_showGPSgroupOnly_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_groupMapicons",
    "CHECKBOX",
    ["Show group Map Icons Only (2D)", "toggle to only show group icons on the map."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _showgroupMapicons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_groupMapicons_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_Show3Dgroupicons",
    "CHECKBOX",
    ["Show 3D group Icons", "toggle to display 3D icons above units. notE: Follows ruleset from above."],
    ["Viking PMC Settings", "Soldier Tracker settings"],
    _Show3Dgroupicons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_Show3Dgroupicons_Var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;





////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
// Viking Mission Template Tool Settings
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////






_VTT_init = profileNamespace getVariable [ "VKN_VTT_initText_var", ""];
_VTT_initPlayerLocal = profileNamespace getVariable [ "VKN_VTT_initPlayerLocal_var", format ["['InitializePlayer', [player]] call BIS_fnc_dynamicGroups;%1['InitializePlayer', [player, true]] call BIS_fnc_dynamicGroups;", endl]];
_VTT_initPlayerServer = profileNamespace getVariable [ "VKN_VTT_initPlayerServer_var", format ["{        %1 if (!isNull (getAssignedCuratorUnit _x)) then {            %1		_unit = getAssignedCuratorUnit _x;            %1		if (isNull (getAssignedCuratorlogic _unit)) then {                %1			unassignCurator _x;                %1			sleep 1;                %1			_unit assignCurator _x;                %1			if (isClass (configFile >> 'CfgPatches' >> 'task_force_radio')) then {                    %1				_unit call TFAR_fnc_isforcedCurator;                    %1                };                %1            };            %1        };        %1    } forEach allCurators;", endl]];
_VTT_initServer = profileNamespace getVariable [ "VKN_VTT_initServer_var", ""];
_VTT_onPlayerKilled = profileNamespace getVariable [ "VKN_VTT_onPlayerKilled_var", format ["[player, [missionnamespace, 'inventory_var']] call BIS_fnc_saveinventory;%1['Initialize', %2", endl, missionNamespace getVariable ["VKN_VTT_SpectatorOptions", "[ player, [], false, false, true]] call BIS_fnc_EGSpectator;"]]];
_VTT_onPlayerRespawn = profileNamespace getVariable [ "VKN_VTT_onPlayerRespawn_var", format ["[player, [missionnamespace, 'inventory_var']] call BIS_fnc_loadinventory;%1['Terminate', [ player]] call BIS_fnc_EGSpectator;", endl]];
_VTT_descriptionEXT = profileNamespace getVariable [ "VKN_VTT_descriptionText_var", format ["respawnOnStart = 0;%1respawnTemplatesVirtual[] = {};", endl]];



[
    "VKN_VTT_init",
    "EDITBOX",
    ["init.sqf", "Overwrite this files default value. LEAVE ALONE TO USE DEFAULT. Most cases this is NOT overwritten."],
    ["Viking PMC Settings", "Template Tool - Default Text"],
    _VTT_init,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_initText_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_VTT_initPlayerLocal",
    "EDITBOX",
    ["initPlayerLocal.sqf", "Overwrite this files default value. LEAVE ALONE TO USE DEFAULT. Most cases this is NOT overwritten."],
    ["Viking PMC Settings", "Template Tool - Default Text"],
    _VTT_initPlayerLocal,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_initPlayerLocal_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_VTT_initPlayerServer",
    "EDITBOX",
    ["initPlayerServer.sqf", "Overwrite this files default value. LEAVE ALONE TO USE DEFAULT. Most cases this is NOT overwritten."],
    ["Viking PMC Settings", "Template Tool - Default Text"],
    _VTT_initPlayerServer,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_initPlayerServer_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_VTT_initServer",
    "EDITBOX",
    ["initServer.sqf", "Overwrite this files default value. LEAVE ALONE TO USE DEFAULT. Most cases this is NOT overwritten."],
    ["Viking PMC Settings", "Template Tool - Default Text"],
    _VTT_initServer,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_initServer_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_VTT_onPlayerKilled",
    "EDITBOX",
    ["onPlayerKilled.sqf", "Overwrite this files default value. LEAVE ALONE TO USE DEFAULT. Most cases this is NOT overwritten."],
    ["Viking PMC Settings", "Template Tool - Default Text"],
    _VTT_onPlayerKilled,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_onPlayerKilled_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_VTT_onPlayerRespawn",
    "EDITBOX",
    ["onPlayerRespawn.sqf", "Overwrite this files default value. LEAVE ALONE TO USE DEFAULT. Most cases this is NOT overwritten."],
    ["Viking PMC Settings", "Template Tool - Default Text"],
    _VTT_onPlayerRespawn,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_onPlayerRespawn_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_VTT_descriptionEXT",
    "EDITBOX",
    ["description.ext", "Overwrite this files default value. LEAVE ALONE TO USE DEFAULT. Most cases this is NOT overwritten."],
    ["Viking PMC Settings", "Template Tool - Default Text"],
    _VTT_descriptionEXT,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_descriptionText_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;



/*
_VTT_defaultSide = profileNamespace getVariable [ "VKN_VTT_defaultSide_var", ["WEST","EAST","GUER"]];
_side = "west";
  switch (_VTT_defaultSide) do {
      case ("WEST"): {
        _side = "West";
        _factionList = 1 call VKN_fnc_sideGetFaction;
      };
      case ("EAST"): {
        _side = "East";
        _factionList = 0 call VKN_fnc_sideGetFaction;
      };
      case ("GUER"): {
        _side = "Indep";
        _factionList = 2 call VKN_fnc_sideGetFaction;
      };
      default {};
  };

_VTT_defaultFaction = profileNamespace getVariable [ "VKN_VTT_defaultFaction_var", _factionList];

_squadArray = "true" configClasses (configfile >> "CfgGroups" >> _side >> (_factionList select 0) >> "Infantry");
_VTT_defaultSquad = profileNamespace getVariable [ "VKN_VTT_defaultSquad_var", _squadArray];
_VTT_defaultGroups = profileNamespace getVariable [ "VKN_VTT_defaultGroups_var", true];
_VTT_defaultLoadouts = profileNamespace getVariable [ "VKN_VTT_defaultLoadouts_var", true];
[
    "VKN_VTT_defaultSide",
    "LIST",
    ["Side", "Change the default side used in the tool. Allowed options are: WEST, EAST, GUER. Default is WEST."],
    ["Viking PMC Settings", "Template Tool - Default Startup"],
    _VTT_defaultSide,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_defaultSide_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_VTT_defaultFaction",
    "LIST",
    ["Faction", "Change the default faction used in the tool. MUST be a classname and is assoicated with the selected side. Default is BLU_F."],
    ["Viking PMC Settings", "Template Tool - Default Startup"],
    _VTT_defaultFaction,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_defaultFaction_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_VTT_defaultSquad",
    "LIST",
    ["Squad", "Change the default squad used in the tool. MUST be a displayname and is assoicated with the selected faction. Default is Rifle Squad."],
    ["Viking PMC Settings", "Template Tool - Default Startup"],
    _VTT_defaultSquad,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_defaultSquad_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_VTT_defaultGroups",
    "CHECKBOX",
    ["Groups", "Select if dynamic groups is default on in the tool."],
    ["Viking PMC Settings", "Template Tool - Default Startup"],
    _VTT_defaultGroups,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_defaultGroups_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
[
    "VKN_VTT_defaultLoadouts",
    "CHECKBOX",
    ["Loadouts", "Select if  loadout saving is default on in the tool."],
    ["Viking PMC Settings", "Template Tool - Default Startup"],
    _VTT_defaultLoadouts,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_VTT_defaultLoadouts_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;
*/