// Base Classes
	class VKN_Dummy_B_NonRolled_Base: B_Soldier_F {
		scope = 0;
		hiddenSelections[] = {"Camo","Insignia"};
	};

	class VKN_Dummy_B_RolledUP_Base: B_Soldier_lite_F {
		scope = 0;
		hiddenSelections[] = {"Camo","Insignia"};
	};
	class VKN_Dummy_I_Sweater_Base: I_soldier_F	{
		scope = 0;
		hiddenSelections[] = {"Camo","insignia"};
	};

	class VKN_I_Dummy_Combat_Base: I_soldier_F	{
		scope = 0;
		hiddenSelections[] = {"Camo","insignia"};
	};

//// Blufor Combat Uniforms

// Non Rolled
	class VKN_Dummy_B_M90_NonRolled_1_1: VKN_Dummy_B_NonRolled_Base {
		scope = 1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90_co.paa"};
		uniformClass = "VKN_CombatUniform_M90_Full";
	};
	class VKN_Dummy_B_M90D_NonRolled_1_2: VKN_Dummy_B_NonRolled_Base {
		scope = 1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90D_ca.paa"};
		uniformClass = "VKN_CombatUniform_M90D_Full";
	};
	class VKN_Dummy_B_M98_NonRolled_2_1: VKN_Dummy_B_NonRolled_Base {
		scope = 1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M98_co.paa"};
		uniformClass = "VKN_CombatUniform_M98_Full";
	};

	class VKN_Dummy_B_AOR1_Black_NonRolled_3: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_AOR1_Black_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\AOR.rvmat"};
	};

	class VKN_Dummy_B_AOR1_NonRolled_4: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_AOR1_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\clothing1.rvmat"};
	};

	class VKN_Dummy_B_AOR2_NonRolled_5: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[]={"\a3\characters_f_gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa","\VKN_Gear\data\Uniforms\VKN_AOR2_ca.paa"};
		hiddenSelectionsMaterials[]={"","\VKN_Gear\data\misc\AOR.rvmat"};
	};

	class VKN_Dummy_B_AOR2_Black_NonRolled_6: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_AOR2_Black_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\AOR.rvmat"};
	};

	class VKN_Dummy_B_3CD_Black_NonRolled_7: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_3CD_Black_R_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni.rvmat"};
	};

	class VKN_Dummy_B_Black_OD_NonRolled_8: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_OD_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni.rvmat"};
	};

	class VKN_Dummy_B_Black_Tan_NonRolled_9: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_Tan_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni.rvmat"};
	};

	class VKN_Dummy_B_Black_Marpat_NonRolled_10: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_Marpat_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni.rvmat"};
	};

	class VKN_Dummy_B_Black_Top_Marpart_Bottom: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[]={"\a3\characters_f_gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa","\VKN_Gear\data\Uniforms\VKN_Black_Marpat_ca.paa"};
		hiddenSelectionsMaterials[]={"","\VKN_Gear\data\misc\AOR.rvmat"};
	};

	class VKN_Dummy_B_Black_OD: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_basicbody_bk.paa","\VKN_Gear\data\Uniforms\VKN_clothing_OD_co.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\basicbody.rvmat",""};
	};

	class VKN_Dummy_B_PCU_Grey: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\VKN_Gear\data\models\PCUs_G.p3d";
		hiddenSelections[]={"camo1", "camo2", "camo3", "camo", "hl"};
		hiddenSelectionsTextures[]= {
			"\VKN_Gear\data\misc\gloves_black_co.paa",
			"\VKN_Gear\data\misc\do_equip_co.paa",
			"\VKN_Gear\data\Uniforms\VKN_flecktarn_Grey_co.paa",
			"\VKN_Gear\data\Uniforms\VKN_jeans_co.paa",
			"\VKN_Gear\data\misc\hl_white_bald_co.paa"
		};
		hiddenSelectionsMaterials[]= {
			"\VKN_Gear\data\misc\gloves.rvmat",
			"\VKN_Gear\data\misc\do_equip.rvmat",
			"\VKN_Gear\data\misc\flecktarn.rvmat",
			"\VKN_Gear\data\misc\hunter.rvmat",
			"\VKN_Gear\data\misc\hhl.rvmat"
		};
	};
	class VKN_Dummy_B_PCU_OD: VKN_Dummy_B_PCU_Grey {
		hiddenSelections[]={"camo1", "camo2", "camo3", "camo", "hl"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_jeans_co.paa","\VKN_Gear\data\Uniforms\flecktarn_OD_co.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\hhl.rvmat","\VKN_Gear\data\misc\do_equip.rvmat","\VKN_Gear\data\misc\flecktarn.RVmat","\VKN_Gear\data\misc\hunter.rvmat","\VKN_Gear\data\misc\gloves.rvmat"};
	};
	class VKN_Dummy_B_PCU_Black: VKN_Dummy_B_PCU_OD {
		hiddenSelections[]={"camo1", "camo2", "camo3", "camo", "hl"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_jeans_co.paa","\VKN_Gear\data\Uniforms\VKN_flecktarn_co.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\hhl.rvmat","\VKN_Gear\data\misc\do_equip.rvmat","\VKN_Gear\data\misc\flecktarn.RVmat","\VKN_Gear\data\misc\hunter.rvmat","\VKN_Gear\data\misc\gloves.rvmat"};
	};

	class VKN_Dummy_B_UCP_NonRolled_11: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_UCP.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni2.rvmat"};
	};

	class VKN_Dummy_B_UCP: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]= {"camo","camo2","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_UCP.paa","\a3\characters_f\Common\Data\basicbody_black_co.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\data\TRYKuni.rvmat","\a3\characters_f\Common\Data\basicbody.rvmat"};
	};

	class VKN_Dummy_B_UCP_Rolled_12: VKN_Dummy_B_RolledUP_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_UCP.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni2.rvmat"};
	};

	class VKN_Dummy_B_OD_Black_1: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_clothing_odblk_co.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\data\TRYKuni.rvmat"};
	};
	class VKN_Dummy_B_OD_Black_2: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_clothing_odblk_co.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\data\TRYKuni.rvmat"};
	};

//Rolled

	class VKN_Dummy_B_M90_RolledUP_1_1: VKN_Dummy_B_RolledUP_Base {
		scope = 1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90_co.paa"};
		uniformClass = "VKN_CombatUniform_M90_Roll";
	};
	class VKN_Dummy_B_M90D_RolledUP_1_2: VKN_Dummy_B_RolledUP_Base {
		scope = 1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90D_ca.paa"};
		uniformClass = "VKN_CombatUniform_M90D_Roll";
	};

	class VKN_Dummy_B_M98_RolledUP_2_1: VKN_Dummy_B_RolledUP_Base {
		scope = 1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M98_co.paa"};
		uniformClass = "VKN_CombatUniform_M98_Roll";
	};
	class VKN_Dummy_B_Viking_Black_RolledUP_3: VKN_Dummy_B_RolledUP_Base {
		scope = 1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Viking_Black_ca.paa"};
		uniformClass = "VKN_CombatUniform_Black";
	};

	class VKN_Dummy_B_AOR1_Black_RolledUP_4: VKN_Dummy_B_RolledUP_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_AOR1_Black_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\AOR.rvmat"};
	};

	class VKN_Dummy_B_AOR1_RolledUP_5: VKN_Dummy_B_RolledUP_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_AOR1_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\clothing1.rvmat"};
	};

	//Depricated - kept to keep class names correct!
	class VKN_Dummy_B_AOR2_RolledUP_6: VKN_Dummy_B_RolledUP_Base {
		scope=1;
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia"};
		hiddenSelectionsTextures[]={"\a3\characters_f_gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa","\VKN_Gear\data\Uniforms\VKN_AOR2_ca.paa"};
		hiddenSelectionsMaterials[]={"","\VKN_Gear\data\misc\AOR.rvmat"};
	};
	////////////

	class VKN_Dummy_B_AOR2_Black_RolledUP_7: VKN_Dummy_B_RolledUP_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_AOR2_Black_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\AOR.rvmat"};
	};

	class VKN_Dummy_B_3CD_Black_Rolled_8: VKN_Dummy_B_RolledUP_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_3CD_Black_R_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni.rvmat"};
	};

	class VKN_Dummy_B_Black_OD_Rolled_9: VKN_Dummy_B_RolledUP_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_OD_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni.rvmat"};
	};

	class VKN_Dummy_B_Black_Tan_Rolled_10: VKN_Dummy_B_RolledUP_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_Tan_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni.rvmat"};
	};

	class VKN_Dummy_B_Black_Marpat_Rolled_11: VKN_Dummy_B_RolledUP_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_Marpat_ca.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni.rvmat"};
	};


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


//// Inde Combat Uniforms

class VKN_Dummy_B_Legion_Forest_Full_RolledUP_4: VKN_I_Dummy_Combat_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_LegionForest_Black_ca.paa"};
	uniformClass = "VKN_CombatUniform_Legion_Forest_Black";
};
class VKN_Dummy_B_Legion_Forest_Full_RolledUP_5: VKN_I_Dummy_Combat_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_LegionForestFull_ca.paa"};
	uniformClass = "VKN_CombatUniform_Legion_Forest_Full";
};
class VKN_Dummy_B_Tropical_Full_RolledUP_6: VKN_I_Dummy_Combat_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Tropical_Full_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tropical_Full";
};
class VKN_Dummy_B_Winter_Polygon_RolledUP_7: VKN_I_Dummy_Combat_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Winter_Poly_Black_ca.paa"};
	uniformClass = "VKN_CombatUniform_Winter_Polygon";
};
class VKN_Dummy_B_Loki_Full_RolledUP_8: VKN_I_Dummy_Combat_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Loki_Combat_Uniform_01_ca.paa"};
	uniformClass = "VKN_CombatUniform_Loki_Full";
};

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

//// Foxcoats

	class VKN_Dummy_I_Foxcoat_Grey: VKN_I_Dummy_Combat_Base {
		modelsides[] = {3,2,1,0};
		scope = 1;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\vkn_foxcoat_co.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\misc\foxcoat.rvmat"};
	};
	class VKN_Dummy_I_Foxcoat_Green: VKN_I_Dummy_Combat_Base {
		modelsides[] = {3,2,1,0};
		scope = 1;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\vkn_foxcoat_green_co.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\misc\foxcoat.rvmat"};
	};

//// Sweaters
class VKN_Dummy_I_Sweater_1: VKN_Dummy_I_Sweater_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_black_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_1";
};
class VKN_Dummy_I_Sweater_2: VKN_Dummy_I_Sweater_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Blu_tan_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_2";
};
class VKN_Dummy_I_Sweater_3: VKN_Dummy_I_Sweater_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_Green_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_3";
};
class VKN_Dummy_I_Sweater_4: VKN_Dummy_I_Sweater_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_Green_Olive_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";
};
class VKN_Dummy_I_Sweater_5: VKN_Dummy_I_Sweater_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_Olive_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";
};
class VKN_Dummy_I_Sweater_6: VKN_Dummy_I_Sweater_Base {
	scope = 1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_tan_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_6";
};

class VKN_Dummy_I_3CD_Black_1: VKN_I_Dummy_Combat_Base {
		scope=1;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_3CD_Black_ca.paa"};
	};