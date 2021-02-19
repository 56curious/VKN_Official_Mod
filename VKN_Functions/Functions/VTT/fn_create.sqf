/*
Script name: fn_VTT_Create.sqf
Created on: 11 ‎December ‎2018
Author: Curious

License:		 This file is under "Arma Public License No Derivatives (APL-ND)"
More information can be found at:
https:// www.bohemia.net/community/licenses/arma-public-license-nd

Description: setup mission with predefined settings.

Framework: Mission Template

parameters:
N/A
*/
// don't run if not in 3den
if !(is3DEN) exitwith {
    systemChat "You're not in the editor! Please go into the editor to run this function!"
};

_squad = 0;
_3denCam = get3DENCamera;

// get UI Defines
#include "\vkn_misc\displays\displayDefines.hpp"

// get data to return camera too:
_vectorDirBefore = vectorDir _3denCam;

// Get a reasonable position for template to be created (avoids it spawning in a weird position)
[_3denCam, 5] call bis_fnc_setHeight;

_y = 0;
_p = -45; _r = 0;
_3denCam setvectorDirAndUp [ [ sin _y * cos _p, cos _y * cos _p, sin _p], [ [ sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D];
sleep 0.1;

_position = screentoWorld [0.5, 0.5];

// set cam to look in the air
_y = 0;
_p = 45; _r = 0;
_3denCam setvectorDirAndUp [
    [ sin _y * cos _p, cos _y * cos _p, sin _p],
    [ [ sin _r, -sin _p, cos _r * cos _p], -_y] call BIS_fnc_rotateVector2D
];

_basicsettings = [] spawn VKN_VTT_fnc_basicsettingsDisplay;
waitUntil {
    scriptDone _basicsettings
};

///wait until(s) are to ensure variables are set so the next function can continue.

_filesetup = [] spawn VKN_VTT_fnc_filesetupDisplay;
waitUntil {
    scriptDone _filesetup
};

startLoadingScreen ["loading mission template tool... Please wait."];

// error here type script, so the get variable is returning a script and not the array. Check the returns on the 2 functions
_basicsettingsReturn = missionnamespace getVariable ["VKN_VTT_basicsettingsReturn", ["", "", "", "", false, false]];
_side_Option = _basicsettingsReturn select 0;
_factions_option = _basicsettingsReturn select 1;
_squads_option = _basicsettingsReturn select 2;
_spectate_option = _basicsettingsReturn select 3;
_saveloadouts = _basicsettingsReturn select 4;
_dynamicgroups = _basicsettingsReturn select 5;

// Start tool
collect3DENHistory {
    _squad = configFile >> "CfgGroups" >> _side_Option >> _factions_option >> "Infantry" >> _squads_option;
    // Check for 3DEN Enhanced, then setup those features
    if (isClass (configFile >> "CfgPatches" >> "3denEnhanced")) then {
        set3DENMissionAttributes[["Multiplayer", "Enh_Saveloadout", _saveloadouts]];
        set3DENMissionAttributes[["Multiplayer", "Enh_Dynamicgroups", _dynamicgroups]];
    } else {
        systemChat "3DEN Enhanced not found but is recommended to be used at all times, missing dynamic groups and loadout saving attributes, restart with mod and restart tool to fix.";
    };
    
    // set all of the mission settings to their defaults
    set3DENMissionAttributes [
        ["Multiplayer", "respawn", 3],
        ["Multiplayer", "respawnDelay", 180],
        ["Multiplayer", "respawnTemplates", ["Counter", "Spectator", "MenuPosition"]],
        ["Multiplayer", "maxplayers", 60],
        ["Multiplayer", "intelOverviewtext", "Viking PMC Operation"],
        ["Multiplayer", "Gametype", "VKN_OP"],
        ["Multiplayer", "DisabledAI", true],
        ["Multiplayer", "joinUnassigned", false],
        ["Multiplayer", "Respawndialog", true],
        ["Multiplayer", "enableteamSwitch", false],
        ["Multiplayer", "AIKills", true],
        ["Scenario", "loadscreen", "\VKN_Misc\VikinglogoLarge_ca.paa"],
        ["Scenario", "overviewPicture", "\VKN_Misc\VikinglogoLarge_ca.paa"],
        ["Scenario", "SaveBinarized", false],
        ["Scenario", "intelbriefingname", "Viking PMC Zeus OP"],
        ["Scenario", "author", profileName + ", VKN OPS Dpt."]
    ];

    // Create Billboard
    _billboard = create3DENEntity ["Object", "land_Billboard_F", _position];
    _billboard set3DENAttribute ["ObjecttextureCustom0", "VKN_Extensions_Misc\vkn_poster.paa"];
    
    // setup the respawn positions/settings
    _RespawnPos = create3DENEntity ["logic", "moduleRespawnposition_F", _position];
    _RespawnPos set3DENAttribute ["name", "defaultRespawnposition"];
    _RespawnPos set3DENAttribute ["moduleRespawnposition_F_Shownotification", 0];
    _RespawnPos set3DENAttribute ["moduleRespawnposition_F_name", "Respawn Point"];
    _RespawnPos set3DENAttribute ["moduleRespawnposition_F_Marker", 2];
    switch (toUpper _side_Option) do {
        case ("EAST"): {
            _RespawnPos set3DENAttribute ["moduleRespawnposition_F_side", 0];
        };
        case ("WEST"): {
            _RespawnPos set3DENAttribute ["moduleRespawnposition_F_side", 1];
        };
        case ("INDEP"): {
            _RespawnPos set3DENAttribute ["moduleRespawnposition_F_side", 2];
        };
    };
    
    // create the Zeus sub-settings
    // _ZeusAttributeCuratoraddEditableObjects = create3DENEntity ["logic", "moduleCuratoraddEditableObjects", _position];
    
    // setup Zeus modules
    _Zeusmodule1 = create3DENEntity ["logic", "moduleCurator_F", _position];
    _Zeusmodule2 = create3DENEntity ["logic", "moduleCurator_F", _position];
    _Zeusmodule3 = create3DENEntity ["logic", "moduleCurator_F", _position];
    _Zeusmoduleadmin = create3DENEntity ["logic", "moduleCurator_F", _position];
    _Zeusmodules = [_Zeusmodule1, _Zeusmodule2, _Zeusmodule3];
    
    // setup the Zeus entities
    _ZeusEntity1 = create3DENEntity ["logic", "VirtualCurator_F", _position];
    _ZeusEntity1 set3DENAttribute ["name", "ZeusEntity1"];
    _ZeusEntity1 set3DENAttribute ["description", "Game Curator"];
    
    _ZeusEntity2 = create3DENEntity ["logic", "VirtualCurator_F", _position];
    _ZeusEntity2 set3DENAttribute ["name", "ZeusEntity2"];
    _ZeusEntity2 set3DENAttribute ["description", "Game Curator"];
    
    _ZeusEntity3 = create3DENEntity ["logic", "VirtualCurator_F", _position];
    _ZeusEntity3 set3DENAttribute ["name", "ZeusEntity3"];
    _ZeusEntity3 set3DENAttribute ["description", "Game Curator"];
    
    _Zeusentities = [_ZeusEntity1, _ZeusEntity2, _ZeusEntity3];
    _Zeusentitiesnames = ["ZeusEntity1", "ZeusEntity2", "ZeusEntity3"];
    
    // sync
    add3DENConnection ["sync", [_ZeusEntity1], _Zeusmodule1];
    add3DENConnection ["sync", [_ZeusEntity2], _Zeusmodule2];
    add3DENConnection ["sync", [_ZeusEntity3], _Zeusmodule3];
    
    progressLoadingScreen 0.5;
    
    // setup in-module settings
    {
        _x set3DENAttribute ["ControlMP", true];
    } forEach _Zeusentities;
    for "_i" from 0 to 2 step 1 do {
        _module = _Zeusmodules select _i;
        _Entity = _Zeusentitiesnames select _i;
        _module set3DENAttribute [ "name", format ["Zeus_module%1", _i]];
        _module set3DENAttribute [ "moduleCurator_F_owner", _Entity ];
        _module set3DENAttribute [ "moduleCurator_F_name", "Zeus" ];
        _module set3DENAttribute [ "moduleCurator_F_Addons", 3 ];
        _module set3DENAttribute [ "moduleCurator_F_forced", 1 ];
    };
    
    _Zeusmoduleadmin set3DENAttribute [ "name", "Zeus_adminlogged" ];
    _Zeusmoduleadmin set3DENAttribute [ "moduleCurator_F_owner", "#adminlogged" ];
    _Zeusmoduleadmin set3DENAttribute [ "moduleCurator_F_name", "Zeus_admin" ];
    _Zeusmoduleadmin set3DENAttribute [ "moduleCurator_F_Addons", 3 ];
    
    // setup squads and sync them to Zeus
    [_squad, _position, _ZeusAttributeCuratoraddEditableObjects, _side_Option] spawn {
        params ["_squad", "_position", "_ZeusAttributeCuratoraddEditableObjects", "_side_Option"];
        _total = 60;
        _totalunits = 0;
        _nexttotal = 0;
        _unitcount = count ("true" configClasses _squad);
        _groupside = west;
        switch (toUpper _side_Option) do {
            case ("EAST"): {
                _groupside = east;
            };
            case ("WEST"): {
                _groupside = west;
            };
            case ("INDEP"): {
                _groupside = independent;
            };
        };
        _Finalgroup = creategroup _groupside;
        
        while {_totalunits < _total} do {
            _nexttotal = _totalunits + _unitcount;
            // systemChat format ["current/next/target: %1/%2/%3", _totalunits, _nexttotal, _total];
            
            // Create a group with given data
            _group = create3DENComposition [_squad, _position];
            {
                set3DENAttributes [[_x, "ControlMP", true]];
                sleep 0.01;
            } forEach _group;
            _totalunits = _totalunits + _unitcount;
        };
        
        _unitsQLtype = gettext (_squad >> "Unit0" >> "vehicle");
        _unitsQL = _Finalgroup create3DENEntity ["object", _unitsQLtype, _position];
        _unitsQL set3DENAttribute ["ControlMP", true];
        _intDiff = _Nexttotal - _total;
        for "_i" from 1 to _intDiff do {
            _unitID = format ["Unit%1", _i];
            _unittype = gettext (_squad >> _unitID >> "vehicle");
            _Unit = (group _unitsQL) create3DENEntity ["object", _unittype, _position];
            _Unit set3DENAttribute ["ControlMP", true];
        };
    };
    
    // Headless Clients
    _HC1 = create3DENEntity ["logic", "HeadlessClient_F", _position];
    _HC1 set3DENAttribute ["name", "HC1"];
    _HC2 = create3DENEntity ["logic", "HeadlessClient_F", _position];
    _HC2 set3DENAttribute ["name", "HC2"];
    
    {
        _x set3DENAttribute ["ControlMP", true];
    } forEach [_HC1, _HC2];
    
    // Werthles' Headless module setup if present
    if (isClass (configFile >> "CfgPatches" >> "Werthles_WHK")) then {
        _HCmodulesettings = create3DENEntity ["logic", "Werthles_moduleWHM", _position];
        _HCmoduleIgnore = create3DENEntity ["logic", "Werthles_moduleWHIgnore", _position];
        
        // in order as module presents them
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_units", -666];        // default -666
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_Repeating", true];        // default true
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_Wait", 10];        // default 30
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_Debug", false];        // default false
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_Advanced", true];        // default true
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_Delay", 10];        // default 30
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_Pause", 3];        // default 3
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_Report", true];        // default true
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_Ignores", ""];        // default ""
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_NoDebug", true];        // default true
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_DebugOnly", false];        // default false
        _HCmodulesettings set3DENAttribute ["Werthles_moduleWHM_UseServer", false];        // default false
    };
    
    _arsenalBox = create3DENEntity ["object", "Box_FIA_Support_F", _position];
    _arsenalBox set3DENAttribute ["name", "Arsenal_Box"];
    _arsenalBox set3DENAttribute ["init", format ["clearitemCargo this;
    %1[""ammoboxinit"", [this, true]] spawn BIS_fnc_arsenal; %1[this, true] call ace_arsenal_fnc_initBox;", endl]];
};

// notification
endloadingScreen;
// createdialog "VKN_Template_tool_info";
["Viking PMC Mission Template Created."] call BIS_fnc_3DENnotification;