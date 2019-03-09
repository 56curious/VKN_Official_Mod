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

	class VKN_rt1523g_OD: tf_rt1523g {
	    author = "Jonmo";
	    displayName = "[VKN] RT-1523G (OD)";
	    descriptionShort = "RT-1523G (OD) long range radio 20km";
	    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Backpacks\VKN_PRC117G_OD_ca.paa"};
	};
	class VKN_rt1523g_Big_OGA: tf_rt1523g_big {
	    author = "Jonmo";
	    displayName = "[VKN] RT-1523G Big (OGA)";
	    descriptionShort = "RT-1523G BIG (OGA) long range radio 20km";
	    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Backpacks\VKN_nicecomm2_OGA_ca.paa"};
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

	class VKN_B_OPS2_Black_Medical : VSM_Black_OPS_2 {
		scope = 2;
		author="Curious";
		displayName="[VKN] Opscore 2 Black + Medical";
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_Ops_black_Medical.paa","vsm_helmets\textures\helmet_1_co.paa","vsm_helmets\textures\vsm_ech_2_projecthonor.paa","vsm_helmets\textures\rr_ops\tex\headset_co.paa"};
	};
};