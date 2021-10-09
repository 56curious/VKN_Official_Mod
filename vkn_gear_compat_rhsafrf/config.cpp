class CfgPatches {
    class VKN_Gear_Compat_RHSAFRF {
        name = VKN_Gear_Compat_RHSAFRF;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {};

		requiredAddons[] =
		{
			"A3_Characters_F",
			"VKN_Gear",
			"VKN_Compatibility"		
		};
	};
};

#define private 0		// Hidden to all
#define protected 1 // Can use but still hidden
#define public 2		// Visible to all

class cfgVehicles {
	class rhs_msv_rifleman_m88_patchless;
	class rhs_uniform_m88_patchless;
	class rhs_medic_bag;
	class rhs_altyn_bala;
	class rhs_altyn;
	class rhs_altyn_visordown;
	class Uniform_Base;
	class UniformItem;
	class VestItem;
	class HeadGearItem;
	class ItemCore;
	class ItemInfo;
	class InventoryItem_Base_F;

	class VKN_RHS_Duffle_Olive: rhs_medic_bag {
    author = "Curious";
    displayName = "RHS Duffle Bag (Olive)";
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
    descriptionShort = "RHS Duffle Bag (Olive)";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\VKN_RHS_Bag_Olive.paa"};
  };

  class VKN_RHS_Duffle_Black: rhs_medic_bag {
    author = "Curious";
    displayName = "RHS Duffle Bag (Black)";
    picture="\VKN_Misc\VKN_Logo_Inverted.paa";
    descriptionShort = "RHS Duffle Bag (Black)";
    hiddenSelectionsTextures[] = {"VKN_Gear\data\Backpacks\VKN_RHS_Bag_Black.paa"};
  };

	class VKN_Dummy_B_Police_Coveralls : rhs_msv_rifleman_m88_patchless
	{
		author = "Jonmo";
		scope = protected;
		displayName = "[VKN] Greek Police Coveralls";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		//hiddenSelections[] = {"camo1","camo2","camob","insignia"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\VKN_Police_Coveralls.paa"};
	};

	class VKN_Police_Coveralls : rhs_uniform_m88_patchless
	{
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		author = "Jonmo";
		scope = public;
		displayName = "[VKN] Greek Police Coveralls";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "VKN_Dummy_B_Police_Coveralls";
			containerClass = "Supply90";
			mass = 125;
		};
	};

	class VKN_Riot_Helmet_Visor_Up_Balaklava : rhs_altyn_bala
	{
		author = "Jonmo";
		scope = public;
		weaponPoolAvailable = 1;
		displayName = "[VKN] Police Riot Helmet (Visor up/Balaklava)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_bala";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\vkn_police_altyn_co.paa"};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_bala";
			modelSides[] = {0, 3};
			hiddenSelections[] = {"Camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class VKN_Riot_Helmet_Visor_Up : rhs_altyn
	{
		author = "Jonmo";
		scope = public;
		weaponPoolAvailable = 1;
		displayName = "[VKN] Police Riot Helmet (Visor up)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\vkn_police_altyn_co.paa"};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn";
			modelSides[] = {0, 3};
			hiddenSelections[] = {"Camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class VKN_Riot_Helmet_Visor_Down : rhs_altyn_visordown
	{
		author = "Jonmo";
		scope = public;
		weaponPoolAvailable = 1;
		displayName = "[VKN] Police Riot Helmet (Visor down)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		model = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\headgear\vkn_police_altyn_co.paa"};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry2\gear\head\rhs_altyn_visordown";
			modelSides[] = {0, 3};
			hiddenSelections[] = {"Camo1"};
			class HitpointsProtectionInfo
			{
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