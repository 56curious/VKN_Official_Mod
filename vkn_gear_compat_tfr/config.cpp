class CfgPatches {
    class VKN_Gear_Compat_TFR {
        name = VKN_Gear_Compat_TFR;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {};

		requiredAddons[] =
		{
      "A3_Characters_F",
      "VKN_Gear",
      "task_force_radio_items",
      "VKN_Compatibility"	
    };
	};
};

#define private 0   // Hidden to all
#define protected 1 // Can use but still hidden
#define public 2    // Visible to all

class cfgVehicles
{
  class TFAR_rt1523g;
  class TFAR_rt1523g_big;
  class rhs_msv_rifleman_m88_patchless;
  class rhs_medic_bag;

  class VKN_RHS_Duffle_Olive : rhs_medic_bag
  {
    author = "Curious";
    displayName = "RHS Duffle Bag (Olive)";
    picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
    descriptionShort = "RHS Duffle Bag (Olive)";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\VKN_RHS_Bag_Olive.paa"};
  };

  class VKN_RHS_Duffle_Black : rhs_medic_bag
  {
    author = "Curious";
    displayName = "RHS Duffle Bag (Black)";
    picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
    descriptionShort = "RHS Duffle Bag (Black)";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\VKN_RHS_Bag_Black.paa"};
  };

  class VKN_rt1523g_OD : TFAR_rt1523g
  {
    author = "Jonmo";
    displayName = "[VKN] RT-1523G (OD)";
    picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
    descriptionShort = "RT-1523G (OD) long range radio 20km";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\VKN_PRC117G_OD_ca.paa"};
  };
  class VKN_rt1523g_Big_OGA : TFAR_rt1523g_big
  {
    author = "Jonmo";
    displayName = "[VKN] RT-1523G Big (OGA)";
    picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
    descriptionShort = "RT-1523G BIG (OGA) long range radio 20km";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\VKN_nicecomm2_OGA_ca.paa"};
  };
  class VKN_rt1523g_Big_M98 : TFAR_rt1523g_big
  {
    author = "Jonmo";
    displayName = "[VKN] RT-1523G Big (M98)";
    picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
    descriptionShort = "RT-1523G BIG (M98) long range radio 20km";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\VKN_nicecomm2_M98_ca.paa"};
  };
  class VKN_rt1523g_M98 : TFAR_rt1523g
  {
    author = "Jonmo";
    displayName = "[VKN] RT-1523G (M98)";
    picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
    descriptionShort = "RT-1523G (M98) long range radio 20km";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\VKN_PRC117G_M98_ca.paa"};
  };
  class VKN_v_blackops_rt_1523g : TFAR_rt1523g
  {
    author = "Jonmo";
    scope = public;
    displayName = "[VKN] VIS Black AN/PRC 117-117g Compact";
    picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\clf_prc117g_blackops_co.paa"};
  };
  class VKN_v_blackops_nicecomm2 : TFAR_rt1523g_big
  {
    author = "Jonmo";
    scope = public;
    displayName = "[VKN] VIS Black AN/PRC 117-117g Full";
    picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\clf_nicecomm2_blackops_co.paa"};
  };
  class VKN_v_loki_nicecomm2 : TFAR_rt1523g_big
  {
    author = "Shagger";
    scope = public;
    displayName = "[VKN] VIS Loki AN/PRC 117-117g Full";
    picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\clf_nicecomm2_loki_co.paa"};
  };
};