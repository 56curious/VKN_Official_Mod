class CfgPatches
{
	class TRYK_Uniform
	{
		version="1.0";
		units[]={};
		weapons[]={};
		requiredVersion="1.1.3";
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Beta",
			"A3_Characters_F_Gamma",
			"A3_Characters_F_EPA",
			"A3_Characters_F_EPB"
		};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class B_ZARA_TAKI_T_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
	};
	class B_ZARA_TAKI_T2_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\loc\loc_ind01_1_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_ZARA_TAKI_T3_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\loc\loc_ind01_3_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_NATO_UCP_T_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\UCP.paa",
			"\a3\characters_f\Common\Data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\TRYK_Uniforms\data\TRYKuni.rvmat",
			"\a3\characters_f\Common\Data\basicbody.rvmat"
		};
	};
	class B_NATO_UCP_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\UCP.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\TRYK_Uniforms\data\TRYKuni2.rvmat"
		};
	};
	class B_NATO_UCP_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\UCP.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\TRYK_Uniforms\data\TRYKuni2.rvmat"
		};
	};
	class B_NATO_UCP_GRY_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\UCP_GRY.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\TRYK_Uniforms\data\TRYKuni.rvmat",
			""
		};
	};
	class B_NATO_UCP_GRY_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\UCP_GRY.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\TRYK_Uniforms\data\TRYKuni.rvmat",
			""
		};
	};
	class B_NATO_OCP_BLK_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NATO_BLK_OCP"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			""
		};
	};
	class B_NATO_OCP_BLK_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NATO_BLK_OCP"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			""
		};
	};
	class B_NATO_OCP_BLK_n_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NATO_BLK_OCP_n.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			""
		};
	};
	class B_NATO_OCP_BLK_n_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NATO_BLK_OCP_n.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			""
		};
	};
	class B_Wh_tan_ROLLUP_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\PMC_WH_co.paa",
			"\TRYK_Uniforms\data\clothing_blktan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\TRYK_Uniforms\data\TRYKuni.rvmat"
		};
	};
	class B_Wh_OD_ROLLUP_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\PMC_WH_co.paa",
			"\TRYK_Uniforms\data\clothing_BLKOD_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\TRYK_Uniforms\data\TRYKuni.rvmat"
		};
	};
	class B_Wh_BLK_ROLLUP_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\PMC_WH_co.paa",
			"\TRYK_Uniforms\data\clothing_BLKBLK_tans_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\TRYK_Uniforms\data\TRYKuni.rvmat"
		};
	};
	class B_BLK_tan_ROLLUP_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa",
			"\TRYK_Uniforms\data\clothing_blktan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\TRYK_Uniforms\data\TRYKuni.rvmat"
		};
	};
	class B_BLK_OD_ROLLUP_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa",
			"\TRYK_Uniforms\data\clothing_BLKOD_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\TRYK_Uniforms\data\TRYKuni.rvmat",
			""
		};
	};
	class B_AOR1_ROLLUP_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa",
			"tryk_unit\data\AOR1_BLK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"tryk_unit\data\AOR.rvmat",
			""
		};
	};
	class B_AOR2_ROLLUP_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\Characters_F_EPB\Guerrilla\ig_guerrilla5_1.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_gamma\Guerrilla\Data\ig_guerrilla2_1_co.paa",
			"tryk_unit\data\AOR2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_Woodland_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\clothing_wdl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat"
		};
	};
	class B_Woodland_soldier_02_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\clothing_wdl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat"
		};
	};
	class B_AOR1_BLK_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1_BLK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR1_BLK_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1_BLK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR1_GR_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1_GR.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR1_GR_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1_GR.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR2_BLK_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR2_BLK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR2_BLK_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR2_BLK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR2_OD_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR2_GR.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR2_OD_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR2_GR.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_MTP_BLK_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\MTP_BLK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			""
		};
	};
	class B_MTP_BLK_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\MTP_BLK.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			""
		};
	};
	class B_MTP_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\MTP.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat",
			""
		};
	};
	class B_MTP_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\MTP.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat",
			""
		};
	};
	class B_NATO_OCPD_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\OCP_D.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat",
			""
		};
	};
	class B_NATO_OCPD_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\OCP_D.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat",
			""
		};
	};
	class B_NATO_OCP_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NATO_OCP.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat",
			""
		};
	};
	class B_NATO_OCP_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NATO_OCP.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat",
			""
		};
	};
	class B_OCP_BLK_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NATO_BLK_OCP_n.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			""
		};
	};
	class B_OCP_BLK_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NATO_BLK_OCP_n.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			""
		};
	};
	class B_AOR1_GRY_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1_GRY.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR1_GRY_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1_GRY.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR1_CBR_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1_CBR.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR1_CBR_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1_CBR.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_WDL_GRY_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\WDL_GRY.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_WDL_GRY_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\WDL_GRY.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR1_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat",
			""
		};
	};
	class B_AOR1_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat",
			""
		};
	};
	class B_AOR2_GRY_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR2_GRY.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR2_GRY_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR2_GRY.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_AOR2_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR2.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat",
			""
		};
	};
	class B_AOR2_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR2.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\clothing1.rvmat",
			""
		};
	};
	class B_Snow_soldier_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\snowMarpat2.paa"
		};
	};
	class B_Snow_soldier_nato_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\SnowMARPAT.paa"
		};
	};
	class B_USMC_soldier_nato_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\A2MARPAT.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_USMC_soldier_ROLL_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\A2MARPAT.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat"
		};
	};
	class B_BLK_TAN_T_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\clothing_odtan_co.paa",
			"\a3\characters_f\Common\Data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\TRYK_Uniforms\data\TRYKuni.rvmat",
			"\a3\characters_f\Common\Data\basicbody.rvmat"
		};
	};
	class B_BLK_OD_T_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\clothing_BLKOD_co.paa",
			"\a3\characters_f\Common\Data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\TRYK_Uniforms\data\TRYKuni.rvmat",
			"\a3\characters_f\Common\Data\basicbody.rvmat"
		};
	};
	class B_TRYK_3CD_T: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\clothing_blk3cd_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\TRYK_Uniforms\data\TRYKuni.rvmat",
			""
		};
	};
	class B_MTP_T: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\MTP.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			"\a3\characters_f\Common\Data\basicbody.rvmat"
		};
	};
	class B_OCP_T: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NATO_OCP.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			"\a3\characters_f\Common\Data\basicbody.rvmat"
		};
	};
	class B_OCP_D_T: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NATO_OCP_D"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			"\a3\characters_f\Common\Data\basicbody.rvmat"
		};
	};
	class B_AOR2_T_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR2.paa",
			"\a3\characters_f\Common\Data\basicbody_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			"\a3\characters_f\Common\Data\basicbody.rvmat"
		};
	};
	class B_DMARPAT_T_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1.paa",
			"tryk_unit\data\basicbody_K_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			"\a3\characters_f\Common\Data\basicbody.rvmat"
		};
	};
	class B_Sage_T_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\BLUFOR\Data\clothing_sage_co.paa"
		};
	};
	class B_Wood_T: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\clothing_wdl_co.paa",
			"tryk_unit\data\basicbody_K_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\AOR.rvmat",
			"\a3\characters_f\Common\Data\basicbody.rvmat"
		};
	};
	class B_DMARPAT_NR_F: B_Soldier_base_F
	{
		scope=1;
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\DMARPAT.paa",
			"tryk_unit\data\basicbody_K_co.paa"
		};
	};
	class B_fleece_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\fleece";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class B_fleece_UCP_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\fleece";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\do_1_UCP_co.paa"
		};
	};
	class B_PCU_GRYGRY_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\grey.paa",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCU_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\flecktarn_co.paa"
		};
	};
	class B_PCU_UCP_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\do_1_UCP_co.paa",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCU_wood_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\do_1_wood_co",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCU_GRYGRY_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs_Roll";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\grey.paa",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCU_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs_Roll";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\flecktarn_co.paa"
		};
	};
	class B_PCU_UCP_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs_Roll";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\do_1_UCP_co.paa",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCU_wood_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs_Roll";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\do_1_wood_co",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCUG_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\do_1_co.paa",
			"tryk_unit\data\flecktarn_Grey_co.paa",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCUOD_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\flecktarn_OD_co.paa"
		};
	};
	class B_PCU_G_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs_G.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\fr\jeans_co.paa",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCU_G_BLK_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs_G.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\fr\jeans_co.paa",
			"tryk_unit\data\flecktarn_co.paa"
		};
	};
	class B_PCU_G_OD_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs_G.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\fr\jeans_co.paa",
			"tryk_unit\data\flecktarn_OD_co.paa"
		};
	};
	class B_PCU_G_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs_G_R.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\fr\jeans_co.paa",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCU_G_BLK_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs_G_R.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\fr\jeans_co.paa",
			"tryk_unit\data\flecktarn_co.paa"
		};
	};
	class B_PCU_G_OD_R_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCUs_G_R.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\fr\jeans_co.paa",
			"tryk_unit\data\flecktarn_OD_co.paa"
		};
	};
	class B_Denim_T_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_T.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_wh.paa",
			"tryk_unit\data\fr\jeans_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_Denim_T_BK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_T.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_bk.paa",
			"tryk_unit\data\fr\jeans_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_blk_T_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_T.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_wh.paa",
			"tryk_unit\data\fr\tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_blk_T_BK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_T.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_bk.paa",
			"tryk_unit\data\fr\tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_RED_T_BR_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_T.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_red.paa",
			"tryk_unit\data\fr\jeans_BR_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_Denim_T_BG_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_T_BG.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_wh.paa",
			"tryk_unit\data\fr\jeans_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_Denim_T_BK_BG_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_T_BG.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_bk.paa",
			"tryk_unit\data\fr\jeans_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_blk_T_BG_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_T_BG.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_wh.paa",
			"tryk_unit\data\fr\tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_blk_T_BK_BG_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_T_BG.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_bk.paa",
			"tryk_unit\data\fr\tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_RED_T_BR_BG_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_T_BG.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_red.paa",
			"tryk_unit\data\fr\jeans_BR_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_pad_J_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Jpad.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
	};
	class B_pad_J_blk_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Jpad.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\js\ins_lopotev_blk_co.paa",
			"tryk_unit\data\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_pad_T_hood_cl_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_od_cl_co.paa",
			"tryk_unit\data\dt\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\hd\baker_cl.rvmat",
			""
		};
	};
	class B_pad_T_hood_cl_blk_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_blk_cl_co.paa",
			"tryk_unit\data\dt\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\hd\baker_cl.rvmat",
			""
		};
	};
	class B_pad_T_hood_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_od_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_pad_T_hood_BLK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_co.paa",
			"tryk_unit\data\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_pad_T_hood_BLKCSAT_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_co.paa",
			"\a3\characters_f\OPFOR\Data\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_pad_T_hood_Gry_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_gry_co.paa",
			"tryk_unit\data\dt\clothing_ucp_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_pad_T_hood_nc_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_nc_co.paa",
			"tryk_unit\data\dt\clothing_3c_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_pad_T_hood_mc_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_mc_co",
			"tryk_unit\data\dt\clothing_3c_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_pad_T_hood_BKOD_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_blk_cl_co.paa",
			"tryk_unit\data\dt\clothing_OD_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\hd\baker_cl.rvmat",
			""
		};
	};
	class B_pad_T_hood_ODBK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_od_cl_co.paa",
			"tryk_unit\data\dt\clothing_BLK_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\hd\baker_cl.rvmat",
			""
		};
	};
	class B_pad_T_hood_BKT2_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodpad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_blk_cl_co.paa",
			"tryk_unit\data\dt\clothing_type2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\hd\baker_cl.rvmat",
			""
		};
	};
	class B_pad_PCU_BK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\pcu_nhood_d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
	};
	class B_hoodie_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodie";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
	};
	class B_hoodie_FR_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodie_sp";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
	};
	class B_hoodie_wood_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodie_sp";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\fr\forcerecon_Wood_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_hoodie_3c_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\hoodie_sp";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\fr\forcerecon_3c_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_camo_tan_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_camo";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_dtwh.paa",
			"tryk_unit\data\fr\forcerecon_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_camo_3c_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_camo";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_dusy.paa",
			"tryk_unit\data\fr\forcerecon_3c_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_camo_Wood_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_camo";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_dustod.paa",
			"tryk_unit\data\fr\forcerecon_Wood_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_camo_MARPAT_Wood_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_camo";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_bk.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_camo_MARPAT_Desert_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_camo";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_dustod.paa",
			"tryk_unit\data\fr\forcerecon_body_Dmarpat"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_camo_3c_BG_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_camo_bg";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_dusy.paa",
			"tryk_unit\data\fr\forcerecon_3c_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_camo_Wood_BG_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_camo_bg";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_dustod.paa",
			"tryk_unit\data\fr\forcerecon_Wood_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_camo_MARPAT_BG_Wood_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_camo_bg";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_bk.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_camo_MARPAT_BG_Desert_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_camo_bg";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_dustod.paa",
			"tryk_unit\data\fr\forcerecon_body_Dmarpat"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_PAD_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_pad";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_dusy.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat"
		};
	};
	class B_T_PAD_TAN_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_pad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_dtwh",
			"tryk_unit\data\dt\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_PAD_OD_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_pad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_bk.paa",
			"tryk_unit\data\dt\clothing_OD_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_PAD_BLK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_pad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_dustod.paa",
			"tryk_unit\data\dt\clothing_BLK_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_PAD_T2_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_pad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_bk.paa",
			"tryk_unit\data\dt\clothing_type2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_PAD_CSAT_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\T_pad";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\basicbody_bk.paa",
			"\a3\characters_f\OPFOR\Data\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"tryk_unit\data\basicbody.rvmat",
			""
		};
	};
	class B_T_PAD_pmc_R_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc_co.paa",
			"tryk_unit\data\basicbody_dusy.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_TAN_pmc_R_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc_co.paa",
			"tryk_unit\data\dt\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
	};
	class B_T_PAD_OD_pm_R_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc_co.paa",
			"tryk_unit\data\dt\clothing_OD_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_BLK_pmc_R_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc_co.paa",
			"tryk_unit\data\dt\clothing_BLK_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_pmc_BL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_bc_co.paa",
			"tryk_unit\data\basicbody_dusy.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_TAN_pmc_BL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_bc_co.paa",
			"tryk_unit\data\dt\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
	};
	class B_T_PAD_OD_pm_BL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_bc_co.paa",
			"tryk_unit\data\dt\clothing_OD_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_BLK_pmc_BL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_bc_co.paa",
			"tryk_unit\data\dt\clothing_BLK_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_pmc_BK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_blk_co.paa",
			"tryk_unit\data\basicbody_dusy.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_TAN_pmc_BK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_blk_co.paa",
			"tryk_unit\data\dt\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
	};
	class B_T_PAD_OD_pm_BK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_blk_co.paa",
			"tryk_unit\data\dt\clothing_OD_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_BLK_pmc_BK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_blk_co.paa",
			"tryk_unit\data\dt\clothing_BLK_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_pmc_BLW_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_whb_co.paa",
			"tryk_unit\data\basicbody_dusy.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_TAN_pmc_BLW_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_whb_co.paa",
			"tryk_unit\data\dt\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
	};
	class B_T_PAD_OD_pm_BLW_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_whb_co.paa",
			"tryk_unit\data\dt\clothing_OD_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_BLK_pmc_BLW_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_whb_co.paa",
			"tryk_unit\data\dt\clothing_BLK_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_pmc_YEL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_ylb_co.paa",
			"tryk_unit\data\basicbody_dusy.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_TAN_pmc_YEL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_ylb_co.paa",
			"tryk_unit\data\dt\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
	};
	class B_T_PAD_OD_pm_YEL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_ylb_co.paa",
			"tryk_unit\data\dt\clothing_OD_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_BLK_pmc_YEL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_ylb_co.paa",
			"tryk_unit\data\dt\clothing_BLK_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_pmc_RED2_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc2_co.paa",
			"tryk_unit\data\basicbody_dusy.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_TAN_pmc_RED2_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc2_co.paa",
			"tryk_unit\data\dt\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
	};
	class B_T_PAD_OD_pm_RED2_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc2_co.paa",
			"tryk_unit\data\dt\clothing_OD_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_BLK_pmc_RED2_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc2_co.paa",
			"tryk_unit\data\dt\clothing_BLK_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_pmc_BLU3_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_bwh_co.paa",
			"tryk_unit\data\basicbody_dusy.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_TAN_pmc_BLU3_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_bwh_co.paa",
			"tryk_unit\data\dt\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			""
		};
	};
	class B_T_PAD_OD_pm_BLU3_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_bwh_co.paa",
			"tryk_unit\data\dt\clothing_OD_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_T_PAD_BLK_pmc_BLU3_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_pad";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_bwh_co.paa",
			"tryk_unit\data\dt\clothing_BLK_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_denim_hoodie_mc_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_hood";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_mc_co"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_denim_hoodie_3c_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_hood";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_3c_co"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_denim_hoodie_blk_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_hood";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_denim_hoodie_nc_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_hood";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\hd\baker_nc_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_denim_jersey_BLU_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_jersey";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
	};
	class B_denim_jersey_BLK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Denim_jersey";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\js\ins_lopotev_blk_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_R_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_BL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_bc_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_BK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_blk_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_WH_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_WH_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_BWH_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_BWH_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_RED2_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc2_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_whb_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_whb_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_ylb_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_ylb_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_OD_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_R_Sleeve_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Sleeve_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_BL_Sleeve_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Sleeve_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_bc_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_BK_Sleeve_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Sleeve_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_blk_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_WH_Sleeve_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Sleeve_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_WH_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_BWH_Sleeve_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Sleeve_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_BWH_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_RED2_Sleeve_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Sleeve_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_rc2_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_whb_Sleeve_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Sleeve_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_whb_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_ylb_Sleeve_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Sleeve_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_ylb_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_Shirts_Denim_OD_Sleeve_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\shirts_Sleeve_Denim";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_soldier_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_takisp_WH_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\tk_sps.p3d";
		hiddenSelections[]=
		{
			"camo3",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_civil03_3_co.paa",
			"tryk_unit\data\clothing_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_takisp_COY_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\tk_sps.p3d";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_civil03_1_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_takisp_BL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\tk_sps.p3d";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_civil03_bl_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_takisp_BK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\tk_sps.p3d";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_civil03_bk_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_takisp_G_WH_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\tk_sps_G.p3d";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_civil03_3_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_takisp_G_COY_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\tk_sps_G.p3d";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_civil03_1_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_takisp_G_BL_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\tk_sps_G.p3d";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_civil03_bl_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_takisp_G_BK_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\tk_sps_G.p3d";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_civil03_bk_co.paa"
		};
		hiddenSelectionsMaterials[]={};
	};
	class B_PCU_bi_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCU_boots";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\flecktarn_co.paa"
		};
	};
	class B_PCU_bi_UCP_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCU_boots";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\do_1_UCP_co.paa",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCU_bi_GRY_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCU_boots";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\grey.paa",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCU_bi_wood_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCU_boots";
		hiddenSelections[]=
		{
			"camo",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\do_1_wood_co",
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCUG_bi_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCU_boots";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCUOD_bi_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCU_boots";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\flecktarn_OD_co.paa"
		};
	};
	class B_PCUH_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCU_onHood";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\flecktarn_co.paa"
		};
	};
	class B_PCUGH_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCU_onHood";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\flecktarn_Grey_co.paa"
		};
	};
	class B_PCUODH_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\PCU_onHood";
		hiddenSelections[]=
		{
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\flecktarn_OD_co.paa"
		};
	};
	class B_OVERALL_flesh_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\Nomex_OverAll.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\coverallH_co.paa"
		};
	};
	class B_OVERALL_flesh_nok_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Nomex_zabb.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\coverallH_co.paa"
		};
	};
	class B_OVERALL_SAGEBLK_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\Nomex_OverAll.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NomexZB_co.paa"
		};
	};
	class B_OVERALL_SAGEBLK_nk_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\Nomex_OverAll.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NomexZB_co.paa"
		};
	};
	class B_OVERALL_SAGEBLK_Zabb_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Nomex_zabb.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NomexZB_co.paa",
			"tryk_unit\data\Nomex_grove_blk.paa"
		};
	};
	class B_OVERALL_SAGEBLK_nok_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Nomex_zabb.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\Nomex_co.paa"
		};
	};
	class B_OVERALL_SAGEBLK_Zabb_2_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\Nomex_zabb2.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\NomexZB_co.paa",
			"tryk_unit\data\Nomex_grove_blk.paa"
		};
	};
	class B_OVERALL_sage_F: B_Soldier_base_F
	{
		scope=1;
		model="\tryk_unit\data\Nomex_OverAll.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
	};
	class B_SUITS_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\suits.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ESSGoggles\suits\functionary_co.paa"
		};
	};
	class B_SUITS_B_F: B_Soldier_base_F
	{
		scope=1;
		model="tryk_unit\data\suits.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ESSGoggles\suits\functionary2_co.paa"
		};
	};
};
class cfgWeapons
{
	class HeadgearItem;
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
	};
	class TRYK_U_B_wh_tan_Rollup_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK ROLLUP BDU WH+TAN";
		picture="\a3\characters_f_gamma\Guerrilla\Data\ui\icon_u_g_guerrilla2_1_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		cost=180000;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Wh_tan_ROLLUP_soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_wh_OD_Rollup_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK ROLLUP BDU WH+OD";
		picture="\a3\characters_f_gamma\Guerrilla\Data\ui\icon_u_g_guerrilla2_1_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Wh_OD_ROLLUP_soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_wh_blk_Rollup_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK ROLLUP BDU WH+blk";
		picture="\a3\characters_f_gamma\Guerrilla\Data\ui\icon_u_g_guerrilla2_1_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Wh_BLK_ROLLUP_soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_BLK_tan_Rollup_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK ROLLUP BDU BLK+TAN";
		picture="\a3\characters_f_gamma\Guerrilla\Data\ui\icon_u_g_guerrilla2_1_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_BLK_tan_ROLLUP_soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_BLK_OD_Rollup_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK ROLLUP BDU BLK+OD";
		picture="\a3\characters_f_gamma\Guerrilla\Data\ui\icon_u_g_guerrilla2_1_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_BLK_OD_ROLLUP_soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_UCP_GRY_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK UCP+GRY ACU";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_UCP_GRY_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_UCP_GRY_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK UCP+GRY ACU ROLL";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_UCP_GRY_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_UCP_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK UCP ACU";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_UCP_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_UCP_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK UCP ACU ROLL";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_UCP_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_OCP_c_BLK_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK OCP+BLK ACU ";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_OCP_BLK_n_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_OCP_BLK_c_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK OCP+BLK ACU ROLL";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_OCP_BLK_n_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_OCP_BLK_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK OCP+BLK ACU dusty";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_OCP_BLK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_OCP_BLK_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK OCP+BLK ACU ROLL dusty";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_OCP_BLK_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_OCPD_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK OCP ACU dusty";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_OCPD_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_OCPD_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK OCP ACU ROLL dusty";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_OCPD_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_OCP_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK OCP ACU ";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_OCP_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_NATO_OCP_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK OCP ACU ROLL ";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_OCP_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_AOR1_Rollup_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK ROLLUP BDU BLACK+AOR1";
		picture="\TRYK_Uniforms\data\ui\UI_AOR1_BDU.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_ROLLUP_soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_AOR2_Rollup_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK ROLLUP BDU BLACK+AOR2";
		picture="\TRYK_Uniforms\data\ui\UI_AOR2_BDU.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR2_ROLLUP_soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_MTP_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK MTP BDU";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_MTP_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_MTP_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK MTP BDU ROLL";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_MTP_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_MTP_BLK_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK MTP+BLK BDU";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_MTP_BLK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_MTP_BLK_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK MTP+BLK BDU ROLL";
		picture="\a3\characters_f\data\ui\icon_f_b_combatuniform_ocam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_MTP_BLK_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Woodland: Uniform_Base
	{
		scope=2;
		displayName="TRYK Wood land BDU";
		picture="\tryk_unit\data\ui\icon_WDLca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Woodland_soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Woodland_Tshirt: Uniform_Base
	{
		scope=2;
		displayName="TRYK Wood land BDU ROLL";
		picture="\tryk_unit\data\ui\icon_WDLca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Woodland_soldier_02_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_WDL_GRY_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK Wood land+GRY BDU";
		picture="\tryk_unit\data\ui\icon_WDLGRY_ca.pAA";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_WDL_GRY_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_WDL_GRY_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK Wood land+GRY BDU ROLL";
		picture="\tryk_unit\data\ui\icon_WDLGRY_ca.pAA";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_WDL_GRY_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO1_GR_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-1+GR BDU";
		picture="\tryk_unit\data\ui\icon_AOR1_OD_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_GR_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO1_GR_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-1+GR BDU ROLL";
		picture="\tryk_unit\data\ui\icon_AOR1_OD_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_GR_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO1_GRY_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-1+GRY BDU";
		picture="\tryk_unit\data\ui\icon_AOR1_GRY_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_GRY_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO1_GRY_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-1+GRY BDU ROLL";
		picture="\tryk_unit\data\ui\icon_AOR1_GRY_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_GRY_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO1_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-1 BDU";
		picture="\TRYK_Uniforms\data\ui\UI_AOR1_BDU.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO1R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-1 BDU Roll";
		picture="\TRYK_Uniforms\data\ui\UI_AOR1_BDU.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO1_BLK_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-1+BLK BDU";
		picture="\tryk_unit\data\ui\icon_AOR1_BLK_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_BLK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO1_BLK_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-1+BLK BDU ROLL";
		picture="\tryk_unit\data\ui\icon_AOR1_BLK_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_BLK_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO1_CBR_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-1+CYT BDU";
		picture="\tryk_unit\data\ui\icon_AOR1_CYT_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_CBR_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO1_CBR_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-1+CYT BDU ROLL";
		picture="\tryk_unit\data\ui\icon_AOR1_CYT_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR1_CBR_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO2_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-2 BDU";
		picture="\TRYK_Uniforms\data\ui\UI_AOR2_BDU.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_ARO2R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR-2 BDU Roll";
		picture="\TRYK_Uniforms\data\ui\UI_AOR2_BDU.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR2_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_AOR2_BLK_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR2+BLK BDU";
		picture="\tryk_unit\data\ui\icon_AOR2_BLK_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR2_BLK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_AOR2_BLK_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR2+BLK BDU ROLL";
		picture="\tryk_unit\data\ui\icon_AOR2_BLK_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR2_BLK_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_AOR2_OD_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR2+OD BDU";
		picture="\tryk_unit\data\ui\icon_AOR2_OD_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR2_OD_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_AOR2_OD_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR2+OD BDU ROLL";
		picture="\tryk_unit\data\ui\icon_AOR2_OD_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR2_OD_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_AOR2_GRY_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR2+GRY BDU";
		picture="\tryk_unit\data\ui\icon_AOR2_GRY_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR2_GRY_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_AOR2_GRY_R_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR2+GRY BDU ROLL";
		picture="\tryk_unit\data\ui\icon_AOR2_GRY_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR2_GRY_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Snow_CombatUniform: Uniform_Base
	{
		scope=2;
		displayName="TRYK Snow uniform Type1";
		picture="\tryk_unit\data\UI\icon_u_b_snow_1";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Snow_soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Snowt: Uniform_Base
	{
		scope=2;
		displayName="TRYK Snow uniform Type2";
		picture="\tryk_unit\data\UI\icon_u_b_snow_2";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Snow_soldier_nato_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Denim_T_WH: Uniform_Base
	{
		scope=2;
		displayName="TRYK T-shirts Jeans(WH)";
		picture="\tryk_unit\data\fr\UI_TJW_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Denim_T_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Denim_T_BK: Uniform_Base
	{
		scope=2;
		displayName="TRYK T-shirts Jeans(BK)";
		picture="\tryk_unit\data\fr\UI_TJB_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Denim_T_BK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_BLK_T_WH: Uniform_Base
	{
		scope=2;
		displayName="TRYK T-shirts Black Jeans(WH)";
		picture="\tryk_unit\data\fr\UI_TJW_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_blk_T_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_BLK_T_BK: Uniform_Base
	{
		scope=2;
		displayName="TRYK T-shirts Black Jeans(BK)";
		picture="\tryk_unit\data\fr\UI_TJB_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_blk_T_BK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_RED_T_BR: Uniform_Base
	{
		scope=2;
		displayName="TRYK T-shirts Black Jeans(RED+BR)";
		picture="\tryk_unit\data\fr\UI_TJB_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_RED_T_BR_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Denim_T_BG_WH: Uniform_Base
	{
		scope=2;
		displayName="TRYK T-shirts Jeans glove(WH)";
		picture="\tryk_unit\data\fr\UI_TJW_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Denim_T_BG_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Denim_T_BG_BK: Uniform_Base
	{
		scope=2;
		displayName="TRYK T-shirts Jeans glove(BK)";
		picture="\tryk_unit\data\fr\UI_TJB_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Denim_T_BK_BG_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_BLK_T_BG_WH: Uniform_Base
	{
		scope=2;
		displayName="TRYK T-shirts Black Jeans glove(WH)";
		picture="\tryk_unit\data\fr\UI_TJW_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_blk_T_BG_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_BLK_T_BG_BK: Uniform_Base
	{
		scope=2;
		displayName="TRYK T-shirts Black Jeans glove(BK)";
		picture="\tryk_unit\data\fr\UI_TJB_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_blk_T_BK_BG_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_RED_T_BG_BR: Uniform_Base
	{
		scope=2;
		displayName="TRYK T-shirts Black Jeans glove(RED+BR)";
		picture="\tryk_unit\data\fr\UI_TJB_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_RED_T_BR_BG_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_fleece: Uniform_Base
	{
		scope=2;
		displayName="TRYK FLEECE JACKET(MTP)";
		picture="\tryk_unit\data\UI\UI_fleece.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_fleece_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_fleece_UCP: Uniform_Base
	{
		scope=2;
		displayName="TRYK FLEECE JACKET(UCP)";
		picture="\tryk_unit\data\UI\UI_fleece.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_fleece_UCP_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_UCP_PCUs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(GRY_UCP)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_UCP_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_GRY_PCUs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(GRY_GRY)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_GRYGRY_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Wood_PCUs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(GRY_Wood)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_wood_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(BLACK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_UCP_PCUs_R: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(GRY_UCP ROLL)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_UCP_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_GRY_PCUs_R: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(GRY_GRY ROLL)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_GRYGRY_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Wood_PCUs_R: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(GRY_Wood ROLL)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_wood_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUs_R: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(BLACK ROLL)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUGs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(GRAY)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCUG_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUODs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(OD)";
		picture="\tryk_unit\data\UI\UI_PCU_OD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCUOD_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUGs_gry: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(GRY+Denim)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_G_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUGs_BLK: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(BLK+Denim)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_G_BLK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUGs_OD: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET(OD+Denim)";
		picture="\tryk_unit\data\UI\UI_PCU_OD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_G_OD_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUGs_gry_R: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET ROLL(GRY+Denim)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_G_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUGs_BLK_R: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET ROLL(BLK+Denim)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_G_BLK_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUGs_OD_R: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET ROLL(OD+Denim)";
		picture="\tryk_unit\data\UI\UI_PCU_OD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_G_OD_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_Bts_GRYGRY_PCUs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET Boots in(GRY_GRY)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_bi_GRY_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_Bts_UCP_PCUs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET Boots in(GRY_UCP)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_bi_UCP_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_Bts_Wood_PCUs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET Boots in(GRY_Wood)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_bi_wood_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_Bts_PCUs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET Boots in(BLACK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCU_bi_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_pad_j: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force jersey(BLU+3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_J_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_pad_j_blk: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force jersey(BLK+3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_J_blk_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_pad_hood_Cl: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood (OD+TAN)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_cl_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_pad_hood_Cl_blk: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood (BLK+TAN)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_cl_blk_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_pad_hood_tan: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood (OD+3DC)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_pad_hood_Blk: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood (BLK+TAN)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_BLK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_pad_hood_CSATBlk: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood (BLK+CSAT)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_BLKCSAT_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_pad_hood_Blod: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood (BLK+OD)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_BKOD_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_pad_hood_odBK: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood (OD+BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_ODBK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_pad_hood_BKT2: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood (BLK+Type2camo)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_BKT2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_hoodie_Blk: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(BLK+MC)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_hoodie_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_hoodie_FR: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(BLK+MARPAT_W)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_hoodie_FR_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_hoodie_Wood: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(BLK+Wood)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_hoodie_wood_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_hoodie_3c: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(BLK+3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_hoodie_3c_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_camo_tan: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force T-shirt(tan)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_camo_tan_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_camo_3c: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force T-shirt(3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_camo_3c_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_camo_Wood: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force T-shirt(Wood)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_camo_Wood_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_camo_wood_marpat: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force T-shirt(Wood_marpat)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_camo_MARPAT_Wood_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_camo_Desert_marpat: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force T-shirt(Dsert_marpat)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_camo_MARPAT_Desert_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_camo_3c_BG: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force T-shirt BG(3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_camo_3c_BG_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_camo_Wood_BG: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force T-shirt BG(Wood)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_camo_Wood_BG_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_camo_wood_marpat_BG: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force T-shirt BG(Wood_marpat)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_camo_MARPAT_BG_Wood_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_camo_desert_marpat_BG: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force T-shirt BG(Desert_marpat)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_camo_MARPAT_BG_Desert_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_PAD: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force (T+PAD(3C))";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_OD_PAD: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(T+PAD(OD))";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_OD_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_TAN_PAD: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(T+PAD(TAN))";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_TAN_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_BLK_PAD: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(T+PAD(BLK))";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_BLK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_T2_PAD: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(T+PAD(Type2camo))";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_T2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_T_CSAT_PAD: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(T+PAD(CSAT))";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_CSAT_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_nohoodPcu_gry: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood (Gry+UCP)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_Gry_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_hood_nc: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(NC)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_nc_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_hood_mc: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood(MC)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_pad_T_hood_mc_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_denim_hood_blk: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood+denim (BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_denim_hoodie_blk_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_denim_hood_mc: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood+denim (MC)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_denim_hoodie_mc_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_denim_hood_3c: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood+denim (3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_denim_hoodie_3c_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_denim_hood_nc: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood+denim (NC)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_denim_hoodie_nc_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_denim_jersey_blu: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood+jersey (BLU)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_denim_jersey_BLU_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_denim_jersey_blk: Uniform_Base
	{
		scope=2;
		displayName="TRYK special force hood+jersey (BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_denim_jersey_BLK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_PAD: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (RED+3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_pmc_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_OD_PAD: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (RED+OD)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_OD_pm_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_TAN_PAD: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (RED+TAN)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_TAN_pmc_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_BLK_PAD: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (RED+BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_BLK_pmc_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_PAD_BK: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BK+3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_pmc_BK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_OD_PAD_BK: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BK+OD)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_OD_pm_BK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_TAN_PAD_BK: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BK+TAN)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_TAN_pmc_BK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_BLK_PAD_BK: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BK+BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_BLK_pmc_BK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_PAD_BLW: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL2+3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_pmc_BLW_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_OD_PAD_BLW: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL2+OD)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_OD_pm_BLW_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_TAN_PAD_BLW: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL2+TAN)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_TAN_pmc_BLW_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_BLK_PAD_BLW: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL2+BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_BLK_pmc_BLW_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_PAD_YEL: Uniform_Base
	{
		scope=2;
		author="修復出来てワロタ";
		displayName="TRYK shirts PAD (YEL+3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_pmc_YEL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_OD_PAD_YEL: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (YEL+OD)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_OD_pm_YEL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_TAN_PAD_YEL: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (YEL+TAN)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_TAN_pmc_YEL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_BLK_PAD_YEL: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (YEL+BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_BLK_pmc_YEL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_PAD_RED2: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (RED2+3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_pmc_RED2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_OD_PAD_RED2: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (RED2+OD)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_OD_pm_RED2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_TAN_PAD_RED2: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (RED2+TAN)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_TAN_pmc_RED2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_BLK_PAD_RED2: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (RED2+BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_BLK_pmc_RED2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_PAD_BLU3: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL3+3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_pmc_BLU3_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_OD_PAD_BLU3: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL3+OD)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_OD_pm_BLU3_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_TAN_PAD_BLU3: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL3+TAN)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_TAN_pmc_BLU3_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_BLK_PAD_BLU3: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL3+BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_BLK_pmc_BLU3_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_R: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim (RED)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_R_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_BL: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim (BLU)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_BL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_BK: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim (BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_BK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_WH: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim (WH)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_WH_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_BWH: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim (BLU2)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_BWH_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_RED2: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim (RED2)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_RED2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_WHB: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim (WH+BLU)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_whb_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_ylb: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim (YEL)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_ylb_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_od: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim (OD)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_od_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_R_Sleeve: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim Sleeve(RED)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_R_Sleeve_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_BL_Sleeve: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim Sleeve(BLU)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_BL_Sleeve_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_BK_Sleeve: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim Sleeve(BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_BK_Sleeve_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_WH_Sleeve: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim Sleeve(WH)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_WH_Sleeve_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_BWH_Sleeve: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim Sleeve(BLU2)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_BWH_Sleeve_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_RED2_Sleeve: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim Sleeve(RED2)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_RED2_Sleeve_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_WHB_Sleeve: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim Sleeve(WH+BLU)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_whb_Sleeve_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_ylb_Sleeve: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim Sleeve (YEL)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_ylb_Sleeve_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_DENIM_od_Sleeve: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts Denim Sleeve (OD)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Shirts_Denim_OD_Sleeve_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_PAD_BL: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL+3C)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_pmc_BL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_OD_PAD_BL: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL+OD)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_OD_pm_BL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_TAN_PAD_BL: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL+TAN)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_TAN_pmc_BL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_shirts_BLK_PAD_BL: Uniform_Base
	{
		scope=2;
		displayName="TRYK shirts PAD (BL+BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_T_PAD_BLK_pmc_BL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_taki_wh: Uniform_Base
	{
		scope=2;
		displayName="TRYK Special force mideast style (WH)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_takisp_WH_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_taki_COY: Uniform_Base
	{
		scope=2;
		displayName="TRYK Special force mideast style (COY)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_takisp_COY_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_taki_BL: Uniform_Base
	{
		scope=2;
		displayName="TRYK Special force mideast style (BLE)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_takisp_BL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_taki_BLK: Uniform_Base
	{
		scope=2;
		displayName="TRYK Special force mideast style (BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_takisp_BK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_Bts_PCUGs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET Boots in(GRAY)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCUG_bi_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_Bts_PCUODs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET Boots in(OD)";
		picture="\tryk_unit\data\UI\UI_PCU_OD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCUOD_bi_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_taki_G_WH: Uniform_Base
	{
		scope=2;
		displayName="TRYK Special force mideast style Denim (WH)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_takisp_G_WH_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_taki_G_COY: Uniform_Base
	{
		scope=2;
		displayName="TRYK Special force mideast style Denim (COY)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_takisp_G_COY_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_taki_G_BL: Uniform_Base
	{
		scope=2;
		displayName="TRYK Special force mideast style Denim (BL)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_takisp_G_BL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_taki_G_BLK: Uniform_Base
	{
		scope=2;
		displayName="TRYK Special force mideast style Denim (BLK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_takisp_G_BK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUHs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET HOOD(BLACK)";
		picture="\tryk_unit\data\UI\UI_PCU_BL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCUH_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUGHs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET HOOD(GRAY)";
		picture="\tryk_unit\data\UI\UI_PCU_GR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCUGH_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_PCUODHs: Uniform_Base
	{
		scope=2;
		displayName="TRYK PCU JACKET HOOD(OD)";
		picture="\tryk_unit\data\UI\UI_PCU_OD.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_PCUODH_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_B_USMC_R: Uniform_Base
	{
		scope=2;
		displayName="TRYK USMC Razer Team";
		picture="\tryk_unit\data\UI\Razer_Marpat.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_USMC_soldier_nato_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_B_USMC_R_ROLL: Uniform_Base
	{
		scope=2;
		displayName="TRYK USMC Razer Team(ROLL)";
		picture="\tryk_unit\data\UI\Razer_Marpat_ROLL.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_USMC_soldier_ROLL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_ZARATAKI: Uniform_Base
	{
		scope=2;
		displayName="TRYK Takistan Soldier 1";
		picture="\tryk_unit\data\ui\icon_loc.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_ZARA_TAKI_T_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_ZARATAKI2: Uniform_Base
	{
		scope=2;
		displayName="TRYK Takistan Soldier 2";
		picture="\tryk_unit\data\ui\icon_loc.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_ZARA_TAKI_T2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_ZARATAKI3: Uniform_Base
	{
		scope=2;
		displayName="TRYK Takistan Soldier 3";
		picture="\tryk_unit\data\ui\icon_loc.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_ZARA_TAKI_T3_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_B_TRYK_UCP_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK UCP Tshirt";
		picture="\tryk_unit\data\UI\3cT.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_NATO_UCP_T_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_B_TRYK_3C_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK 3CD Tshirt";
		picture="\tryk_unit\data\UI\3cT.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_TRYK_3CD_T";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_B_TRYK_MTP_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK MTP Tshirt";
		picture="\tryk_unit\data\UI\3cT.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_MTP_T";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_B_TRYK_OCP_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK OCP Tshirt";
		picture="\tryk_unit\data\UI\3cT.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_OCP_T";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_B_TRYK_OCP_D_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK OCP Dirty Tshirt";
		picture="\tryk_unit\data\UI\3cT.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_OCP_D_T";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_DMARPAT_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR1 T-shirt";
		picture="\tryk_unit\data\UI\DMARPAT_T.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_DMARPAT_T_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_C_AOR2_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK AOR2 T-shirt";
		picture="\tryk_unit\data\UI\DMARPAT_T.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_AOR2_T_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Sage_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK Sage Uniform T-shirt";
		picture="\TRYK_Uniforms\data\UI\icon_u_b_combatuniform_sage_ca";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Sage_T_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_Wood_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK Wood Uniform T-shirt";
		picture="\TRYK_Uniforms\data\UI\icon_u_b_combatuniform_sage_ca";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Wood_T";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_BLTAN_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK BLK+TAN Uniform T-shirt";
		picture="\TRYK_Uniforms\data\UI\icon_u_b_combatuniform_sage_ca";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_BLK_TAN_T_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_U_B_BLOD_T: Uniform_Base
	{
		scope=2;
		displayName="TRYK BLK+OD Uniform T-shirt";
		picture="\TRYK_Uniforms\data\UI\icon_u_b_combatuniform_sage_ca";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_BLK_OD_T_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_OVERALL_flesh: Uniform_Base
	{
		scope=2;
		displayName="TRYK Jump suit(flesh)";
		picture="\tryk_unit\data\UI\UI_Overall_FR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_OVERALL_flesh_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_OVERALL_nok_flesh: Uniform_Base
	{
		scope=2;
		displayName="TRYK Jump suit no knee(flesh)";
		picture="\tryk_unit\data\UI\UI_Overall_FR.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_OVERALL_flesh_nok_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_OVERALL_SAGE_BLKboots: Uniform_Base
	{
		scope=2;
		displayName="TRYK Jump suit(SAGE+BLKBoots)";
		picture="\tryk_unit\data\UI\UI_Overall_sage.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_OVERALL_SAGEBLK_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_OVERALL_SAGE_BLKboots_nk_blk: Uniform_Base
	{
		scope=2;
		displayName="TRYK Jump suit no knee(SAGE+BLK)";
		picture="\tryk_unit\data\UI\UI_Overall_sage.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_OVERALL_SAGEBLK_Zabb_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_OVERALL_SAGE_BLKboots_nk: Uniform_Base
	{
		scope=2;
		displayName="TRYK Jump suit no knee(SAGE)";
		picture="\tryk_unit\data\UI\UI_Overall_sage.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_OVERALL_SAGEBLK_nok_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_OVERALL_SAGE_BLKboots_nk_blk2: Uniform_Base
	{
		scope=2;
		displayName="TRYK Jump suit no knee 2(SAGE+BLK)";
		picture="\tryk_unit\data\UI\UI_Overall_sage.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_OVERALL_SAGEBLK_Zabb_2_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_OVERALL_SAGE: Uniform_Base
	{
		scope=2;
		displayName="TRYK Jump suit(SAGE)";
		picture="\tryk_unit\data\UI\UI_Overall_sage.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_OVERALL_sage_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TRYK_SUITS_BLK_F: Uniform_Base
	{
		scope=2;
		displayName="TRYK suit (BLK)";
		picture="\tryk_unit\data\UI_suits.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_SUITS_F";
			containerClass="Supply10";
			mass=40;
		};
	};
	class TRYK_SUITS_BR_F: Uniform_Base
	{
		scope=2;
		displayName="TRYK suit (BR)";
		picture="\tryk_unit\data\UI_suits.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_SUITS_B_F";
			containerClass="Supply10";
			mass=40;
		};
	};
	class H_HelmetB: ItemCore
	{
		armor="0";
		passThrough=0;
	};
	class TRYK_H_Helmet_JSDF: H_HelmetB
	{
		scope=2;
		displayName="TRYK Type18 Helmet (Type2camo)";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		picture="\TRYK_Uniforms\data\UI\icon_U_JSDF_Helmet_ca";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\JSDF_Helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_Helmet_CC: H_HelmetB
	{
		scope=2;
		displayName="TRYK MICH (ChocoChip)";
		picture="\TRYK_Uniforms\data\UI\icon_U_3CD_Helmet_ca";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\RangerHELMET.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_Helmet_WOOD: H_HelmetB
	{
		scope=2;
		displayName="TRYK MICH (Woodland)";
		picture="\TRYK_Uniforms\data\UI\icon_U_WOOD_Helmet_ca";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\WoodHELMET.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_Helmet_ACU: H_HelmetB
	{
		scope=2;
		displayName="TRYK MICH (UCP)";
		picture="\TRYK_Uniforms\data\UI\UI_ACU_HELMET";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\ACU_Helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_Helmet_MARPAT_Wood: H_HelmetB
	{
		scope=2;
		displayName="TRYK MICH (MARPAT Wood)";
		picture="\TRYK_Uniforms\data\UI\UI_MARPAT_HELMET";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\MARPAT_HELMET.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_Helmet_MARPAT_Desert: H_HelmetB
	{
		scope=2;
		displayName="TRYK MICH (MARPAT Desert)";
		picture="\TRYK_Uniforms\data\UI\UI_D_MARPAT_HELMET";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\Desert_MARPAT_HELMET.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_Helmet_MARPAT_Desert2: H_HelmetB
	{
		scope=2;
		displayName="TRYK MICH (MARPAT Desert2)";
		picture="\TRYK_Uniforms\data\UI\UI_D_MARPAT_HELMET";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\Desert_MARPAT_HELMET2.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_Helmet_3C: H_HelmetB
	{
		scope=2;
		displayName="TRYK MICH (3C)";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		picture="\TRYK_Uniforms\data\ui\icon_U_3C_Helmet_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\3c_helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_Booniehat_JSDF: H_HelmetB
	{
		scope=2;
		displayName="TRYK Booniehat (Type2camo)";
		model="\A3\Characters_F\Common\booniehat";
		picture="\TRYK_Uniforms\data\UI\icon_U_JSDF_Boonie_ca";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\JSDF_Boonie.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={6};
			armor=1;
			passThrough=0;
		};
	};
	class TRYK_H_Booniehat_3CD: H_HelmetB
	{
		scope=2;
		displayName="TRYK Booniehat (3CD)";
		model="\A3\Characters_F\Common\booniehat";
		picture="\TRYK_Uniforms\data\UI\icon_U_3CD_Booniehat_ca";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\3cd_booniehat.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={6};
			armor=1;
			passThrough=0;
		};
	};
	class TRYK_H_Booniehat_CC: H_HelmetB
	{
		scope=2;
		displayName="TRYK Booniehat (CC)";
		model="\A3\Characters_F\Common\booniehat";
		picture="\TRYK_Uniforms\data\UI\UI_booniehat_CC.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\booniehat_CC.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={6};
			armor=1;
			passThrough=0;
		};
	};
	class TRYK_H_Booniehat_WOOD: H_HelmetB
	{
		scope=2;
		displayName="TRYK Booniehat (WOOD)";
		model="\A3\Characters_F\Common\booniehat";
		picture="\TRYK_Uniforms\data\UI\icon_Wood_Boonie_ca";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\Wood_Boonie.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={6};
			armor=1;
			passThrough=0;
		};
	};
	class TRYK_H_Booniehat_MARPAT_WOOD: H_HelmetB
	{
		scope=2;
		displayName="TRYK Booniehat (MARPAT Wood)";
		model="\A3\Characters_F\Common\booniehat";
		picture="\TRYK_Uniforms\data\UI\UI_booniehat_MARPAT";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\booniehat_MARPAT.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={6};
			armor=1;
			passThrough=0;
		};
	};
	class TRYK_H_Booniehat_MARPAT_Desert: H_HelmetB
	{
		scope=2;
		displayName="TRYK Booniehat (MARPAT Desert)";
		model="\A3\Characters_F\Common\booniehat";
		picture="\TRYK_Uniforms\data\UI\UI_booniehat_desert_MARPAT";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\booniehat_D_MARPAT.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={6};
			armor=1;
			passThrough=0;
		};
	};
	class TRYK_H_Booniehat_AOR1: H_HelmetB
	{
		scope=2;
		displayName="TRYK Booniehat (AOR-1)";
		model="\A3\Characters_F\Common\booniehat";
		picture="\tryk_unit\data\ui\UI_Boonie_AOR1.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\booniehat_AOR1_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={6};
			armor=1;
			passThrough=0;
		};
	};
	class TRYK_H_Booniehat_AOR2: H_HelmetB
	{
		scope=2;
		displayName="TRYK Booniehat (AOR-2)";
		model="\A3\Characters_F\Common\booniehat";
		picture="\tryk_unit\data\ui\UI_Boonie_AOR2.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\booniehat_AOR2_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\booniehat";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={6};
			armor=1;
			passThrough=0;
		};
	};
	class TRYK_H_PASGT_BLK: H_HelmetB
	{
		scope=2;
		displayName="TRYK PASGT (black)";
		picture="\TRYK_Uniforms\data\UI\icon_u_PASGT_blk_ca";
		model="\tryk_unit\PASGT\PASGT";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\PASGT\do_helmets_BLK_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\tryk_unit\PASGT\PASGT";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_PASGT_OD: H_HelmetB
	{
		scope=2;
		displayName="TRYK PASGT (OD)";
		picture="\TRYK_Uniforms\data\UI\icon_u_PASGT_od_ca";
		model="\tryk_unit\PASGT\PASGT";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\PASGT\do_helmets_OD_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\tryk_unit\PASGT\PASGT";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_PASGT_COYO: H_HelmetB
	{
		scope=2;
		displayName="TRYK PASGT (coyote)";
		picture="\TRYK_Uniforms\data\UI\icon_u_PASGT_coyo_ca";
		model="\tryk_unit\PASGT\PASGT";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\PASGT\do_helmets_coyo_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\tryk_unit\PASGT\PASGT";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_PASGT_TAN: H_HelmetB
	{
		scope=2;
		displayName="TRYK PASGT (TAN)";
		picture="\TRYK_Uniforms\data\ui\icon_u_PASGT_tan_ca.paa";
		model="\tryk_unit\PASGT\PASGT";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\PASGT\do_helmets_TAN_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\tryk_unit\PASGT\PASGT";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_Helmet_Snow: H_HelmetB
	{
		scope=2;
		displayName="TRYK Snow helm Type1";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		picture="\tryk_unit\data\UI\icon_U_snow_Helmet_ca";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\SnowMarpat_HEL.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_WH: H_HelmetB
	{
		scope=2;
		displayName="TRYK Snow Helm Type2";
		picture="\tryk_unit\data\UI\icon_h_helmet_WH_ca";
		model="\a3\characters_f\BLUFOR\headgear_b_helmet_light.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\equip1_WH_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\a3\characters_f\BLUFOR\headgear_b_helmet_light.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_GR: H_HelmetB
	{
		scope=2;
		displayName="TRYK Light helmet(GR)";
		picture="\tryk_unit\data\UI\icon_h_helmet_GR_ca.paa";
		model="\a3\characters_f\BLUFOR\headgear_b_helmet_light.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\equip1_GR_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\a3\characters_f\BLUFOR\headgear_b_helmet_light.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_AOR1: H_HelmetB
	{
		scope=2;
		displayName="TRYK Light helmet(AOR1)";
		picture="\TRYK_Uniforms\data\ui\UI_AOR1_HELMET.paa";
		model="\a3\characters_f\BLUFOR\headgear_b_helmet_light.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR1H"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\a3\characters_f\BLUFOR\headgear_b_helmet_light.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_AOR2: H_HelmetB
	{
		scope=2;
		displayName="TRYK Light helmet(AOR2)";
		picture="\TRYK_Uniforms\data\ui\UI_AOR2_HELMET.paa";
		model="\a3\characters_f\BLUFOR\headgear_b_helmet_light.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\AOR2H"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\a3\characters_f\BLUFOR\headgear_b_helmet_light.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class TRYK_H_DELTAHELM_NV: H_HelmetB
	{
		scope=2;
		displayName="TRYK protec helmet ";
		picture="\tryk_unit\data\UI\icon_u_prohelm_ca";
		model="\tryk_unit\data\PROHEL";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\prohelmet_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			uniformModel="\tryk_unit\data\PROHEL";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=3;
			passThrough=0.5;
			explosionShielding=0.40000001;
		};
	};
	class TRYK_H_EARMUFF: H_HelmetB
	{
		scope=2;
		displayName="TRYK Earmuffs on head";
		picture="\tryk_unit\data\UI\UI_Earmuffs.paa";
		model="\tryk_unit\data\EarmuffsH.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="\tryk_unit\data\EarmuffsH.p3d";
			modelSides[]={2,3};
			armor=1;
			passThrough=0.5;
			explosionShielding=0;
		};
	};
	class TRYK_H_TACEARMUFF_H: H_HelmetB
	{
		scope=2;
		displayName="TRYK TAC EARMUFFS on head";
		picture="\Shemagh\data\UI_tacearmuff.paa";
		model="\tryk_unit\data\tacEarmuffsH";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\PASGT\do_helmets_OD_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="\tryk_unit\data\tacEarmuffsH";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=1;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_Bandana_H: H_HelmetB
	{
		scope=2;
		displayName="TRYK Bandana";
		picture="\ESSGoggles\Data\UI_BANDANA.paa";
		model="ESSGoggles\Bandana.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			allowedSlots[]={901,605};
			uniformModel="ESSGoggles\Bandana.p3d";
			modelSides[]={2,3};
			armor=1;
			passThrough=0.5;
			explosionShielding=0.1;
		};
	};
	class TRYK_H_Bandana_wig: H_HelmetB
	{
		scope=2;
		displayName="TRYK Bandana+wig";
		picture="\ESSGoggles\Data\UI_wig_b.paa";
		model="ESSGoggles\Band_wig.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			allowedSlots[]={901,605};
			uniformModel="ESSGoggles\Band_wig.p3d";
			modelSides[]={2,3};
			armor=1;
			passThrough=0.5;
			explosionShielding=0.1;
		};
	};
	class TRYK_H_Bandana_wig_g: H_HelmetB
	{
		scope=2;
		displayName="TRYK Bandana+wig+Goggles";
		picture="\ESSGoggles\Data\UI_wig_b.paa";
		model="\ESSGoggles\Band_wig_g.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			allowedSlots[]={901,605};
			uniformModel="\ESSGoggles\Band_wig_g.p3d";
			modelSides[]={2,3};
			armor=1;
			passThrough=0.5;
			explosionShielding=0.1;
		};
	};
	class TRYK_H_wig: H_HelmetB
	{
		scope=2;
		displayName="TRYK wig";
		picture="\tryk_unit\data\ui\UI_wig.paa";
		model="ESSGoggles\wig.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			allowedSlots[]={901,605};
			uniformModel="\ESSGoggles\wig.p3d";
			modelSides[]={2,3};
			armor=1;
			passThrough=0.5;
			explosionShielding=0.1;
		};
	};
	class TRYK_H_headset2: H_HelmetB
	{
		scope=2;
		displayName="TRYK HEAD SET2";
		picture="\tryk_unit\data\ui\UI_tac2headset.paa";
		model="ESSGoggles\headset2.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=1;
			allowedSlots[]={901,605};
			uniformModel="ESSGoggles\headset2.p3d";
			modelSides[]={2,3};
			armor=0;
			passThrough=0.5;
			explosionShielding=0.1;
		};
	};
	class TRYK_H_ghillie_over: H_HelmetB
	{
		scope=2;
		displayName="TRYK ghillie suits(overall)";
		picture="\ESSGoggles\Data\UI_ghillie.paa";
		model="ESSGoggles\ghillie_over.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="ESSGoggles\ghillie_over.p3d";
			modelSides[]={2,3};
			armor=1;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_ghillie_top: H_HelmetB
	{
		scope=2;
		displayName="TRYK ghillie suits(top)";
		picture="\ESSGoggles\Data\UI_ghillie.paa";
		model="ESSGoggles\ghillie_top.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="ESSGoggles\ghillie_top.p3d";
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_ghillie_top_headless: H_HelmetB
	{
		scope=2;
		displayName="TRYK ghillie suits(top_headless)";
		picture="\ESSGoggles\Data\UI_ghillie.paa";
		model="ESSGoggles\ghillie_top_headoff.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="ESSGoggles\ghillie_top_headoff.p3d";
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_ghillie_over_green: H_HelmetB
	{
		scope=2;
		displayName="TRYK ghillie suits(green overall)";
		picture="\ESSGoggles\Data\UI_GR_ghillie.paa";
		model="ESSGoggles\ghillie_over2.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="ESSGoggles\ghillie_over2.p3d";
			modelSides[]={2,3};
			armor=1;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_ghillie_top_green: H_HelmetB
	{
		scope=2;
		displayName="TRYK ghillie suits(green top)";
		picture="\ESSGoggles\Data\UI_GR_ghillie.paa";
		model="ESSGoggles\ghillie_top2.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="ESSGoggles\ghillie_top2.p3d";
			modelSides[]={2,3};
			armor=1;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_ghillie_top_headless_green: H_HelmetB
	{
		scope=2;
		displayName="TRYK ghillie suits(green top_headless)";
		picture="\ESSGoggles\Data\UI_GR_ghillie.paa";
		model="ESSGoggles\ghillie_top_headoff2.p3d";
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="ESSGoggles\ghillie_top_headoff2.p3d";
			modelSides[]={2,3};
			armor=1;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_woolhat: H_HelmetB
	{
		scope=2;
		displayName="TRYK Woolcap";
		picture="\a3\characters_f\data\ui\icon_h_cap_beanie_ca.paa";
		model="tryk_unit\data\woolhat.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\wh\woolhat_black_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\woolhat.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_woolhat_CW: H_HelmetB
	{
		scope=2;
		displayName="TRYK Woolcap(CW)";
		picture="\a3\characters_f\data\ui\icon_h_cap_beanie_ca.paa";
		model="tryk_unit\data\woolhat.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\woolhat_black_cw.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\woolhat.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_woolhat_WH: H_HelmetB
	{
		scope=2;
		displayName="TRYK Woolcap(WH)";
		picture="\a3\characters_f\data\ui\icon_h_cap_beanie_ca.paa";
		model="tryk_unit\data\woolhat.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\woolhat_WH_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\woolhat.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_woolhat_br: H_HelmetB
	{
		scope=2;
		displayName="TRYK Woolcap(br)";
		picture="\a3\characters_f\data\ui\icon_h_cap_beanie_ca.paa";
		model="tryk_unit\data\woolhat.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\woolhat_br.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\woolhat.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_woolhat_cu: H_HelmetB
	{
		scope=2;
		displayName="TRYK Woolcap(CU)";
		picture="\a3\characters_f\data\ui\icon_h_cap_beanie_ca.paa";
		model="tryk_unit\data\woolhat.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\woolhat_black_cu.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\woolhat.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_woolhat_tan: H_HelmetB
	{
		scope=2;
		displayName="TRYK Woolcap(tan)";
		picture="\a3\characters_f\data\ui\icon_h_cap_beanie_ca.paa";
		model="tryk_unit\data\woolhat.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\woolhat_tan.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\woolhat.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_headsetcap: H_HelmetB
	{
		scope=2;
		displayName="TRYK headsetcap(TAN)";
		picture="\tryk_unit\data\ui\UI_headsetcap.paa";
		model="tryk_unit\data\headsetcap.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ESSGoggles\Data\capb_tan_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\headsetcap.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_headsetcap_blk: H_HelmetB
	{
		scope=2;
		displayName="TRYK headsetcap(BLK)";
		picture="\tryk_unit\data\ui\UI_headsetcap.paa";
		model="tryk_unit\data\headsetcap.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ESSGoggles\Data\capb_blk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\headsetcap.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_headsetcap_od: H_HelmetB
	{
		scope=2;
		displayName="TRYK headsetcap(OD)";
		picture="\tryk_unit\data\ui\UI_headsetcap.paa";
		model="tryk_unit\data\headsetcap.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ESSGoggles\Data\capb_od_Us_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\headsetcap.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_pakol: H_HelmetB
	{
		scope=2;
		displayName="TRYK Pakol+headset(BR+headset)";
		picture="\tryk_unit\data\ui\UI_pakol.paa";
		model="tryk_unit\data\pakol.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_civil01_4_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\pakol.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_pakol2: H_HelmetB
	{
		scope=2;
		displayName="TRYK Pakol(BR)";
		picture="\tryk_unit\data\ui\UI_pakol.paa";
		model="tryk_unit\data\pakol2.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\tk\tak_civil01_4_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\pakol2.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={2,3};
			armor=0.5;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_H_LHS_HEL_G: H_HelmetB
	{
		scope=2;
		displayName="TRYK DECK CREW HELMET(GR)";
		picture="\tryk_unit\data\ui\UI_LHS_HEL.paa";
		model="tryk_unit\data\pakol2.p3d";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={901,605};
			uniformModel="tryk_unit\data\LHS_HEL";
			modelSides[]={2,3};
			armor=10;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class Vest_Camo_Base: ItemCore
	{
	};
	class InventoryItem_Base_F;
	class VestItem: InventoryItem_Base_F
	{
	};
	class TRYK_V_harnes_blk_L: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK harnes(black)";
		picture="\a3\characters_f\data\ui\icon_v_harnesso_brn_ca.paa";
		model="\A3\Characters_F\OPFOR\equip_o_vest01";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\OPFOR\Data\clothing_rus_co.paa",
			"\a3\characters_f\OPFOR\Data\tech_rus_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\OPFOR\equip_o_vest01";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			containerClass="Supply140";
			mass=30;
			armor=0;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_V_harnes_od_L: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK harnes(OD)";
		picture="\a3\characters_f\data\ui\icon_v_harnesso_brn_ca.paa";
		model="\A3\Characters_F\OPFOR\equip_o_vest01";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\clothing_od_co.paa",
			"tryk_unit\data\tech_od_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\OPFOR\equip_o_vest01";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			containerClass="Supply140";
			mass=30;
			armor=0;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_V_harnes_TAN_L: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK harnes(TAN)";
		picture="\a3\characters_f\data\ui\icon_v_harnesso_brn_ca.paa";
		model="\A3\Characters_F\OPFOR\equip_o_vest01";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\clothing_TN_co.paa",
			"tryk_unit\data\tech_TN_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\OPFOR\equip_o_vest01";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			containerClass="Supply140";
			mass=30;
			armor=0;
			passThrough=0.5;
			explosionShielding=0.2;
		};
	};
	class TRYK_V_PlateCarrier_blk_L: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK GA Carrier Rig Light(black)";
		picture="\TRYK_Uniforms\data\ui\icon_v_GAPC_blk_ca";
		model="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\equip_ia_vest01_black_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply140";
			mass=70;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class TRYK_V_PlateCarrier_wood_L: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK GA Carrier Rig Light(wood)";
		picture="\TRYK_Uniforms\data\ui\icon_v_PC_wood_ca";
		model="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\equip_ia_vest01_wood_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply140";
			mass=70;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class TRYK_V_PlateCarrier_ACU_L: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK GA Career Rig Light(UCP)";
		picture="\TRYK_Uniforms\data\ui\Ui_ACU_VEST";
		model="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\ACU_PlateCarrier.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply140";
			mass=70;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class TRYK_V_PlateCarrier_coyo_L: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK GA Career Rig Light (coyote)";
		picture="\TRYK_Uniforms\data\ui\icon_v_GAPC_coyo_ca";
		model="\A3\Characters_F_Beta\INDEP\equip_ia_vest01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TRYK_Uniforms\data\equip_ia_vest01_coyo_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[]=
			{
				"camo"
			};
			containerClass="Supply140";
			mass=70;
			armor=30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class TRYK_V_Bulletproof: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK Bulletproof Vest(WH) ";
		picture="\TRYK_Uniforms\data\ui\UI_BPV_WH.paa";
		model="\tryk_unit\data\Bulletproof_vest";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\tryk_unit\data\Bulletproof_vest";
			hiddenSelections[]={};
			containerClass="Supply0";
			mass=40;
			armor=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class TRYK_V_Bulletproof_BLK: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK Bulletproof Vest(BLK) ";
		picture="\TRYK_Uniforms\data\ui\UI_BPV_BLK.paa";
		model="\tryk_unit\data\Bulletproof_vest";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\bp\armour_BLK_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\tryk_unit\data\Bulletproof_vest";
			hiddenSelections[]=
			{
				"camo2"
			};
			containerClass="Supply0";
			mass=40;
			armor=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class TRYK_V_Bulletproof_BL: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK Bulletproof Vest(BL) ";
		picture="\TRYK_Uniforms\data\ui\UI_BPV_BL.paa";
		model="\tryk_unit\data\Bulletproof_vest";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"tryk_unit\data\bp\armour_BL_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\tryk_unit\data\Bulletproof_vest";
			hiddenSelections[]=
			{
				"camo2"
			};
			containerClass="Supply0";
			mass=40;
			armor=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class TRYK_V_IOTV_BLK: Vest_Camo_Base
	{
		scope=2;
		displayName="TRYK IOTV light Vest(BLK) ";
		picture="\TRYK_Uniforms\data\ui\UI_BPV_BLK.paa";
		model="\tryk_unit\data\iotv_vest";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		class ItemInfo: VestItem
		{
			uniformModel="\tryk_unit\data\iotv_vest";
			hiddenSelections[]={};
			containerClass="Supply100";
			mass=40;
			armor=20;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
};
class cfgMods
{
	author="Zabb";
	timepacked="1513908310";
};
