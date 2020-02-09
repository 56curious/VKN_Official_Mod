
//Base classes
	class VKN_CombatUniform_NonRolled_base: Uniform_Base {
		scope = 0;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"Camo","Insignia"};
	};
	class VKN_CombatUniform_RolledUP_base: Uniform_Base {
		scope = 0;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"Camo","Insignia"};
	};

	class VKN_StealthUniform_NonRolled_base: U_B_CTRG_Soldier_F {
		scope = 0;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"Camo","Insignia"};
	};
	class VKN_StealthUniform_RollpedUP_base: U_B_CTRG_Soldier_F {
		scope = 0;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"Camo","Insignia"};
	};

	class VKN_CombatUniform_Tactical_Sweater_base: Uniform_Base {
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		scope = 0;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo1","camo2"};
	};

	class VKN_I_CombatUniform_Base: Uniform_Base {
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		scope = 0;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo1","camo2"};
	};

//Rolled/NonRolled
class VKN_MTP_Woodland_Full_Rolled: VKN_CombatUniform_RolledUP_base {
	scope = 2;
	Author = "Eric McHogan";
	displayName = "[VKN] Combat Uniform - Rolled (MTP Woodland Full)";
	descriptionShort = "Combat Uniform MTP Woodland Full (Sleeves)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tflod_tflod.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_MTP_Woodland_Full_RolledUP";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_MTP_Woodland_Full_NonRolled: VKN_CombatUniform_NonRolled_base {
	scope = 2;
	Author = "Eric McHogan";
	displayName = "[VKN] Combat Uniform - Rolled (MTP Woodland Full)";
	descriptionShort = "Combat Uniform MTP Woodland Full (Full)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tflod_tflod.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_MTP_Woodland_Full_NonRolled";
		containerClass="Supply40";
		mass=40;
	};
};

class VKN_MTP_Woodland_Brown_Pants_Rolled: VKN_CombatUniform_RolledUP_base {
	scope = 2;
	Author = "Eric McHogan";
	displayName = "[VKN] Combat Uniform - Rolled (MTP Woodland Brown Pants)";
	descriptionShort = "Combat Uniform MTP Woodland Brown Pants (Sleeves)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tflod_od.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_MTP_Woodland_Brown_Pants_RolledUP";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_MTP_Woodland_Brown_Pants_NonRolled: VKN_CombatUniform_NonRolled_base {
	scope = 2;
	Author = "Eric McHogan";
	displayName = "[VKN] Combat Uniform - Rolled (MTP Woodland Full)";
	descriptionShort = "Combat Uniform MTP Woodland Full (Full)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tflod_od.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_MTP_Woodland_Brown_Pants_NonRolled";
		containerClass="Supply40";
		mass=40;
	};
};

class VKN_MTP_Tan_Full_Rolled: VKN_CombatUniform_RolledUP_base {
	scope = 2;
	Author = "Eric McHogan";
	displayName = "[VKN] Combat Uniform - Rolled (MTP Tan Full)";
	descriptionShort = "Combat Uniform MTP Tan Full (Sleeves)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tfltan_tfltan.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_MTP_Tan_Full_RolledUP";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_MTP_Tan_Full_NonRolled: VKN_CombatUniform_NonRolled_base {
	scope = 2;
	Author = "Eric McHogan";
	displayName = "[VKN] Combat Uniform - Rolled (MTP Tan Full)";
	descriptionShort = "Combat Uniform MTP Tan Full (Full)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tfltan_tfltan.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_MTP_Tan_Full_NonRolled";
		containerClass="Supply40";
		mass=40;
	};
};

class VKN_MTP_Tan_Khaki_Rolled: VKN_CombatUniform_RolledUP_base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Combat Uniform - Rolled (MTP Tan Khaki Pants)";
	descriptionShort = "Combat Uniform MTP Tan Khaki Pants (Sleeves)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tfltan_tan.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_MTP_Tan_Brown_Pants_RolledUP";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_MTP_Tan_Khaki_NonRolled: VKN_CombatUniform_NonRolled_base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Combat Uniform - Rolled (MTP Tan Khaki)";
	descriptionShort = "Combat Uniform MTP Tan Full (Khaki)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tfltan_tan.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_MTP_Tan_Brown_Pants_NonRolled";
		containerClass="Supply40";
		mass=40;
	};
};




	class VKN_CombatUniform_M90_Roll: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Combat Uniform - Rolled (M90)";
		descriptionShort = "Combat Uniform M90 (Sleeves)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90_co.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_M90_RolledUP_1_1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_M90_Full: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Combat Uniform - Full (M90)";
		descriptionShort = "Combat Uniform M90 (Full)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90_co.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_M90_NonRolled_1_1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_M90_Alternative_Roll: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		author="Shagger (Eric McHogan)";
		displayName = "[VKN] Combat Uniform - Rolled (M90)";
		descriptionShort = "Combat Uniform M90 Alternative (Sleeves)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_m90_alternative.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_M90_Alternative_RolledUP";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_M90_Alternative_Full: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		author="Shagger (Eric McHogan)";
		displayName = "[VKN] Combat Uniform - Full (M90)";
		descriptionShort = "Combat Uniform M90 Alternative (Full)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_m90_alternative.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_M90_Alternative_NonRolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_M90D_Roll: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Combat Uniform - Rolled (Desert M90)";
		descriptionShort = "Combat Uniform M90 (Sleeves)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90D_ca.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_M90D_RolledUP_1_2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_M90D_Full: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Combat Uniform - Full (Desert M90)";
		descriptionShort = "Combat Uniform M90 (Full)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90D_ca.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_M90D_NonRolled_1_2";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_M98_Roll: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Combat Uniform - Rolled (M98)";
		descriptionShort = "Combat Uniform M98 (Sleeves)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M98_co.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_M98_RolledUP_2_1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_M98_Full: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Combat Uniform - Full (M98)";
		descriptionShort = "Combat Uniform M98 (Full)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M98_co.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_M98_NonRolled_2_1";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_Loki_Black_Roll: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		author="Shagger (Eric McHogan)";
		displayName = "[VKN] Combat Uniform - Rolled (LOKI Black)";
		descriptionShort = "Combat Uniform LOKI Black (Sleeves)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_black_loki.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Loki_Black_RolledUP";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_Loki_Black_Full: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		author="Shagger (Eric McHogan)";
		displayName = "[VKN] Combat Uniform - Full (LOKI Black)";
		descriptionShort = "Combat Uniform LOKI Black (Full)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_black_loki.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Loki_Black_NonRolled";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_ARO1_Black_Full: VKN_CombatUniform_RolledUP_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - Full (AOR-1 + Black)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_AOR1_Black_NonRolled_3";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_ARO1_Black_Roll: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - Rolled (AOR-1 + Black)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_AOR1_Black_RolledUP_4";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_ARO1_Full: VKN_CombatUniform_RolledUP_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - Full (AOR-1)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_AOR1_NonRolled_4";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_ARO1_Rolled: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - Rolled (AOR-1)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_AOR1_RolledUP_5";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_Black_Marpat_Rolled: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - Black Marpat";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Black_Marpat_Rolled_11";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_3CD_Black_Rolled: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - 3CD + Black";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_3CD_Black_Rolled_8";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_Black_OD_Rolled: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - OD + Black";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Black_OD_Rolled_9";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_Black_Tan_Rolled: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - Tan + Black";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Black_Tan_Rolled_10";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_Black_Tan_Full: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - Tan + Black";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Black_Tan_NonRolled_9";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_UCP_Rolled: VKN_CombatUniform_RolledUP_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - UCP";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_UCP_Rolled_12";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_UCP_NonRolled: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - UCP";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_UCP_NonRolled_11";
			containerClass="Supply40";
			mass=40;
		};
	};

	//Single-wear
	class VKN_CombatUniform_AOR2: VKN_CombatUniform_RolledUP_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform AOR-2";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_AOR2_Nonrolled_5";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_Black: VKN_CombatUniform_RolledUP_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Combat Uniform - Rolled (Black)";
		descriptionShort = "Viking Combat Uniform";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Viking_Black_ca.paa"};
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Viking_Black_RolledUP_3";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_AOR2_Black: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - AOR-2 + Black";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_AOR2_Black_RolledUP_7";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_OD_Black_1: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - OD + Black (1)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_OD_Black_1";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_OD_Black_2: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - OD + Black (2)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_OD_Black_2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_UCP: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - UCP";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_UCP";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_Marpat_Black_Top: VKN_CombatUniform_RolledUP_base {
		scope=2;
		Author = "Teriyaki";
		picture = "\TRYK_Unit\Data\tryk.paa";
		displayName="[VKN] Combat Uniform - Black + Marpat";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Black_Top_Marpart_Bottom";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_Stealth_Black_MTP_NonRolled: VKN_StealthUniform_NonRolled_base {
		scope = 2;
		Author = "Apple";
		displayName="[VKN] FBA Stealth Uniform - Black MTP (Rolled)";
		descriptionShort = "Combat Uniform Black MTP (Full)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_MTP.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Stealth_Black_MTP_NonRolled_13";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_Stealth_Snow_Digi_NonRolled: VKN_StealthUniform_NonRolled_base {
		scope = 2;
		Author = "Apple";
		displayName="[VKN] FWA Stealth Uniform - Snow (Digital)";
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		descriptionShort = "Combat Uniform Snow Digi (Full)";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_SNOW_DIGI.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Stealth_U_SNOW_DIGI_NonRolled";
			containerClass="Supply40";
			mass=40;
		};
	};

//T shirts

	class VKN_Black_Tshirt: Uniform_Base {
		scope=2;
		displayName="[VKN] FBA Combat Uniform - T-Shirt (Black)";
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		author="Apple";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_Tshirt_co.paa"};
		class ItemInfo: UniformItem	{
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Tshirt_Black_1";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_Tshirt_Green: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Jonmo";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		displayName="[VKN] Combat Uniform - T-Shirt (Green)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Tshirt_Green";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_Tshirt_Tan: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Jonmo";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		displayName="[VKN] Combat Uniform - T-Shirt (Tan)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Tshirt_Tan";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_TshirtB_Green: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Jonmo";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		displayName="[VKN] Combat Uniform - T-Shirt Black (Green)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_TshirtB_Green";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_CombatUniform_TshirtB_Tan: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Jonmo";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		displayName="[VKN] Combat Uniform - T-Shirt Black (Tan)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_TshirtB_Tan";
			containerClass="Supply40";
			mass=40;
		};
	};

//Viper

	class VKN_u_vikingviper: Uniform_Base {
		scope = 2;
		author = "Jonmo";
		displayName = "[VKN] VIS Special Purpose Suit";
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\VKN_viperSuit_neutral_co.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\Misc\vknviper.rvmat"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "VKN_form_vikingviper";
			containerClass = "Supply90";
			mass = 125;
		};
	};

//Fleece
	class VKN_CombatUniform_Fleece_Full_NonRolled: VKN_CombatUniform_NonRolled_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Fleece Jacket (Blue/Forest)";
		descriptionShort = "Tactical Fleece";
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\Misc\vkn_fleece.rvmat"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_co.paa"};
		class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_Fleece_Full_NonRolled";
		containerClass="Supply40";
		mass=40;
	};
};

	class VKN_CombatUniform_Fleece_Green_Full_NonRolled: VKN_CombatUniform_NonRolled_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Fleece Jacket (Green/Khaki)";
		descriptionShort = "Tactical Fleece";
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\Misc\vkn_fleece.rvmat"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_Green_co.paa"};
		class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_Fleece_Green_Full_NonRolled";
		containerClass="Supply40";
		mass=40;
	};
};

	class VKN_CombatUniform_Fleece_Tan_Full_NonRolled: VKN_CombatUniform_NonRolled_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Fleece Jacket (Tan/Khaki)";
		descriptionShort = "Tactical Fleece";
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\Misc\vkn_fleece.rvmat"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_Tan_co.paa"};
		class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_Fleece_Tan_Full_NonRolled";
		containerClass="Supply40";
		mass=40;
	};
};

	class VKN_CombatUniform_Fleece_Dark_Full_NonRolled: VKN_CombatUniform_NonRolled_base {
		scope = 2;
		Author = "Jonmo";
		displayName = "[VKN] Fleece Jacket (Dark/Khaki)";
		descriptionShort = "Tactical Fleece";
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\Misc\vkn_fleece.rvmat"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_Dark_co.paa"};
		class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_Fleece_Dark_Full_NonRolled";
		containerClass="Supply40";
		mass=40;
	};
};

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

class VKN_CombatUniform_Legion_Forest_Full: VKN_I_CombatUniform_Base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Combat Uniform - Legion Forest";
	descriptionShort = "Viking Combat Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_LegionForestFull_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_Legion_Forest_Full_RolledUP_4";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_CombatUniform_Legion_Forest_Black: VKN_I_CombatUniform_Base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Combat Uniform - Legion Forest + Black";
	descriptionShort = "Viking Combat Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_LegionForest_Black_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_Legion_Forest_Full_RolledUP_5";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_CombatUniform_Legion_Forest_Olive: VKN_I_CombatUniform_Base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Combat Uniform - Legion Forest + Olive";
	descriptionShort = "Viking Combat Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_LegionForest_Olive_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_Legion_Forest_Full_RolledUP_6";
		containerClass="Supply40";
		mass=40;
	};
};

class VKN_CombatUniform_Tropical_Full: VKN_I_CombatUniform_Base {
	scope = 2;
	Author = "Max Kupoleni";
	displayName = "[VKN] Combat Uniform - Tropical";
	descriptionShort = "Viking Combat Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Tropical_Full_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_Tropical_Full_RolledUP_6";
		containerClass="Supply40";
		mass=40;
	};
};

class VKN_CombatUniform_Winter_Polygon: VKN_I_CombatUniform_Base {
	scope = 2;
	Author = "Max Kupoleni";
	displayName = "[VKN] Combat Uniform - Winter Polygon";
	descriptionShort = "Viking Combat Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Winter_Poly_Black_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_Winter_Polygon_RolledUP_7";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_CombatUniform_Loki_Full: VKN_I_CombatUniform_Base {
	scope = 2;
	Author = "Max Kupoleni";
	displayName = "[VKN] Combat Uniform - Loki";
	descriptionShort = "Viking Combat Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Loki_Combat_Uniform_01_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_B_Loki_Full_RolledUP_8";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_CombatUniform_Black_Loki: VKN_I_CombatUniform_Base {
	scope = 2;
	author="Shagger (Eric McHogan)";
	displayName = "[VKN] Combat Uniform - Loki";
	descriptionShort = "Viking Combat Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_sweater_blk_loki.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_I_Black_Loki";
		containerClass="Supply40";
		mass=40;
	};
};

class VKN_CombatUniform_3CD_Black: VKN_I_CombatUniform_Base {
	scope = 2;
	Author = "Max Kupoleni";
	displayName = "[VKN] Combat Uniform - 3CD Black";
	descriptionShort = "Viking Combat Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_3CD_Black_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_I_3CD_Black_1";
		containerClass="Supply40";
		mass=40;
	};
};

class VKN_u_Foxcoat: VKN_I_CombatUniform_Base {
	scope = 2;
	author = "Jonmo";
	displayName = "[VKN] Foxcoat Dark";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_I_Foxcoat_Grey";
		containerClass = "Supply90";
		mass = 20;
	};
};
class VKN_u_Foxcoat_green: VKN_I_CombatUniform_Base	{
	scope = 2;
	author = "Jonmo";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	displayName = "[VKN] Foxcoat Forest";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_I_Foxcoat_Green";
		containerClass = "Supply90";
		mass = 20;
	};
};

class VKN_CombatUniform_DPM_Black: VKN_I_CombatUniform_Base {
	scope = 2;
	Author = "Jonmo";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	displayName = "[VKN] Combat Uniform - Black + DPM";
	descriptionShort = "Viking Combat Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_DPM_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_I_Dummy_DPM_Black";
		containerClass="Supply40";
		mass=40;
	};
};

class VKN_CombatUniform_Cazadores_1: Uniform_Base	{
	scope = 2;
	author = "Jonmo";
	displayName = "[VKN] Cazador Tropical Uniform";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "VKN_form_CombatUniform_cazador_1";
		containerClass = "Supply90";
		mass = 20;
	};
};

class VKN_Police_Riot_Greek_1: VKN_I_CombatUniform_Base	{
	scope = 2;
	author = "Jonmo";
	displayName = "[VKN] Greek Police Riot Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_police_riot_co.paa"};
	class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "VKN_Dummy_I_Police_Riot_1";
		containerClass = "Supply90";
		mass = 20;
	};
};

class VKN_CombatUniform_lynx_pants_green_1: Uniform_Base {
	scope = 2;
	author = "Jonmo";
	displayName = "[VKN] Lynx (Winter camo + Green pants)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_I_CombatUniform_lynx_pants_green_1";
		containerClass = "Supply90";
		mass = 20;
	};
};

class VKN_CombatUniform_lynx_pants_white_1: Uniform_Base {
	scope = 2;
	author = "Jonmo";
	displayName = "[VKN] Lynx (Winter camo + White pants)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_I_CombatUniform_lynx_pants_white_1";
		containerClass = "Supply90";
		mass = 20;
	};
};

class VKN_CombatUniform_lynx_top_green_1: Uniform_Base {
	scope = 2;
	author = "Jonmo";
	displayName = "[VKN] Lynx (Winter camo + White pants)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_I_CombatUniform_lynx_top_green_1";
		containerClass = "Supply90";
		mass = 20;
	};
};

class VKN_CombatUniform_lynx_top_white_1: Uniform_Base {
	scope = 2;
	author = "Jonmo";
	displayName = "[VKN] Lynx (Winter camo + White pants)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_I_CombatUniform_lynx_top_white_1";
		containerClass = "Supply90";
		mass = 20;
	};
};

class VKN_CombatUniform_lynx_1: Uniform_Base {
	scope = 2;
	author = "Jonmo";
	displayName = "[VKN] Lynx (Winter camo + White pants)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_I_CombatUniform_lynx_1";
		containerClass = "Supply90";
		mass = 20;
	};
};
class VKN_CombatUniform_diamond_1: Uniform_Base {
	scope = 2;
	author = "Shagger";
	displayName = "[VKN] Lynx (Diamond camo + Grey pants)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_I_CombatUniform_diamond_1";
		containerClass = "Supply90";
		mass = 20;
	};
}

class VKN_CombatUniform_Shirt_DDPM: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] DDPM Uniform (Shirt)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Shirt with DDPM Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla5_1_co.paa","\VKN_Gear\data\uniforms\vkn_ddpm_shirt_co.paa"};
	class ItemInfo: UniformItem {
		uniformModel = "-";
		uniformClass = "VKN_Dummy_I_Shirt_DDPM_1";
		containerClass = "Supply40";
		mass = 40;
	};
};



////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


class VKN_CombatUniform_Tactical_Sweater_1: VKN_CombatUniform_Tactical_Sweater_base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Tactical Sweater - Black";
	descriptionShort = "Viking Tactical Sweater Black";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_black_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_I_Sweater_1";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_CombatUniform_Tactical_Sweater_2: VKN_CombatUniform_Tactical_Sweater_base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Tactical Sweater - Blu/Tan";
	descriptionShort = "Viking Tactical Sweater Blu/Tan";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Blu_tan_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_I_Sweater_2";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_CombatUniform_Tactical_Sweater_3: VKN_CombatUniform_Tactical_Sweater_base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Tactical Sweater - Green";
	descriptionShort = "Viking Tactical Sweater Green";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_Green_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_I_Sweater_3";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_CombatUniform_Tactical_Sweater_4: VKN_CombatUniform_Tactical_Sweater_base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Tactical Sweater - Green/Olive";
	descriptionShort = "Viking Tactical Sweater Green/Olive";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_Green_Olive_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_I_Sweater_4";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_CombatUniform_Tactical_Sweater_5: VKN_CombatUniform_Tactical_Sweater_base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Tactical Sweater - Olive";
	descriptionShort = "Viking Tactical Sweater Olive";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_Olive_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_I_Sweater_5";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_CombatUniform_Tactical_Sweater_6: VKN_CombatUniform_Tactical_Sweater_base {
	scope = 2;
	Author = "Jonmo";
	displayName = "[VKN] Tactical Sweater - Tan";
	descriptionShort = "Viking Tactical Sweater Tan";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_tan_ca.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel="-";
		uniformClass="VKN_Dummy_I_Sweater_6";
		containerClass="Supply40";
		mass=40;
	};
};

class VKN_CombatUniform_Sweater_DDPM_1: VKN_CombatUniform_Tactical_Sweater_base {
	scope = 2;
	author = "Jonmo";
	displayName = "[VKN] DDPM Uniform (Sweater)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	descriptionShort = "Viking Tactical Sweater, DDPM";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_ddpm_sweater_co.paa"};
	class ItemInfo: UniformItem {
		uniformModel="-";
		uniformClass="VKN_Dummy_I_Sweater_DDPM_1";
		containerClass="Supply40";
		mass=40;
	};
};

///// civ

class VKN_Shirt_White_Jeans: Uniform_Base	{
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC White shirt & Jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_whiteshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_blue_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_White_Jeans";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_White_Pants_Khaki: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC White shirt & Khaki pants";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_whiteshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_khaki_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_White_Pants_Khaki";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_Black_Jeans: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Black shirt & Jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blackshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_blue_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_Black_Jeans_1";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_Black_Pants_Khaki: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Black shirt & Khaki pants";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blackshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_khaki_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_Black_Pants_Khaki";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_White_Jeans_Black: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC White shirt & Black jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_whiteshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_black_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_White_Jeans_Black";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_Black_Jeans_Black: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Black shirt & Black jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blackshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_black_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_Black_Pants_Black";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_Blue_Jeans_Black: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Blue shirt & Black jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blueshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_black_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_Blue_Pants_Black";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_Blue_Jeans_Khaki: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Blue shirt & Khaki jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blueshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_khaki_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_Blue_Pants_Khaki";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_Blue_Jeans: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Blue shirt & Jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blueshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_blue_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_Blue_Jeans";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_Green_Jeans_Black: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Green shirt & Black jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_greenshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_black_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_Green_Pants_Black";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_Green_Jeans_Khaki: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Green shirt & Khaki jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_greenshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_khaki_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_Green_Jeans_Khaki";
		containerClass = "Supply30";
		mass = 30;
	};
};

class VKN_Shirt_Green_Jeans: Uniform_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Green shirt & Jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_greenshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_blue_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_Green_Jeans_Khaki";
		containerClass = "Supply30";
		mass = 30;
	};
};



class VKN_CombatUniform_Shirt_BlueHawaii_AOR1_1: Uniform_Base //Blue Hawaii
{
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Hawaii Shirt (Blue/AOR1)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with AOR1 Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_bluehawaii_shirt_co.paa","\VSM_AOR1\data\VSM_ARD_AOR1_1.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_Shirt_BlueHawaii_AOR1_1";
		containerClass = "Supply40";
		mass = 40;
	};
};
class VKN_CombatUniform_Shirt_BlueHawaii_aplblack_1: Uniform_Base
{
	author = "Jonmo, Apple";
	scope = 2;
	displayName = "[VKN] PMC Hawaii Shirt (Blue/Apple-Black)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with Apple-black Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_bluehawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\VKN_Black_MTP.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_Shirt_BlueHawaii_aplblack_1";
		containerClass = "Supply40";
		mass = 40;
	};
};
	class VKN_CombatUniform_Shirt_BlueHawaii_multicam_1: Uniform_Base
{
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Hawaii Shirt (Blue/Multicam)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with Multicam Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_bluehawaii_shirt_co.paa","\VSM_Multicam\Data\VSM_ARD_multicam_1.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_Shirt_BlueHawaii_multicam_1";
		containerClass = "Supply40";
		mass = 40;
	};
};
class VKN_CombatUniform_Shirt_RedHawaii_AOR1_1: Uniform_Base //Red Hawaii
{
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Hawaii Shirt (Red/AOR1)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with AOR1 Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_redhawaii_shirt_co.paa","\VSM_AOR1\data\VSM_ARD_AOR1_1.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_Shirt_RedHawaii_AOR1_1";
		containerClass = "Supply40";
		mass = 40;
	};
};
class VKN_CombatUniform_Shirt_redHawaii_aplblack_1: Uniform_Base
{
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Hawaii Shirt (Red/Apple-Black)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with Apple-Black Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_Redhawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\VKN_Black_MTP.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_Shirt_RedHawaii_aplblack_1";
		containerClass = "Supply40";
		mass = 40;
	};
};
	class VKN_CombatUniform_Shirt_RedHawaii_multicam_1: Uniform_Base
{
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Hawaii Shirt (Red/Multicam)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with Multicam Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_Redhawaii_shirt_co.paa","\VSM_Multicam\Data\VSM_ARD_multicam_1.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_Shirt_RedHawaii_multicam_1";
		containerClass = "Supply40";
		mass = 40;
	};
};
class VKN_CombatUniform_Shirt_BrightHawaii_AOR1_1: Uniform_Base //Bright Hawaii
{
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Hawaii Shirt (Bright/AOR1)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with AOR1 Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_Brighthawaii_shirt_co.paa","\VSM_AOR1\data\VSM_ARD_AOR1_1.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_Shirt_BrightHawaii_AOR1_1";
		containerClass = "Supply40";
		mass = 40;
	};
};
class VKN_CombatUniform_Shirt_BrightHawaii_aplblack_1: Uniform_Base
{
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Hawaii Shirt (Bright/Apple-Black)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with Apple-Black Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_Brighthawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\VKN_Black_MTP.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_Shirt_BrightHawaii_aplblack_1";
		containerClass = "Supply40";
		mass = 40;
	};
};
	class VKN_CombatUniform_Shirt_BrightHawaii_multicam_1: Uniform_Base
{
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] PMC Hawaii Shirt (Bright/Multicam)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with Multicam Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_Brighthawaii_shirt_co.paa","\VSM_Multicam\Data\VSM_ARD_multicam_1.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_Shirt_BrightHawaii_multicam_1";
		containerClass = "Supply40";
		mass = 40;
	};
};
