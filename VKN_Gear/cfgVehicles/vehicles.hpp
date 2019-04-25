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