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
    class VSM_RAV_operator_OGA_OD;
	class VSM_CarrierRig_Breacher_OGA_OD;
	class VSM_FAPC_MG_OGA_OD;
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

	class VKN_RAV_Operator_Base: VSM_RAV_operator_OGA_OD {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]={"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
	};

	class VKN_CarrierRig_Breacher_Base: VSM_CarrierRig_Breacher_OGA_OD {
		scope = 1;
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[]={"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
	};

	class VKN_FAPC_MG_Base: VSM_FAPC_MG_OGA_OD {
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

	class VKN_RAV_Operator_BLK: VKN_RAV_Operator_Base {
		scope=2;
		author="Apple";
		displayName="[VKN] FBA - Paraclete RAV (Black)";
		hiddenSelectionsTextures[]={"VKN_Gear\data\vests\VKN_blk_chestrig.paa","VKN_Gear\data\vests\VKN_battlebelt_BLK.paa","VKN_Gear\data\vests\VKN_dropholster_BLK.paa","VKN_Gear\data\vests\VKN_serpa_blk.paa","VKN_Gear\data\vests\VKN_BLK_gear_co.paa","VKN_Gear\data\vests\VKN_radio_pouch_BLK.paa","VKN_Gear\data\vests\VKN_RAV_BLK.paa","VKN_Gear\data\vests\VKN_pouches_blk.paa"};
	};
	class VKN_CarrierRig_Breacher_BLK: VKN_CarrierRig_Breacher_Base {
		scope=2;
		author="Apple";
		displayName="[VKN] FBA - LBT Armatus (Black)";
		hiddenSelectionsTextures[]={"VKN_Gear\data\vests\VKN_battlebelt_BLK.paa","VKN_Gear\data\vests\VKN_dropholster_BLK.paa","VKN_Gear\data\vests\VKN_serpa_blk.paa","VKN_Gear\data\vests\VKN_blk_gear_co.paa","VKN_Gear\data\vests\VKN_radio_pouch_BLK.paa","VKN_Gear\data\vests\VKN_blk_plate.paa","VKN_Gear\data\vests\VKN_pouches_blk.paa"};
	};
	class VKN_FAPC_MG_BLK: VKN_FAPC_MG_Base {
		scope=2;
		author="Apple";
		displayName="[VKN] FBA DT FAPC (Black)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\vests\VKN_battlebelt_BLK.paa","\VKN_Gear\data\vests\VKN_boxmag_blk.paa","\VKN_Gear\data\vests\VKN_dropholster_BLK.paa","\VKN_Gear\data\vests\VKN_serpa_blk.paa","\VKN_Gear\data\vests\VKN_blk_gear_co.paa","\VKN_Gear\data\vests\VKN_radio_pouch_BLK.paa","\VKN_Gear\data\vests\VKN_fapc_BLK.paa","\VKN_Gear\data\vests\VKN_buttpouch_BLK.paa"};
	};
	class VKN_FAPC_MG_OGA_OD_MED: VKN_FAPC_MG_Base
	{
		scope=2;
		displayName="[VKN] Medical OD DT FAPC (OGA)";
		author="Apple";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\vests\VKN_battlebelt_OGA_OD.paa","\VKN_Gear\data\vests\VKN_boxmag_OGA_OD.paa","\VKN_Gear\data\vests\VKN_dropholster_OGA_OD.paa","\VKN_Gear\data\vests\VKN_serpa_OGA_OD.paa","\VKN_Gear\data\vests\VKN_OGA_OD_gear_co.paa","\VKN_Gear\data\vests\VKN_radio_pouch_OGA_OD.paa","\VKN_Gear\data\vests\VKN_fapc_OGA_OD.paa","\VKN_Gear\data\vests\VKN_buttpouch_OGA_OD_MED.paa"};
	};
	class VKN_FAPC_MG_OCP_MED: VKN_FAPC_MG_Base
	{
		scope=2;
		displayName="[VKN] Medical DT FAPC (OCP)";
		author="Apple";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\vests\VKN_battlebelt_OCP.paa","\VKN_Gear\data\vests\VKN_boxmag_OCP.paa","\VKN_Gear\data\vests\VKN_dropholster_OCP.paa","\VKN_Gear\data\vests\VKN_serpa_OCP.paa","\VKN_Gear\data\vests\VKN_OCP_gear_co.paa","\VKN_Gear\data\vests\VKN_radio_pouch_OCP.paa","\VKN_Gear\data\vests\VKN_fapc_OCP.paa","\VKN_Gear\data\vests\VKN_buttpouch_OCP_MED.paa"};
	};
	class VKN_FAPC_MG_BLK_MED: VKN_FAPC_MG_Base
	{
		scope=2;
		displayName="[VKN] Medical DT FAPC (BLK)";
		author="Apple";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\vests\VKN_battlebelt_blk.paa","\VKN_Gear\data\vests\VKN_boxmag_blk.paa","\VKN_Gear\data\vests\VKN_dropholster_blk.paa","\VKN_Gear\data\vests\VKN_serpa_blk.paa","\VKN_Gear\data\vests\VKN_blk_gear_co.paa","\VKN_Gear\data\vests\VKN_radio_pouch_blk.paa","\VKN_Gear\data\vests\VKN_FAPC_blk_Medical.paa","\VKN_Gear\data\vests\VKN_buttpouch_blk_MED.paa"};
	};

	class VKN_Police_Coveralls: rhs_uniform_m88_patchless {
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        author = "Jonmo";
        scope = 2;
        displayName = "[VKN] Greek Police Coveralls";
        picture="\VKN_Misc\VKN_Logo_Inverted.paa";
        //hiddenSelections[] = {"camo1","camo2","camob","insignia"};
        //hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\VKN_Police_Coveralls.paa"};
        class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "VKN_Dummy_B_Police_Coveralls";
			containerClass = "Supply90";
			mass = 125;
		};
	};

	class vkn_h_riot_helmet_bala : rhs_altyn_bala {
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
		class vkn_h_riot_helmet : rhs_altyn {
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
		class vkn_h_riot_helmet_visor : rhs_altyn_visordown	{
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
				class Head
				{
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
	class rhsusf_shemagh_black: rhsusf_shemagh_base	{
		scope=2;
		author="Apple";
		dlc="RHS_USAF";
		displayname="[VKN] Shemagh (Black)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Facewear\VKN_shemagh_blk.paa"};
	};
	class rhsusf_shemagh2_black: rhsusf_shemagh2_base {
		scope=2;
		author="Apple";
		dlc="RHS_USAF";
		displayname="[VKN] Shemagh (Black/alt)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Facewear\VKN_shemagh2_blk.paa"};
	};
	class rhsusf_shemagh_gogg_black: rhsusf_shemagh_gogg_base {
		scope=2;
		author="Apple";
		dlc="RHS_USAF";
		displayname="[VKN] Shemagh w/Goggles (Black)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Facewear\VKN_shemagh_blk.paa","rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa","rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"};
	};
	class rhsusf_shemagh2_gogg_black: rhsusf_shemagh2_gogg_base {
		scope=2;
		author="Apple";
		dlc="RHS_USAF";
		displayname="[VKN] Shemagh w/Goggles (Black/alt)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Facewear\VKN_shemagh_blk.paa","rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\dark_ca.paa","rhsusf\addons\rhsusf_infantry2\gear\head\goggles\data\oakleysblk_co.paa"};
	};
};