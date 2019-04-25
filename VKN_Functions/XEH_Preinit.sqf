diag_log "VKN - XEH Exec";

_StrategicMapVal = profileNamespace getVariable ["VKN_StrategicMapValue_var", true];
[
    "VKN_StrategicMapSetting",
    "CHECKBOX",
    ["Strategic Map", "Toggle if you want the Strategic Map (ALT + M keybind) on your client. Shows map in a simulated environment."],
    "VKN Strategic Map",
    _StrategicMapVal,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_StrategicMapValue_var", _value];
        saveProfileNamespace;
    }
] call CBA_Settings_fnc_init;


_MapIconVal = profileNamespace getVariable ["VKN_MapIconValue_var", true];
_ShowMapIcons_Val = profileNamespace getVariable ["VKN_ShowMapIcons_Var", true];
_ShowGPSIcons_Val = profileNamespace getVariable ["VKN_ShowGPSIcons_Var", true];
_ShowGroupIcons_Val = profileNamespace getVariable ["VKN_ShowGroupIcons_Var", true];
_ShowMedicalWounded_Val = profileNamespace getVariable ["VKN_ShowMedicalWounded_Var", true];
_ShowFactionOnly_Val = profileNamespace getVariable ["VKN_ShowFactionOnly_Var", true];
_ShowIconMapText_Val = profileNamespace getVariable ["VKN_ShowIconMapText_Var", true];
_ShowMOS_Val = profileNamespace getVariable ["VKN_ShowMOS_Var", true];
_ShowGPSNames_Val = profileNamespace getVariable ["VKN_ShowGPSNames_Var", false];
_ShowGPSGroupOnly_Val = profileNamespace getVariable ["VKN_ShowGPSGroupOnly_Var", false];
_ShowGroupMapIcons_Val = profileNamespace getVariable ["VKN_ShowGroupMapIcons_Var", true];
_Show3DGroupIcons_Val = profileNamespace getVariable ["VKN_Show3DGroupIcons_Var", false];
[
    "VKN Soldier Tracker Settings",
    "CHECKBOX",
    ["Soldier Tracking", "Toggle if you want Soldier Tracking on your client. Show 2D/3D markers for side."],
    "VKN Soldier Tracker Settings",
    _MapIconVal,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_MapIconValue_var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_ShowMapIcons",
    "CHECKBOX",
    ["Show Map Icons (2D)", "Toggle map unit + vehicle icon tracking."],
    "VKN Soldier Tracker Settings",
    _ShowMapIcons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowMapIcons_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_showGPSIcons",
    "CHECKBOX",
    ["Show GPS Icons (2D)", "Toggle GPS unit + vehicle icon tracking."],
    "VKN Soldier Tracker Settings",
    _ShowGPSIcons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowGPSIcons_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_ShowGroupIcons",
    "CHECKBOX",
    ["Show Group Icons (2D + 3D)", "Toggle Map + GPS + HUD group icon tracking."],
    "VKN Soldier Tracker Settings",
    _ShowGroupIcons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowGroupIcons_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_showMedicalWounded",
    "CHECKBOX",
    ["Show Wounded (2D)", "Toggle to show wounded units on map + GPS."],
    "VKN Soldier Tracker Settings",
    _ShowMedicalWounded_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowMedicalWounded_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_showFactionOnly",
    "CHECKBOX",
    ["Show Faction Only (2D + 3D)", "Toggle to display only your faction, or all friendly factions."],
    "VKN Soldier Tracker Settings",
    _ShowFactionOnly_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowFactionOnly_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_showIconMapText",
    "CHECKBOX",
    ["Show Map Text (2D)", "Toggle to display unit + vehicle names/text on the map."],
    "VKN Soldier Tracker Settings",
    _ShowIconMapText_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowIconMapText_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_showMOS",
    "CHECKBOX",
    ["Show Map MOS Information (2D)", "Toggle to display Military Occupational Specialty text (unit/vehicle class/role display name) via the map."],
    "VKN Soldier Tracker Settings",
    _ShowMOS_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowMOS_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_showGPSNames",
    "CHECKBOX",
    ["Show GPS Names (2D)", "Toggle to display name tags on units + vehicles"],
    "VKN Soldier Tracker Settings",
    _ShowGPSNames_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowGPSNames_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_ShowGPSGroupOnly",
    "CHECKBOX",
    ["Show GPS Group Only (2D)", "Toggle to only show group icons on the GPS."],
    "VKN Soldier Tracker Settings",
    _ShowGPSGroupOnly_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_ShowGPSGroupOnly_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_GroupMapIcons",
    "CHECKBOX",
    ["Show Group Map Icons Only (2D)", "Toggle to only show group icons on the map."],
    "VKN Soldier Tracker Settings",
    _showGroupMapIcons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_GroupMapIcons_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;
[
    "VKN_Show3DGroupIcons",
    "CHECKBOX",
    ["Show 3D Group Icons", "Toggle to display 3D icons above units. NOTE: Follows ruleset from above."],
    "VKN Soldier Tracker Settings",
    _Show3DGroupIcons_Val,
    nil,
    {
        params ["_value"];
        profileNamespace setVariable ["VKN_Show3DGroupIcons_Var", _value];
        saveProfileNamespace;
        [] call VKN_fnc_Icons;
    }
] call CBA_Settings_fnc_init;


_EnableRagdollVal = profileNamespace getVariable ["VKN_EnableRagdollVal_var", true];
_EnableRagdollAIVal = profileNamespace getVariable ["VKN_EnableRagdollAIVal_var", true];
[
  "VKN_ragdoll_ragdolling",
  "CHECKBOX",
  ["Enable ragdolling", "Enables ragdolling for players upon going unconscious. (ACE)"],
  "VKN Ragdoll",
  _EnableRagdollVal,
  true,
  {
    params ["_value"];
    if (isClass(configFile >> "CfgPatches" >> "ace_main")) then {
        profileNamespace setVariable ["VKN_EnableRagdollVal_var", _value];
        [] call VKN_fnc_initRagdoll;
    } else {
        systemChat "ACE is not on your client, setting will not take effect.";
    };
  }
] call CBA_Settings_fnc_init;
[
  "VKN_ragdoll_ai",
  "CHECKBOX",
  ["Enable for AI", "Enables ragdolling for AI as well. (ACE)"],
  "VKN Ragdoll",
  _EnableRagdollAIVal,
  true,
  {
    params ["_value"];
    if (isClass(configFile >> "CfgPatches" >> "ace_main")) then {
        _EnableRagdollAIVal = profileNamespace setVariable ["VKN_EnableRagdollAIVal_var", _value];
    } else {
        systemChat "ACE is not on your client, setting will not take effect.";
    };
  }
] call CBA_Settings_fnc_init;



_MainMenuServerIPVal = profileNamespace getVariable ["VKN_MainMenuServerIPVal_var", "127.0.0.1"];
_MainMenuServerPortVal = profileNamespace getVariable ["VKN_MainMenuServerPortVal_var", "2302"];
_MainMenuServerPasswordVal = profileNamespace getVariable ["VKN_MainMenuServerPasswordVal_var", ""];
[
  "VKN_joinserver_ip",
  "EDITBOX",
  ["Main Main Server IP", "Set the IP for the server you'd like to instantly join to."],
  "VKN Main Menu Server",
  _MainMenuServerIPVal,
  true,
  {
    params ["_value"];
    _MainMenuServerIPVal = profileNamespace setVariable ["VKN_MainMenuServerIPVal_var", _value];
  }
] call CBA_Settings_fnc_init;
[
  "VKN_joinserver_port",
  "EDITBOX",
  ["Main Main Server Port", "Set the port for the server you'd like to instantly join to."],
  "VKN Main Menu Server",
  _MainMenuServerPortVal,
  true,
  {
    params ["_value"];
    _MainMenuServerPortVal = profileNamespace setVariable ["VKN_MainMenuServerPortVal_var", _value];
  }
] call CBA_Settings_fnc_init;
[
  "VKN_joinserver_password",
  "EDITBOX",
  ["Main Main Server Password", "Set the password for the server you'd like to instantly join to."],
  "VKN Main Menu Server",
  _MainMenuServerPasswordVal,
  true,
  {
    params ["_value"];
    _MainMenuServerPasswordVal = profileNamespace setVariable ["VKN_MainMenuServerPasswordVal_var", _value];
  }
] call CBA_Settings_fnc_init;