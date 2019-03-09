
//Base classes
	class VKN_CombatUniform_NonRolled_base: Uniform_Base {
		scope = 0;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"Camo","Insignia"};
	};

	class VKN_CombatUniform_RolledUP_base: Uniform_Base {
		scope = 0;
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
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

	class VKN_CombatUniform_ARO1_Black_Full: VKN_CombatUniform_RolledUP_base {
		scope=2;
		Author = "Teriyaki";
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
		displayName="[VKN] Combat Uniform - (Black Marpat)";
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
		displayName="[VKN] Combat Uniform - (3CD + Black)";
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
		displayName="[VKN] Combat Uniform - (OD + Black)";
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
		displayName="[VKN] Combat Uniform - (Tan + Black)";
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
		displayName="[VKN] Combat Uniform - (Tan + Black)";
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
		displayName="[VKN] Combat Uniform - (UCP)";
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
		displayName="[VKN] Combat Uniform - (UCP)";
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
		displayName="[VKN] Combat Uniform (AOR-2)";
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
		displayName="[VKN] Combat Uniform - (AOR-2 + Black)";
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
		displayName="[VKN] Combat Uniform - (OD + Black)";
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
		displayName="[VKN] Combat Uniform - (OD + Black)";
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
		displayName="[VKN] Combat Uniform - (UCP)";
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
		displayName="[VKN] Combat Uniform (Black + Marpat)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_Black_Top_Marpart_Bottom";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_PCU_Grey: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		displayName="[VKN] Protective Combat Uniform - (Grey)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_PCU_Grey";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_PCU_OD: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		displayName="[VKN] Protective Combat Uniform - (OD)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_PCU_OD";
			containerClass="Supply40";
			mass=40;
		};
	};
	class VKN_CombatUniform_PCU_Black: VKN_CombatUniform_NonRolled_base {
		scope=2;
		Author = "Teriyaki";
		displayName="[VKN] Protective Combat Uniform - (Black)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem {
			uniformModel="-";
			uniformClass="VKN_Dummy_B_PCU_Black";
			containerClass="Supply40";
			mass=40;
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

class VKN_CombatUniform_3CD_Black: VKN_I_CombatUniform_Base {
	scope = 2;
	Author = "Max Kupoleni";
	displayName = "[VKN] Combat Uniform - Loki";
	descriptionShort = "Viking Combat Uniform";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Loki_Combat_Uniform_01_ca.paa"};
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
