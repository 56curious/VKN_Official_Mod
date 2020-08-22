/*
Script name     \cfgWeapons\Helmets_NV_Slots.hpp
Created on:     05 May ‎2019
Author:         Jonmo

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
        				More information can be found at:
        				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Move helmets into NV slots for use in diving OPs.

*/
class VKN_Protech_SF_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "[VKN] Pro-tech SF (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_protech_helmet_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"camo"};
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
class VKN_Protech_SF_ESS_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "[VKN] Pro-tech SF ESS (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_ESS";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_protech_helmet_ess_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_ESS";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_ESS";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"camo"};
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
class VKN_Protech_SF_RHINO_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "[VKN] Pro-tech SF Rhino (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_rhino";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_protech_helmet_rhino_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_rhino";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_rhino";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"camo"};
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
class VKN_Protech_SF_RHINO_ESS_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "[VKN] Pro-tech SF Rhino/ESS (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_rhino_ESS";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_protech_helmet_rhino_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_rhino_ESS";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\protech\pt_helmet_rhino_ESS";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"camo"};
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
class VKN_opscore_rg_cover_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Ballistic Ranger Green Cover (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_rg_cover_ca.paa";
	hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","","","","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_rg_co.paa",""};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
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
class VKN_opscore_rg_cover_pelt_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Ballistic Ranger Green Cover/Headset/NSW (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_rg_cover_pelt_ca.paa";
	hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa","","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_rg_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
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
class VKN_opscore_ut_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Ballistic Urban Tan (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_ut_ca.paa";
	hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
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
class VKN_opscore_ut_pelt_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Ballistic Urban Tan/Headset (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_ut_pelt_ca.paa";
	hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","","","\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",""};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
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
class VKN_opscore_ut_pelt_cam_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Ballistic Urban Tan/Headset/Cam (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_ut_pelt_cam_ca.paa";
	hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","",""};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
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
class VKN_opscore_ut_pelt_nsw_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Ballistic Urban Tan/Headset/NSW (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_ut_pelt_nsw_ca.paa";
	hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa","","\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
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
class VKN_opscore_ut_pelt_nsw_cam_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Ballistic Urban Tan/Headset/NSW/Cam (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_ut_pelt_nsw_cam_ca.paa";
	hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa","\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
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
class VKN_opscore_mar_fg_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Maritime Foliage Green (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_mar_fg_ca.paa";
	hiddenSelections[] = {"Camo1","Camo2","comtac"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\maritime_od.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\od2_co.paa",""};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"Camo1","Camo2","comtac"};
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
class VKN_opscore_mar_fg_pelt_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Maritime Foliage Green/Headset (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_mar_fg_pelt_ca.paa";
	hiddenSelections[] = {"Camo1","Camo2","comtac"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\maritime_od.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\od2_co.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"Camo1","Camo2","comtac"};
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
class VKN_opscore_mar_ut_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Maritime Urban Tan (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_mar_ut_ca.paa";
	hiddenSelections[] = {"Camo1","Camo2","comtac"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\maritime_tan.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\tan2_co.paa",""};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"Camo1","Camo2","comtac"};
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
class VKN_opscore_mar_ut_pelt_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Maritime Urban Tan/Headset (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_mar_ut_pelt_ca.paa";
	hiddenSelections[] = {"Camo1","Camo2","comtac"};
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\maritime_tan.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\tan2_co.paa","rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\maritime";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"Camo1","Camo2","comtac"};
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
class VKN_opscore_bk_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Ballistic Black (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_bk_ca.paa";
	hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_blk_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
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
class VKN_opscore_bk_pelt_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "FAST Ballistic Black/Headset (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_opscore_bk_pelt_ca.paa";
	hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_blk_co.paa","\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		modelOff = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
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
class VKN_Bowman_NVG: NVGoggles
{
	scope = 2;
	author = "Red Hammer Studios";
	displayName = "Bowman Elite II (Diver's NVG Slot)";
	model = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_bowman";
	picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_Bowman_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rhsusf\addons\rhsusf_infantry\gear\head\data\Bowman_Base_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_bowman";
		modelOff = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_bowman";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"camo"};
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
class VKN_Watchcap_blk_NVG: NVGoggles
{
	scope = 2;
	author = "Jonmo";
	displayName = "Beanie (Diver's NVG Slot)";
	model = "\A3\Characters_F\Civil\headgear_beaniehat01";
	picture = "\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\woolhat_black_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
		modelOff = "\A3\Characters_F\Civil\headgear_beaniehat01";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"camo"};
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
class VKN_Watchcap_camo_NVG: NVGoggles
{
	scope = 2;
	author = "Jonmo";
	displayName = "Beanie Green (Diver's NVG Slot)";
	model = "\A3\Characters_F\Civil\headgear_beaniehat01";
	picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_camo_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_green_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
		modelOff = "\A3\Characters_F\Civil\headgear_beaniehat01";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"camo"};
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
class VKN_Watchcap_khk_NVG: NVGoggles
{
	scope = 2;
	author = "Jonmo";
	displayName = "Beanie Khaki (Diver's NVG Slot)";
	model = "\A3\Characters_F\Civil\headgear_beaniehat01";
	picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Watchcap_camo_ca.paa";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_khk_co.paa"};
	modelOptics = "-";
	class ItemInfo
	{
		uniformModel = "\A3\Characters_F\Civil\headgear_beaniehat01";
		modelOff = "\A3\Characters_F\Civil\headgear_beaniehat01";
		type = 616;
		hmdType = 0;
		mass = 2;
		hiddenSelections[] = {"camo"};
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
