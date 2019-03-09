class VKN_Kitbag_Black: B_Kitbag_rgr {
	author = "Curious";
	scope = 2;
	displayName="[VKN] Backpack - Black";
	hiddenSelectionsTextures[]={"\a3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
};

class VKN_Kitbag_Black_Medical: VKN_Kitbag_Black {
	author = "Curious";
	displayName="[VKN] Backpack - Black + Medical";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Backpacks\VKN_backpack_blk_medical_co.paa"};
};

class TRYK_B_Medbag_OD: Bag_Base
{
	scope = 2;
	picture = "\VKN_Gear\data\UI\UI_OD_MEDBAG.paa";
	model = "\VKN_Gear\data\Models\backpack_MED.p3d";
	displayName = "TRYK MED BACKPACK(OD)";
	maximumLoad = 280;
	mass = 50;
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Backpacks\VKN_medic_bag_OD.paa"};
};
class TRYK_B_Medbag_BK: TRYK_B_Medbag_OD
{
	picture = "\VKN_Gear\data\UI\UI_BLK_MEDBAG.paa";
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Backpacks\VKN_medic_bag_BK.paa"};
};