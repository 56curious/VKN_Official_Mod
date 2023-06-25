private ["_vcl", "_lights", "_lighs1"];

_vcl = _this;
_lights = "\VKN_Objects\Vehicles\tahoe_08\data\emerglights1.paa";
_lights1 = "\VKN_Objects\Vehicles\tahoe_08\data\tahoe_lights_emit_co.paa";

hint localize "Beacons ON";

_vcl setVariable ["lights", true, true];

while { (alive _vcl) && (_vcl getVariable "lights") } do {
	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
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
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
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
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
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

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
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

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
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
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
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
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
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

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
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

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
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
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
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
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
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

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
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

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.2;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.4;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.4;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.4;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.4;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.1;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.1;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.1;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.1;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.1;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.1;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.1;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.1;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.4;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.4;

	_vcl setObjectTextureGlobal [4, ""];
	_vcl setObjectTextureGlobal [5, _lights];
	_vcl setObjectTextureGlobal [6, ""];
	_vcl setObjectTextureGlobal [7, _lights];
	_vcl setObjectTextureGlobal [8, ""];
	_vcl setObjectTextureGlobal [9, _lights];
	_vcl setObjectTextureGlobal [10, ""];
	_vcl setObjectTextureGlobal [11, _lights];
	_vcl setObjectTextureGlobal [12, ""];
	_vcl setObjectTextureGlobal [13, _lights];
	_vcl setObjectTextureGlobal [14, ""];
	_vcl setObjectTextureGlobal [15, _lights];
	_vcl setObjectTextureGlobal [16, _lights1];
	_vcl setObjectTextureGlobal [17, ""];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.4;

	_vcl setObjectTextureGlobal [4, _lights];
	_vcl setObjectTextureGlobal [5, ""];
	_vcl setObjectTextureGlobal [6, _lights];
	_vcl setObjectTextureGlobal [7, ""];
	_vcl setObjectTextureGlobal [8, _lights];
	_vcl setObjectTextureGlobal [9, ""];
	_vcl setObjectTextureGlobal [10, _lights];
	_vcl setObjectTextureGlobal [11, ""];
	_vcl setObjectTextureGlobal [12, _lights];
	_vcl setObjectTextureGlobal [13, ""];
	_vcl setObjectTextureGlobal [14, _lights];
	_vcl setObjectTextureGlobal [15, ""];
	_vcl setObjectTextureGlobal [16, ""];
	_vcl setObjectTextureGlobal [17, _lights1];

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.4;

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

	if (!(_vcl getVariable "lights")) exitWith {
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

	sleep 0.1;
};
exit;