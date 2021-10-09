class CfgPatches {
    class VKN_Gear_Compat_RHSUSAF {
        name = VKN_Gear_Compat_RHSUSAF;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {};

		requiredAddons[] =
		{
			"rhsusf_c_weapons",
			"VKN_Compatibility"	
		};
	};
};

#define private 0       // Hidden to all
#define protected 1     // Can use but still hidden
#define public 2        // Visible to all

class cfgWeapons
{
	class rhs_booniehat2_marpatd;
	class rhsusf_opscore_cover;
	class Uniform_Base;
	class UniformItem;
	class VestItem;
	class HeadGearItem;
	class ItemCore;
	class ItemInfo;
	class InventoryItem_Base_F;

	//Base classes
	class VKN_BoonieHat_Base : rhs_booniehat2_marpatd
	{
		author = "Jonmo";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		scope = private;
		weaponPoolAvailable = 1;
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\hats\boonie";
		hiddenSelections[] = {"camo"};
		class ItemInfo : HeadGearItem
		{
			mass = 10;
			allowedSlots[] = {801, 901, 701, 605};
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\hats\boonie";
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
		};
	};

	//Configs
	class vkn_booniehat2_OGA : VKN_BoonieHat_Base
	{
		displayName = "[VKN] Booniehat (OGA)";
		scope = public;
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\vkn_boonie_oga_co.paa"};
	};
	class vkn_booniehat2_OGA_OD : VKN_BoonieHat_Base
	{
		scope = public;
		displayName = "[VKN] Booniehat (OGA OD)";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\vkn_boonie_oga_od_co.paa"};
	};
	class vkn_booniehat2_multicam : VKN_BoonieHat_Base
	{
		scope = public;
		displayName = "[VKN] Booniehat (Multicam)";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\vkn_boonie_multicam_co.paa"};
	};
	class vkn_booniehat2_multicamtropic : VKN_BoonieHat_Base
	{
		scope = public;
		displayName = "[VKN] Booniehat (Multicam Tropic)";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\vkn_boonie_multicamtropic_co.paa"};
	};
	class vkn_booniehat2_alpine : VKN_BoonieHat_Base
	{
		scope = public;
		displayName = "[VKN] Booniehat (Alpine)";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\vkn_boonie_alpine_co.paa"};
	};

	class VKN_Helmet_M98 : rhsusf_opscore_cover
	{
		scope = public;
		displayName = "[VKN] FAST Ballistic M98";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\maritime_m98.paa", "", "", "", "\VKN_Gear\data\headgear\m98_cover.paa", ""};
	};
	class VKN_Helmet_M98_HS : rhsusf_opscore_cover
	{
		scope = public;
		displayName = "[VKN] FAST Ballistic M98 (Headset)";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\maritime_m98.paa", "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", "", "", "\VKN_Gear\data\headgear\m98_cover.paa", ""};
	};
	class VKN_Helmet_ranger : rhsusf_opscore_cover
	{
		scope = public;
		displayName = "[VKN] FAST Ballistic Ranger";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\maritime_ranger.paa", "", "", "", "\VKN_Gear\data\headgear\ranger_cover.paa", ""};
	};
	class VKN_Helmet_ranger_HS : rhsusf_opscore_cover
	{
		scope = public;
		displayName = "[VKN] FAST Ballistic Ranger (Headset)";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\maritime_ranger.paa", "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", "", "", "\VKN_Gear\data\headgear\ranger_cover.paa", ""};
	};

	class VKN_Helmet_od : rhsusf_opscore_cover
	{
		scope = public;
		displayName = "[VKN] FAST Ballistic OD";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\maritime_OD.paa", "", "", "", "\VKN_Gear\data\headgear\OD_cover.paa", ""};
	};
	class VKN_Helmet_od_HS : rhsusf_opscore_cover
	{
		scope = public;
		displayName = "[VKN] FAST Ballistic OD (Headset)";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\maritime_OD.paa", "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa", "", "", "\VKN_Gear\data\headgear\OD_cover.paa", ""};
	};
	class VKN_Helmet_oga : rhsusf_opscore_cover
	{
		scope = public;
		displayName = "[VKN] FAST Ballistic OGA";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\maritime_OGA.paa", "", "", "", "\VKN_Gear\data\headgear\OGA_cover.paa", ""};
	};
	class VKN_Helmet_oga_HS : rhsusf_opscore_cover
	{
		scope = public;
		displayName = "[VKN] FAST Ballistic OGA (Headset)";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\maritime_OGA.paa", "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa", "", "", "\VKN_Gear\data\headgear\OGA_cover.paa", ""};
	};
	class VKN_Helmet_multicam : rhsusf_opscore_cover
	{
		scope = public;
		displayName = "[VKN] FAST Ballistic Multicam";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\maritime_OGA.paa", "", "", "", "\VKN_Gear\data\headgear\Multicam_cover.paa", ""};
	};
	class VKN_Helmet_multicam_HS : rhsusf_opscore_cover
	{
		scope = public;
		displayName = "[VKN] FAST Ballistic Multicam (Headset)";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\maritime_OGA.paa", "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa", "", "", "\VKN_Gear\data\headgear\Multicam_cover.paa", ""};
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