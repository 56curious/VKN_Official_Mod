class CfgPatches {
    class VKN_Gear {
        name = VKN_Gear;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {
      "Y32E_Cihuai_Infantry",
      "Y32E_Cihuai_Vehicle",
      "vkn_ifv_warrior_woodland",
      "vkn_ifv_warrior_desert",
      "vkn_mbt_03_w",
      "vkn_mbt_03_d",
      "vkn_mbt_03_wi"
    };

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
  class B_Soldier_base_F;
	class B_Carryall_Base;
	class B_AssaultPack_Base;
	class B_Soldier_lite_F;
	class B_CTRG_Soldier_base_F;
	class I_soldier_F;
 	class O_V_Soldier_Viper_F;
	class O_Soldier_F;
	class C_Story_Mechanic_01_F;
  class B_G_Soldier_F;
    class O_R_Gorka_base_F;

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
  class LandVehicle;
	class Tank;
	class Tank_F;
	class APC_Tracked_03_base_F;
	class I_APC_tracked_03_base_F;
	class I_APC_tracked_03_cannon_F;
	class MBT_03_base_F;
	class I_MBT_03_base_F;
	class I_MBT_03_cannon_F;

	#include "\VKN_Gear\cfgVehicles\Vehicles.hpp"
};


class cfgWeapons {

  class Uniform_Base;
  class UniBase;
  class UniformItem;
  class InventoryItem_Base_F;
  class HeadGearItem;
  class H_HelmetIA;
  class H_HelmetB;
  class H_Cap_red;
  class H_Beret_02;
  class H_helmetO_ViperSP_hex_F;
  class U_B_CTRG_Soldier_F;
  class U_O_R_Gorka_01_F;
  class VestItem;
  class ItemCore;
  class ItemInfo;
  class Vest_NoCamo_Base;
  class Vest_Camo_Base : ItemCore {
	class ItemInfo;
  };
  class NVGoggles;


  #include "\VKN_Gear\cfgWeapons\headgear.hpp"
  #include "\VKN_Gear\cfgWeapons\uniforms.hpp"
  #include "\VKN_Gear\cfgWeapons\vests.hpp"
  #include "\VKN_Gear\cfgWeapons\Helmets_NV_Slot.hpp"
};



class cfgGlasses {

  class G_Balaclava_TI_blk_F;

  #include "\VKN_Gear\cfgGlasses\Facewear.hpp"
};
