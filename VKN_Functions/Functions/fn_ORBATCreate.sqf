/*
Script name:  fn_ORBATCreate.sqf
Created on:   02 ‎March ‎2019
Author:       Curious

Description:  Create an ORBAT.

License:      This file is under "Arma Public License No Derivatives (APL-ND)"
              More information can be found at:
              https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:      N/A
*/

_code = {
    private _fnc_scriptNameParent = if (isNil '_fnc_scriptName') then {'BIS_fnc_credits'} else {_fnc_scriptName};
    private _fnc_scriptName = 'BIS_fnc_credits';
    scriptName _fnc_scriptName;

    if (isnil {missionnamespace getvariable "bis_fnc_init"}) then {
    4 call (uinamespace getvariable "bis_fnc_recompile");
    };

    disableserialization;
    _fadeTime = 0.3;

    _cfgCredits = configfile >> "CfgCredits" >> "VKN" >> "VKN_Home";
    _mods = [];
    for "_c" from 0 to (count _cfgCredits - 1) do {
    _class = _cfgCredits select _c;
    if (isclass _class) then {_mods = _mods + [_class]};
    };
    _parentDisplay = finddisplay 0;
    if (isnull _parentDisplay) then {_parentDisplay = finddisplay 0;};

    if (count _mods == 1) then {
    with uinamespace do {
    disableSerialization;
    BIS_fnc_ORBATdisplay = [_mods select 0,_parentDisplay,[],-1,[configFile >> "CfgCredits" >> "VKN" >> "VKN_Home",{(uiNamespace getVariable "BIS_fnc_ORBATdisplay") createDisplay "RscCredits";[(uiNamespace getVariable "BIS_fnc_ORBATdisplay")] call BIS_fnc_credits_movie; 0 fadeMusic 0; false}]] call bis_fnc_ORBATopen;
    };
    } else {
    with uinamespace do {
    disableSerialization;
    BIS_fnc_ORBATdisplay = [_cfgCredits,_parentDisplay,[],-1,[configFile >> "CfgCredits" >> "VKN" >> "VKN_Home",{(uiNamespace getVariable "BIS_fnc_ORBATdisplay") createDisplay "RscCredits";[(uiNamespace getVariable "BIS_fnc_ORBATdisplay")] call BIS_fnc_credits_movie;0 fadeMusic 0;false}]] call bis_fnc_ORBATopen;
    };
    };

    cuttext ["","white in",_fadeTime];
};

uiNamespace setvariable ['CUR_bis_fnc_credits', _code];
true
