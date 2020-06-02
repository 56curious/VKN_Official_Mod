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
			"AS_365",
      "Luke_Base"
		};
	};
};

class CfgEditorCategories {
	class VKN_Units {
		displayName = "Viking Units";
	};
};

class CfgEditorSubcategories {
	delete Heli;
	delete SUV;
};

class cfgWeapons {
  class SportCarHorn;
  class VKN_ss2000_wail: SportCarHorn {
    displayname = "SS2000 Wail";
    scope = 2;
    reloadTime = 4;
    drySound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\wail_short.wss",1,1};
  };
  class VKN_ss2000_airhorn: SportCarHorn {
    displayname = "SS2000 Airhorn";
    scope = 2;
    reloadTime = 4;
    drySound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\airhorn_short.wss",1,1};
  };
  class VKN_pa300_wail: SportCarHorn  {
    displayname = "PA300 Wail";
    scope = 2;
    reloadTime = 4;
    drySound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\wail_short.wss",1,1};
  };
  class VKN_pa300_airhorn: SportCarHorn {
    displayname = "PA300 Airhorn";
    scope = 2;
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
    scope = 2;
  };
  class VKN_ss2000_yelp {
    name = "VKN_ss2000_yelp";
    sound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\yelp.wss",1,1};
    titles[] = {};
    scope = 2;
  };
  class VKN_pa300_wail {
    name = "VKN_pa300_wail";
    sound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\wail.wss",1,1};
    titles[] = {};
    scope = 2;
  };
  class VKN_pa300_hilo {
    name = "VKN_pa300_hilo";
    sound[] = {"\VKN_Objects\Vehicles\tahoe_08\data\sounds\hilo.wss",1,1};
    titles[] = {};
    scope = 2;
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

  //#include "\VKN_Objects\Vehicles\Red\redConfig.hpp"
  #include "\VKN_Objects\Vehicles\removeClasses.hpp"

	//Helicopter Configs
  #include "\VKN_Objects\Configs\AS_365_565.hpp"


  //SUV Configs
  class tahoe_08: tahoe_08_base { scope = 0; };
  class tahoe_ltz_08: tahoe_08_base { scope = 0; };
  class suburban: tahoe_08_base { scope = 0; };
  class tahoe_LUMI: tahoe_08_base { scope = 0; };
  class tahoe_UNM: tahoe_08_base { scope = 0; };

  #include "\VKN_Objects\Configs\Tahoes.hpp"
};



class CfgMagazines {
	class 20Rnd_762x51_Mag;
	class 30Rnd_9x21_Mag;

	class VKN_30Rnd_9x39mm_Mag : 30Rnd_9x21_Mag {
		scope = 2;
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
