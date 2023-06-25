private ["_vcl", "_lights"];

_vcl = _this;
_lights = "\VKN_Objects\Vehicles\tahoe_08\data\emerglights1.paa";
_lights1 = "\VKN_Objects\Vehicles\tahoe_08\data\tahoe_lights_emit_co.paa";

hint localize "Beacons ON";

if ((_vcl getVariable "lights")) exitWith {
	hint localize "Beacons OFF";

	_vcl setVariable ["lights", false, true];

	sleep 0.5;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, ""];
};
exit;