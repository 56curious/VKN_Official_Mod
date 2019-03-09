class CfgPatches {
    class VKN_modules {
        name = VKN_Modules;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {};

		requiredAddons[] =
		{
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Functions_F",
			"A3_Functions_F_Curator",
			"A3_Functions_F_Mark",
			"A3_Modules_F",
			"A3_Modules_F_Curator"
		};
	};
};
/*
class CfgFactionClasses
{
	class NO_CATEGORY;
	class CURF_Base: NO_CATEGORY
	{
		displayName = " Curious's Framework";
	};
};


class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
		};
	};
	class CURF_Modules_Base: Module_F
	{
		mapSize=1;
		author="Curious";
		vehicleClass="Modules";
		category="CURF_Base";
		side=7;
		scope=1;
		scopeCurator=2;
		displayName="CURF Module Base";
		icon="\CURF_Envision\CURF_f_data\CURF_Small.paa";
		picture="\CURF_Envision\CURF_f_data\CURF_Small.paa";
		portrait="";
		function="";
		functionPriority=1;
		isGlobal=2;
		isTriggerActivated=0;
		isDisposable=0;
		dlc="CURF_ENVISION";
		class Arguments
		{
		};
		class ModuleDescription: ModuleDescription
		{
			description="CURF Module Base";
		};
	};

	class CURF_Apply_Textures: CURF_Modules_Base
	{
		displayName = "Apply Texture";
		curatorCanAttach=1;
		function = "CURF_fnc_applyTexture";
	};
	class CURF_Spawn_Jukebox: CURF_Modules_Base
	{
		displayName ="Spawn Jukebox (Can't be stopped)"
		function = "CURF_fnc_spawnJukebox";
	};
	class CURF_Spawn_AI: CURF_Modules_Base
	{
		displayName = "Spawn AI";
		function = "CURF_fnc_spawnAI";
	};
};
*/




















class CfgGroups
{
	class Empty
	{
		side = 8;
		name = "Compositions";
		class by_X39
		{
			name = "by X39";
			class FOBs
			{
				name = "FOBs";
				class ION_FOB_ALPHA
				{
					name = "ION FOB ALPHA";
					class Object1 {side=8;vehicle="B_soldier_M_F";rank="";position[]={-0.0166016,0.959473,-0.0470161};dir=88.8277;};
					class Object2 {side=8;vehicle="B_soldier_M_F";rank="";position[]={0.0258789,-1.0415,0.0510216};dir=88.8277;};
					class Object3 {side=8;vehicle="B_engineer_F";rank="";position[]={2.00391,0,0};dir=88.8277;};
					class Object4 {side=8;vehicle="B_engineer_F";rank="";position[]={1.96338,1.99951,-0.0979767};dir=88.8277;};
					class Object5 {side=8;vehicle="B_engineer_F";rank="";position[]={2.04492,-2.00098,0.0980339};dir=88.8277;};
					class Object6 {side=8;vehicle="B_soldier_M_F";rank="";position[]={-0.0576172,2.95898,-0.144989};dir=88.8277;};
					class Object7 {side=8;vehicle="B_soldier_M_F";rank="";position[]={0.065918,-3.03955,0.0894508};dir=88.8277;};
					class Object8 {side=8;vehicle="B_soldier_exp_F";rank="";position[]={3.9834,1.0415,-0.05793};dir=88.8277;};
					class Object9 {side=8;vehicle="B_Pilot_F";rank="";position[]={-4.01172,-0.928711,-0.110329};dir=89.3585;};
					class Object10 {side=8;vehicle="B_soldier_exp_F";rank="";position[]={4.02539,-0.959961,0.0381012};dir=88.8277;};
					class Object11 {side=8;vehicle="B_Pilot_F";rank="";position[]={-4.03223,1.06934,-0.111343};dir=89.3585;};
					class Object12 {side=8;vehicle="B_Pilot_F";rank="";position[]={-3.98877,-2.93018,-0.109222};dir=89.3585;};
					class Object13 {side=8;vehicle="B_soldier_M_F";rank="";position[]={-0.0966797,4.95801,-0.215454};dir=88.8277;};
					class Object14 {side=8;vehicle="B_soldier_exp_F";rank="";position[]={3.94092,3.04004,-0.153755};dir=88.8277;};
					class Object15 {side=8;vehicle="B_soldier_exp_F";rank="";position[]={4.06445,-2.95801,0.134071};dir=88.8277;};
					class Object16 {side=8;vehicle="B_soldier_M_F";rank="";position[]={0.106934,-5.03906,0.0914841};dir=88.8277;};
					class Object17 {side=8;vehicle="B_Pilot_F";rank="";position[]={-4.05566,3.06982,-0.150433};dir=89.3585;};
					class Object18 {side=8;vehicle="B_soldier_AT_F";rank="";position[]={5.9834,1.08105,-0.157852};dir=88.8277;};
					class Object19 {side=8;vehicle="B_soldier_AT_F";rank="";position[]={6.02393,-0.916992,-0.0619392};dir=88.8277;};
					class Object20 {side=8;vehicle="B_soldier_AT_F";rank="";position[]={5.94287,3.08105,-0.215454};dir=88.8277;};
					class Object21 {side=8;vehicle="B_soldier_AT_F";rank="";position[]={6.06592,-2.91846,0.0340652};dir=88.8277;};
					class Object22 {side=8;vehicle="B_soldier_AT_F";rank="";position[]={5.90039,5.08154,-0.215454};dir=88.8277;};
					class Object23 {side=8;vehicle="B_soldier_AT_F";rank="";position[]={6.10645,-4.91797,0.130066};dir=88.8277;};
					class Object24 {side=8;vehicle="B_Soldier_GL_F";rank="";position[]={7.98291,1.125,-0.215454};dir=88.8277;};
					class Object25 {side=8;vehicle="B_Soldier_GL_F";rank="";position[]={8.02393,-0.877441,-0.161888};dir=88.8277;};
					class Object26 {side=8;vehicle="B_Soldier_GL_F";rank="";position[]={7.94238,3.12451,-0.215454};dir=88.8277;};
					class Object27 {side=8;vehicle="B_Soldier_GL_F";rank="";position[]={8.06445,-2.87549,-0.0659485};dir=88.8277;};
					class Object28 {side=8;vehicle="B_Soldier_GL_F";rank="";position[]={7.90186,5.12158,-0.215454};dir=88.8277;};
					class Object29 {side=8;vehicle="B_Soldier_GL_F";rank="";position[]={8.10547,-4.87451,0.029995};dir=88.8277;};
					class Object30 {side=8;vehicle="B_soldier_AR_F";rank="";position[]={9.98291,1.1626,-0.215454};dir=88.8277;};
					class Object31 {side=8;vehicle="B_soldier_AR_F";rank="";position[]={10.0225,-0.835449,-0.215454};dir=88.8277;};
					class Object32 {side=8;vehicle="B_soldier_AR_F";rank="";position[]={9.94238,3.16211,-0.215454};dir=88.8277;};
					class Object33 {side=8;vehicle="B_soldier_AR_F";rank="";position[]={10.0645,-2.83691,-0.165836};dir=88.8277;};
					class Object34 {side=8;vehicle="B_soldier_AR_F";rank="";position[]={9.90039,5.16455,-0.215454};dir=88.8277;};
					class Object35 {side=8;vehicle="B_soldier_AR_F";rank="";position[]={10.106,-4.83594,-0.0699234};dir=88.8277;};
					class Object36 {side=8;vehicle="B_medic_F";rank="";position[]={11.9814,1.20557,-0.215454};dir=88.8277;};
					class Object37 {side=8;vehicle="B_medic_F";rank="";position[]={12.0229,-0.796875,-0.215454};dir=88.8277;};
					class Object38 {side=8;vehicle="B_medic_F";rank="";position[]={11.9409,3.20508,-0.215454};dir=88.8277;};
					class Object39 {side=8;vehicle="B_medic_F";rank="";position[]={12.0635,-2.79395,-0.215454};dir=88.8277;};
					class Object40 {side=8;vehicle="B_medic_F";rank="";position[]={11.9004,5.20361,-0.215454};dir=88.8277;};
					class Object41 {side=8;vehicle="B_medic_F";rank="";position[]={12.104,-4.79346,-0.169933};dir=88.8277;};
					class Object42 {side=8;vehicle="B_Soldier_F";rank="";position[]={13.9829,1.24561,-0.215591};dir=88.8277;};
					class Object43 {side=8;vehicle="B_Soldier_F";rank="";position[]={14.0225,-0.752441,-0.21563};dir=88.8277;};
					class Object44 {side=8;vehicle="B_Soldier_F";rank="";position[]={13.9404,3.24414,-0.215549};dir=88.8277;};
					class Object45 {side=8;vehicle="B_Soldier_F";rank="";position[]={14.0635,-2.75439,-0.215672};dir=88.8277;};
					class Object46 {side=8;vehicle="B_Soldier_F";rank="";position[]={13.8994,5.24609,-0.215454};dir=88.8277;};
					class Object47 {side=8;vehicle="B_Soldier_F";rank="";position[]={14.1055,-4.75342,-0.215714};dir=88.8277;};
					class Object48 {side=8;vehicle="B_Soldier_F";rank="";position[]={13.8604,7.24414,-0.215454};dir=88.8277;};
					class Object49 {side=8;vehicle="B_Soldier_F";rank="";position[]={14.1445,-6.75244,-0.215454};dir=88.8277;};
					class Object50 {side=8;vehicle="B_Soldier_TL_F";rank="";position[]={15.9805,1.28711,-0.21759};dir=88.8277;};
					class Object51 {side=8;vehicle="B_Soldier_TL_F";rank="";position[]={16.0229,-0.713379,-0.217632};dir=88.8277;};
					class Object52 {side=8;vehicle="B_Soldier_TL_F";rank="";position[]={15.9395,3.28711,-0.21656};dir=88.8277;};
					class Object53 {side=8;vehicle="B_Soldier_TL_F";rank="";position[]={16.062,-2.7124,-0.21767};dir=88.8277;};
					class Object54 {side=8;vehicle="B_spotter_F";rank="";position[]={13.9316,9.25488,-0.215454};dir=122.172;};
					class Object55 {side=8;vehicle="B_Soldier_TL_F";rank="";position[]={15.8999,5.28467,-0.215454};dir=88.8277;};
					class Object56 {side=8;vehicle="B_Soldier_TL_F";rank="";position[]={16.103,-4.7124,-0.217712};dir=88.8277;};
					class Object57 {side=8;vehicle="B_ghillie_ard_F";rank="";position[]={15.0996,-8.84912,-0.215454};dir=43.5898;};
					class Object58 {side=8;vehicle="B_Soldier_SL_F";rank="";position[]={18.001,0.327637,-0.219524};dir=88.8277;};
					class Object59 {side=8;vehicle="B_Soldier_SL_F";rank="";position[]={17.9604,2.32715,-0.217522};dir=88.8277;};
					class Object60 {side=8;vehicle="B_Soldier_SL_F";rank="";position[]={18.0415,-1.67188,-0.21965};dir=88.8277;};
					class Object61 {side=8;vehicle="B_ghillie_ard_F";rank="";position[]={14.9951,10.9482,-0.215454};dir=122.172;};
					class Object62 {side=8;vehicle="B_spotter_F";rank="";position[]={16.5493,-10.229,-0.215454};dir=43.5898;};
					class Object63 {side=8;vehicle="B_Soldier_SL_F";rank="";position[]={20.001,0.368652,-0.219482};dir=88.8277;};
				};
			};
		};
	};
};