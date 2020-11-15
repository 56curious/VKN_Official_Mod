_this setVariable ["VKN_Siren", False];

while {alive _this} do {
	if (!isNull driver _this && getdammage _this < 0.7 && (_this getVariable "lights")) then {

		if ((_this getVariable "lights")) then { _this setVariable ["VKN_Siren", True]; };

		_siren = _this getVariable ["VKN_Siren", false];
		if (_siren isEqualTo False) exitWith {};
		_this say3D "VKN_pa300_wail";
		sleep 4.1;

	} else {
		_this setVariable ["VKN_Siren", False];
		waitUntil {sleep 2; (!isNull driver _this && getdammage _this < 0.7 && (_this getVariable "lights"))};
	};
};
