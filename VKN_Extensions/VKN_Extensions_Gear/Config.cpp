class CfgPatches {
    class VKN_Extensions_Gear {
        name = VKN_Gear_Extensions;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {};

		requiredAddons[] =
		{
			"A3_Characters_F",
			"VSM_HELMETS",
			"task_force_radio_items",
			"VKN_Gear"
		};
	};
};

class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};

class cfgVehicles {
	class tf_rt1523g;
	class tf_rt1523g_big;
	class rhs_msv_rifleman_m88_patchless;

	class VKN_rt1523g_OD: tf_rt1523g {
	    author = "Jonmo";
	    displayName = "[VKN] RT-1523G (OD)";
	    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	    descriptionShort = "RT-1523G (OD) long range radio 20km";
	    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\VKN_PRC117G_OD_ca.paa"};
	};
	class VKN_rt1523g_Big_OGA: tf_rt1523g_big {
	    author = "Jonmo";
	    displayName = "[VKN] RT-1523G Big (OGA)";
	    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	    descriptionShort = "RT-1523G BIG (OGA) long range radio 20km";
	    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\VKN_nicecomm2_OGA_ca.paa"};
	};
	class VKN_v_blackops_rt_1523g: tf_rt1523g {
        author = "Jonmo";
        scope = 2;
        displayName = "[VKN] VIS Black AN/PRC 117-117g Compact";
        picture="\VKN_Misc\VKN_Logo_Inverted.paa";
        hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\clf_prc117g_blackops_co.paa"};

    };
	class VKN_v_blackops_nicecomm2: tf_rt1523g_big {
        author = "Jonmo";
        scope = 2;
        displayName = "[VKN] VIS Black AN/PRC 117-117g Full";
        picture="\VKN_Misc\VKN_Logo_Inverted.paa";
        hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\clf_nicecomm2_blackops_co.paa"};
    };

    class VKN_Dummy_B_Police_Coveralls: rhs_msv_rifleman_m88_patchless {
        author = "Jonmo";
        scope = 1;
        displayName = "[VKN] Greek Police Coveralls";
        picture="\VKN_Misc\VKN_Logo_Inverted.paa";
        //hiddenSelections[] = {"camo1","camo2","camob","insignia"};
        hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\VKN_Police_Coveralls.paa"};
    };
};


class cfgWeapons {

	class Uniform_Base;
	class UniformItem;
	class VestItem;
	class HeadGearItem;
	class ItemCore;
	class ItemInfo;
	class InventoryItem_Base_F;
	class H_HelmetIA;
	class VSM_Black_OPS_2;
  class H_Cap_red;
  class H_Beret_02;
  class VSM_RAV_operator_OCP;
  class VSM_RAV_MG_OCP;
  class VSM_RAV_Breacher_OCP;
  class VSM_CarrierRig_MG_OCP;
  class VSM_CarrierRig_Gunner_OCP;
  class VSM_CarrierRig_Breacher_OCP;
  class VSM_LBT6094_Operator_OCP;
  class VSM_LBT6094_MG_OCP;
  class VSM_LBT6094_Breacher_OCP;
  class VSM_FAPC_Operator_OCP;
  class VSM_FAPC_MG_OCP;
  class VSM_FAPC_Breacher_OCP;
	class rhs_altyn_bala;
	class rhs_altyn;
	class rhs_altyn_visordown;
	class rhs_uniform_m88_patchless;

	//Base classes
	class VKN_OPS_Helmet_2_Base: VSM_Black_OPS_2 {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]= {"_helmBase","_helmGear","_nvgWeight","_Peltor"};
	};

	class VKN_RAV_Operator_Base: VSM_RAV_operator_OCP {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]={"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
	};
  class VKN_RAV_Gunner_Base : VSM_RAV_MG_OCP {
    scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
    hiddenSelections[]={"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
  };
  class VKN_RAV_Breacher_Base : VSM_RAV_Breacher_OCP {
    scope = 1;
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
    hiddenSelections[]={"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
  };

	class VKN_CarrierRig_Operator_Base: VSM_CarrierRig_MG_OCP {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]={"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
	};
  class VKN_CarrierRig_Gunner_Base: VSM_CarrierRig_Gunner_OCP {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]={"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
	};
  class VKN_CarrierRig_Breacher_Base: VSM_CarrierRig_Breacher_OCP {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]={"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
	};

  class VKN_LBT6094_Operator_Base: VSM_LBT6094_Operator_OCP {
    scope = 1;
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
    hiddenSelections[]={"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
  };
  class VKN_LBT6094_Gunner_Base: VSM_LBT6094_MG_OCP {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]={"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
	};
  class VKN_LBT6094_Breacher_Base: VSM_LBT6094_Breacher_OCP {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]={"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
	};

	class VKN_FAPC_Operator_Base: VSM_FAPC_Operator_OCP {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
    hiddenSelections[]={"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
	};
  class VKN_FAPC_Gunner_Base: VSM_FAPC_MG_OCP {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
    hiddenSelections[]={"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
	};
  class VKN_FAPC_Breacher_Base: VSM_FAPC_Breacher_OCP {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
    hiddenSelections[]={"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
	};

	//Configs

	class VKN_B_OPS2_Black_Medical : VKN_OPS_Helmet_2_Base {
		scope = 2;
		author="Curious";
		displayName="[VKN] Opscore 2 Black + Medical";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\VKN_Ops_black_Medical.paa","vsm_helmets\textures\helmet_1_co.paa","vsm_helmets\textures\vsm_ech_2_projecthonor.paa","vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
	};
	class VKN_B_OPS2_LOKI_Black_Urban_Medical : VKN_OPS_Helmet_2_Base {
		scope = 2;
		author="Curious";
		displayName="[VKN] Opscore 2 Loki - (Black + Medical)";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\VKN_Ops_black_Medical.paa","vsm_helmets\textures\helmet_1_co.paa","vsm_helmets\textures\vsm_ech_2_projecthonor.paa","vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
	};
	class VKN_B_OPS_Black : VKN_OPS_Helmet_2_Base {
		scope = 2;
		author="Apple";
		displayName="[VKN] FBA OpsCore (Black)";
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]= {"_helmBase","_helmGear","_nvgWeight","_Peltor"};
		hiddenSelectionsTextures[]={"VKN_Gear\data\Headgear\VKN_ops_black.paa","VKN_Gear\data\Headgear\VKN_helmet_pouch.paa","VKN_Gear\data\Headgear\VKN_secco2.paa","VKN_Gear\data\Headgear\VKN_headset_co.paa"};
	};
	class VKN_SNOW_OPS: VKN_OPS_Helmet_2_Base {
		scope=2;
		weaponPoolAvailable=1;
		displayName="[VKN] FWA OpsCore (Snow)";
		author="Apple";
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]={"_helmBase","_helmGear","_nvgWeight","_Peltor"};
		hiddenSelectionsTextures[]={"VKN_Gear\data\Headgear\VKN_ops_snow.paa","VKN_Gear\data\Headgear\VKN_helmet_pouch.paa","VKN_Gear\data\Headgear\VKN_secco2.paa","VKN_Gear\data\Headgear\VKN_headset_co.paa"};
	};

	class VKN_RAV_Operator_Black: VKN_RAV_Operator_Base {
		scope=2;
		author="Apple";
		displayName="[VKN] FBA - Paraclete RAV (Black)";
		hiddenSelectionsTextures[]={"VKN_Gear\data\vests\Vanilla\VKN_blk_chestrig.paa","VKN_Gear\data\vests\Full Black\VKN_battlebelt_BLK.paa","VKN_Gear\data\vests\Full Black\VKN_dropholster_BLK.paa","VKN_Gear\data\vests\Full Black\VKN_serpa_blk.paa","VKN_Gear\data\vests\Full Black\VKN_BLK_gear_co.paa","VKN_Gear\data\vests\Full Black\VKN_radio_pouch_BLK.paa","VKN_Gear\data\vests\Full Black\VKN_RAV_BLK.paa","VKN_Gear\data\vests\Full Black\VKN_pouches_blk.paa"};
	};
	class VKN_CarrierRig_Breacher_Black: VKN_CarrierRig_Breacher_Base {
		scope=2;
		author="Apple";
		displayName="[VKN] FBA - LBT Armatus (Black)";
		hiddenSelectionsTextures[]={"VKN_Gear\data\vests\Full Black\VKN_battlebelt_BLK.paa","VKN_Gear\data\vests\Full Black\VKN_dropholster_BLK.paa","VKN_Gear\data\vests\Full Black\VKN_serpa_blk.paa","VKN_Gear\data\vests\Full Black\VKN_blk_gear_co.paa","VKN_Gear\data\vests\Full Black\VKN_radio_pouch_BLK.paa","VKN_Gear\data\vests\Full Black\VKN_blk_plate.paa","VKN_Gear\data\vests\Full Black\VKN_pouches_blk.paa"};
	};
	class VKN_FAPC_Gunner_Black: VKN_FAPC_Gunner_Base {
		scope=2;
		author="Apple";
		displayName="[VKN] FBA DT FAPC (Black)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\vests\Full Black\VKN_battlebelt_BLK.paa","\VKN_Gear\data\vests\Full Black\VKN_boxmag_blk.paa","\VKN_Gear\data\vests\Full Black\VKN_dropholster_BLK.paa","\VKN_Gear\data\vests\Full Black\VKN_serpa_blk.paa","\VKN_Gear\data\vests\Full Black\VKN_blk_gear_co.paa","\VKN_Gear\data\vests\Full Black\VKN_radio_pouch_BLK.paa","\VKN_Gear\data\vests\Full Black\VKN_fapc_BLK.paa","\VKN_Gear\data\vests\Full Black\VKN_buttpouch_BLK.paa"};
	};
	class VKN_FAPC_Gunner_OGA_OD_Medical: VKN_FAPC_Gunner_Base
	{
		scope=2;
		displayName="[VKN] Medical OD DT FAPC (OGA)";
		author="Apple";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\vests\OGA\VKN_battlebelt_OGA_OD.paa","\VKN_Gear\data\vests\OGA\VKN_boxmag_OGA_OD.paa","\VKN_Gear\data\vests\OGA\VKN_dropholster_OGA_OD.paa","\VKN_Gear\data\vests\OGA\VKN_serpa_OGA_OD.paa","\VKN_Gear\data\vests\OGA\VKN_OGA_OD_gear_co.paa","\VKN_Gear\data\vests\OGA\VKN_radio_pouch_OGA_OD.paa","\VKN_Gear\data\vests\OGA\VKN_fapc_OGA_OD.paa","\VKN_Gear\data\vests\Medical\VKN_buttpouch_OGA_OD_MED.paa"};
	};
	class VKN_FAPC_Gunner_OCP_Medical: VKN_FAPC_Gunner_Base
	{
		scope=2;
		displayName="[VKN] Medical DT FAPC (OCP)";
		author="Apple";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\vests\OCP\VKN_battlebelt_OCP.paa","\VKN_Gear\data\vests\OCP\VKN_boxmag_OCP.paa","\VKN_Gear\data\vests\OCP\VKN_dropholster_OCP.paa","\VKN_Gear\data\vests\OCP\VKN_serpa_OCP.paa","\VKN_Gear\data\vests\OCP\VKN_OCP_gear_co.paa","\VKN_Gear\data\vests\OCP\VKN_radio_pouch_OCP.paa","\VKN_Gear\data\vests\OCP\VKN_fapc_OCP.paa","\VKN_Gear\data\vests\Medical\VKN_buttpouch_OCP_MED.paa"};
	};
	class VKN_FAPC_Gunner_Black_Medical: VKN_FAPC_Gunner_Base
	{
		scope=2;
		displayName="[VKN] Medical DT FAPC (BLK)";
		author="Apple";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\vests\Full Black\VKN_battlebelt_blk.paa","\VKN_Gear\data\vests\Full Black\VKN_boxmag_blk.paa","\VKN_Gear\data\vests\Full Black\VKN_dropholster_blk.paa","\VKN_Gear\data\vests\Full Black\VKN_serpa_blk.paa","\VKN_Gear\data\vests\Full Black\VKN_blk_gear_co.paa","\VKN_Gear\data\vests\Full Black\VKN_radio_pouch_blk.paa","\VKN_Gear\data\vests\Medical\VKN_FAPC_blk_Medical.paa","\VKN_Gear\data\vests\Medical\VKN_buttpouch_blk_MED.paa"};
	};

  class VKN_RAV_Operator_Cazador: VKN_RAV_Operator_Base {
    scope = 2;
    author = "Jonmo";
    displayName = "[VKN] Cazador Paraclete RAV (Operator)";
    weaponPoolAvailable=1;
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\vests\Cazador\VKN_Cazador_Chestrig.paa","VKN_Gear\data\vests\Cazador\VKN_BattleBelt_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_dropholster.paa","VKN_Gear\data\Vests\Cazador\VKN_serpa.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa","VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa","VKN_Gear\data\Vests\Cazador\VKN_rav_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_pouches_Cazador.paa"};
	};
	class VKN_RAV_Gunner_Cazador: VKN_RAV_Gunner_Base {
    scope = 2;
    author = "Jonmo";
    displayName = "[VKN] Cazador Paraclete RAV (Gunner)";
    weaponPoolAvailable=1;
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa","VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_boxmag_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_dropholster.paa","VKN_Gear\data\Vests\Cazador\VKN_serpa.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa","VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa","VKN_Gear\data\Vests\Cazador\VKN_rav_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_pouches_Cazador.paa"};
	};
	class VKN_RAV_Breacher_Cazador: VKN_RAV_Breacher_Base {
    scope = 2;
    author = "Jonmo";
    displayName = "[VKN] Cazador Paraclete RAV (Breacher)";
    weaponPoolAvailable=1;
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[]= {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa","VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_dropholster.paa","VKN_Gear\data\Vests\Cazador\VKN_serpa.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa","VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa","VKN_Gear\data\Vests\Cazador\VKN_rav_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_pouches_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_buttpouch_Cazador.paa"};
	};
	class VKN_CarrierRig_Operator_Cazador: VKN_CarrierRig_Operator_Base {
    scope = 2;
    author = "Jonmo";
    displayName = "[VKN] Cazador LBT Armatus (Operator)";
    weaponPoolAvailable=1;
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa","VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_serpa.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa","VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_plate.paa","VKN_Gear\data\Vests\Cazador\VKN_buttpouch_Cazador.paa"};
	};
	class VKN_CarrierRig_Breacher_Cazador: VKN_CarrierRig_Breacher_Base {
    scope = 2;
    author = "Jonmo";
    displayName = "[VKN] Cazador LBT Armatus (Breacher)";
    weaponPoolAvailable=1;
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_dropholster.paa","VKN_Gear\data\Vests\Cazador\VKN_serpa.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa","VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_plate.paa","VKN_Gear\data\Vests\Cazador\VKN_pouches_Cazador.paa"};
	};
	class VKN_CarrierRig_Gunner_Cazador: VKN_CarrierRig_Gunner_Base {
    scope = 2;
    author = "Jonmo";
    displayName = "[VKN] Cazador LBT Armatus (Gunner)";
    weaponPoolAvailable=1;
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa","VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_boxmag_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_serpa.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa","VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_plate.paa"};
	};
	class VKN_LBT6094_Operator_Cazador: VKN_LBT6094_Operator_Base {
    scope = 2;
    author = "Jonmo";
    displayName = "[VKN] Cazador LBT6094 (Operator)";
    weaponPoolAvailable=1;
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa","VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_dropholster.paa","VKN_Gear\data\Vests\Cazador\VKN_serpa.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa","VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa","VKN_Gear\data\Vests\Cazador\VKN_lbt6094_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_pouches_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_buttpouch_Cazador.paa"};
	};
	class VKN_LBT6094_Gunner_Cazador: VKN_LBT6094_Gunner_Base {
		scope = 2;
		author = "Jonmo";
		displayName = "[VKN] Cazador LBT6094 (Gunner)";
    weaponPoolAvailable=1;
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa","VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_boxmag_Cazador.paa","VKN_Gear\data\Vests\Cazador\VKN_serpa.paa","VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa","VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa","VKN_Gear\data\Vests\Cazador\VKN_lbt6094_Cazador.paa"};
  };


	class VKN_Police_Coveralls: rhs_uniform_m88_patchless {
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    author = "Jonmo";
    scope = 2;
    displayName = "[VKN] Greek Police Coveralls";
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
    class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "VKN_Dummy_B_Police_Coveralls";
			containerClass = "Supply90";
			mass = 125;
		};
	};

	class VKN_Riot_Helmet_Visor_Up_Balaklava : rhs_altyn_bala {
		author = "Jonmo";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[VKN] Police Riot Helmet (Visor up/Balaklava)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_bala";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\vkn_police_altyn_co.paa"};
		class ItemInfo: HeadgearItem {
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_bala";
			modelSides[] = {0,3};
			hiddenSelections[] = {"Camo1"};
			class HitpointsProtectionInfo {
				class Head {
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
		class VKN_Riot_Helmet_Visor_Up : rhs_altyn {
		author = "Jonmo";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[VKN] Police Riot Helmet (Visor up)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\vkn_police_altyn_co.paa"};
		class ItemInfo: HeadgearItem {
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";
			modelSides[] = {0,3};
			hiddenSelections[] = {"Camo1"};
			class HitpointsProtectionInfo {
				class Head {
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class VKN_Riot_Helmet_Visor_Down : rhs_altyn_visordown	{
		author = "Jonmo";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[VKN] Police Riot Helmet (Visor down)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\vkn_police_altyn_co.paa"};
		class ItemInfo: HeadgearItem {
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
			modelSides[] = {0,3};
			hiddenSelections[] = {"Camo1"};
			class HitpointsProtectionInfo {
				class Head {
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
};


class CfgGlasses {
	class G_Combat;
	class None {
		identityTypes[]+={"rhsusf_g_army", 5, "rhsusf_g_usmc", 10};
	};
	class rhsusf_shemagh_base: G_Combat {};
	class rhsusf_shemagh2_base: G_Combat {};
	class rhsusf_shemagh_gogg_base: G_Combat {};
	class rhsusf_shemagh2_gogg_base: G_Combat {};
	class VKN_shemagh_black: rhsusf_shemagh_base	{
		scope=2;
		author="Apple";
		displayname="[VKN] Shemagh (Black)";
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Facewear\VKN_shemagh_blk.paa"};
	};
	class VKN_shemagh_Goggles_Black : rhsusf_shemagh_gogg_base {
		scope=2;
		author="Apple";
		displayname="[VKN] Shemagh w/Goggles (Black)";
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Facewear\VKN_shemagh_blk.paa","rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa","rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"};
	};
  class VKN_shemagh_Black_Alt : rhsusf_shemagh2_base {
		scope=2;
		author="Apple";
		displayname="[VKN] Shemagh (Black/alt)";
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Facewear\VKN_shemagh2_blk.paa"};
	};
	class VKN_shemagh_Goggles_Black_Alt : rhsusf_shemagh2_gogg_base {
		scope=2;
		author="Apple";
		displayname="[VKN] Shemagh w/Goggles (Black/alt)";
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Facewear\VKN_shemagh_blk.paa","rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa","rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"};
	};
};
