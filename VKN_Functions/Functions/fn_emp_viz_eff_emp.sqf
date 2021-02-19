// by ALIAS

if (!hasInterface) exitWith {};

_obj_emp	= _this select 0;
_viz_eff	= _this select 1;
_player_viz	= _this select 2;

enableCamShake true;
addCamShake [1,50,27];

if (_viz_eff) then
{
	_ripple = "#particlesource" createVehicleLocal getposatl _obj_emp;
	_ripple setParticleCircle [0,[0,0,0]];
	_ripple setParticleRandom [0,[0.25,0.25,0],[0.175,0.175,0],0,0.25,[0,0,0,0.1],0,0];
	//_ripple setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1], "", "Billboard", 1, 0.5, [0, 0, 0], [0, 0, 0],0,10,7.9,0, [30,1000,1], [[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 0]], [0.08], 1, 0, "", "", _obj_emp];
	_ripple setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1], "", "Billboard", 1, 0.5, [0, 0, 0], [0, 0, 0],0,10,7.9,0, [30,1000], [[1, 1, 1, 1], [1, 1, 1, 1]], [0.08], 1, 0, "", "", _obj_emp];
	_ripple setDropInterval 0.1;
	[_ripple] spawn {_de_sters = _this select 0;sleep 1;deleteVehicle _de_sters};

	_blast = "#particlesource" createVehicleLocal getposatl _obj_emp;
	_blast setParticleCircle [0, [0, 0, 0]];
	_blast setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
	_blast setParticleParams [["\A3\data_f\koule", 1, 0, 1], "", "SpaceObject", 1,1,[0,0,0],[0,0,1],3,10,7.9,0,[50,1000],[[1, 1, 1, 0.1], [1, 1, 1, 0]], [1], 1, 0, "", "", _obj_emp];
	_blast setDropInterval 50;
	[_blast] spawn {_de_sters = _this select 0;sleep 1;deleteVehicle _de_sters};

	_light_emp = "#lightpoint" createVehiclelocal getposatl _obj_emp;
	_light_emp lightAttachObject [_obj_emp, [0,0,3]];
	_light_emp setLightAmbient [1,1,1];
	_light_emp setLightColor [1,1,1];
	_light_emp setLightBrightness 0;
	//_light_emp setLightUseFlare false;_light_emp setLightFlareSize 0.1;	_light_emp setLightFlareMaxDistance 2000;
	_light_emp setLightDayLight true;
	_light_emp setLightAttenuation [10,10,50,0,50,2000];
	_range_lit=0;
	_brit =0;
	while {_brit < 50} do
	{
		_light_emp setLightBrightness _brit;
		_brit = _brit+2;
		sleep 0.01;
	};
	deleteVehicle _light_emp;
};

if (_player_viz) then
{
	sleep 1;
	cutText ["", "WHITE OUT", 1];
	sleep 0.1;
	titleCut ["", "WHITE IN", 1];
	"dynamicBlur" ppEffectEnable true;
	"dynamicBlur" ppEffectAdjust [5];
	"dynamicBlur" ppEffectCommit 0;
	sleep 1;
	"dynamicBlur" ppEffectAdjust [1];
	"dynamicBlur" ppEffectCommit 1;
	sleep 5;
	playsound "tiuit";
	"dynamicBlur" ppEffectAdjust [0];
	"dynamicBlur" ppEffectCommit 10;
	sleep 10;
	"dynamicBlur" ppEffectEnable false;

	"filmGrain" ppEffectEnable true;
 	"filmGrain" ppEffectAdjust [0.35, 1, 1.5, 0.1, 1, false];
 	"filmGrain" ppEffectCommit 0;
};