class Y32E_Cihuai_Infantry: O_T_VTOL_02_infantry_dynamicLoadout_F {
	_generalMacro = "Y32E_Cihuai_Infantry";
	editorCategory = "VKN_Units";
	editorSubCategory = "EdSubcat_Planes";
	side = 0;
	faction = "OPF_T_F";
	displayName = "Y-32/E Cihuai (Infantry Transport)";
	class TextureSources
	{
		class Blackops_I
		{
			displayName = "Blackops";
			author = "Jonmo";
			factions[] = {"OPF_F","OPF_T_F"};
			textures[] = {"\VKN_Gear\data\Vehicles\VTOL_02_EXT01_blackops_CO.paa","\VKN_Gear\data\Vehicles\VTOL_02_EXT02_blackops_CO.paa","\VKN_Gear\data\Vehicles\VTOL_02_EXT03_L_blackops_CO.paa","\VKN_Gear\data\Vehicles\VTOL_02_EXT03_R_blackops_CO.paa"};
		};
	};
	textureList[] = {"Blackops_I",1};
};


class Y32E_Cihuai_Vehicle: O_T_VTOL_02_vehicle_dynamicLoadout_F {
	_generalMacro = "Y32E_Cihuai_Vehicle";
	editorCategory = "VKN_Units";
	editorSubCategory = "EdSubcat_Planes";
	side = 0;
	faction = "OPF_T_F";
	displayName = "Y-32/E Cihuai (Vehicle Transport)";
	class TextureSources
	{
		class Blackops
		{
			displayName = "Blackops";
			author = "JustUnfriendly";
			factions[] = {"OPF_F","OPF_T_F"};
			textures[] = {"\VKN_Gear\data\Vehicles\VTOL_02_EXT01_blackops_CO.paa","\VKN_Gear\data\Vehicles\VTOL_02_EXT02_blackops_CO.paa","\VKN_Gear\data\Vehicles\VTOL_02_EXT03_L_blackops_CO.paa","\VKN_Gear\data\Vehicles\VTOL_02_EXT03_R_blackops_CO.paa"};
		};
	};
	textureList[] = {"Blackops",1};
};

class vkn_ifv_warrior_woodland : I_APC_tracked_03_cannon_F
{
	author = "Jonmo";
	scope = 2;
	displayName = "FV 510 Warrior (Woodland)";
	side = 1;
	crew = "B_crew_F";
	faction = "BLU_F";
	editorCategory = "VKN_Units";
	hiddenSelections[] = {"Camo1","Camo2","CamoNet","CamoSlat"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Vehicles\APC_Tracked_03_Ext_VKN_Green_co.paa","\VKN_Gear\data\Vehicles\APC_Tracked_03_Ext2_VKN_Green_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO","A3\armor_f\data\cage_olive_CO.paa"};
	textureList[] = {"vkn_ifv_tex_w",1};
	class TextureSources
	{
		class vkn_ifv_tex_w
		{
			author = "Jonmo";
			displayname = "Nato (Woodland)";
			textures[] = {"\VKN_Gear\data\Vehicles\APC_Tracked_03_Ext_VKN_Green_co.paa","\VKN_Gear\data\Vehicles\APC_Tracked_03_Ext2_VKN_Green_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO","A3\armor_f\data\cage_olive_CO.paa"};
			factions[] = {};
		};
	};
};
class vkn_ifv_warrior_desert : I_APC_tracked_03_cannon_F
{
	author = "Jonmo";
	scope = 2;
	displayName = "FV 510 Warrior (Desert)";
	side = 1;
	crew = "B_crew_F";
	faction = "BLU_F";
	editorCategory = "VKN_Units";
	hiddenSelections[] = {"Camo1","Camo2","CamoNet","CamoSlat"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Vehicles\APC_Tracked_03_Ext_VKN_Desert_co.paa","\VKN_Gear\data\Vehicles\APC_Tracked_03_Ext2_VKN_Desert_co.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO","A3\armor_f\data\cage_sand_CO.paa"};
	textureList[] = {"vkn_ifv_tex_d",1};
	class TextureSources
	{
		class vkn_ifv_tex_d
		{
			author = "Jonmo";
			displayname = "Nato (Desert)";
			textures[] = {"\VKN_Gear\data\Vehicles\APC_Tracked_03_Ext_VKN_Desert_co.paa","\VKN_Gear\data\Vehicles\APC_Tracked_03_Ext2_VKN_Desert_co.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO","A3\armor_f\data\cage_sand_CO.paa"};
			factions[] = {};
		};
	};
};
