private _vcl = _this select 0;

while { alive _vcl } do {
	if ((_vcl getVariable ["VKN_Siren", 0] == 1) && (!isNull driver _vcl) && (damage _vcl < 0.7)) then {
		// _vcl say3D ["VKN_pa300_wail", 500, 1];
		[_vcl, "VKN_pa300_wail"] remoteExec ["say3D", 0, false];
		sleep 3.1;
	};
	sleep 1;
};