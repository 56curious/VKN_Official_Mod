class AS_365: AS_365_base {

  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Helicopters";
  slingLoadMemoryPoint = "slingLoad0";
  scope = private;

  class RotorLibHelicopterProperties {
			RTDconfig="A3\Air_F_Beta\Heli_Transport_01\RTD_Heli_Transport_01.xml";
			autoHoverCorrection[]={3,2.45,0};
			defaultCollective=0.625;
			retreatBladeStallWarningSpeed=85.556;
			maxTorque=1100;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=230000;
			maxTailRotorStress=25000;
	};
  maxSpeed = 300;
  slingLoadMaxCargoMass=6000;
  liftForceCoef = 2.5;



  soundEngineOnInt[]={"\VKN_Objects\Vehicles\as_365\data\Startup_Int",0.31622776,1};
  soundEngineOnExt[]={"\VKN_Objects\Vehicles\as_365\data\Startup_Ext",2.2387211,1,600};
  soundEngineOffInt[]={"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_int_stop_v2",	0.31622776,1};
  soundEngineOffExt[]={"A3\Sounds_F\vehicles\air\Heli_Transport_02\Heli_Transport_02_ext_stop_v2",2.2387211,	1,600};
  class Sounds {
    class EngineExt {
      sound[]={"\VKN_Objects\Vehicles\as_365\data\EngineLoop_ext",1.2589254,1,900};
      frequency="rotorSpeed";
      volume="camPos*(rotorSpeed-0.72)*4";
    };
    class RotorExt {
      sound[]={"\VKN_Objects\Vehicles\as_365\data\EngineLoop_ext",1.7782794,1,2000};
      frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
      volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
      cone[]={1.6,3.1400001,1.6,0.94999999};
    };
    class RotorNoiseExt {
      sound[]={"",0.70794576,1,800};
      frequency=1;
      volume="camPos * (rotorThrust factor [0.7, 0.9])";
      cone[]={0.69999999,1.3,1,0};
    };
    class EngineInt {
      sound[]={"\VKN_Objects\Vehicles\as_365\data\EngineLoop_int",1,	1};
      frequency="rotorSpeed";
      volume="(1-camPos)*(rotorSpeed-0.75)*4";
    };
    class RotorInt {
      sound[]={"\VKN_Objects\Vehicles\as_365\data\EngineLoop_int",1.2589254,1};
      frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
      volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
    };
  };

  class SoundsExt {
    class SoundEvents {};
    class Sounds {
      class EngineExt {
        sound[]={"\VKN_Objects\Vehicles\as_365\data\EngineLoop_ext",1.2589254,1,900	};
        frequency="rotorSpeed";
        volume="camPos*(rotorSpeed-0.72)*4";
      };
      class RotorExt {
        sound[]={"\VKN_Objects\Vehicles\as_365\data\EngineLoop_ext",1.7782794,1,2000};
        frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
        volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
        cone[]={1.6,3.1400001,1.6,0.94999999};
      };
      class RotorNoiseExt {
        sound[]={"",0.70794576,	1,800};
        frequency=1;
        volume="camPos * (rotorThrust factor [0.7, 0.9])";
        cone[]={0.69999999,1.3,1,0};
      };
      class EngineInt {
        sound[]={"\VKN_Objects\Vehicles\as_365\data\EngineLoop_int",	1,	1};
        frequency="rotorSpeed";
        volume="(1-camPos)*(rotorSpeed-0.75)*4";
      };
      class RotorInt {
        sound[]={"\VKN_Objects\Vehicles\as_365\data\EngineLoop_int",	1.2589254,	1};
        frequency="rotorSpeed * rotorSpeed * (1 - rotorThrust/6)";
        volume="(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
      };
    };
  };
};

class AS_565: AS_365 {
  scope = private;
  };

class B_VKN_AS_365_PMC_01 : AS_365 {
  hiddenSelectionsTextures[] = {"AS_365\data\skins\AS365_BlackAlt.paa", "AS_365\data\glass.paa"};
  displayName = "Eurocopter AS 365 Dauphin (Black)";
  scope = public;
};

class B_VKN_AS_365_PMC_02 : AS_365 {
  hiddenSelectionsTextures[] = {"\VKN_Objects\Vehicles\as_365\data\VKN_AS365_Black_Logo.paa", "AS_365\data\glass.paa"};
  displayName = "Eurocopter AS 365 Dauphin (Black + Logo)";
  scope = public;
};

class B_VKN_AS_565_PMC_01 : AS_565 {
  hiddenSelectionsTextures[] = {"AS_365\data\skins\AS365_BlackAlt.paa", "AS_365\data\glass.paa"};
  displayName = "Eurocopter AS 565 Panther (Black)";
  scope = public;
};

class B_VKN_AS_565_PMC_02 : AS_565 {
  hiddenSelectionsTextures[] = {"\VKN_Objects\Vehicles\as_365\data\VKN_AS365_Black_Logo.paa", "AS_365\data\glass.paa"};
  displayName = "Eurocopter AS 565 Panther (Black + Logo)";
  scope = public;
};
