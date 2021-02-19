/*
	Author: Karel Moricky - Modified by Curious

	Description:
	Opens ORBAT style credits

	Parameter(s): None

	Returns:
	BOOL
*/

//--- Initialize global variables
if (isnil {missionnamespace getvariable "bis_fnc_init"}) then {
	4 call (uinamespace getvariable "bis_fnc_recompile");
};

disableserialization;
_fadeTime = 0.3;
//cuttext ["","black out",_fadeTime];
//uisleep _fadeTime;

_cfgCredits = configfile >> "CfgCredits" >> "VKN" >> "VKNCreditsMovie";
_mods = [];
for "_c" from 0 to (count _cfgCredits - 1) do {
	_class = _cfgCredits select _c;
	if (isclass _class) then {_mods = _mods + [_class]};
};
_parentDisplay = [] call bis_fnc_displayMission;
if (isnull _parentDisplay) then {_parentDisplay = finddisplay 0;};

if (count _mods == 1) then {
	with uinamespace do {
		disableSerialization;
		BIS_fnc_ORBATdisplay = [_mods select 0,_parentDisplay,[],-1,[configfile >> "CfgCredits" >> "VKN",{(uiNamespace getVariable "BIS_fnc_ORBATdisplay") createDisplay "RscCredits";[(uiNamespace getVariable "BIS_fnc_ORBATdisplay")] call VKN_fnc_creditsVKN_movie;0 fadeMusic 0;false}]] call bis_fnc_ORBATopen;
	};
} else {
	with uinamespace do {
		disableSerialization;
		BIS_fnc_ORBATdisplay = [_cfgCredits, _parentDisplay,[],-1,[configfile >> "CfgCredits" >> "VKN",{(uiNamespace getVariable "BIS_fnc_ORBATdisplay") createDisplay "RscCredits";[(uiNamespace getVariable "BIS_fnc_ORBATdisplay")] call VKN_fnc_creditsVKN_movie;0 fadeMusic 0;false}]] call bis_fnc_ORBATopen;
	};
};

cuttext ["","white in",_fadeTime];
true