// Base Classes
	class VKN_Dummy_B_NonRolled_Base: B_Soldier_F {
		scope = private;
		hiddenSelections[] = {"Camo","Insignia"};
	};

	class VKN_Dummy_B_RolledUP_Base: B_Soldier_lite_F {
		scope = private;
		hiddenSelections[] = {"Camo","Insignia"};
	};
	class VKN_Dummy_I_Sweater_Base: I_soldier_F	{
		scope = private;
		hiddenSelections[] = {"Camo","insignia"};
	};

	class VKN_I_Dummy_Combat_Base: I_soldier_F	{
		scope = private;
		hiddenSelections[] = {"Camo","insignia"};
	};
	class VKN_Dummy_Button_Up_Base: B_G_Soldier_F {
		scope = public;
		hiddenSelections[] = {"camo1","camo2","insignia"};
	};

// Suits //
/*
	class VKN_Dummy_Functionary_Base: B_Soldier_base_F {
	scope = private;
	model = "\VKN_Gear\data\Models\functionary.p3d";
	hiddenSelectionsMaterials[] = {"\VKN_Gear\data\Uniforms\functionary.rvmat"};
	hiddenSelections[] = {"camo"};

	class Wounds {
		tex[] = {"\VKN_Gear\data\Uniforms\w1_functionary_mc.paa","\VKN_Gear\data\Uniforms\w2_functionary_mc.paa"};
	};
};

	class VKN_Dummy_Functionary_1: VKN_Dummy_Functionary_Base {
		scope = protected;
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\functionary1_co.paa"};
		uniformClass = "VKN_Functionary_1";
	};
	class VKN_Dummy_Functionary_2: VKN_Dummy_Functionary_Base {
		scope = protected;
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\functionary2_co.paa"};
		uniformClass = "VKN_Functionary_2";
	};
	class VKN_Dummy_Functionary_3: VKN_Dummy_Functionary_Base {
		scope = protected;
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\functionary3_co.paa"};
		uniformClass = "VKN_Functionary_3";
	};
*/


//// Blufor Combat Uniforms ////


// Non Rolled
	class VKN_Dummy_B_MTP_Woodland_Full_NonRolled: VKN_Dummy_B_NonRolled_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tflod_tflod.paa"};
		uniformClass = "VKN_MTP_Woodland_Full_NonRolled";
	};
	class VKN_Dummy_B_MTP_Woodland_Brown_Pants_NonRolled: VKN_Dummy_B_NonRolled_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tflod_od.paa"};
		uniformClass = "VKN_MTP_Woodland_Full_NonRolled";
	};
	class VKN_Dummy_B_MTP_Tan_Full_NonRolled: VKN_Dummy_B_NonRolled_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tfltan_tfltan.paa"};
	};
	class VKN_Dummy_B_MTP_Tan_Brown_Pants_NonRolled: VKN_Dummy_B_NonRolled_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tfltan_tan.paa"};
	};

	class VKN_Dummy_B_M90_NonRolled_1_1: VKN_Dummy_B_NonRolled_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90_co.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\misc\VKN_M9X.rvmat"};
		uniformClass = "VKN_CombatUniform_M90_Full";
	};
	class VKN_Dummy_B_M90D_NonRolled_1_2: VKN_Dummy_B_NonRolled_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90D_ca.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\misc\VKN_M9X.rvmat"};
		uniformClass = "VKN_CombatUniform_M90D_Full";
	};
	class VKN_Dummy_B_M98_NonRolled_2_1: VKN_Dummy_B_NonRolled_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M98_co.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\misc\VKN_M9X.rvmat"};
		uniformClass = "VKN_CombatUniform_M98_Full";
	};

	class VKN_Dummy_B_Loki_Black_NonRolled: VKN_Dummy_B_NonRolled_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_black_loki.paa"};
		uniformClass = "VKN_CombatUniform_Loki_Black_Full";
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

	class VKN_Dummy_B_UCP_NonRolled_11: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_UCP.paa"};
		hiddenSelectionsMaterials[]={"\VKN_Gear\data\misc\TRYKuni2.rvmat"};
	};
	class VKN_Dummy_B_Stealth_Black_MTP_NonRolled_13: B_CTRG_Soldier_base_F {
		scope=1;
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_MTP.paa"};
	};
	class VKN_Stealth_U_SNOW_DIGI_NonRolled: B_CTRG_Soldier_base_F {
		scope=1;
		hiddenSelections[]={"camo","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_SNOW_DIGI.paa"};
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
	class VKN_Dummy_B_MTP_Woodland_Full_RolledUP: VKN_Dummy_B_RolledUP_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tflod_tflod.paa"};
	};
	class VKN_Dummy_B_MTP_Woodland_Brown_Pants_RolledUP: VKN_Dummy_B_RolledUP_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tflod_od.paa"};
	};
	class VKN_Dummy_B_MTP_Tan_Full_RolledUP: VKN_Dummy_B_RolledUP_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tfltan_tfltan.paa"};
	};
	class VKN_Dummy_B_MTP_Tan_Brown_Pants_RolledUP: VKN_Dummy_B_RolledUP_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_overall_tfltan_tan.paa"};
	};

	class VKN_Dummy_B_M90_RolledUP_1_1: VKN_Dummy_B_RolledUP_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90_co.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\misc\VKN_M9X.rvmat"};
		uniformClass = "VKN_CombatUniform_M90_Roll";
	};
	class VKN_Dummy_B_M90D_RolledUP_1_2: VKN_Dummy_B_RolledUP_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M90D_ca.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\misc\VKN_M9X.rvmat"};
		uniformClass = "VKN_CombatUniform_M90D_Roll";
	};
	class VKN_Dummy_B_M98_RolledUP_2_1: VKN_Dummy_B_RolledUP_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_M98_co.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\misc\VKN_M9X.rvmat"};
		uniformClass = "VKN_CombatUniform_M98_Roll";
	};
	class VKN_Dummy_B_Loki_Black_RolledUP: VKN_Dummy_B_RolledUP_Base {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_black_loki.paa"};
		uniformClass = "VKN_CombatUniform_Loki_Black_Roll";
	};

	class VKN_Dummy_B_Viking_Black_RolledUP_3: VKN_Dummy_B_RolledUP_Base {
		scope = protected;
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

// TShirts
	class VKN_Dummy_B_Tshirt_Black_1: B_GEN_Soldier_F {
		scope = protected;
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_Tshirt_co.paa","\VKN_Gear\data\Uniforms\VKN_Black_Tshirt_co_2.paa"};
	};
	class VKN_Dummy_B_Tshirt_Green: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]= {"camo","camo2","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_co.paa","\VKN_Gear\data\Uniforms\vkn_basicbody_grey_co.paa"};
	};
    class VKN_Dummy_B_Tshirt_Tan: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]= {"camo","camo2","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_Green_co.paa","\VKN_Gear\data\Uniforms\vkn_basicbody_grey_co.paa"};
	};
	class VKN_Dummy_B_Tshirt_Multi: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]= {"camo","camo2","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_Tan_co.paa","\VKN_Gear\data\Uniforms\vkn_basicbody_grey_co.paa"};
	};
	class VKN_Dummy_B_TshirtB_Green: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]= {"camo","camo2","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_co.paa","\a3\characters_f\Common\Data\basicbody_black_co.paa"};
	};
	class VKN_Dummy_B_TshirtB_Tan: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]= {"camo","camo2","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_Green_co.paa","\a3\characters_f\Common\Data\basicbody_black_co.paa"};
    };
    class VKN_Dummy_B_TshirtB_Multi: VKN_Dummy_B_NonRolled_Base {
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]= {"camo","camo2","insignia"};
		hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_Tan_co.paa","\a3\characters_f\Common\Data\basicbody_black_co.paa"};
    };

//
//Viper

class VKN_form_vikingviper: O_V_Soldier_Viper_F
{
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_Exp\OPFOR\o_viper.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\VKN_viperSuit_neutral_co.paa"};
	hiddenSelectionsMaterials[] = {"\VKN_Gear\data\Misc\vknviper.rvmat"};
};
class VKN_form_HarnessO_drk: O_Soldier_F
{
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Weapons_F\DummyVest.p3d";
	hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\clothing_drk_tna_CO.paa","\VKN_Gear\data\Uniforms\tech_drk_tna_CO.paa","\VKN_Gear\data\Uniforms\tech_drk_tna_CO.paa"};
};

//Fleece

class VKN_Dummy_Fleece_Full_NonRolled: VKN_Dummy_B_NonRolled_Base
{
	scope=1;
	model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	hiddenSelections[]={"camo","insignia"};
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_co.paa"};
	hiddenSelectionsMaterials[]={"\VKN_Gear\data\Misc\vkn_fleece.rvmat"};
};

class VKN_Dummy_Fleece_Green_Full_NonRolled: VKN_Dummy_B_NonRolled_Base
{
	scope=1;
	model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	hiddenSelections[]={"camo","insignia"};
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_green_co.paa"};
	hiddenSelectionsMaterials[]={"\VKN_Gear\data\Misc\vkn_fleece.rvmat"};
};

class VKN_Dummy_Fleece_Tan_Full_NonRolled: VKN_Dummy_B_NonRolled_Base
{
	scope=1;
	model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	hiddenSelections[]={"camo","insignia"};
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_Tan_co.paa"};
	hiddenSelectionsMaterials[]={"\VKN_Gear\data\Misc\vkn_fleece.rvmat"};
};

class VKN_Dummy_Fleece_Dark_Full_NonRolled: VKN_Dummy_B_NonRolled_Base
{
	scope=1;
	model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
	hiddenSelections[]={"camo","insignia"};
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\vkn_fleece_Dark_co.paa"};
	hiddenSelectionsMaterials[]={"\VKN_Gear\data\Misc\vkn_fleece.rvmat"};
};

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////


//// Inde Combat Uniforms

class VKN_Dummy_B_Legion_Forest_Full_RolledUP_4: VKN_I_Dummy_Combat_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_LegionForest_Black_ca.paa"};
	uniformClass = "VKN_CombatUniform_Legion_Forest_Black";
};
class VKN_Dummy_B_Legion_Forest_Full_RolledUP_5: VKN_I_Dummy_Combat_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_LegionForestFull_ca.paa"};
	uniformClass = "VKN_CombatUniform_Legion_Forest_Full";
};

class VKN_Dummy_B_Legion_Forest_Full_RolledUP_6: VKN_I_Dummy_Combat_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_LegionForest_Olive_ca.paa"};
	uniformClass = "VKN_CombatUniform_Legion_Forest_Olive";
};

class VKN_Dummy_B_Winter_Polygon_RolledUP_7: VKN_I_Dummy_Combat_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Winter_Poly_Black_ca.paa"};
	uniformClass = "VKN_CombatUniform_Winter_Polygon";
};

class VKN_Dummy_I_Black_Loki: VKN_I_Dummy_Combat_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_sweater_blk_loki.paa"};
	uniformClass = "VKN_CombatUniform_Black_Loki";
};

class VKN_Dummy_I_Dummy_DPM_Black: VKN_I_Dummy_Combat_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Black_DPM_ca.paa"};
	uniformClass = "VKN_CombatUniform_DPM_Black";
};

class VKN_Dummy_I_Police_Riot_1: VKN_I_Dummy_Combat_Base {
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\uniforms\vkn_police_riot_co.paa"};
};

class VKN_Dummy_I_CombatUniform_lynx_pants_green_1: VKN_I_Dummy_Combat_Base {
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\uniforms\lynx_pants_green_co.paa"};
};

class VKN_Dummy_I_CombatUniform_lynx_pants_white_1: VKN_I_Dummy_Combat_Base {
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\uniforms\lynx_pants_white_co.paa"};
};

class VKN_Dummy_I_CombatUniform_lynx_top_green_1: VKN_I_Dummy_Combat_Base {
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\uniforms\lynx_top_green_co.paa"};
};

class VKN_Dummy_I_CombatUniform_lynx_top_white_1: VKN_I_Dummy_Combat_Base {
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\uniforms\lynx_top_white_co.paa"};
};

class VKN_Dummy_I_CombatUniform_lynx_1: VKN_I_Dummy_Combat_Base {
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\uniforms\lynx_uniform_co.paa"};
};
class VKN_Dummy_I_CombatUniform_diamond_1: VKN_I_Dummy_Combat_Base {
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\uniforms\VKN_overall_test.paa"};
};
class VKN_Dummy_I_CombatUniform_loki_1: VKN_I_Dummy_Combat_Base {
  modelsides[] = {0,3};
  scope = protected;
  model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {"\VKN_Gear\data\uniforms\VKN_overall_loki_loki.paa"};
};
class VKN_form_CombatUniform_Cazador_1: VKN_I_Dummy_Combat_Base {
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\uniforms\vkn_tropical_uniform_co.paa"};
};

class VKN_Dummy_I_Sweater_DDPM_1: VKN_Dummy_I_Sweater_Base {
	author = "Jonmo";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\uniforms\vkn_ddpm_sweater_co.paa"};
};

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

//// Foxcoats

	class VKN_Dummy_I_Foxcoat_Grey: VKN_I_Dummy_Combat_Base {
		modelsides[] = {3,2,1,0};
		scope = protected;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\vkn_foxcoat_co.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\misc\foxcoat.rvmat"};
	};
	class VKN_Dummy_I_Foxcoat_Green: VKN_I_Dummy_Combat_Base {
		modelsides[] = {3,2,1,0};
		scope = protected;
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\vkn_foxcoat_green_co.paa"};
		hiddenSelectionsMaterials[] = {"\VKN_Gear\data\misc\foxcoat.rvmat"};
	};

//// Sweaters
class VKN_Dummy_I_Sweater_1: VKN_Dummy_I_Sweater_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_black_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_1";
};
class VKN_Dummy_I_Sweater_2: VKN_Dummy_I_Sweater_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Blu_tan_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_2";
};
class VKN_Dummy_I_Sweater_3: VKN_Dummy_I_Sweater_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_Green_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_3";
};
class VKN_Dummy_I_Sweater_4: VKN_Dummy_I_Sweater_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_Green_Olive_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_4";
};
class VKN_Dummy_I_Sweater_5: VKN_Dummy_I_Sweater_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_Olive_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_5";
};
class VKN_Dummy_I_Sweater_6: VKN_Dummy_I_Sweater_Base {
	scope = protected;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_Sweater_Tactical_tan_ca.paa"};
	uniformClass = "VKN_CombatUniform_Tactical_Sweater_6";
};
class VKN_Dummy_I_Sweater_7: VKN_Dummy_I_Sweater_Base {
  scope = protected;
  hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_sweater_blk_loki.paa"};
  uniformClass = "VKN_CombatUniform_Tactical_Sweater_7";
};

class VKN_Dummy_I_3CD_Black_1: VKN_I_Dummy_Combat_Base {
	scope=1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_3CD_Black_ca.paa"};
};
class VKN_Dummy_I_3CD_Black_2: VKN_I_Dummy_Combat_Base {
	scope=1;
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Uniforms\VKN_3CD_Black_R_ca.paa"};
};

class VKN_Dummy_I_Shirt_DDPM_1: VKN_Dummy_Button_Up_Base {
	Author = "Jonmo";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla5_1_co.paa","\VKN_Gear\data\uniforms\vkn_ddpm_shirt_co.paa"};
};

///// Gorka

class VKN_Dummy_mntsuit_Brown_Khaki: O_R_Gorka_base_F {
	author = "Jonmo";
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_mntsuit_BrownKhaki_co.paa"};
};

class VKN_Dummy_mntsuit_Brown_Jeans: O_R_Gorka_base_F {
	author = "Jonmo";
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_mntsuit_BrownJeans_co.paa"};
};

class VKN_Dummy_mntsuit_Green_Jeans: O_R_Gorka_base_F {
	author = "Jonmo";
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_mntsuit_GreenJeans_co.paa"};
};

class VKN_Dummy_mntsuit_Green_Khaki: O_R_Gorka_base_F {
	author = "Jonmo";
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_mntsuit_GreenKhaki_co.paa"};
};

class VKN_Dummy_mntsuit_Green_Multicam: O_R_Gorka_base_F {
	author = "Jonmo";
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_mntsuit_GreenMulticam_co.paa"};
};

class VKN_Dummy_mntsuit_Blue_Jeans: O_R_Gorka_base_F {
	author = "Jonmo";
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_mntsuit_BlueJeans_co.paa"};
};

class VKN_Dummy_mntsuit_Blue_Khaki: O_R_Gorka_base_F {
	author = "Jonmo";
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_mntsuit_BlueKhaki_co.paa"};
};

class VKN_Dummy_mntsuit_Blue_Multicam: O_R_Gorka_base_F {
	author = "Jonmo";
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_mntsuit_BlueMulticam_co.paa"};
};

///// civ

class VKN_Dummy_C_Shirt_White_Jeans: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] PMC White shirt & Jeans";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_whiteshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_blue_co.paa"};
};

class VKN_Dummy_C_Shirt_White_Pants_Khaki: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] PMC White shirt & Khaki pants";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_whiteshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_khaki_co.paa"};
};

class VKN_Dummy_C_Shirt_Black_Jeans_1: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] PMC Black shirt & Jeans";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blackshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_blue_co.paa"};
};

class VKN_Dummy_C_Shirt_Black_Pants_Khaki: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] PMC Black shirt & Khaki pants";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blackshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_khaki_co.paa"};
};

class VKN_Dummy_C_Shirt_White_Jeans_Black: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] PMC White shirt & Black Jeans";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_whiteshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_black_co.paa"};
};

class VKN_Dummy_C_Shirt_Black_Pants_Black: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] PMC Black shirt & Black pants";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blackshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_black_co.paa"};
};

class VKN_Dummy_C_Shirt_Blue_Pants_Black: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] PMC Blue shirt & Black pants";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blueshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_black_co.paa"};
};

class VKN_Dummy_C_Shirt_Blue_Pants_Khaki: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] PMC Blue shirt & Khaki pants";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blueshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_khaki_co.paa"};
};

class VKN_Dummy_C_Shirt_Blue_Jeans: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] Blue shirt & Jeans";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_blueshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_blue_co.paa"};
};

class VKN_Dummy_C_Shirt_Green_Pants_Black: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] Green shirt & Black pants";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_greenshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_black_co.paa"};
};

class VKN_Dummy_C_Shirt_Green_Jeans_Khaki: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] Green shirt & Khaki pants";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_greenshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_khaki_co.paa"};
};

class VKN_Dummy_C_Shirt_Green_Jeans: C_Story_Mechanic_01_F {
	author = "Jonmo";
	scope = public;
	scopeCurator = 2;
	displayName = "[VKN] Green shirt & Jeans";
	model = "a3\Characters_F_Orange\Uniforms\C_Mechanic_01_F.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_greenshirt_jeans_co.paa","\vkn_gear\data\uniforms\vkn_jeans_blue_co.paa"};
};


class VKN_Dummy_Shirt_BlueHawaii_AOR1_1: VKN_Dummy_Button_Up_Base // Blue Hawaiian Shirt
{
	Author = "Jonmo";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_bluehawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\vkn_fleece_Dark_co.paa"};
};
class VKN_Dummy_Shirt_BlueHawaii_aplblack_1: VKN_Dummy_Button_Up_Base
{
	Author = "Jonmo, Apple";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_bluehawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\VKN_Black_MTP.paa"};
};
class VKN_Dummy_Shirt_BlueHawaii_Multicam_1: VKN_Dummy_Button_Up_Base
{
	Author = "Jonmo";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_bluehawaii_shirt_co.paa","\VSM_Multicam\Data\VSM_ARD_multicam_1.paa"};
};
	class VKN_Dummy_Shirt_RedHawaii_AOR1_1: VKN_Dummy_Button_Up_Base // Red Hawaiian Shirt
{
	Author = "Jonmo";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_redhawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\vkn_fleece_Dark_co.paa"};
};
class VKN_Dummy_Shirt_RedHawaii_aplblack_1: VKN_Dummy_Button_Up_Base
{
	Author = "Jonmo";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_redhawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\VKN_Black_MTP.paa"};
};
class VKN_Dummy_Shirt_RedHawaii_Multicam_1: VKN_Dummy_Button_Up_Base
{
	Author = "Jonmo";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_redhawaii_shirt_co.paa","\VSM_Multicam\Data\VSM_ARD_multicam_1.paa"};
};
	class VKN_Dummy_Shirt_BrightHawaii_AOR1_1: VKN_Dummy_Button_Up_Base // Bright Hawaiian Shirt
{
	Author = "Jonmo";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_Brighthawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\vkn_fleece_Dark_co.paa"};
};
class VKN_Dummy_Shirt_BrightHawaii_aplblack_1: VKN_Dummy_Button_Up_Base
{
	Author = "Jonmo";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_Brighthawaii_shirt_co.paa","\VKN_Gear\data\Uniforms\VKN_Black_MTP.paa"};
};
class VKN_Dummy_Shirt_BrightHawaii_Multicam_1: VKN_Dummy_Button_Up_Base
{
	Author = "Jonmo";
	modelsides[] = {0,3};
	scope = protected;
	model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
	hiddenSelections[] = {"camo1","camo2","insignia"};
	hiddenSelectionsTextures[] = {"\vkn_gear\data\uniforms\vkn_Brighthawaii_shirt_co.paa","\VSM_Multicam\Data\VSM_ARD_multicam_1.paa"};
};
