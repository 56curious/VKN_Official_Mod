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





class VKN_Cap_Base : ItemCore {
	author = "Jonmo";
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


class VKN_Cap_LegionForest : H_Cap_red {
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	author = "Max Kupoleni";
	scope = 2;
	displayName="[VKN] Cap - Legion Forest";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_Cap_LegionForest_ca.paa"};
};
class VKN_Beret_SouthAfrica: H_Beret_02	{
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	author = "Max Kupoleni";
	scope = 2;
	displayName = "[VKN] Beret - South Africa";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_Beret_SouthAfrica_ca.paa"};
};
class VKN_Beret_RoyalMarines: H_Beret_02	{
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	author = "Max Kupoleni";
	scope = 2;
	displayName = "[VKN] Beret - Royal Marines";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_Beret_Royal_Marines.paa"};
};


class VKN_Cap_Black : VKN_Cap_Base {
	scope = 2;
	displayName = "[VKN] Cap (Black)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_black_headphones_ca.paa"};
};

class VKN_Cap_Black_Logo : VKN_Cap_Base {
	scope = 2;
	displayName = "[VKN] Cap (Black - Logo)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_blacklogo_headphones_ca.paa"};
};

class VKA_Cap_UA : VKN_Cap_Base {
	scope = 2;
	displayName = "[VKN] Cap (Underarmour)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_ua_headphones_ca.paa"};
};

class VKN_Cap_UA_Logo : VKN_Cap_Base {
	scope = 2;
	displayName = "[VKN] Cap (Underarmour - Logo)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_ualogo_headphones_ca.paa"};
};

class VKN_Cap_BW : VKN_Cap_Base {
	scope = 2;
	displayName = "[VKN] Cap (Black and White)";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\vkncap_bw_headphones_ca.paa"};
};
class VKN_Cap_Panoptic : VKN_Cap_Base {
	scope = 2;
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
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	scope = 2;
	displayName="[VKN] Combat Helmet M90 Desert";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Headgear\VKN_Helmet_M90D_ca.paa"};
};