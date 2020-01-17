
#define _ARMA_

class CfgPatches
{
	class VKN_Postprocess
	{
		author = "Jonmo";
		units[] = {"ModulePostprocess_F"};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F_Curator","A3_Modules_F_Events"};
	};
};
class CfgFunctions
{
	class A3_Modules_F_Curator
	{
		class Effects
		{
			file = "a3\modules_f_curator\effects\functions";
			class modulePostprocess{};
		};
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
		};
	};
	class ModulePostprocess_F: Module_F	
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ModulePostprocess_F";
		scope = 2;
		scopeCurator = 2;
		isTriggerActivated = 1;
		category = "Environment";
		displayName = "$STR_A3_CfgVehicles_ModulePostprocess_F";
		function = "BIS_fnc_modulePostprocess";
		icon = "\a3\Modules_F_Curator\Data\iconPostprocess_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitPostprocess_ca.paa";
		curatorInfoType = "RscDisplayAttributesModulePostprocess";
		class Arguments
		{
			class Template
			{
				displayName = "$STR_A3_CfgVehicles_ModulePostprocess_F_Arguments_Template";
				description = "";
				class Values
				{
					class Default
					{
						name = "$STR_A3_CfgPostProcessTemplates_Default_0";
						value = "Default";
						default = 1;
					};
					class Survive
					{
						name = "$STR_A3_CfgPostProcessTemplates_Survive_0";
						value = "Survive";
						default = 0;
					};
					class RealIsBrown
					{
						name = "$STR_A3_CfgPostProcessTemplates_RealIsBrown_0";
						value = "RealIsBrown";
						default = 0;
					};
					class BlackAndWhite
					{
						name = "$STR_A3_CfgPostProcessTemplates_BlackAndWhite_0";
						value = "BlackAndWhite";
						default = 0;
					};
					class Mediterranean
					{
						name = "$STR_A3_CfgPostProcessTemplates_Mediterranean_0";
						value = "Mediterranean";
						default = 0;
					};
					class VKN_Cold
					{
						name = "Cold";
						value = "VKN_Cold";
						default = 0;
					};
					class VKN_Sunset
					{
						name = "Sunset";
						value = "VKN_Sunset";
						default = 0;
					};
					class VKN_Sunrise
					{
						name = "Sunrise";
						value = "VKN_Sunrise";
						default = 0;
					};
					class ASCZ_Eerie
					{
						name = "Eerie";
						value = "VKN_Eerie";
						default = 0;
					};
					class VKN_Murky
					{
						name = "Murky";
						value = "VKN_Murky";
						default = 0;
					};
					class VKN_Nightowl
					{
						name = "Nightowl";
						value = "VKN_Nightowl";
						default = 0;
					};
					class VKN_Dark
					{
						name = "Dark";
						value = "VKN_Dark";
						default = 0;
					};
					class VKN_Cinematic
					{
						name = "Dark";
						value = "VKN_Dark";
						default = 0;
					};
					class VKN_Summer
					{
						name = "Summer";
						value = "VKN_Summer";
						default = 0;
					};
					class VKN_RedDawn
					{
						name = "Red Dawn";
						value = "VKN_Summer";
						default = 0;
					};
					class VKN_WTF
					{
						name = "WTF";
						value = "VKN_WTF";
						default = 0;
					};
				};
			};
		};
	};
};
class CfgPostProcessTemplates
{
	class Default
	{
		colorCorrections[] = {1,1,0,	{0,0,0,0},	{1,1,1,1},	{0,0,0,0}};
		filmGrain[] = {0,0,0,0,0};
	};
	class EastWind
	{
		colorCorrections[] = {1,1.08,-0.06,	{0.5,0.5,0.5,0},	{1.0,1.0,1.0,1.21},	{0.09,0.09,0.09,0.0}};
	};
	class VKN_Cold
	{
		displayName = "Cold";
		colorCorrections[] = {1,0.7,-0.04,	{0,0,-0.31,-0.35},	{1,1,1,1},	{0,0,0,0}};
	};
	class VKN_Sunset
	{
		displayName = "Sunset";
		colorCorrections[] = {1,1.1,0.0,	{0.0,0.0,0.0,0.0},	{1.0,0.7,0.6,0.7},	{0.2,0.6,0.1,0.0}};
	};
	class VKN_Sunrise
	{
		displayName = "Sunrise";
		colorCorrections[] = {1,1.1,0.0,	{0.0,0.0,0.0,0.0},	{0.5,0.3,1,0.7},	{0.2,0.6,0.1,0.0}};
	};
	class VKN_Eerie
	{
		displayName = "Eerie";
		colorCorrections[] = {1.0,1.0,0.0,	{0.2,0.2,1.0,0.0},	{1,0.5,1,0.7},	{0.5,0.3,1.0,-0.1}};
	};
	class VKN_Murky
	{
		displayName = "Murky";
		colorCorrections[] = {1,1,0,	{-0.73,-0.05,-0.81,0.16},	{-0.57,-0.77,-1.3,1.1},	{0,0,0,0}};
	};
	class VKN_Nightowl
	{
		displayName = "NightOwl";
		colorCorrections[] = {1,1.08,0,	{0.2,0.2,1.0,0.0},	{1,0.663,0.596,0.6},	{0.5,0.3,1.0,-0.1}};
	};
	class VKN_Dark
	{
		displayName = "Complete darkness";
		colorCorrections[] = {0,1,0,	{0,0,0,0},	{1,1,1,1},	{0,0,0,0}};
	};
		class VKN_Cinematic
	{
		displayName = "Cinematic";
		colorCorrections[] = {1,1.1,-0.2,	{0,0,0,0},	{1,0.74,0.74,1.25},	{0,0,0,0}};
	};
		class VKN_Summer
	{
		displayName = "Summer";
		colorCorrections[] = {1,0.87,0.12,	{0.53,1.08,1.42,-0.19},	{1,1,1,1},	{0,0,0,0}};
	};
		class VKN_RedDawn
	{
		displayName = "Red Dawn";
		colorCorrections[] = {1.1,1.1,0,	{1.5,0,0,0.08},	{0.8,1,1,1.25},	{1.17,0.33,0.33,0}};
	};
		class VKN_WTF
	{
		displayName = "WTF";
		colorCorrections[] = {1.02,1.04,-0.02,	{0.92,-0.83,-0.18,0.5},	{2.12,-2.62,3.69,-0.11},	{-1.04,-0.04,0.43,0.54}};
	};
};
