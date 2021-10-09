class CfgPatches {
    class VKN_Gear_Compat_VSM {
        name = VKN_Gear_Compat_VSM;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {};

		requiredAddons[] =
		{
			"A3_Characters_F",
			"VSM_HELMETS",
			"VKN_Compatibility"	
		};
	};
};

#define private 0		// Hidden to all
#define protected 1 // Can use but still hidden
#define public 2		// Visible to all

class cfgWeapons
{

	class Uniform_Base;
	class UniformItem;
	class VestItem;
	class HeadGearItem;
	class ItemCore;
	class ItemInfo;
	class InventoryItem_Base_F;
	class VSM_Black_OPS_2;
	class VSM_RAV_operator_OCP;
	class VSM_RAV_MG_OCP;
	class VSM_RAV_Breacher_OCP;
	class VSM_CarrierRig_MG_OCP;
	class VSM_CarrierRig_Gunner_OCP;
	class VSM_CarrierRig_Breacher_OCP;
	class VSM_LBT6094_Operator_OCP;
	class VSM_LBT6094_MG_OCP;
	class VSM_LBT6094_Breacher_OCP;
	class VSM_FAPC_Operator_OCP;
	class VSM_FAPC_MG_OCP;
	class VSM_FAPC_Breacher_OCP;

	//Base classes
	class VKN_OPS_Helmet_2_Base : VSM_Black_OPS_2
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
	};

	class VKN_RAV_Operator_Base : VSM_RAV_operator_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_1961aPouches", "_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches"};
	};
	class VKN_RAV_Gunner_Base : VSM_RAV_MG_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_boxMag", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMButtPouch"};
	};
	class VKN_RAV_Breacher_Base : VSM_RAV_Breacher_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_boxMag", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMButtPouch"};
	};

	class VKN_CarrierRig_Operator_Base : VSM_CarrierRig_MG_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches"};
	};
	class VKN_CarrierRig_Gunner_Base : VSM_CarrierRig_Gunner_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches"};
	};
	class VKN_CarrierRig_Breacher_Base : VSM_CarrierRig_Breacher_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches"};
	};

	class VKN_LBT6094_Operator_Base : VSM_LBT6094_Operator_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches"};
	};
	class VKN_LBT6094_Gunner_Base : VSM_LBT6094_MG_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches"};
	};
	class VKN_LBT6094_Breacher_Base : VSM_LBT6094_Breacher_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMPouches"};
	};

	class VKN_FAPC_Operator_Base : VSM_FAPC_Operator_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_boxMag", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMButtPouch"};
	};
	class VKN_FAPC_Gunner_Base : VSM_FAPC_MG_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_boxMag", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMButtPouch"};
	};
	class VKN_FAPC_Breacher_Base : VSM_FAPC_Breacher_OCP
	{
		scope = protected;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_battleBelt", "_boxMag", "_DropHolster", "_Serpa", "_SOTGGear", "_SOTGRadio", "_vestBase", "_VSMButtPouch"};
	};

	//Configs

	class VKN_B_OPS_Black : VKN_OPS_Helmet_2_Base
	{
		scope = public;
		author = "Apple";
		displayName = "[VKN] FBA OpsCore + Peltor(Black)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\VKN_ops_black.paa", "VKN_Gear\data\Headgear\VKN_helmet_pouch.paa", "VKN_Gear\data\Headgear\VKN_secco2.paa", "VKN_Gear\data\Headgear\VKN_headset_co.paa"};
	};
	class VKN_B_OPS_Black_alt : VKN_OPS_Helmet_2_Base
	{
		scope = public;
		author = "Apple";
		displayName = "[VKN] FBA OpsCore (Black)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight"};
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\VKN_ops_black.paa", "VKN_Gear\data\Headgear\VKN_helmet_pouch.paa", "VKN_Gear\data\Headgear\VKN_secco2.paa"};
	};
	class VKN_B_OPS_Loki : VKN_OPS_Helmet_2_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] FBA OpsCore + Peltor(Loki)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\VKN_ops_Loki.paa", "VKN_Gear\data\Headgear\VKN_helmet_pouch.paa", "VKN_Gear\data\Headgear\VKN_secco2.paa", "VKN_Gear\data\Headgear\VKN_headset_co.paa"};
	};
	class VKN_B_OPS_Loki_alt : VKN_OPS_Helmet_2_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] FBA OpsCore (Loki)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight"};
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\VKN_ops_Loki.paa", "VKN_Gear\data\Headgear\VKN_helmet_pouch.paa", "VKN_Gear\data\Headgear\VKN_secco2.paa"};
	};
	class VKN_B_OPS_Diag : VKN_OPS_Helmet_2_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] FBA OpsCore + Peltor(Diagonal)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\VKN_ops_diag.paa", "VKN_Gear\data\Headgear\VKN_helmet_pouch.paa", "VKN_Gear\data\Headgear\VKN_secco2.paa", "VKN_Gear\data\Headgear\VKN_headset_co.paa"};
	};
	class VKN_B_OPS_Diag_alt : VKN_OPS_Helmet_2_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] FBA OpsCore (Diagonal)";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight"};
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\VKN_ops_diag.paa", "VKN_Gear\data\Headgear\VKN_helmet_pouch.paa", "VKN_Gear\data\Headgear\VKN_secco2.paa"};
	};

	class VKN_SNOW_OPS : VKN_OPS_Helmet_2_Base
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[VKN] FWA OpsCore (Snow)";
		author = "Apple";
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelections[] = {"_helmBase", "_helmGear", "_nvgWeight", "_Peltor"};
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Headgear\VKN_ops_snow.paa", "VKN_Gear\data\Headgear\VKN_helmet_pouch.paa", "VKN_Gear\data\Headgear\VKN_secco2.paa", "VKN_Gear\data\Headgear\VKN_headset_co.paa"};
	};

	class VKN_RAV_Operator_Black : VKN_RAV_Operator_Base
	{
		scope = 2;
		author = "Apple";
		displayName = "[VKN] FBA - Paraclete RAV (Black)";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\vests\Vanilla\VKN_blk_chestrig.paa", "VKN_Gear\data\vests\Full Black\VKN_battlebelt_BLK.paa", "VKN_Gear\data\vests\Full Black\VKN_dropholster_BLK.paa", "VKN_Gear\data\vests\Full Black\VKN_serpa_blk.paa", "VKN_Gear\data\vests\Full Black\VKN_BLK_gear_co.paa", "VKN_Gear\data\vests\Full Black\VKN_radio_pouch_BLK.paa", "VKN_Gear\data\vests\Full Black\VKN_RAV_BLK.paa", "VKN_Gear\data\vests\Full Black\VKN_pouches_blk.paa"};
	};
	class VKN_CarrierRig_Breacher_Black : VKN_CarrierRig_Breacher_Base
	{
		scope = 2;
		author = "Apple";
		displayName = "[VKN] FBA - LBT Armatus (Black)";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\vests\Full Black\VKN_battlebelt_BLK.paa", "VKN_Gear\data\vests\Full Black\VKN_dropholster_BLK.paa", "VKN_Gear\data\vests\Full Black\VKN_serpa_blk.paa", "VKN_Gear\data\vests\Full Black\VKN_blk_gear_co.paa", "VKN_Gear\data\vests\Full Black\VKN_radio_pouch_BLK.paa", "VKN_Gear\data\vests\Full Black\VKN_blk_plate.paa", "VKN_Gear\data\vests\Full Black\VKN_pouches_blk.paa"};
	};
	class VKN_FAPC_Gunner_Black : VKN_FAPC_Gunner_Base
	{
		scope = 2;
		author = "Apple";
		displayName = "[VKN] FBA DT FAPC (Black)";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\vests\Full Black\VKN_battlebelt_BLK.paa", "\VKN_Gear\data\vests\Full Black\VKN_boxmag_blk.paa", "\VKN_Gear\data\vests\Full Black\VKN_dropholster_BLK.paa", "\VKN_Gear\data\vests\Full Black\VKN_serpa_blk.paa", "\VKN_Gear\data\vests\Full Black\VKN_blk_gear_co.paa", "\VKN_Gear\data\vests\Full Black\VKN_radio_pouch_BLK.paa", "\VKN_Gear\data\vests\Full Black\VKN_fapc_BLK.paa", "\VKN_Gear\data\vests\Full Black\VKN_buttpouch_BLK.paa"};
	};
	class VKN_FAPC_Gunner_OGA_OD_Medical : VKN_FAPC_Gunner_Base
	{
		scope = 2;
		displayName = "[VKN] Medical OD DT FAPC (OGA)";
		author = "Apple";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\vests\OGA\VKN_battlebelt_OGA_OD.paa", "\VKN_Gear\data\vests\OGA\VKN_boxmag_OGA_OD.paa", "\VKN_Gear\data\vests\OGA\VKN_dropholster_OGA_OD.paa", "\VKN_Gear\data\vests\OGA\VKN_serpa_OGA_OD.paa", "\VKN_Gear\data\vests\OGA\VKN_OGA_OD_gear_co.paa", "\VKN_Gear\data\vests\OGA\VKN_radio_pouch_OGA_OD.paa", "\VKN_Gear\data\vests\OGA\VKN_fapc_OGA_OD.paa", "\VKN_Gear\data\vests\Medical\VKN_buttpouch_OGA_OD_MED.paa"};
	};
	class VKN_FAPC_Gunner_OCP_Medical : VKN_FAPC_Gunner_Base
	{
		scope = 2;
		displayName = "[VKN] Medical DT FAPC (OCP)";
		author = "Apple";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\vests\OCP\VKN_battlebelt_OCP.paa", "\VKN_Gear\data\vests\OCP\VKN_boxmag_OCP.paa", "\VKN_Gear\data\vests\OCP\VKN_dropholster_OCP.paa", "\VKN_Gear\data\vests\OCP\VKN_serpa_OCP.paa", "\VKN_Gear\data\vests\OCP\VKN_OCP_gear_co.paa", "\VKN_Gear\data\vests\OCP\VKN_radio_pouch_OCP.paa", "\VKN_Gear\data\vests\OCP\VKN_fapc_OCP.paa", "\VKN_Gear\data\vests\Medical\VKN_buttpouch_OCP_MED.paa"};
	};
	class VKN_FAPC_Gunner_Black_Medical : VKN_FAPC_Gunner_Base
	{
		scope = 2;
		displayName = "[VKN] Medical DT FAPC (BLK)";
		author = "Apple";
		hiddenSelectionsTextures[] = {"\VKN_Gear\data\vests\Full Black\VKN_battlebelt_blk.paa", "\VKN_Gear\data\vests\Full Black\VKN_boxmag_blk.paa", "\VKN_Gear\data\vests\Full Black\VKN_dropholster_blk.paa", "\VKN_Gear\data\vests\Full Black\VKN_serpa_blk.paa", "\VKN_Gear\data\vests\Full Black\VKN_blk_gear_co.paa", "\VKN_Gear\data\vests\Full Black\VKN_radio_pouch_blk.paa", "\VKN_Gear\data\vests\Medical\VKN_FAPC_blk_Medical.paa", "\VKN_Gear\data\vests\Medical\VKN_buttpouch_blk_MED.paa"};
	};

	// VSM CAZADOR VESTS

	class VKN_RAV_Operator_Cazador : VKN_RAV_Operator_Base
	{
		scope = public;
		author = "Jonmo";
		displayName = "[VKN] Cazador Paraclete RAV (Operator)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\vests\Cazador\VKN_Cazador_Chestrig.paa", "VKN_Gear\data\vests\Cazador\VKN_BattleBelt_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_dropholster.paa", "VKN_Gear\data\Vests\Cazador\VKN_serpa.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa", "VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa", "VKN_Gear\data\Vests\Cazador\VKN_rav_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_pouches_Cazador.paa"};
	};
	class VKN_RAV_Gunner_Cazador : VKN_RAV_Gunner_Base
	{
		scope = public;
		author = "Jonmo";
		displayName = "[VKN] Cazador Paraclete RAV (Gunner)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa", "VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_boxmag_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_dropholster.paa", "VKN_Gear\data\Vests\Cazador\VKN_serpa.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa", "VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa", "VKN_Gear\data\Vests\Cazador\VKN_rav_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_pouches_Cazador.paa"};
	};
	class VKN_RAV_Breacher_Cazador : VKN_RAV_Breacher_Base
	{
		scope = public;
		author = "Jonmo";
		displayName = "[VKN] Cazador Paraclete RAV (Breacher)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa", "VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_dropholster.paa", "VKN_Gear\data\Vests\Cazador\VKN_serpa.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa", "VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa", "VKN_Gear\data\Vests\Cazador\VKN_rav_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_pouches_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_buttpouch_Cazador.paa"};
	};
	class VKN_CarrierRig_Operator_Cazador : VKN_CarrierRig_Operator_Base
	{
		scope = public;
		author = "Jonmo";
		displayName = "[VKN] Cazador LBT Armatus (Operator)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa", "VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_serpa.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa", "VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_plate.paa", "VKN_Gear\data\Vests\Cazador\VKN_buttpouch_Cazador.paa"};
	};
	class VKN_CarrierRig_Breacher_Cazador : VKN_CarrierRig_Breacher_Base
	{
		scope = public;
		author = "Jonmo";
		displayName = "[VKN] Cazador LBT Armatus (Breacher)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_dropholster.paa", "VKN_Gear\data\Vests\Cazador\VKN_serpa.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa", "VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_plate.paa", "VKN_Gear\data\Vests\Cazador\VKN_pouches_Cazador.paa"};
	};
	class VKN_CarrierRig_Gunner_Cazador : VKN_CarrierRig_Gunner_Base
	{
		scope = public;
		author = "Jonmo";
		displayName = "[VKN] Cazador LBT Armatus (Gunner)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa", "VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_boxmag_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_serpa.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa", "VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_plate.paa"};
	};
	class VKN_LBT6094_Operator_Cazador : VKN_LBT6094_Operator_Base
	{
		scope = public;
		author = "Jonmo";
		displayName = "[VKN] Cazador LBT6094 (Operator)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa", "VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_dropholster.paa", "VKN_Gear\data\Vests\Cazador\VKN_serpa.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa", "VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa", "VKN_Gear\data\Vests\Cazador\VKN_lbt6094_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_pouches_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_buttpouch_Cazador.paa"};
	};
	class VKN_LBT6094_Gunner_Cazador : VKN_LBT6094_Gunner_Base
	{
		scope = public;
		author = "Jonmo";
		displayName = "[VKN] Cazador LBT6094 (Gunner)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Cazador\VKN_Cazador_Chestrig.paa", "VKN_Gear\data\Vests\Cazador\VKN_BattleBelt_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_boxmag_Cazador.paa", "VKN_Gear\data\Vests\Cazador\VKN_serpa.paa", "VKN_Gear\data\Vests\Cazador\VKN_Cazador_gear_co.paa", "VKN_Gear\data\Vests\Cazador\VKN_radio_pouch_Green.paa", "VKN_Gear\data\Vests\Cazador\VKN_lbt6094_Cazador.paa"};
	};

	// VSM LOKI VESTS

	class VKN_RAV_Operator_Loki : VKN_RAV_Operator_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] Loki Paraclete RAV (Operator)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\vests\Loki\VKN_Loki_Chestrig.paa", "VKN_Gear\data\vests\Loki\VKN_BattleBelt_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_DropHolster_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_serpa.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_gear_co.paa", "VKN_Gear\data\Vests\Loki\VKN_radio_pouch_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_rav_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_pouches_Loki.paa"};
	};
	class VKN_RAV_Gunner_Loki : VKN_RAV_Gunner_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] Loki Paraclete RAV (Gunner)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Loki\VKN_Loki_Chestrig.paa", "VKN_Gear\data\Vests\Loki\VKN_BattleBelt_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_boxmag_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_DropHolster_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_serpa.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_gear_co.paa", "VKN_Gear\data\Vests\Loki\VKN_radio_pouch_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_rav_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_pouches_Loki.paa"};
	};
	class VKN_RAV_Breacher_Loki : VKN_RAV_Breacher_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] Loki Paraclete RAV (Breacher)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Loki\VKN_Loki_Chestrig.paa", "VKN_Gear\data\Vests\Loki\VKN_BattleBelt_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_DropHolster_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_serpa.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_gear_co.paa", "VKN_Gear\data\Vests\Loki\VKN_radio_pouch_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_rav_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_pouches_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_buttpouch_Loki.paa"};
	};
	class VKN_CarrierRig_Operator_Loki : VKN_CarrierRig_Operator_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] Loki LBT Armatus (Operator)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Loki\VKN_Loki_Chestrig.paa", "VKN_Gear\data\Vests\Loki\VKN_BattleBelt_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_serpa.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_gear_co.paa", "VKN_Gear\data\Vests\Loki\VKN_radio_pouch_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_plate.paa", "VKN_Gear\data\Vests\Loki\VKN_buttpouch_Loki.paa"};
	};
	class VKN_CarrierRig_Breacher_Loki : VKN_CarrierRig_Breacher_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] Loki LBT Armatus (Breacher)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Loki\VKN_BattleBelt_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_dropholster_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_serpa.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_gear_co.paa", "VKN_Gear\data\Vests\Loki\VKN_radio_pouch_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_plate.paa", "VKN_Gear\data\Vests\Loki\VKN_pouches_Loki.paa"};
	};
	class VKN_CarrierRig_Gunner_Loki : VKN_CarrierRig_Gunner_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] Loki LBT Armatus (Gunner)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Loki\VKN_Loki_Chestrig.paa", "VKN_Gear\data\Vests\Loki\VKN_BattleBelt_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_boxmag_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_serpa.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_gear_co.paa", "VKN_Gear\data\Vests\Loki\VKN_radio_pouch_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_plate.paa"};
	};
	class VKN_LBT6094_Operator_Loki : VKN_LBT6094_Operator_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] Loki LBT6094 (Operator)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Loki\VKN_Loki_Chestrig.paa", "VKN_Gear\data\Vests\Loki\VKN_BattleBelt_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_DropHolster_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_serpa.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_gear_co.paa", "VKN_Gear\data\Vests\Loki\VKN_radio_pouch_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_lbt6094_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_pouches_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_buttpouch_Loki.paa"};
	};
	class VKN_LBT6094_Gunner_Loki : VKN_LBT6094_Gunner_Base
	{
		scope = public;
		author = "Shagger";
		displayName = "[VKN] Loki LBT6094 (Gunner)";
		weaponPoolAvailable = 1;
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		hiddenSelectionsTextures[] = {"VKN_Gear\data\Vests\Loki\VKN_Loki_Chestrig.paa", "VKN_Gear\data\Vests\Loki\VKN_BattleBelt_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_boxmag_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_serpa.paa", "VKN_Gear\data\Vests\Loki\VKN_Loki_gear_co.paa", "VKN_Gear\data\Vests\Loki\VKN_radio_pouch_Loki.paa", "VKN_Gear\data\Vests\Loki\VKN_lbt6094_Loki.paa"};
	};
};