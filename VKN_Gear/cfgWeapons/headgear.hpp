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



class VKN_Cap_Headphones_Base : ItemCore {
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	scope = 0;
	weaponPoolAvailable = 1;
	model = "\A3\Characters_F\common\capb_headphones.p3d";
	hiddenSelections[] = {"camo"};
	class ItemInfo : HeadgearItem {
		mass = 4;
		uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
		modelSides[] = {6};
		armor = 0;
		passThrough = 1;
		hiddenSelections[] = {"camo"};
	};
};

class VKN_Beret_Base: H_Beret_02 {
	scope = 0;
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
};


class VKN_Cap_LegionForest : H_Cap_red {
	author = "Max Kupoleni";
	scope = 2;
	displayName="[VKN] Cap - Legion Forest";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_Cap_LegionForest_ca.paa"};
};

class VKN_Beret_SouthAfrica: VKN_Beret_Base	{
	author = "Max Kupoleni";
	scope = 2;
	displayName = "[VKN] Beret - South Africa";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_Beret_SouthAfrica_ca.paa"};
};
class VKN_Beret_RoyalMarines: VKN_Beret_Base {
	author = "Max Kupoleni";
	scope = 2;
	displayName = "[VKN] Beret - Royal Marines";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_Beret_Royal_Marines.paa"};
};

class VKN_Cap_Loki : VKN_Cap_Headphones_Base {
	scope = 2;
	author="Shagger";
	displayName = "[VKN] Cap (Loki)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_Loki_headphones_ca.paa"};
};
class VKN_Cap_Black : VKN_Cap_Headphones_Base {
	scope = 2;
	author="Jonmo";
	displayName = "[VKN] Cap (Black)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_black_headphones_ca.paa"};
};

class VKN_Cap_Black_Logo : VKN_Cap_Headphones_Base {
	scope = 2;
	author="Jonmo";
	displayName = "[VKN] Cap (Black - Logo)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_blacklogo_headphones_ca.paa"};
};

class VKA_Cap_UA : VKN_Cap_Headphones_Base {
	scope = 2;
	author="Jonmo";
	displayName = "[VKN] Cap (Underarmour)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_ua_headphones_ca.paa"};
};

class VKN_Cap_UA_Logo : VKN_Cap_Headphones_Base {
	scope = 2;
	author="Jonmo";
	displayName = "[VKN] Cap (Underarmour - Logo)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_ualogo_headphones_ca.paa"};
};

class VKN_Cap_BW : VKN_Cap_Headphones_Base {
	scope = 2;
	author="Jonmo";
	displayName = "[VKN] Cap (Black and White)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_bw_headphones_ca.paa"};
};
class VKN_Cap_Panoptic : VKN_Cap_Headphones_Base {
	scope = 2;
	author="Jonmo";
	displayName = "[VKN] Cap (Panoptic)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_Panopticon_headphones_ca.paa"};
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
