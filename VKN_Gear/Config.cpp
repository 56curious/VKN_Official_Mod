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
			"A3_Characters_F"
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
	class B_Soldier_lite_F;
	class I_soldier_F;
	class ReammoBox_F;
	class ReammoBox;
	class NATO_Box_Base;
	class IND_Box_Base: ReammoBox_F {};
	class ContainerSupply;
	class Bag_Base: ReammoBox {};
	#include "\VKN_Gear\cfgVehicles\uniforms.hpp"
	#include "\VKN_Gear\cfgVehicles\vests.hpp"
	#include "\VKN_Gear\cfgVehicles\backpacks.hpp"
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
    class H_Cap_red;
    class H_Beret_02;

    #include "\VKN_Gear\cfgWeapons\headgear.hpp"
    #include "\VKN_Gear\cfgWeapons\uniforms.hpp"
    #include "\VKN_Gear\cfgWeapons\vests.hpp"
    #include "\VKN_Gear\cfgWeapons\backpacks.hpp"
};