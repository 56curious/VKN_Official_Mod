/// Shrek
class VKN_HeadgearItem: InventoryItem_Base_F {
	allowedSlots[] = {"BACKPACK_SLOT", "HEADGEAR_SLOT"};
	type = "HEADGEAR_SLOT";
	hiddenSelections[] = {};
	hitpointName = "HitHead";
};
class VKN_Shrek_Head_Base: ItemCore {
	author = "DeanosBeano";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	scope = 0;
	weaponPoolAvailable = 1;
	model="\VKN_Gear\data\Headgear\shrak_head.p3d";
	hiddenSelections[] = {"camo"};
	class ItemInfo: VKN_HeadgearItem {
		mass=10;
		uniformModel="\VKN_Gear\data\Headgear\shrak_head.p3d";
		allowedSlots[] = {"UNIFORM_SLOT", "BACKPACK_SLOT", "VEST_SLOT", "HEADGEAR_SLOT"};
		modelSides[]={6};
		armor=0;
		passThrough=1;
	};
};
class VKN_Shrek_Head_Pink: VKN_Shrek_Head_Base
{
	scope = 1;
	displayName="[VKN] Shrek Head Pink Test";
	hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0,0.501961,1.0,co)"};
};
// Cap Front Base
  class VKN_cap_front_base: ItemCore {
    author = "Shagger";
    scope = 1;
    weaponPoolAvailable = 1;
    model = "\VKN_Gear\data\Models\cap_patch.p3d";
    class ItemInfo: HeadgearItem
    {
      mass = 3;
      uniformModel = "\VKN_Gear\data\Models\cap_patch.p3d";
      hiddenSelections[] = {"camo1","camo2"};
      allowedSlots[] = {801,901,701,605};
      modelSides[] = {6};
      armor = 1;
      passThrough = 1;
    };
  };
// Cap Back Base
  class VKN_cap_back_base: ItemCore {
    author = "Shagger";
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
    scope = 1;
    weaponPoolAvailable = 1;
    model = "\VKN_Gear\data\Models\capback_patch.p3d";
    class ItemInfo: HeadgearItem {
      mass = 3;
      uniformModel = "\VKN_Gear\data\Models\capback_patch.p3d";
      hiddenSelections[] = {"Camo1","Camo2"};
      allowedSlots[] = {801,901,701,605};
      modelSides[] = {6};
      armor = 0;
      passThrough = 1;
    };
  };
// Beret Base //
class VKN_Beret_Base: H_Beret_02 {
	scope = 0;
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
};
// Booniehat Base (NON RHS VARIANT) //
class VKN_Boonie_Base: H_Booniehat_khk {
	scope = 0;
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
};

class VKN_Boonie_Loki: VKN_Boonie_Base {
	author = "Shagger";
	scope = 2;
	displayName = "[VKN] Booniehat (Loki)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkn_boonie_loki_co.paa"};
}

class VKN_Beret_SouthAfrica: VKN_Beret_Base	{
	author = "Shagger";
	scope = 2;
	displayName = "[VKN] Beret (South Africa)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_beret_sa_co.paa"};
};
class VKN_Beret_Viking: VKN_Beret_Base	{
	author = "Shagger";
	scope = 2;
	displayName = "[VKN] Beret (Viking)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_beret_viking_co.paa"};
};
class VKN_Helmet_M90 : H_HelmetIA {
	author="Jonmo";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	scope = 2;
	displayName="[VKN] Combat Helmet M90";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_Helmet_M90_ca.paa"};
};
class VKN_Helmet_M90D : H_HelmetIA {
	author="Jonmo";
	scope = 2;
	displayName="[VKN] Combat Helmet M90 Desert";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_Helmet_M90D_ca.paa"};
};

class VKN_ECH_MED: H_HelmetB {
	displayName="[VKN] FBA ECH Lite (MEDICAL)";
	author="Apple";
	scope = 2;
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model="A3\Characters_F\BLUFOR\headgear_b_helmet_light";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Headgear\VKN_ECH_BLK_MED.paa"};
	class ItemInfo: ItemInfo {
		uniformModel="A3\Characters_F\BLUFOR\headgear_b_helmet_light";
	};
};

class VKN_ECH_SNOW_MED: H_HelmetB {
	displayName="[VKN] FWA ECH Lite SNOW (MEDICAL)";
	author="Apple";
	scope = 2;
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model="A3\Characters_F\BLUFOR\headgear_b_helmet_light";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Headgear\VKN_ECH_SNOW_MED.paa"};
	class ItemInfo: ItemInfo {
		uniformModel="A3\Characters_F\BLUFOR\headgear_b_helmet_light";
	};
};

class VKN_VIS_headgear: H_helmetO_ViperSP_hex_F {
	author = "Jonmo";
	scope = 2;
	weaponPoolAvailable = 1;
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	displayName = "[VKN] VIS Special Purpose Headgear";
	model = "\A3\Characters_F_Exp\OPFOR\headgear_o_vipersp.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\headgear_vipersp_tna_co.paa"};
};


class VKN_h_HelmetB_cazador: ItemCore	{
	author = "Jonmo";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName = "[VKN] Combat Helmet (Cazador)";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = { "\VKN_Gear\data\headgear\equip1_cazador_co.paa" };
	class ItemInfo: HeadgearItem {
		mass = 40;
		uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		modelSides[] = {0,3};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo {
			class Head {
				hitPointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class VKN_h_HelmetB_Light_cazador: ItemCore	{
	author = "Jonmo";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName = "[VKN] Light Combat Helmet (Cazador)";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\equip1_cazador_co.paa", "\VKN_Gear\data\headgear\equip1_cazador_co.paa", "\VKN_Gear\data\headgear\equip1_cazador_co.paa"};
	class ItemInfo: HeadgearItem {
		mass = 40;
		uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		modelSides[] = {0,3};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo {
			class Head {
				hitPointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class VKN_h_HelmetB_Enhanced_cazador: ItemCore {
	author = "Jonmo";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName = "[VKN] Enhanced Combat Helmet (Cazador)";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\equip1_cazador_co.paa", "\VKN_Gear\data\headgear\equip1_cazador_co.paa", "\VKN_Gear\data\headgear\equip1_cazador_co.paa"};
	class ItemInfo: HeadgearItem {
		mass = 40;
		uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		modelSides[] = {0,3};
		hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo {
			class Head {
				hitPointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
class VKN_h_HelmetB_Camo_cazador: ItemCore {
	author = "Jonmo";
	scope = 2;
	weaponPoolAvailable = 1;
	displayName = "[VKN] Combat Helmet Camo (Cazador)";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
	hiddenSelections[] = {"camo", "camo2"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\equip1_cazador_co.paa", "\VKN_Gear\data\headgear\vkn_ghilliecaz_co.paa"};
	class ItemInfo: HeadgearItem {
		mass = 40;
		uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		modelSides[] = {0,3};
		hiddenSelections[] = {"camo", "camo2"};
		class HitpointsProtectionInfo {
			class Head {
				hitPointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};
// Caps in black (vkn Logo)
  class VKN_cap_front_black_1: VKN_cap_front_base{
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Front Facing Cap Black (VKN Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_black_co.paa","\VKN_Gear\data\Headgear\VKN_cap_blk_vkn.paa"};
  };
  class VKN_cap_back_black_1: VKN_cap_back_base {
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Backward Facing Cap Black (VKN Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_black_co.paa","\VKN_Gear\data\Headgear\VKN_cap_blk_vkn.paa"};
  };
 // Caps in black (slov Logo)
  class VKN_cap_front_black_2: VKN_cap_front_base{
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Front Facing Cap Black (Slov Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_black_co.paa","\VKN_Gear\data\Headgear\VKN_cap_sand_slav.paa"};
  };
  class VKN_cap_back_black_2: VKN_cap_back_base {
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Backward Facing Cap Black (Slov Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_black_co.paa","\VKN_Gear\data\Headgear\VKN_cap_sand_slav.paa"};
  };
  // Caps in black (Scand Logo)
  class VKN_cap_front_black_3: VKN_cap_front_base{
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Front Facing Cap Black (Scand Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_black_co.paa","\VKN_Gear\data\Headgear\VKN_cap_sand_scand.paa"};
  };
  class VKN_cap_back_black_3: VKN_cap_back_base {
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Backward Facing Cap Black (Scand Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_black_co.paa","\VKN_Gear\data\Headgear\VKN_cap_sand_scand.paa"};
  };
   // Caps in black (Russian Logo)
  class VKN_cap_front_black_4: VKN_cap_front_base{
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Front Facing Cap Black (Russia Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_black_co.paa","\VKN_Gear\data\Headgear\VKN_cap_blk_rus.paa"};
  };
  class VKN_cap_back_black_4: VKN_cap_back_base {
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Backward Facing Cap Black (Russia Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_black_co.paa","\VKN_Gear\data\Headgear\VKN_cap_blk_rus.paa"};
  };
  // Caps in black (Russian Logo)
    class VKN_cap_front_black_5: VKN_cap_front_base{
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Front Facing Cap Black (USA Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_black_co.paa","\VKN_Gear\data\Headgear\VKN_cap_blk_usa.paa"};
  };
  class VKN_cap_back_black_5: VKN_cap_back_base {
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Backward Facing Cap Black (USA Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_black_co.paa","\VKN_Gear\data\Headgear\VKN_cap_blk_usa.paa"};
  };
// caps in OD (vkn Logo)
  class VKN_cap_front_od: VKN_cap_front_base{
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Front Facing Cap OD (VKN Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_od_co.paa","\VKN_Gear\data\Headgear\VKN_cap_od_vkn.paa"};
  };
  class VKN_cap_back_od: VKN_cap_back_base {
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Backward Facing Cap OD (VKN Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_od_co.paa","\VKN_Gear\data\Headgear\VKN_cap_od_vkn.paa"};
  };
// caps in Sand (vkn Logo)
  class VKN_cap_front_sand_1: VKN_cap_front_base{
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Front Facing Cap Sand (VKN Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_sand_co.paa","\VKN_Gear\data\Headgear\VKN_cap_sand_vkn.paa"};
  };
  class VKN_cap_back_sand_1: VKN_cap_back_base {
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Backward Facing Cap Sand (VKN Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_sand_co.paa","\VKN_Gear\data\Headgear\VKN_cap_sand_vkn.paa"};
  };
// caps in Sand (Slov Logo)
  class VKN_cap_front_sand_2: VKN_cap_front_base{
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Front Facing Cap Sand (Slov Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_sand_co.paa","\VKN_Gear\data\Headgear\VKN_cap_sand_slav.paa"};
  };
  class VKN_cap_back_sand_2: VKN_cap_back_base {
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Backward Facing Cap Sand (Slov Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_sand_co.paa","\VKN_Gear\data\Headgear\VKN_cap_sand_slav.paa"};
  };
  // caps in Sand (Scand Logo)
  class VKN_cap_front_sand_3: VKN_cap_front_base{
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Front Facing Cap Sand (Scand Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_sand_co.paa","\VKN_Gear\data\Headgear\VKN_cap_sand_scand.paa"};
  };
  class VKN_cap_back_sand_3: VKN_cap_back_base {
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Backward Facing Cap Sand (Scand Logo)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_sand_co.paa","\VKN_Gear\data\Headgear\VKN_cap_sand_scand.paa"};
  };
    // caps in Sand (USA Logo)
  class VKN_cap_front_sand_4: VKN_cap_front_base{
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Front Facing Cap Sand (USA Logo)";
    hiddenSelections[] = {"camo1","camo2","camo3"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_sand_co.paa","\VKN_Gear\data\Headgear\VKN_cap_blk_usa.paa","VKN_Gear\data\Headgear\VKN_cap_blk_rus.paa"};
  };
  class VKN_cap_back_sand_4: VKN_cap_back_base {
    author="Shagger";
    scope = 2;
    displayName = "[VKN] Backward Facing Cap Sand (USA Logo)";
    hiddenSelections[] = {"camo1","camo2","camo3"};
    hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\capb_sand_co.paa","\VKN_Gear\data\Headgear\VKN_cap_blk_usa.paa","VKN_Gear\data\Headgear\VKN_cap_blk_rus.paa"};
  };