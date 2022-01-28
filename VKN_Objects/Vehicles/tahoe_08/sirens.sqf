_isPlaying = _this getVariable ["VKN_Siren_playing", false];
_toggle = _this getVariable ["VKN_Siren", false];

if (_isPlaying) exitWith {};

_lights = _this getVariable "lights";

while {alive _this && _toggle} do {
	if !(_lights) exitWith {};
	if (!isNull driver _this && getdammage _this < 0.7 && _lights) then {

		_siren = _this getVariable ["VKN_Siren", false];
		_this setVariable ["VKN_Siren_playing", true];
		if !(_siren) exitWith {};
		
		[_this, "VKN_pa300_wail"] remoteExec ["say3D", 0, false];
		//should be 4.1, but as the loop is 1 sec delay, changed to 3.1
		sleep 3.1;
	};
	sleep 1;
};
