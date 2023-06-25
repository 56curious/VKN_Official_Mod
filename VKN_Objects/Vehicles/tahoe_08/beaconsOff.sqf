private _vcl = _this;

hint "Beacons ON";

if ((_vcl getVariable "beaconLights")) exitWith {
	hint "Beacons OFF";

	_vcl setVariable ["beaconLights", false, true];
	_vcl setVariable ['code2', 0, true];
	_vcl setVariable ['code3', 0, true];
};
exit;