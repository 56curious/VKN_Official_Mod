class CfgPatches {
    class VKN_Objects {
        name = VKN_Objects;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {
      "B_VKN_AS_365_PMC_01",
      "B_VKN_AS_365_PMC_02",

      "B_VKN_AS_565_PMC_01",
      "B_VKN_AS_565_PMC_02",

      "B_VKN_tahoe_08_PMC_01",
      "B_VKN_tahoe_ltz_08_PMC_01",
      "B_VKN_suburban_PMC_01",
      "B_VKN_tahoe_UNM_PMC_01",
      "B_VKN_tahoe_LUMI_PMC_01"
		};

		requiredAddons[] = {
			"AS_365"
		};
	};
};

#define private 0       // Hidden to all
#define protected 1     // Can use but still hidden
#define public 2        // Visible to all

class CfgEditorCategories {
	class VKN_Units {
		displayName = "Viking Units";
	};
};

class CfgEditorSubcategories {
	delete Heli;
	delete SUV;
};

class CfgFactionClasses
{
	class HEMTT_Black {
  displayName = "HEMTT (Black)";
  side = 1;
  priority = 10;
  icon = "\VKN_Objects\vehicles\cfgFactionClasses_ca.paa";
 };
 class Hunter_Black {
	displayName = "Hunter (Black)";
	side = 1;
	priority = 10;
	icon = "\VKN_Objects\vehicles\cfgFactionClasses_ca.paa";
 };
};

class cfgWeapons {
  class SportCarHorn;
  class VKN_ss2000_wail: SportCarHorn {
    displayname = "SS2000 Wail";
    scope = public;
    reloadTime = 4;
    drySound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\wail_short.wss",1,1};
  };
  class VKN_ss2000_airhorn: SportCarHorn {
    displayname = "SS2000 Airhorn";
    scope = public;
    reloadTime = 4;
    drySound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\airhorn_short.wss",1,1};
  };
  class VKN_pa300_wail: SportCarHorn  {
    displayname = "PA300 Wail";
    scope = public;
    reloadTime = 4;
    drySound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\wail_short.wss",1,1};
  };
  class VKN_pa300_airhorn: SportCarHorn {
    displayname = "PA300 Airhorn";
    scope = public;
    reloadTime = 4;
    drySound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\airhorn_short.wss",1,1};
  };

  class arifle_MXC_F;
  class VKN_G36 : arifle_MXC_F {
   model = "\VKN_Objects\Weapons\G36-Accurate_Version3_Test.p3d";
  };
};

class CfgSounds {
  class VKN_ss2000_wail {
    name = "VKN_ss2000_wail";
    sound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\wail.wss",1,1};
    titles[] = {};
    scope = public;
  };
  class VKN_ss2000_yelp {
    name = "VKN_ss2000_yelp";
    sound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\yelp.wss",1,1};
    titles[] = {};
    scope = public;
  };
  class VKN_pa300_wail {
    name = "VKN_pa300_wail";
    sound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\wail.wss",1,1};
    titles[] = {};
    scope = public;
  };
  class VKN_pa300_hilo {
    name = "VKN_pa300_hilo";
    sound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\hilo.wss",1,1};
    titles[] = {};
    scope = public;
  };
};

class CfgVehicles {

  //hidden custom items to avoid broken assets being used.
  /*
  class Land_WoodenCrate_01_F;

  class VKN_wooden_crate : Land_WoodenCrate_01_F {
    hiddenSelections[]={"camo"};
    model = "\VKN_Objects\Crates\Wooden_Box.p3d";
    editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
		hiddenSelectionsTextures[]={"\VKN_Objects\Crates\crate-texture.paa"};
  };

  class Land_Water_source_F;

  class VKN_Kiosk_: Land_Water_source_F {
    hiddenSelections[]={"camo"};
    displayName = "Kisok Test";
    author = "Curious";
    model = "\VKN_Objects\Crates\Graffiti_kiosk.p3d";
    editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
		hiddenSelectionsTextures[]={"\VKN_Objects\Crates\Kiosk-texture.paa"};
  };
  */


  //Import Privatization
  class Car_F;
  class AS_365_base;
  class tahoe_08_base;

  class B_Truck_01_transport_F;
  class B_Truck_01_mover_F;
  class B_Truck_01_box_F;
  class B_Truck_01_Repair_F;
  class B_Truck_01_ammo_F;
  class B_Truck_01_fuel_F;
  class B_Truck_01_medical_F;
  class B_MRAP_01_F;
  class B_MRAP_01_gmg_F;
  class B_MRAP_01_hmg_F;

  // Hunter
  #include "\VKN_Objects\vehicles\hunter\hunter.hpp"
  // HEMTT configs
  #include "\VKN_Objects\vehicles\hemtt\hemtt.hpp"

  //#include "\VKN_Objects\Vehicles\Red\redConfig.hpp"
  #include "\VKN_Objects\Vehicles\removeClasses.hpp"

	//Helicopter Configs
  #include "\VKN_Objects\Configs\AS_365_565.hpp"


  //SUV Configs
  class tahoe_08: tahoe_08_base { 
    scope = private;  
    armor = 40;
    armorStructural= 1;
    armorFuel = 1.4;
    armorGlass = 0.5;
    armorLights = 0.4;
    armorWheels = 0.05;
    gearBox[] = {-8,0,10,6.15,4.44,3.33};
  };
  class tahoe_ltz_08: tahoe_08_base { 
    scope = private;
    armor = 40;
    armorStructural= 1;
    armorFuel = 1.4;
    armorGlass = 0.5;
    armorLights = 0.4;
    armorWheels = 0.05;
    gearBox[] = {-8,0,10,6.15,4.44,3.33}; 
  };
  class suburban: tahoe_08_base { 
    scope = private; 
    armor = 40;
    armorStructural= 1;
    armorFuel = 1.4;
    armorGlass = 0.5;
    armorLights = 0.4;
    armorWheels = 0.05;
    gearBox[] = {-8,0,10,6.15,4.44,3.33};
  };
  class tahoe_LUMI: tahoe_08_base { 
    scope = private;
    armor = 40;
    armorStructural= 1;
    armorFuel = 1.4;
    armorGlass = 0.5;
    armorLights = 0.4;
    armorWheels = 0.05;
    gearBox[] = {-8,0,10,6.15,4.44,3.33}; 
  };
  class tahoe_UNM: tahoe_08_base { 
    scope = private; 
    armor = 40;
    armorStructural= 1;
    armorFuel = 1.4;
    armorGlass = 0.5;
    armorLights = 0.4;
    armorWheels = 0.05;
    gearBox[] = {-8,0,10,6.15,4.44,3.33};
  };

  #include "\VKN_Objects\Configs\Tahoes.hpp"
};



class CfgMagazines {
	class 40Rnd_762x51_Mag;
	class 30Rnd_9x21_Mag;

	class VKN_30Rnd_9x39mm_Mag : 30Rnd_9x21_Mag {
		scope = public;
		author = "--";
    model = "\VKN_Objects\Weapons\VSS Mag\VSS Mag.p3d";

		displayName = "30Rnd 9x39mm";
		picture = "\FA_Weapons_VKN\data\icons\icon_vss_mag_ca.paa";
		count = 30;
		ammo = "FA_VKN_9x39mm_Ball";
		descriptionshort = "Caliber: 9x39mm<br />Rounds: 30<br />Used in: VSS";
		mass = 10;
	};
};
