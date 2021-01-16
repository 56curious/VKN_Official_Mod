diag_log "VKN - XEH exec";

_strategicMapVal = profileNamespace getVariable ["VKN_strategicMapValue_var", true];
[
    "VKN_strategicMapsetting",
    "CHECKBOX",
    ["strategic Map", "toggle if you want the strategic Map (ALT + M keybind) on your client. Shows map in a simulated environment."],
    "VKN strategic Map",
    _strategicMapVal,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_strategicMapValue_var", _value];
        saveProfileNamespace;
    }
] call CBA_settings_fnc_init;

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
    "VKN Soldier Tracker settings",
    "CHECKBOX",
    ["Soldier Tracking", "toggle if you want Soldier Tracking on your client. Show 2D/3D markers for side."],
    "VKN Soldier Tracker settings",
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
    "VKN Soldier Tracker settings",
    _showMapicons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_showMapicons_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showGPSIcons",
    "CHECKBOX",
    ["Show GPS Icons (2D)", "toggle GPS unit + vehicle icon tracking."],
    "VKN Soldier Tracker settings",
    _showGPSIcons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_showGPSIcons_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_Showgroupicons",
    "CHECKBOX",
    ["Show group Icons (2D + 3D)", "toggle Map + GPS + HUD group icon tracking."],
    "VKN Soldier Tracker settings",
    _Showgroupicons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_Showgroupicons_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showMedicalWounded",
    "CHECKBOX",
    ["Show Wounded (2D)", "toggle to show wounded units on map + GPS."],
    "VKN Soldier Tracker settings",
    _ShowMedicalWounded_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowMedicalWounded_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showfactionOnly",
    "CHECKBOX",
    ["Show faction Only (2D + 3D)", "toggle to display only your faction, or all friendly factions."],
    "VKN Soldier Tracker settings",
    _ShowfactionOnly_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowfactionOnly_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showIconMaptext",
    "CHECKBOX",
    ["Show Map text (2D)", "toggle to display unit + vehicle names/text on the map."],
    "VKN Soldier Tracker settings",
    _ShowIconMaptext_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowIconMaptext_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showMOS",
    "CHECKBOX",
    ["Show Map MOS information (2D)", "toggle to display Military Occupational Specialty text (unit/vehicle class/role display name) via the map."],
    "VKN Soldier Tracker settings",
    _ShowMOS_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowMOS_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showGPSnames",
    "CHECKBOX",
    ["Show GPS names (2D)", "toggle to display name tags on units + vehicles"],
    "VKN Soldier Tracker settings",
    _showGPSnames_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_showGPSnames_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_showGPSgroupOnly",
    "CHECKBOX",
    ["Show GPS group Only (2D)", "toggle to only show group icons on the GPS."],
    "VKN Soldier Tracker settings",
    _showGPSgroupOnly_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_showGPSgroupOnly_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_groupMapicons",
    "CHECKBOX",
    ["Show group Map Icons Only (2D)", "toggle to only show group icons on the map."],
    "VKN Soldier Tracker settings",
    _showgroupMapicons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_groupMapicons_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;
[
    "VKN_Show3Dgroupicons",
    "CHECKBOX",
    ["Show 3D group Icons", "toggle to display 3D icons above units. notE: Follows ruleset from above."],
    "VKN Soldier Tracker settings",
    _Show3Dgroupicons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_Show3Dgroupicons_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_settings_fnc_init;

_MainMenuServerIPVal = profileNamespace getVariable ["VKN_MainMenuServerIPVal_var", "127.0.0.1"];
_MainMenuServerPortVal = profileNamespace getVariable ["VKN_MainMenuServerPortVal_var", "2302"];
_MainMenuServerPasswordVal = profileNamespace getVariable ["VKN_MainMenuServerPasswordVal_var", ""];
[
    "VKN_joinserver_ip",
    "EDITBOX",
    ["Main Main Server IP", "set the IP for the server you'd like to instantly join to."],
    "VKN Main Menu Server",
    _MainMenuServerIPVal,
    true,
    {
        params ["_value"];
        _MainMenuServerIPVal = profileNamespace setVariable ["VKN_MainMenuServerIPVal_var", _value];
    }
] call CBA_settings_fnc_init;
[
    "VKN_joinserver_port",
    "EDITBOX",
    ["Main Main Server Port", "set the port for the server you'd like to instantly join to."],
    "VKN Main Menu Server",
    _MainMenuServerPortVal,
    true,
    {
        params ["_value"];
        _MainMenuServerPortVal = profileNamespace setVariable ["VKN_MainMenuServerPortVal_var", _value];
    }
] call CBA_settings_fnc_init;
[
    "VKN_joinserver_password",
    "EDITBOX",
    ["Main Main Server Password", "set the password for the server you'd like to instantly join to."],
    "VKN Main Menu Server",
    _MainMenuServerPasswordVal,
    true,
    {
        params ["_value"];
        _MainMenuServerPasswordVal = profileNamespace setVariable ["VKN_MainMenuServerPasswordVal_var", _value];
    }
] call CBA_settings_fnc_init;