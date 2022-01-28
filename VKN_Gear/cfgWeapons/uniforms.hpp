
// Base classes //
	class VKN_CombatUniform_NonRolled_base: Uniform_Base {
		scope = private;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"Camo","Insignia"};
	};
	class VKN_CombatUniform_RolledUP_base: Uniform_Base {
		scope = private;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"Camo","Insignia"};
	};

	class VKN_StealthUniform_NonRolled_base: U_B_CTRG_Soldier_F {
		scope = private;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"Camo","Insignia"};
	};
	class VKN_StealthUniform_RollpedUP_base: U_B_CTRG_Soldier_F {
		scope = private;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"Camo","Insignia"};
	};

	class VKN_CombatUniform_Tactical_Sweater_base: Uniform_Base {
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		scope = private;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo1","camo2"};
	};

	class VKN_I_CombatUniform_Base: Uniform_Base {
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		scope = private;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo1","camo2"};
	};

	class VKN_Functionary_Base: Uniform_Base {
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		scope = private;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo"};
	};
// Suits //
/*
class VKN_Functionary_1: VKN_Functionary_Base {
	scope = public;
	Author = "Shagger";
	displayName = "[VKN] Functionary Suit (Dark Grey + Red Tie)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\functionary1_co.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_Functionary_1";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_Functionary_2: VKN_Functionary_Base {
	scope = public;
	Author = "Shagger";
	displayName = "[VKN] Functionary Suit (Dark Red + Black Tie)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\functionary2_co.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_Functionary_2";
		containerClass="Supply40";
		mass=40;
	};
};
class VKN_Functionary_3: VKN_Functionary_Base {
	scope = public;
	Author = "Shagger";
	displayName = "[VKN] Functionary Suit (Dark Blue + Blue Tie)";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\functionary3_co.paa"};
	class ItemInfo: UniformItem	{
		uniformModel="-";
		uniformClass="VKN_Dummy_Functionary_3";
		containerClass="Supply40";
		mass=40;
	};
};
*/

// Rolled/NonRolled //

	class VKN_CombatUniform_M90_Roll: VKN_CombatUniform_RolledUP_base {
		scope = public;
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
		scope = public;
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
	class VKN_CombatUniform_M90D_Roll: VKN_CombatUniform_RolledUP_base {
		scope = public;
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
		scope = public;
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
		scope = public;
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
		scope = public;
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
		scope = public;
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
		scope = public;
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
		scope = public;
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

//Mountain Suit
	class VKN_I_mntsuit_aor_black: U_O_R_Gorka_01_F {
		author="Jonmo";
		displayName="[VKN] Mountain Suit (Aor1/Black)";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_mntsuit_aor_black_co.paa"};
		class ItemInfo: UniformItem	{
			uniformClass="VKN_Dummy_mntsuit_aor_black";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_I_mntsuit_aor_green: U_O_R_Gorka_01_F {
		author="Jonmo";
		displayName="[VKN] Mountain Suit (Aor1/green)";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_mntsuit_aor_green_co.paa"};
		class ItemInfo: UniformItem	{
			uniformClass="VKN_Dummy_mntsuit_aor_green";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_I_mntsuit_aor_grey: U_O_R_Gorka_01_F {
		author="Jonmo";
		displayName="[VKN] Mountain Suit (Aor1/Grey)";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_mntsuit_aor_grey_co.paa"};
		class ItemInfo: UniformItem	{
			uniformClass="VKN_Dummy_mntsuit_aor_grey";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_I_mntsuit_aor2_black: U_O_R_Gorka_01_F {
		author="Jonmo";
		displayName="[VKN] Mountain Suit (Aor2/Black)";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_mntsuit_aor2_black_co.paa"};
		class ItemInfo: UniformItem	{
			uniformClass="VKN_Dummy_mntsuit_aor2_black";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_I_mntsuit_aor2_grey: U_O_R_Gorka_01_F {
		author="Jonmo";
		displayName="[VKN] Mountain Suit (Aor2/Grey)";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_mntsuit_aor2_grey_co.paa"};
		class ItemInfo: UniformItem	{
			uniformClass="VKN_Dummy_mntsuit_aor2_grey";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_I_mntsuit_multicam_black: U_O_R_Gorka_01_F {
		author="Jonmo";
		displayName="[VKN] Mountain Suit (Multicam/Black)";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_mntsuit_multicam_black_co.paa"};
		class ItemInfo: UniformItem	{
			uniformClass="VKN_Dummy_mntsuit_multicam_black";
			containerClass="Supply40";
			mass=40;
		};
	};

    class VKN_I_mntsuit_multicam_green: U_O_R_Gorka_01_F {
		author="Jonmo";
		displayName="[VKN] Mountain Suit (Multicam/Green)";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_mntsuit_multicam_green_co.paa"};
		class ItemInfo: UniformItem	{
			uniformClass="VKN_Dummy_mntsuit_multicam_green";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_I_mntsuit_multicam_grey: U_O_R_Gorka_01_F {
		author="Jonmo";
		displayName="[VKN] Mountain Suit (Multicam/Grey)";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_mntsuit_multicam_grey_co.paa"};
		class ItemInfo: UniformItem	{
			uniformClass="VKN_Dummy_mntsuit_multicam_grey";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_I_mntsuit_winter_full: U_O_R_Gorka_01_F {
		author="Jonmo";
		displayName="[VKN] Mountain Suit (Winter/Full)";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_mntsuit_winter_full_co.paa"};
		class ItemInfo: UniformItem	{
			uniformClass="VKN_Dummy_mntsuit_winter_full";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_I_mntsuit_winter_half: U_O_R_Gorka_01_F {
		author="Jonmo";
		displayName="[VKN] Mountain Suit (Winter/Multicam)";
		model = "\a3\Characters_F_Enoch\Uniforms\Gorka_01_F.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_mntsuit_winter_half_co.paa"};
		class ItemInfo: UniformItem	{
			uniformClass="VKN_Dummy_mntsuit_winter_half";
			containerClass="Supply40";
			mass=40;
		};
	};

	class VKN_I_mntsuit_Brown_Khaki: VKN_I_mntsuit_multicam_black {scope = 0;};
	class VKN_I_mntsuit_Brown_Jeans: VKN_I_mntsuit_Brown_Khaki {};
	class VKN_I_mntsuit_Green_Jeans: VKN_I_mntsuit_Brown_Khaki {};
	class VKN_I_mntsuit_Green_Khaki: VKN_I_mntsuit_Brown_Khaki {};
	class VKN_I_mntsuit_Green_Multicam: VKN_I_mntsuit_Brown_Khaki {};
	class VKN_I_mntsuit_Blue_Jeans: VKN_I_mntsuit_Brown_Khaki {};
	class VKN_I_mntsuit_Blue_Khaki: VKN_I_mntsuit_Brown_Khaki {};
	class VKN_I_mntsuit_Blue_Multicam: VKN_I_mntsuit_Brown_Khaki {};

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

	class VKN_CombatUniform_Tshirt_Multi: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Jonmo";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		displayName="[VKN] Combat Uniform - T-Shirt (Multicam)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Tshirt_Multi";
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

	class VKN_CombatUniform_TshirtB_Multi: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Jonmo";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		displayName="[VKN] Combat Uniform - T-Shirt Black (Multicam)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_TshirtB_Multi";
			containerClass="Supply40";
			mass=40;
		};
	};

//Viper

	class VKN_u_vikingviper: Uniform_Base {
		scope = public;
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
		scope = public;
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
		scope = public;
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
		scope = public;
		Author = "Jonmo";
		displayName = "[VKN] Fleece Jacket (Blue/Multicam)";
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
		scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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


class VKN_CombatUniform_Winter_Polygon: VKN_I_CombatUniform_Base {
	scope = public;
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



/////// HEAD
class VKN_CombatUniform_Black_Loki: VKN_I_CombatUniform_Base {
	scope = public;
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

/////// Test
class VKN_CombatUniform_3CD_Black: VKN_I_CombatUniform_Base {
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
};
class VKN_CombatUniform_Loki_1: Uniform_Base {
  scope = public;
  author = "Shagger";
  displayName = "[VKN] Overall (Loki - New)";
  picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = "VKN_Dummy_I_CombatUniform_loki_1";
    containerClass = "Supply90";
    mass = 20;
  };
};

class VKN_CombatUniform_Shirt_DDPM: Uniform_Base {
	author = "Jonmo";
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
class VKN_CombatUniform_Tactical_Sweater_7: VKN_CombatUniform_Tactical_Sweater_base {
  scope = public;
  Author = "Shagger";
  displayName = "[VKN] Tactical Sweater - Loki";
  descriptionShort = "Viking Tactical Sweater Loki";
  hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_sweater_blk_loki.paa"};
  class ItemInfo: UniformItem
  {
    uniformModel="-";
    uniformClass="VKN_Dummy_I_Sweater_7";
    containerClass="Supply40";
    mass=40;
  };
};


class VKN_CombatUniform_Sweater_DDPM_1: VKN_CombatUniform_Tactical_Sweater_base {
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
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
	scope = public;
	displayName = "[VKN] PMC Green shirt & Jeans";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
      hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_greenshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_blue_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "VKN_Dummy_C_Shirt_Green_Jeans";
		containerClass = "Supply30";
		mass = 30;
	};
};



class VKN_CombatUniform_Shirt_BlueHawaii_AOR1_1: Uniform_Base //Blue Hawaii
{
	author = "Jonmo";
	scope = public;
	displayName = "[VKN] PMC Hawaii Shirt (Blue/Tan)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with AOR1 Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_bluehawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\vkn_fleece_Dark_co.paa"};
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
	scope = public;
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
	scope = public;
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
	scope = public;
	displayName = "[VKN] PMC Hawaii Shirt (Red/Tan)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with AOR1 Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_redhawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\vkn_fleece_Dark_co.paa"};
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
	scope = public;
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
	scope = public;
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
	scope = public;
	displayName = "[VKN] PMC Hawaii Shirt (Bright/Tan)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
	descriptionShort = "PMC Hawaii Shirt with AOR1 Pants";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_Brighthawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\vkn_fleece_Dark_co.paa"};
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
	scope = public;
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
	scope = public;
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
