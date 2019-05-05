
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

	class VKN_Vest_V_HarnessO_drk_F: Vest_NoCamo_Base {
		author = "Jonmo";
		scope = 2;
		displayName = "[VKN] VIS LVB Harness (Dark)";
		picture="\VKN_Misc\VKN_Logo_Inverted.paa";
		model = "\A3\Characters_F\OPFOR\equip_o_vest01";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\clothing_drk_tna_CO.paa","\VKN_Gear\data\Uniforms\tech_drk_tna_CO.paa","\VKN_Gear\data\Uniforms\tech_drk_tna_CO.paa"};
		class ItemInfo: VestItem {
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
			containerClass = "Supply160";
			mass = 30;
			hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		};
	};


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

class VKN_CombatUniform_Legion_Forest_Full: VKN_I_CombatUniform_Base {
	scope = 2;
	Author = "Max Kupoleni";
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
	Author = "Max Kupoleni";
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
	Author = "Max Kupoleni";
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




///// civ


};
