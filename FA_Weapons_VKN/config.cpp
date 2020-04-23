/*
File:
config.cpp - FA_Weapons_VKN

Author:
Luca - https://steamcommunity.com/id/7112015/

Made for:
Viking PMC Mod

Model Sources:
https://www.cgtrader.com/3d-models/military/gun/akm-model-and-textures-d57f1daa31fedfe78f111ace718dd32b
https://www.cgtrader.com/3d-models/military/gun/ak-74-093b2b06-e36c-4130-ac62-9162c96d2c4c
https://sketchfab.com/3d-models/mp5-submachinegun-2a9ce66fe96643fc8f20927401e5054c
https://sketchfab.com/3d-models/svd-dragunov-updated-d4a9412275aa4974b146ad8ce9dc5fc2
https://sketchfab.com/3d-models/vss-vintorez-18e1f60286d346728f650984f4ae70aa
https://www.cgtrader.com/3d-models/military/gun/ak5c-rifle

Documentation:
Config files for them gunz, what else m8?

Usage Agreement:
Permission is hereby given to the Viking PMC Mod to make use of the weapons and files within this pbo.

Viking PMC does not have ownership of the included contents and as such are not permitted to re-distribute any of the included files, nor to grant permission to others to make use of them.
Furthermore it is forbidden to change/remove any of the authors tagged, be that me (Luca) or the original 3D-Artists whose work has been used in the creation of these weapons.
It is also not allowed to remove or change any of the URLs that link to the original sourcefiles.

Usage of these files on monetized servers/communities is prohibited, unless permitted BI and all other mod authors whose work is being used.

This pbo file must be kept and not renamed, and all its contents must remain within, however they may be altered as long as the process of doing so does not violate the agreement in any form or way.
Viking PMC are permitted to edit/change values, animations, sounds, textures, etc. as they see fit as long as it does not violate any other points of the agreement.
This includes but is not limted to: textures, config-files, 3D-models.

I (Luca) do keep the right to cancel the permitted use of my work at any point without further explanation if deemed necessary, this requires the Viking PMC mod to remove any of the files based on, and all files included within, this pbo from their mod as soon as possible (best case: within 24-48h).
*/

#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class FA_Weapons_VKN
	{
		author = "Luca";
		requiredaddons[] = {"A3_Weapons_F","A3_Data_F"};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {"VKN_AK5C", "VKN_VSS"};
		magazines[] = {"VKN_10Rnd_762x54mm_Mag",	"VKN_20Rnd_9x39mm_Mag"};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class SlotInfo;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class UnderBarrelSlot;
class GunParticles;

class CfgWeapons
{
	class Rifle_Base_F;

	class FA_Base_Rifle_VKN : Rifle_Base_F {
		class WeaponSlotsInfo {
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
/*
//AKM - Source: https://www.cgtrader.com/3d-models/military/gun/akm-model-and-textures-d57f1daa31fedfe78f111ace718dd32b
	class VKN_AKM: FA_Base_Rifle_VKN
	{
	    scope = 2;
		author = "Luca, Author: chamferzone";
		maxZeroing = 800;
		picture = "\FA_Weapons_VKN\data\icons\icon_akm_ca.paa";
		displayName = "AKM";
		descriptionShort = "AKM - Assault Rifle <br/>Caliber: 7.62x39mm";
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F"};
		model = "FA_Weapons_VKN\data\akm\AKM.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"FA_Weapons_VKN\data\akm\textures\akm_co.paa"};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_firemode",0.6,1,5};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_dry", 0.6,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",1,1,10};
		reloadAction = "GestureReloadAKM";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\AKM\Data\Anim\akm.rtm"};
		inertia = 0.6;
		recoil = "recoil_akm";
		modes[] = {"FullAuto", "Single"};

		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]={"AK47_Shot_SoundSet","AK47_tail_SoundSet","AK47_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]={"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			reloadTime=0.1;
			dispersion = 0.00145;
		};

		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]={"AK47_Shot_SoundSet","AK47_tail_SoundSet","AK47_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]={"AK12_silencerShot_SoundSet","AK12_silencerTail_SoundSet","AK12_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.1;
			dispersion = 0.00145;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 120;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B","muzzle_snds_B_khk_F","muzzle_snds_B_snd_F","muzzle_snds_B_arid_F","muzzle_snds_B_lush_F"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_Aco","optic_Aco_smg","optic_ACO_grn_smg","optic_ACO_grn","optic_Holosight_arid_F","optic_Holosight_lush_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_khk_F","optic_Holosight_smg_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_blk_F","optic_MRCO","optic_Hamr","optic_Hamr_khk_F","optic_Arco","optic_Arco_blk_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Arco_ghex_F","optic_Arco_AK_blk_F","optic_Arco_AK_arid_F","optic_Arco_AK_lush_F","optic_ERCO_blk_F","optic_ERCO_snd_F","optic_ERCO_khk_F","optic_DMS","optic_DMS_ghex_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_AMS","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_hex","optic_KHS_tan","optic_KHS_old","optic_SOS","optic_SOS_khk_F","optic_LRPS","optic_LRPS_tna_F","optic_LRPS_ghex_F","optic_Nightstalker","optic_NVS","optic_tws","optic_tws_mg"};
				iconScale = 0.1;
			};
			class PointerSlot : SlotInfo
			{
			    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight"};
				iconScale = 0.1;
			};
		};
    };

//AK74M - Source: https://www.cgtrader.com/3d-models/military/gun/ak-74-093b2b06-e36c-4130-ac62-9162c96d2c4c
	class VKN_AK74M : FA_Base_Rifle_VKN {
		scope = 2;
		author = "Luca, Author: saintsellotape";
		maxZeroing = 600;
		displayName = "AK-74M";
		descriptionshort = "AK-74M - Assault Rifle <br/>Caliber: 5.45x39mm";
		model = "\FA_Weapons_VKN\data\ak74\AK74M.p3d";
		magazines[] = {"30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_Green_F"};
		reloadAction = "GestureReloadAKM";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\AKM\Data\Anim\akm.rtm"};
		drySound[]={"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",0.6,1,10};
		reloadMagazineSound[]={"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_reload",1,1,10};
		changeFiremodeSound[]={"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_firemode",0.7,1,5};
		picture = "\FA_Weapons_VKN\data\icons\icon_ak74_ca.paa";
		inertia = 0.55;
		recoil = "recoil_aks";
		modes[]= {"FullAuto", "Single"};
		hiddenSelections[] = {"camo_body","camo_grip","camo_handguard","camo_stock","camo_muzzle"};
		hiddenSelectionsTextures[] = {"FA_Weapons_VKN\data\ak74\textures\camo_body\body_co.paa", "FA_Weapons_VKN\data\ak74\textures\camo_grip\grip_plastic_co.paa", "FA_Weapons_VKN\data\ak74\textures\camo_handguard\handguard_plastic_co.paa", "FA_Weapons_VKN\data\ak74\textures\camo_stock\stock_plastic_co.paa", "FA_Weapons_VKN\data\ak74\textures\camo_muzzle\FlashSuppressor_co.paa"};
		magazineReloadSwitchPhase = 0.15;

		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]={"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]={"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			dispersion=0.00145;
			reloadTime=0.085000001;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]={"AK74_Shot_SoundSet","AK74_Tail_SoundSet","AK74_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]={"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			dispersion=0.00145;
			reloadTime=0.085000001;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 105;
			allowedSlots[] = {901};

			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_m_khk_F","muzzle_snds_m_snd_F","muzzle_snds_M"};
				iconScale = 0.1;
			};

			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_Aco","optic_Aco_smg","optic_ACO_grn_smg","optic_ACO_grn","optic_Holosight_arid_F","optic_Holosight_lush_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_khk_F","optic_Holosight_smg_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_blk_F","optic_MRCO","optic_Hamr","optic_Hamr_khk_F","optic_Arco","optic_Arco_blk_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Arco_ghex_F","optic_Arco_AK_blk_F","optic_Arco_AK_arid_F","optic_Arco_AK_lush_F","optic_ERCO_blk_F","optic_ERCO_snd_F","optic_ERCO_khk_F","optic_DMS","optic_DMS_ghex_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_AMS","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_hex","optic_KHS_tan","optic_KHS_old","optic_SOS","optic_SOS_khk_F","optic_LRPS","optic_LRPS_tna_F","optic_LRPS_ghex_F","optic_Nightstalker","optic_NVS","optic_tws","optic_tws_mg"};
				iconScale = 0.1;
			};

			class PointerSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconScale = 0.1;
			};
		};
	};

//MP5 - Source: https://sketchfab.com/3d-models/mp5-submachinegun-2a9ce66fe96643fc8f20927401e5054c
	class VKN_MP5 : FA_Base_Rifle_VKN {
		scope = 2;
		author = "Luca, Author: michaelkarel29";
		maxZeroing = 200;
		displayName = "MP5";
		descriptionshort = "MP5 - Submachine Gun <br/>Caliber: 9x21mm";
		model = "\FA_Weapons_VKN\data\mp5\MP5.p3d";
		magazines[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Green","30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","30Rnd_9x21_Mag_SMG_02_Tracer_Red","30Rnd_9x21_Mag_SMG_02"};
		picture = "\FA_Weapons_VKN\data\icons\icon_mp5_ca.paa";
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_firemode",0.6,1,5};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_dry", 0.6, 1, 10};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"FA_Weapons_VKN\data\mp5\textures\mp5_co.paa", "FA_Weapons_VKN\data\mp5\textures\mp5_co.paa"};
		hiddenSelectionsMaterials[] = {"FA_Weapons_VKN\data\mp5\textures\mp5.rvmat", "FA_Weapons_VKN\data\mp5\textures\mp5_plastic.rvmat"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
		reloadAction = "GestureReloadSMG_05";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\SMGs\Rogue9\Rogue9_Reload",1,1,10};
		inertia = 0.25;
		recoil = "recoil_smg_05";
		modes[] = {"FullAuto", "Burst", "Single"};

		class Single : Mode_SemiAuto {
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
 			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Rogue9_Shot_SoundSet",
					"Rogue9_Tail_SoundSet",
					"Rogue9_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Rogue9_silencerShot_SoundSet",
					"Rogue9_silencerTail_SoundSet",
					"Rogue9_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime = 0.067000002;
			dispersion = 0.001391;
		};
		class Burst : Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
 			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Rogue9_Shot_SoundSet",
					"Rogue9_Tail_SoundSet",
					"Rogue9_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Rogue9_silencerShot_SoundSet",
					"Rogue9_silencerTail_SoundSet",
					"Rogue9_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime = 0.067000002;
			dispersion = 0.001391;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
 			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Rogue9_Shot_SoundSet",
					"Rogue9_Tail_SoundSet",
					"Rogue9_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"Rogue9_silencerShot_SoundSet",
					"Rogue9_silencerTail_SoundSet",
					"Rogue9_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime = 0.067000002;
			dispersion = 0.001391;
		};
		class WeaponSlotsInfo
		{
		    mass = 50;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_l"};
				iconScale = 0.1;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_Yorris","optic_Aco","optic_Aco_smg","optic_ACO_grn_smg","optic_ACO_grn","optic_Holosight_arid_F","optic_Holosight_lush_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_khk_F","optic_Holosight_smg_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_blk_F","optic_MRCO","optic_Hamr","optic_Hamr_khk_F","optic_Arco","optic_Arco_blk_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Arco_ghex_F","optic_Arco_AK_blk_F","optic_Arco_AK_arid_F","optic_Arco_AK_lush_F","optic_ERCO_blk_F","optic_ERCO_snd_F","optic_ERCO_khk_F","optic_KHS_blk","optic_KHS_hex","optic_KHS_tan","optic_KHS_old","optic_SOS","optic_SOS_khk_F","optic_Nightstalker","optic_NVS","optic_tws","optic_tws_mg"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconScale = 0.1;
			};
		};
	};

//SVD - Source: https://sketchfab.com/3d-models/svd-dragunov-updated-d4a9412275aa4974b146ad8ce9dc5fc2
	class VKN_SVD: FA_Base_Rifle_VKN
	{
	    scope = 2;
		author = "Luca, Author: WillyG99";
		maxZeroing = 1000;
		picture = "\FA_Weapons_VKN\data\icons\icon_svd_ca.paa";
		displayName = "SVD";
		descriptionShort = "SVD - Sniper Rifle <br/>Caliber: 7.62x54mm";
		magazines[] = {"VKN_10Rnd_762x54mm_Mag"};
		model = "FA_Weapons_VKN\data\svd\SVD.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"FA_Weapons_VKN\data\svd\textures\svd_co.paa", "FA_Weapons_VKN\data\svd\textures\svd_co.paa"};
		drySound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_Dry",0.6,1,10};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\LongRangeRifles\DMR_04\data\Anim\DMR_04.rtm"};
		reloadAction = "GestureReloadDMR05";
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR_05_reload",1,1,10};
		inertia = 0.75;
		recoil = "recoil_dmr_02";
		modes[] = {"Single"};

		class Single : Mode_SemiAuto {
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
 			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR05_Shot_SoundSet",
					"DMR05_tail_SoundSet",
					"DMR05_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR05_silencerShot_SoundSet",
					"DMR05_silencerTail_SoundSet",
					"DMR05_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime = 0.13;
			dispersion = 0.000461;
		};
		class WeaponSlotsInfo
		{
		    mass = 165;
			allowedSlots[] = {901};
			class MuzzleSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_B","muzzle_snds_B_khk_F","muzzle_snds_B_snd_F","muzzle_snds_B_arid_F","muzzle_snds_B_lush_F"};
				iconScale = 0.1;
			};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_Aco","optic_Aco_smg","optic_ACO_grn_smg","optic_ACO_grn","optic_Holosight_arid_F","optic_Holosight_lush_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_khk_F","optic_Holosight_smg_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_blk_F","optic_MRCO","optic_Hamr","optic_Hamr_khk_F","optic_Arco","optic_Arco_blk_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Arco_ghex_F","optic_Arco_AK_blk_F","optic_Arco_AK_arid_F","optic_Arco_AK_lush_F","optic_ERCO_blk_F","optic_ERCO_snd_F","optic_ERCO_khk_F","optic_DMS","optic_DMS_ghex_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_KHS_blk","optic_KHS_hex","optic_KHS_tan","optic_KHS_old","optic_SOS","optic_SOS_khk_F","optic_Nightstalker","optic_NVS","optic_tws","optic_tws_mg"};
				iconScale = 0.1;
			};
			class UnderBarrelSlot : SlotInfo
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"bipod_02_F_lush","bipod_02_F_arid","bipod_01_F_khk","bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk","bipod_01_F_snd","bipod_03_F_oli","bipod_01_F_mtp","bipod_02_F_hex","bipod_02_F_tan"};
				iconScale = 0.1;
			};
		};
    };
*/
//VSS - Source: https://sketchfab.com/3d-models/vss-vintorez-18e1f60286d346728f650984f4ae70aa
	class VKN_VSS : FA_Base_Rifle_VKN {
		scope = 2;
		author = "Luca, Author: Artem Goyko";
		maxZeroing = 500;
		displayName = "VSS Vintorez";
		descriptionshort = "VSS - Sniper Rifle <br/>Caliber: 9x39mm";
		model = "\FA_Weapons_VKN\data\vss\vss.p3d";
		magazines[] = {"VKN_20Rnd_9x39mm_Mag"};
		picture = "\FA_Weapons_VKN\data\icons\icon_vss_ca.paa";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\firemode_Vermin",0.6,1,5};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",0.6,1,10};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"FA_Weapons_VKN\data\vss\textures\camo1_LIGHT_TEST_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"};
		reloadAction="GestureReloadSMG_02";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",1,1,10};
		inertia = 0.4;
		recoil = "recoil_smg_01";
		modes[] = {"Single", "FullAuto"};

		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGVermin_silencerShot_SoundSet",
					"SMGVermin_silencerTail_SoundSet",
					"SMGVermin_silencerInteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGVermin_silencerShot_SoundSet",
					"SMGVermin_silencerTail_SoundSet",
					"SMGVermin_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.11;
			dispersion = 0.00046;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGVermin_silencerShot_SoundSet",
					"SMGVermin_silencerTail_SoundSet",
					"SMGVermin_silencerInteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGVermin_silencerShot_SoundSet",
					"SMGVermin_silencerTail_SoundSet",
					"SMGVermin_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime = 0.11;
			dispersion = 0.00046;
		};
		class WeaponSlotsInfo
		{
		    mass = 80;
			allowedSlots[] = {901,701};
			class CowsSlot : SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_Aco","optic_Aco_smg","optic_ACO_grn_smg","optic_ACO_grn","optic_Holosight_arid_F","optic_Holosight_lush_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_khk_F","optic_Holosight_smg_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_blk_F","optic_MRCO","optic_Hamr","optic_Hamr_khk_F","optic_Arco","optic_Arco_blk_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Arco_ghex_F","optic_Arco_AK_blk_F","optic_Arco_AK_arid_F","optic_Arco_AK_lush_F","optic_ERCO_blk_F","optic_ERCO_snd_F","optic_ERCO_khk_F","optic_DMS","optic_DMS_ghex_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_AMS","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_hex","optic_KHS_tan","optic_KHS_old","optic_SOS","optic_SOS_khk_F","optic_LRPS","optic_LRPS_tna_F","optic_LRPS_ghex_F","optic_Nightstalker","optic_NVS","optic_tws","optic_tws_mg"};
				iconScale = 0.1;
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconScale = 0.1;
			};
		};
	};


//AK5C - Source: https://www.cgtrader.com/3d-models/military/gun/ak5c-rifle
	class VKN_AK5C : FA_Base_Rifle_VKN {
		scope = 2;
		author = "Luca, Author: A-Editor";
		maxZeroing = 600;
		displayName = "AK5C";
		descriptionshort = "AK5C - Assault Rifle <br/>Caliber: 5.56x45mm";
		model = "\FA_Weapons_VKN\data\ak5c\ak5c.p3d";
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		reloadAction = "GestureReloadSPAR_01";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"};
		drySound[]={"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",0.5,1,10};
		reloadMagazineSound[]={"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1,1,10};
		changeFiremodeSound[]={"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",0.6,1,5};
		picture = "\FA_Weapons_VKN\data\icons\icon_ak5c_ca.paa";
		inertia = 0.45;
		recoil = "recoil_aks"
		modes[]= {"FullAuto", "Single"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"FA_Weapons_VKN\data\ak5c\textures\ak5c_co.paa"};

		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]={"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]={"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
			};
			dispersion=0.00132;
			reloadTime=0.0735;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]={"Mk20_Shot_SoundSet","Mk20_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]={"Mk20_silencerShot_SoundSet","Mk20_silencerTail_SoundSet"};
			};
			dispersion=0.00132;
			reloadTime=0.0735;
		};

		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 100;
			allowedSlots[] = {901};

			class MuzzleSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"muzzle_snds_m_khk_F","muzzle_snds_m_snd_F","muzzle_snds_M"};
				iconScale = 0.1;
			};

			class CowsSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {"optic_Aco","optic_Aco_smg","optic_ACO_grn_smg","optic_ACO_grn","optic_Holosight_arid_F","optic_Holosight_lush_F","optic_Holosight","optic_Holosight_smg","optic_Holosight_khk_F","optic_Holosight_smg_khk_F","optic_Holosight_smg_blk_F","optic_Holosight_blk_F","optic_MRCO","optic_Hamr","optic_Hamr_khk_F","optic_Arco","optic_Arco_blk_F","optic_Arco_lush_F","optic_Arco_arid_F","optic_Arco_ghex_F","optic_Arco_AK_blk_F","optic_Arco_AK_arid_F","optic_Arco_AK_lush_F","optic_ERCO_blk_F","optic_ERCO_snd_F","optic_ERCO_khk_F","optic_DMS","optic_DMS_ghex_F","optic_DMS_weathered_F","optic_DMS_weathered_Kir_F","optic_AMS","optic_AMS_snd","optic_AMS_khk","optic_KHS_blk","optic_KHS_hex","optic_KHS_tan","optic_KHS_old","optic_SOS","optic_SOS_khk_F","optic_LRPS","optic_LRPS_tna_F","optic_LRPS_ghex_F","optic_Nightstalker","optic_NVS","optic_tws","optic_tws_mg"};
				iconScale = 0.1;
			};

			class PointerSlot : SlotInfo {
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				displayName = "$STR_A3_PointerSlot0";
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
				iconScale = 0.1;
			};

			class UnderBarrelSlot : SlotInfo {
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {"bipod_02_F_lush","bipod_02_F_arid","bipod_01_F_khk","bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk","bipod_01_F_snd","bipod_03_F_oli","bipod_01_F_mtp","bipod_02_F_hex","bipod_02_F_tan"};
				iconScale = 0.1;
			};
		};
	};

	class VKN_AK5C_Collapsed : VKN_AK5C {
		scope = 2;
		author = "Luca, Author: A-Editor";
		displayName = "AK5C (Collapsed)";
		model = "\FA_Weapons_VKN\data\ak5c\ak5c_collapsed.p3d";
		inertia = 0.35;
	};
};

class CfgAmmo
{
	class B_9x21_Ball;

	class FA_VKN_9x39mm_Ball : B_9x21_Ball {
		hit = 6;
		caliber = 1.35;
	};
};

class CfgMagazines {
	class 20Rnd_762x51_Mag;
	class 30Rnd_9x21_Mag;

	class VKN_10Rnd_762x54mm_Mag : 20Rnd_762x51_Mag {
		scope = 2;
		author = "Luca";
		displayName = "10Rnd 7.62x54mm";
		picture = "\FA_Weapons_VKN\data\icons\icon_svd_mag_ca.paa";
		count = 10;
		ammo = "B_762x54_Ball";
		descriptionshort = "Caliber: 7.62x54mm<br />Rounds: 10<br />Used in: SVD";
		mass = 10;
	};

	class VKN_20Rnd_9x39mm_Mag : 30Rnd_9x21_Mag {
		scope = 2;
		author = "Luca";
		displayName = "20Rnd 9x39mm";
		picture = "\FA_Weapons_VKN\data\icons\icon_vss_mag_ca.paa";
		count = 20;
		ammo = "FA_VKN_9x39mm_Ball";
		descriptionshort = "Caliber: 9x39mm<br />Rounds: 20<br />Used in: VSS";
		mass = 10;
	};
};
