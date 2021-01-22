/*
Author: Karel Moricky - modified by Curious

Description:
Opens orBAT style credits

parameter(s): None

Returns:
BOOL
*/

// --- initialize global variables
if (isnil {
    missionnamespace getVariable "bis_fnc_init"
}) then {
    4 call (uiNamespace getVariable "bis_fnc_recompile");
};

disableSerialization;
_fadetime = 0.3;
// cuttext ["", "black out", _fadetime];
// uiSleep _fadetime;

_cfgCredits = configFile >> "CfgCredits" >> "VKN" >> "VKNCreditsMovie";
_mods = [];
for "_c" from 0 to (count _cfgCredits - 1) do {
    _class = _cfgCredits select _c;
    if (isClass _class) then {
        _mods = _mods + [_class]
    };
};
_parentDisplay = [] call bis_fnc_displayMission;
if (isNull _parentDisplay) then {
    _parentDisplay = findDisplay 0;
};

if (count _mods == 1) then {
    with uiNamespace do {
        disableSerialization;
        BIS_fnc_orBATdisplay = [_mods select 0, _parentDisplay, [], -1, [configFile >> "CfgCredits" >> "VKN", {
            (uiNamespace getVariable "BIS_fnc_orBATdisplay") createDisplay "RscCredits";
            [(uiNamespace getVariable "BIS_fnc_orBATdisplay")] call VKN_fnc_creditsVKN_movie;0 fadeMusic 0;false
        }]] call bis_fnc_orBAtopen;
    };
} else {
    with uiNamespace do {
        disableSerialization;
        BIS_fnc_orBATdisplay = [_cfgCredits, _parentDisplay, [], -1, [configFile >> "CfgCredits" >> "VKN", {
            (uiNamespace getVariable "BIS_fnc_orBATdisplay") createDisplay "RscCredits";
            [(uiNamespace getVariable "BIS_fnc_orBATdisplay")] call VKN_fnc_creditsVKN_movie;0 fadeMusic 0;false
        }]] call bis_fnc_orBAtopen;
    };
};

cuttext ["", "white in", _fadetime];
true