class CfgPatches {
    class VKN_Gear {
        name = VKN_Gear;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {};

		requiredAddons[] =
		{
			"A3_Characters_F",
			"VKN_Objects"
		};
	};
};



class UniformSlotInfo
{
	slotType=0;
	linkProxy="-";
};



class cfgVehicles {

	class B_Kitbag_rgr;
	class B_Soldier_F;
	class B_GEN_Soldier_F;
	class B_Carryall_Base;
	class B_AssaultPack_Base;
	class B_Soldier_lite_F;
	class B_CTRG_Soldier_base_F;
	class I_soldier_F;
 	class O_V_Soldier_Viper_F;
	class O_Soldier_F;
	class C_Story_Mechanic_01_F;
	class ReammoBox_F;
	class ReammoBox;
	class NATO_Box_Base;
	class IND_Box_Base: ReammoBox_F {};
	class ContainerSupply;
	class Bag_Base: ReammoBox {};

	#include "\VKN_Gear\cfgVehicles\uniforms.hpp"
	#include "\VKN_Gear\cfgVehicles\backpacks.hpp"



	class O_T_VTOL_02_infantry_dynamicLoadout_F;
	class O_T_VTOL_02_vehicle_dynamicLoadout_F;

	#include "\VKN_Gear\cfgVehicles\Vehicles.hpp"
};


class cfgWeapons {

	class Uniform_Base;
	class UniBase;
	class UniformItem;
	class InventoryItem_Base_F;
	class VestItem;
	class HeadGearItem;
	class ItemCore;
	class ItemInfo;
	class H_HelmetIA;
	class H_HelmetB;
    class H_Cap_red;
    class H_Beret_02;
    class H_helmetO_ViperSP_hex_F;
    class U_B_CTRG_Soldier_F;

    class Vest_NoCamo_Base;
    class Vest_Camo_Base : ItemCore {
		class ItemInfo;
	};

    #include "\VKN_Gear\cfgWeapons\headgear.hpp"
    #include "\VKN_Gear\cfgWeapons\uniforms.hpp"
    #include "\VKN_Gear\cfgWeapons\vests.hpp"
};



class cfgGlasses {
	class G_Balaclava_TI_blk_F;
	class VKN_Stealth_Balaclava_MTP: G_Balaclava_TI_blk_F
	{
		scope=2;
		author="Apple";
		_generalMacro="G_Balaclava_lowprofile";
		displayName="[VKN] FBA Stealth Balaclava (MTP)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\VKN_Gear\data\facewear\VKN_S_Balaclava_MTP.paa"
		};
	};
	class VKN_Stealth_Balaclava_BLK: G_Balaclava_TI_blk_F
	{
		author="Apple";
		displayName="[VKN] FBA Stealth Balaclava + Goggles (Black)";
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\VKN_Gear\data\facewear\VKN_S_Balaclava_BLK.paa",
			"\VKN_Gear\data\facewear\VKN_Combat_Goggles.paa"
		};
	};
	class VKN_Stealth_Balaclava_SNOW: G_Balaclava_TI_blk_F
	{
		scope=2;
		author="Apple";
		_generalMacro="G_Balaclava_lowprofile";
		displayName="[VKN] FWA Stealth Balaclava (SNOW)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\VKN_Gear\data\facewear\VKN_S_Balaclava_SNOW.paa"
		};
	};
	class VKN_Stealth_Balaclava_SNOW_CAMO: G_Balaclava_TI_blk_F
	{
		scope=2;
		author="Apple";
		_generalMacro="G_Balaclava_lowprofile";
		displayName="[VKN] FWA Stealth Balaclava (SNOW CAMO)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\VKN_Gear\data\facewear\VKN_S_Balaclava_SNOW_CAMO.paa"
		};
	};
	class VKN_Stealth_Balaclava_SNOW_G: G_Balaclava_TI_blk_F
	{
		author="Apple";
		displayName="[VKN] FWA Stealth Balaclava + Goggles (SNOW)";
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\VKN_Gear\data\facewear\VKN_S_Balaclava_SNOW.paa",
			"\VKN_Gear\data\facewear\VKN_Combat_Goggles.paa"
		};
	};
	class VKN_Stealth_Balaclava_SNOW_CAMO_G: G_Balaclava_TI_blk_F
	{
		author="Apple";
		displayName="[VKN] FWA Stealth Balaclava + Goggles (SNOW CAMO)";
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\VKN_Gear\data\facewear\VKN_S_Balaclava_SNOW_CAMO.paa",
			"\VKN_Gear\data\facewear\VKN_Combat_Goggles.paa"
		};
	};
};