class DefaultEventhandlers;
class CfgPatches
{
	class AS_365
	{
		units[]=
		{
			"AS_365",
			"AS_565"
		};
		weapons[]={};
		requiredVersion=3.2;
		requiredAddons[]=
		{
			"A3_Soft_F",
			"A3_Data_F",
			"A3_Data_F"
		};
	};
};
class CfgEditorCategories
{
	class ION_Choppers
	{
		displayName="ION Helicopters";
	};
};
class CfgEditorSubcategories
{
	class Heli
	{
		displayName="Aircraft";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ChopperHeavy_R_static_H="ChopperHeavy_R_static_H";
		ChopperHeavy_L_Static_H="ChopperHeavy_L_Static_H";
		ChopperHeavy_LP_Static_H="ChopperHeavy_LP_Static_H";
		ChopperHeavy_R_GetOut_H="ChopperHeavy_R_GetOut_H";
		ChopperHeavy_R_GetIn_H="ChopperHeavy_R_GetIn_H";
		ChopperHeavy_L_GetOut_H="ChopperHeavy_L_GetOut_H";
		ChopperHeavy_L_GetIn_H="ChopperHeavy_L_GetIn_H";
		chopperheavy_Lux_getout_H="chopperheavy_Lux_getout_H";
		ChopperHeavy_Lux_GetIn_H="ChopperHeavy_Lux_GetIn_H";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class KIA_ChopperHeavy_R_01_H: DefaultDie
		{
			actions="DeadActions";
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death1.rtm";
			speed=0.76923102;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class KIA_chopperHeavy_R_02_H: KIA_ChopperHeavy_R_01_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death2.rtm";
			speed=0.625;
		};
		class KIA_chopperHeavy_R_03_H: KIA_ChopperHeavy_R_01_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\death3.rtm";
			speed=0.652174;
		};
		class KIA_chopperHeavy_L_01_H: KIA_ChopperHeavy_R_01_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\L\death1.rtm";
			speed=0.76923102;
		};
		class KIA_chopperHeavy_L_02_H: KIA_ChopperHeavy_R_01_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\L\death2.rtm";
			speed=0.625;
		};
		class KIA_chopperHeavy_LP_01_H: KIA_ChopperHeavy_R_01_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\LP\death1.rtm";
			speed=0.441176;
		};
		class KIA_chopperHeavy_LP_02_H: KIA_ChopperHeavy_R_01_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\LP\death2.rtm";
			speed=0.652174;
		};
		class KIA_chopperHeavy_LP_03_H: KIA_ChopperHeavy_R_01_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\LP\death3.rtm";
			speed=0.76923102;
		};
		class Crew;
		class ChopperHeavy_R_Static_H: Crew
		{
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
			leftLegIKCurve[]={1};
			rightLegIKCurve[]={1};
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\R\static.rtm";
			speed=1e+010;
			looped=0;
			interpolateTo[]=
			{
				"KIA_ChopperHeavy_R_01_H",
				1,
				"KIA_chopperHeavy_R_02_H",
				1,
				"KIA_chopperHeavy_R_03_H",
				1
			};
		};
		class ChopperHeavy_L_Static_H: Crew
		{
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
			leftLegIKCurve[]={1};
			rightLegIKCurve[]={1};
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\L\static.rtm";
			speed=1e+010;
			looped=0;
			interpolateTo[]=
			{
				"KIA_ChopperHeavy_L_01_H",
				1,
				"KIA_chopperHeavy_L_02_H",
				1
			};
		};
		class ChopperHeavy_LP_Static_H: Crew
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\LP\static.rtm";
			speed=1e+010;
			looped=0;
			interpolateTo[]=
			{
				"KIA_ChopperHeavy_LP_01_H",
				1,
				"KIA_chopperHeavy_LP_02_H",
				1,
				"KIA_chopperHeavy_LP_03_H",
				1
			};
		};
		class AmovPercMstpSnonWnonDnon;
		class ChopperHeavy_R_GetIn_H: AmovPercMstpSnonWnonDnon
		{
			variantsPlayer[]={};
			actions="CivilStandActions";
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\R_GetIn.rtm";
			speed=0.5;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			canPullTrigger=0;
			connectTo[]={};
			interpolateTo[]={};
			collisionShape="A3\anims_f\data\geom\sdr\geom_empty.p3d";
			head="headNo";
			headBobMode=1;
			headBobStrength=-1;
		};
		class ChopperHeavy_R_GetOut_H: AmovPercMstpSnonWnonDnon
		{
			variantsPlayer[]={};
			actions="CivilStandActions";
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\R_GetOut.rtm";
			speed=0.5;
			looped=0;
			soundEnabled=0;
			disableWeapons=1;
			enableOptics=0;
			canPullTrigger=0;
			connectTo[]={};
			interpolateTo[]={};
			collisionShape="A3\anims_f\data\geom\sdr\geom_empty.p3d";
			head="headNo";
			headBobMode=1;
			headBobStrength=-1;
		};
		class ChopperHeavy_L_GetIn_H: ChopperHeavy_R_GetIn_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\L_GetIn.rtm";
		};
		class ChopperHeavy_L_GetOut_H: ChopperHeavy_R_GetOut_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\L_GetOut.rtm";
		};
		class ChopperHeavy_Lux_GetIn_H: ChopperHeavy_R_GetIn_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\Lux_GetIn.rtm";
		};
		class ChopperHeavy_Lux_GetOut_H: ChopperHeavy_R_GetOut_H
		{
			file="\A3\Air_F_Beta\Heli_Transport_02\Data\Anim\InOut\Lux_GetOut.rtm";
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ChopperHeavy_R_static_H="crew";
		ChopperHeavy_L_Static_H="crew";
		ChopperHeavy_LP_Static_H="crew";
		ChopperHeavy_C_Straight_static_H="crew";
		ChopperHeavy_R_GetOut_H="crew";
		ChopperHeavy_R_GetIn_H="crew";
		ChopperHeavy_L_GetOut_H="crew";
		ChopperHeavy_L_GetIn_H="crew";
		chopperheavy_Lux_getout_H="crew";
		ChopperHeavy_Lux_GetIn_H="crew";
	};
};
class SensorTemplatePassiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitMissiles;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class Components;
	};
	class AS_365_base: Helicopter_Base_H
	{
		author="Daedalus";
		mapSize=22.459999;
		scope=0;
		displayName="Eurocopter AS 365";
		model="\AS_365\Eurocopter_AS_365.p3d";
		picture="\AS_365\data\map_car_ca.paa";
		Icon="\a3\air_f_beta\heli_transport_01\data\ui\map_heli_transport_01_base_ca.paa";
		editorPreview="\AS_365\data\AS_365_CA.paa";
		editorCategory="ION_Choppers";
		editorSubcategory="Heli";
		memoryPointTaskMarker="TaskMarker_1_pos";
		accuracy=0.5;
		driveOnComponent[]=
		{
			"Wheels"
		};
		usePreciseGetInAction=0;
		memoryPointsGetInDriverPrecise="GetIn_Pilot";
		memoryPointsGetInCargoPrecise[]=
		{
			"GetIn_Cargo"
		};
		memoryPointsGetInDriver="pos pilot";
		memoryPointsGetInDriverDir="pos pilot dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		getInRadius=1.7;
		preciseGetInOut=0;
		cargoPreciseGetInOut[]={0};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		driverDoor="";
		cargoDoors[]={};
		driverAction="pilot_Heli_Light_02";
		driverInAction="pilot_Heli_Light_02";
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic04",
			"gunner_Heli_Transport_01",
			"gunner_Heli_Transport_01"
		};
		castCargoShadow=1;
		transportSoldier=5;
		hideWeaponsCargo=0;
		cargoProxyIndexes[]={1,3,4,6,7};
		ejectDeadCargo=0;
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		maximumLoad=5000;
		mainRotorSpeed=1;
		backRotorSpeed=1;
		supplyRadius=-0.30000001;
		cargoCanEject=1;
		driverCanEject=0;
		cost=10000000;
		threat[]={0.30000001,0.2,0.30000001};
		mainBladeRadius=6;
		tailBladeRadius=0.69999999;
		maxFordingDepth=0.64999998;
		bodyFrictionCoef=0.25;
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
			autoHoverCorrection[]={3.2,0,0};
			defaultCollective=0.80500001;
			retreatBladeStallWarningSpeed=83;
			maxTorque=3300;
			stressDamagePerSec=0.0099999998;
			maxHorizontalStabilizerLeftStress=8000;
			maxHorizontalStabilizerRightStress=8000;
			maxVerticalStabilizerStress=4000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=225000;
			maxTailRotorStress=225000;
		};
		maxSpeed=278;
		fuelCapacity=800;
		fuelConsumptionRate=0.1;
		radarType=8;
		slingLoadMaxCargoMass=5000;
		extCameraPosition[]={0,5,-23};
		headAimDown=9;
		gearRetracting=1;
		gearUpTime=1;
		gearDownTime=1;
		armor=100;
		altFullForce=4000;
		altNoForce=6000;
		draconicTorqueXCoef=1.2;
		draconicTorqueYCoef=3;
		draconicForceXCoef=7.4000001;
		draconicForceYCoef=3;
		draconicForceZCoef=2.5;
		damageResistance=0.0055499999;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=999;
				visual="zbytek";
				minimalHit=0.050000001;
				depends="Total";
				radius=0.0099999998;
			};
			class HitFuel: HitFuel
			{
				armor=0.69999999;
				radius=0.125;
				minimalHit=0.050000001;
				explosionShielding=2;
			};
			class HitAvionics: HitAvionics
			{
				armor=1.3;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=1.5;
				visual="podsvit pristroju";
			};
			class HitMissiles: HitMissiles
			{
				armor=0.69999999;
				radius=0.25;
				minimalHit=0.050000001;
				explosionShielding=1;
			};
			class HitEngine1
			{
				armor=0.69999999;
				radius=0.25;
				name="engine_1_hit";
				explosionShielding=3;
				minimalHit=0.1;
				visual="motor";
				passThrough=1;
				convexComponent="engine_1_hit";
				material=51;
			};
			class HitEngine2: HitEngine1
			{
				armor=0.69999999;
				minimalHit=0.1;
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitEngine: HitEngine
			{
				armor=10;
				radius=0.050000001;
				minimalHit=1;
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor: HitHRotor
			{
				armor=0.5999999;
				radius=0.40000001;
				minimalHit=0.090000004;
				explosionShielding=2.5;
			};
			class HitVRotor: HitVRotor
			{
				armor=0.30000001;
				radius=0.059999999;
				minimalHit=0.050000001;
				explosionShielding=6;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.050000001;
				passThrough=1;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.050000001;
				passThrough=1;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.050000001;
				passThrough=1;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.050000001;
				passThrough=1;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.050000001;
				passThrough=1;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.050000001;
				passThrough=1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class MFD
		{
		};
		class Reflectors
		{
			class Light
			{
				color[]={8000,6500,3500};
				ambient[]={80,60,30};
				intensity=50;
				size=1;
				innerAngle=5;
				outerAngle=75;
				coneFadeCoef=10;
				position="Light_pos";
				direction="Light_dir";
				hitpoint="Light_hitpoint";
				selection="Light";
				useFlare=1;
				flareSize=8;
				flareMaxDistance=300;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0;
					hardLimitStart=200;
					hardLimitEnd=250;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliBig";
			};
		};
		attenuationEffectType="HeliAttenuation";
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\open",
			1,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\close",
			1,
			1,
			50
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_start_v2",
			0.31622776,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_start_v2",
			2.2387211,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_stop_v2",
			0.31622776,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_stop_v2",
			2.2387211,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_2",
			0.31622776,
			1
		};
		occludeSoundsWhenIn=0.56234133;
		obstructSoundsWhenIn=0.31622776;
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			2.5118864,
			1,
			300
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_small_int2",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1.7782794,
			1,
			200
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1.7782794,
			1,
			200
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			300
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			200
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		gearUpExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_OUT",
			1,
			1,
			1000
		};
		gearUpInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_up_IN",
			1,
			1,
			100
		};
		gearUp[]=
		{
			"gearUpInt",
			"gearUpExt"
		};
		gearDownInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_IN",
			1,
			1,
			100
		};
		gearDownExt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Transport_01\gear_down_OUT",
			1,
			1,
			1000
		};
		gearDown[]=
		{
			"gearDownInt",
			"gearDownExt"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_engine",
					1.2589254,
					1,
					900
				};
				frequency="rotorSpeed";
				volume="camPos*(rotorSpeed-0.72)*4";
			};
			class RotorExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_rotor",
					1.7782794,
					1,
					2000
				};
				frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
				volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\rotor_swist",
					0.70794576,
					1,
					800
				};
				frequency=1;
				volume="camPos * (rotorThrust factor [0.7, 0.9])";
				cone[]={0.69999999,1.3,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_engine",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(rotorSpeed-0.75)*4";
			};
			class RotorInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_rotor",
					1.2589254,
					1
				};
				frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.22387211,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1.2589254,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1.2589254,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.70794576,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
					0.70794576,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress3",
					0.70794576,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[40,60])";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_engine",
						1.2589254,
						1,
						900
					};
					frequency="rotorSpeed";
					volume="camPos*(rotorSpeed-0.72)*4";
				};
				class RotorExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_rotor",
						1.7782794,
						1,
						2000
					};
					frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
					volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorNoiseExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_02\rotor_swist",
						0.70794576,
						1,
						800
					};
					frequency=1;
					volume="camPos * (rotorThrust factor [0.7, 0.9])";
					cone[]={0.69999999,1.3,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_engine",
						1,
						1
					};
					frequency="rotorSpeed";
					volume="(1-camPos)*(rotorSpeed-0.75)*4";
				};
				class RotorInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_rotor",
						1.2589254,
						1
					};
					frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
					volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.22387211,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.70794576,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2d",
						0.70794576,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress3",
						0.70794576,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[40,60])";
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Door_L
			{
				source="door";
				animPeriod=2.5;
				initPhase=0;
				sound="ServoDoorsSound";
			};
			class Door_R
			{
				source="door";
				animPeriod=2.5;
				initPhase=0;
				sound="ServoDoorsSound";
			};
			class Door_Back_L
			{
				source="door";
				animPeriod=0.60000002;
				sound="ServoRampSound_2";
			};
			class Door_Back_R
			{
				source="door";
				animPeriod=0.60000002;
				sound="ServoRampSound_2";
			};
			class AddGunHolder
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Gun_HRot
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Gun_VRot
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class Minigun
			{
				source="revolving";
				weapon="LMG_Minigun_Transport";
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="LMG_Minigun_Transport";
			};
			class Minigun2
			{
				source="revolving";
				weapon="LMG_Minigun_Transport2";
			};
			class Muzzle_flash2
			{
				source="ammorandom";
				weapon="LMG_Minigun_Transport2";
			};
			class HitGlass1
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass1";
			};
			class HitGlass2
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass2";
			};
			class HitGlass3
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass3";
			};
			class HitGlass4
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass4";
			};
			class HitGlass5
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass5";
			};
			class HitGlass6
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass6";
			};
			class front1
			{
				displayName="Front A";
				source="user";
				animPeriod=1e-006;
				initPhase=0;
				mass=0;
			};
			class front2
			{
				displayName="Front B";
				source="user";
				animPeriod=1e-006;
				initPhase=0;
				mass=0;
			};
			class step1
			{
				displayName="Steps";
				source="user";
				animPeriod=1e-006;
				initPhase=0;
				mass=0;
			};
			class EMS
			{
				displayName="EMS";
				source="user";
				animPeriod=1e-006;
				initPhase=0;
				mass=0;
			};
		};
		class TextureSources
		{
			class Civil
			{
				displayName="Default Gray";
				author="Daedalus";
				textures[]=
				{
					"AS_365\data\AS365_body_co.paa",
					"AS_365\data\as365_glass_co.paa"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class HIDF
			{
				displayName="Horizon Islands Defence Force";
				author="Daedalus";
				textures[]=
				{
					"AS_365\data\skins\AS365_Green.paa",
					"AS_365\data\as365_glass_co.paa"
				};
				factions[]=
				{
					"BLU_G_F"
				};
			};
			class PMC1
			{
				displayName="ION Private Military Company";
				author="Daedalus";
				textures[]=
				{
					"AS_365\data\skins\AS365_Black.paa",
					"AS_365\data\as365_glass_co.paa"
				};
				factions[]=
				{
					"BLU_G_F"
				};
			};
			class PMC2
			{
				displayName="ION Private Military Company Black Windows";
				author="Daedalus";
				textures[]=
				{
					"AS_365\data\skins\AS365_Black.paa",
					"AS_365\data\glass_black.paa"
				};
				factions[]=
				{
					"BLU_G_F"
				};
			};
			class PMC3
			{
				displayName="Default Black Skin Black Windows";
				author="Daedalus";
				textures[]=
				{
					"AS_365\data\skins\AS365_BlackAlt.paa",
					"AS_365\data\glass_black.paa"
				};
				factions[]=
				{
					"BLU_G_F"
				};
			};
			class PMC4
			{
				displayName="Default Black Skin";
				author="Daedalus";
				textures[]=
				{
					"AS_365\data\skins\AS365_BlackAlt.paa",
					"AS_365\data\as365_glass_co.paa"
				};
				factions[]=
				{
					"BLU_G_F"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo9",
			"camo10",
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"license1",
			"license2",
			"license3",
			"license4",
			"license5",
			"license6",
			"license7"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class UserActions
		{
			class Door_Open_L
			{
				userActionID=60;
				displayName="Open Door L";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="";
				condition="this doorPhase ""Door_L"" < 0.5 AND Alive(this) AND (player in crew this)";
				statement="this animateDoor ['Door_L', 1]";
				priority=1.5;
				radius=1.5;
				showWindow=0;
				onlyForPlayer=1;
				shortcut="";
			};
			class Door_Close_L: Door_Open_L
			{
				userActionID=61;
				displayName="Close Door L";
				textToolTip="Close door L";
				condition="this doorPhase ""Door_L"" > 0.5 AND Alive(this) AND (player in crew this)";
				statement="this animateDoor ['Door_L', 0]";
			};
			class Door_Open_R
			{
				userActionID=60;
				displayName="Open Door R";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="";
				condition="this doorPhase ""Door_R"" < 0.5 AND Alive(this) AND (player in crew this)";
				statement="this animateDoor ['Door_R', 1]";
				priority=1.5;
				radius=1.5;
				showWindow=0;
				onlyForPlayer=1;
				shortcut="";
			};
			class Door_Close_R: Door_Open_R
			{
				userActionID=61;
				displayName="Close Door R";
				textToolTip="Close door R";
				condition="this doorPhase ""Door_R"" > 0.5 AND Alive(this) AND (player in crew this)";
				statement="this animateDoor ['Door_R', 0]";
			};
		};
		class Armory
		{
			description="$STR_A3_Heli_Transport_02_lib";
		};
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		radarTargetSize=1.2;
		visualTargetSize=1.2;
		irTargetSize=1.2;
		lockDetectionSystem="8 + 4";
		incomingMissileDetectionSystem="8 + 16";
		numberPhysicalWheels=3;
		unitInfoTypeRTD="RscUnitInfoAirRTDFullDigital";
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="pilot_Heli_Light_02";
				gunnerInAction="pilot_Heli_Light_02";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";
				memoryPointsGetInGunnerPrecise="GetIn_Turret";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerCompartments="Compartment2";
				preciseGetInOut=0;
				gunnerDoor="";
				commanding=-3;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_3";
				gunnerInAction="passenger_inside_3";
				gunnerName="Passenger Right";
				memoryPointsGetInGunner="pos gunner1";
				memoryPointsGetInGunnerDir="pos gunner1 dir";
				gunnerCompartments="Compartment2";
				proxyIndex=2;
				isPersonTurret=1;
				forceHideGunner=1;
				canHideGunner=1;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				allowLauncherIn=0;
				allowLauncherOut=0;
				showAsCargo=1;
				enabledByAnimationSource="Door_R";
				maxElev=10;
				minElev=-70;
				maxTurn=-30;
				minTurn=-110;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName="Passenger Left";
				memoryPointsGetInGunner="pos gunner2";
				memoryPointsGetInGunnerDir="pos gunner2 dir";
				gunnerCompartments="Compartment2";
				proxyIndex=5;
				enabledByAnimationSource="Door_L";
				maxElev=10;
				minElev=-70;
				maxTurn=110;
				minTurn=30;
			};
		};
		cargoCompartments[]=
		{
			"Compartment2"
		};
		memoryPointDriverOptics="slingCamera";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
		};
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="W";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				showMiniMapInOptics=0;
				showUAVViewpInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=0;
			maxTurn=0;
			initTurn=0;
			minElev=80;
			maxElev=80;
			initElev=80;
			maxXRotSpeed=0.5;
			maxYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class eventhandlers
		{
			init="if (local (_this select 0)) then { [_this select 0] call d3s_fnc_setLicense;};";
		};
	};
	class AS_365: AS_365_base
	{
		author="Daedalus";
		displayName="Eurocopter AS 365 Dauphin";
		model="\AS_365\Eurocopter_AS_365.p3d";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"rotorshaftm",
					0
				},
				
				{
					"bladem01_joint_horizontal_axis",
					0
				},
				
				{
					"bladem02_joint_horizontal_axis",
					0
				},
				
				{
					"bladem03_joint_horizontal_axis",
					0
				},
				
				{
					"bladem04_joint_horizontal_axis",
					0
				},
				
				{
					"bladem01_dive",
					0
				},
				
				{
					"bladem02_dive",
					0
				},
				
				{
					"bladem03_dive",
					0
				},
				
				{
					"bladem04_dive",
					0
				},
				
				{
					"bladem01_bank",
					0
				},
				
				{
					"bladem02_bank",
					0
				},
				
				{
					"bladem03_bank",
					0
				},
				
				{
					"bladem04_bank",
					0
				},
				
				{
					"bladem01_blur_rotation",
					0
				},
				
				{
					"bladem02_rotation",
					0
				},
				
				{
					"bladem03_rotation",
					0
				},
				
				{
					"bladem04_rotation",
					0
				},
				
				{
					"vrotor",
					0
				},
				
				{
					"i_altitude_100f",
					9.04
				},
				
				{
					"i_altitude_1000f",
					9.04
				},
				
				{
					"i_altitude_10000f",
					9.04
				},
				
				{
					"i_compass",
					0
				},
				
				{
					"i_wp",
					0
				},
				
				{
					"damagehide",
					0
				},
				
				{
					"lever_pilot",
					0
				},
				
				{
					"lever_copilot",
					0
				},
				
				{
					"pedall",
					0
				},
				
				{
					"pedalr",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"frontgear",
					0
				},
				
				{
					"rightgear",
					0
				},
				
				{
					"leftgear",
					0
				},
				
				{
					"right_gear_d",
					-0.059999999
				},
				
				{
					"left_gear_d",
					-0.059999999
				},
				
				{
					"front_gear_d",
					-0.059999999
				},
				
				{
					"door_back_l",
					0
				},
				
				{
					"door_back_l_lock",
					0
				},
				
				{
					"door_back_r",
					0
				},
				
				{
					"door_back_r_lock",
					0
				},
				
				{
					"swashplate_rotation",
					0
				},
				
				{
					"swashplate_dive",
					0
				},
				
				{
					"swashplate_bank",
					0
				},
				
				{
					"stick_pilot_dive_01",
					0
				},
				
				{
					"stick_pilot_dive_02",
					0
				},
				
				{
					"stick_pilot_dive_03",
					0
				},
				
				{
					"stick_pilot_dive_04",
					0
				},
				
				{
					"stick_pilot_dive_05",
					0
				},
				
				{
					"stick_pilot_bank_01",
					0
				},
				
				{
					"stick_pilot_bank_02",
					0
				},
				
				{
					"stick_pilot_bank_03",
					0
				},
				
				{
					"stick_pilot_bank_04",
					0
				},
				
				{
					"stick_pilot_bank_05",
					0
				},
				
				{
					"stick_copilot_dive01",
					0
				},
				
				{
					"stick_copilot_dive02",
					0
				},
				
				{
					"stick_copilot_dive03",
					0
				},
				
				{
					"stick_copilot_dive04",
					0
				},
				
				{
					"stick_copilot_dive05",
					0
				},
				
				{
					"stick_copilot_bank01",
					0
				},
				
				{
					"stick_copilot_bank02",
					0
				},
				
				{
					"stick_copilot_bank03",
					0
				},
				
				{
					"stick_copilot_bank04",
					0
				},
				
				{
					"stick_copilot_bank05",
					0
				},
				
				{
					"display_on",
					0
				},
				
				{
					"i_speed",
					0
				},
				
				{
					"i_speed_02",
					0
				},
				
				{
					"i_speed_03",
					0
				},
				
				{
					"i_speed02",
					0
				},
				
				{
					"i_speed02_02",
					0
				},
				
				{
					"i_speed02_03",
					0
				},
				
				{
					"i_vspeed",
					0
				},
				
				{
					"i_vspeed_02",
					0
				},
				
				{
					"i_vspeed_03",
					0
				},
				
				{
					"i_vspeed02",
					0
				},
				
				{
					"i_vspeed02_02",
					0
				},
				
				{
					"i_vspeed02_03",
					0
				},
				
				{
					"i_altitude02_100f",
					9.04
				},
				
				{
					"i_altitude02_1000f",
					9.04
				},
				
				{
					"i_altitude02_10000f",
					9.04
				},
				
				{
					"i_horizona",
					0
				},
				
				{
					"i_horizonb",
					0
				},
				
				{
					"i_horizona02",
					0
				},
				
				{
					"i_horizonb02",
					0
				},
				
				{
					"i_compass02",
					0
				},
				
				{
					"i_rpm",
					0
				},
				
				{
					"i_rpm02",
					0
				},
				
				{
					"i_rpm03",
					0
				},
				
				{
					"i_rpm04",
					0
				},
				
				{
					"i_fuel",
					1
				},
				
				{
					"i_fuel02",
					1
				},
				
				{
					"i_fuel03",
					1
				},
				
				{
					"i_fuel04",
					1
				},
				
				{
					"i_fuel05",
					1
				},
				
				{
					"i_fuel06",
					1
				},
				
				{
					"i_fuelpress",
					0
				},
				
				{
					"i_fuelpress02",
					0
				},
				
				{
					"i_oilpress",
					0
				},
				
				{
					"i_oilpress02",
					0
				},
				
				{
					"i_oilpress03",
					0
				},
				
				{
					"i_oilpress04",
					0
				},
				
				{
					"i_oilpress05",
					0
				},
				
				{
					"i_oilpress06",
					0
				},
				
				{
					"i_torque01",
					0
				},
				
				{
					"i_torque02",
					0
				},
				
				{
					"i_torque03",
					0
				},
				
				{
					"i_torque04",
					0
				},
				
				{
					"i_torque01_base",
					0
				},
				
				{
					"i_torque02_base",
					0
				},
				
				{
					"i_torque03_base",
					0
				},
				
				{
					"i_torque04_base",
					0
				},
				
				{
					"i_tot",
					3387.24
				},
				
				{
					"i_tot02",
					3387.24
				},
				
				{
					"i_tot03",
					3387.24
				},
				
				{
					"i_tot04",
					3387.24
				},
				
				{
					"positionlights",
					0
				},
				
				{
					"collisionlight_red_blinking",
					0
				},
				
				{
					"collisionlight_white_blinking",
					0
				},
				
				{
					"clock_hour",
					0.079999998
				},
				
				{
					"clock_minute",
					0.94
				},
				
				{
					"clock_second",
					0.5
				},
				
				{
					"mainturret",
					1.5700001
				},
				
				{
					"maingun",
					0.25999999
				},
				
				{
					"mainturret2",
					-1.5700001
				},
				
				{
					"maingun2",
					0.25999999
				},
				
				{
					"minigun",
					0.33000001
				},
				
				{
					"minigun2",
					0.33000001
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"zasleh_1",
				"light",
				"light_l",
				"light_r",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=3.54;
			verticalOffsetWorld=-0.067000002;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		class Reflectors: Reflectors
		{
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				position="Light_R_pos";
				direction="Light_R_dir";
				hitpoint="Light_R_hitpoint";
				selection="Light_R";
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
			class Left: Right
			{
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L_hitpoint";
				selection="Light_L";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			}
		};
		scope=2;
		side=1;
		faction="BLU_G_F";
		vehicleClass="Helicopter";
		crew="I_helipilot_F";
		typicalCargo[]=
		{
			"I_helicrew_F"
		};
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		textureList[]=
		{
			"HIDF",
			"PMC1",
			"PMC2",
			"Civil",
			"PMC3",
			"PMC4",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"AS_365\data\skins\AS365_Black.paa",
			"AS_365\data\glass.paa"
		};
		class AnimationSources: AnimationSources
		{
			class front1: front1
			{
				initPhase=1;
			};
			class front2: front2
			{
				initPhase=0;
			};
			class step1: step1
			{
				initPhase=0;
			};
			class EMS: EMS
			{
				initPhase=0;
			};
		};
	};
	class AS_365_DEV: AS_365
	{
		author="Daedalus";
		displayName="Eurocopter AS 365 Dauphin DEV";
		model="\AS_365\Eurocopter_AS_365_SLOW.p3d";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"AS_365\data\skins\AS365_Black.paa",
			"AS_365\data\glass_black.paa"
		};
	};
	class AS_565: AS_365
	{
		author="Daedalus";
		displayName="Eurocopter AS 565 Panther";
		model="\AS_365\Eurocopter_AS_565.p3d";
		cargoProxyIndexes[]={1,3,4};
		transportSoldier=3;
		scope=2;
		side=1;
		faction="BLU_G_F";
		vehicleClass="Helicopter";
		typicalCargo[]=
		{
			"I_helicrew_F"
		};
		armor=300;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		hiddenSelectionsTextures[]=
		{
			"AS_365\data\AS365_body_co.paa",
			"AS_365\data\glass.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject=0;
				gunnerAction="pilot_Heli_Transport_01";
				gunnerInAction="pilot_Heli_Transport_01";
				memoryPointsGetInGunner="pos copilot";
				memoryPointsGetInGunnerDir="pos copilot dir";
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerGetOutAction="GetOutLow";
				preciseGetInOut=0;
				GunnerDoor="";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="PedalL";
				gunnerRightLegAnimName="PedalR";
				proxyIndex=1;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				gunnerCompartments="Compartment";
				commanding=-3;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerInAction="passenger_apc_generic02";
				gunnerAction="passenger_inside_3";
				gunnerName="Passenger Right";
				memoryPointsGetInGunner="pos gunner1";
				memoryPointsGetInGunnerDir="pos gunner1 dir";
				gunnerCompartments="Compartment2";
				proxyIndex=2;
				isPersonTurret=1;
				forceHideGunner=1;
				canHideGunner=1;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				allowLauncherIn=0;
				allowLauncherOut=0;
				showAsCargo=1;
				enabledByAnimationSource="Door_R";
				maxElev=10;
				minElev=-70;
				maxTurn=-30;
				minTurn=-110;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName="Passenger Left";
				memoryPointsGetInGunner="pos gunner2";
				memoryPointsGetInGunnerDir="pos gunner2 dir";
				gunnerCompartments="Compartment2";
				proxyIndex=5;
				enabledByAnimationSource="Door_L";
				maxElev=10;
				minElev=-70;
				maxTurn=110;
				minTurn=30;
			};
			class MainTurret: MainTurret
			{
				CanEject=1;
				isCopilot=0;
				body="mainTurret";
				gun="mainGun";
				gunnerType="B_helicrew_F";
				minElev=-50;
				maxElev=30;
				initElev="--15";
				minTurn=15;
				maxTurn=160;
				initTurn=90;
				animationSourceHatch="";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				gunnerName="$STR_A3_LEFT_GUNNER";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=1;
				memoryPointGunnerOptics="gunnerview";
				gunnerAction="gunner_Heli_Transport_01";
				gunnerInAction="gunner_Heli_Transport_01";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				weapons[]=
				{
					"LMG_Minigun_Transport"
				};
				magazines[]=
				{
					"2000Rnd_65x39_Belt_Tracer_Red"
				};
				commanding=-2;
				primaryGunner=1;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos gunner4";
				memoryPointsGetInGunnerDir="pos gunner4 dir";
				proxyIndex=2;
				LODTurnedIn=1200;
				LODTurnedOut=1200;
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerDoor="";
				playerPosition=3;
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=0;
				canUseScanners=0;
			};
			class RightDoorGun: MainTurret
			{
				minTurn=-160;
				maxTurn=-15;
				initTurn=-90;
				body="mainTurret2";
				gun="mainGun2";
				animationSourceBody="mainTurret2";
				animationSourceGun="mainGun2";
				selectionFireAnim="zasleh_1";
				proxyIndex=3;
				gunnerName="$STR_A3_RIGHT_GUNNER";
				weapons[]=
				{
					"LMG_Minigun_Transport2"
				};
				commanding=-3;
				gunBeg="muzzle_beg_2";
				gunEnd="muzzle_end_2";
				primaryGunner=0;
				memoryPointGun="";
				memoryPointGunnerOptics="gunnerview2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos gunner3";
				memoryPointsGetInGunnerDir="pos gunner3 dir";
				gunnerDoor="";
				turretCanSee="1 + 2 + 4 + 8 + 16";
				canUseScanners=0;
			};
		};
		class AnimationSources: AnimationSources
		{
			class front1: front1
			{
				initPhase=0;
			};
			class front2: front2
			{
				initPhase=1;
			};
			class step1: step1
			{
				initPhase=1;
			};
			class EMS: EMS
			{
				initPhase=1;
			};
		};
	};
};
