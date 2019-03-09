






//////////         PVP Vests w/ logos
	class Vest_Camo_Base : ItemCore {
	class ItemInfo;
	};
	class V_PlateCarrier1_rgr: ItemCore {
		class ItemInfo;
	};

	/* ~~~~Vest Base~~~~ */
	class ES_Vest_PlateCarrier1_base: V_PlateCarrier1_rgr
	{
	author = "Shagger (Eric McHogan)";
		scope = 0;
		class ItemCore;
		class VestItem;
	    class Vest_Camo_Base: ItemCore
	    {
	        class ItemInfo;
	};
		weaponPoolAvailable = 1;
		allowedSlots[] = { 901 };         // This means the vest can be put into a backpack.
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		class ItemInfo : ItemInfo {
			uniformModel="A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = { "camo" };
			containerClass = "Supply100";
			uniformType = "Default";
			type = 701;
			mass = 120;
			showHolsteredPistol = 0;
			passThrough = 1;
			armor = "5*0";

			class HitpointsProtectionInfo { //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
				class Abdomen {
					hitPointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.1;
				};
				class Arms {
					hitPointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
	 			};
				class Body {

					hitPointName = "HitBody";
					armor = 0;
					passThrough = 0.1;
				};
				class Chest {

		 			hitPointName = "HitChest";
					armor = 24;
					passThrough = 0.1;
				};
				class Diaphragm {

					hitPointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.1;

				};
				class Neck {

					hitPointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;

	 			};
			};
		};
	};

	class Vest_carrier_spec_rig_base : Vest_Camo_Base
	{

		author = "Shagger (Eric McHogan)";
		scope = 0;
		weaponPoolAvailable = 1;
		allowedSlots[] = { 901 };         // This means the vest can be put into a backpack.
		picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";

		class ItemInfo : ItemInfo {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
			hiddenSelections[] = { "camo" };
			containerClass = "Supply100";
			uniformType = "Default";
			type = 701;
			mass = 120;
			showHolsteredPistol = 0;
			passThrough = 1;
			armor = "5*0";

			class HitpointsProtectionInfo { //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
				class Abdomen {
					hitPointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.1;
				};
				class Arms {
					hitPointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
	 			};
				class Body {

					hitPointName = "HitBody";
					armor = 0;
					passThrough = 0.1;
				};
				class Chest {

		 			hitPointName = "HitChest";
					armor = 24;
					passThrough = 0.1;
				};
				class Diaphragm {

					hitPointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.1;

				};
				class Neck {

					hitPointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;

	 			};
			};
		};
	};

										/* ~~~~Red Vests~~~~ */

	class None_Red : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Red Team (No Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\None_Red.paa" };
	};
	class British_Red : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Red Team (British Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\British_Red.paa" };
	};
	class Scottish_Red : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Red Team (Scottish Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Scottish_Red.paa" };
	};
	class Welsh_Red : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Red Team (Welsh Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Welsh_Red.paa" };
	};
	class Dutch_Red : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Red Team (Dutch Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Dutch_Red.paa" };
	};
	class German_Red : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Red Team (German Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\German_Red.paa" };
	};
	class Swedish_Red : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Red Team (Swedish Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Swedish_Red.paa" };
	};
	class Norwegian_Red : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Red Team (Norwegian Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Norwegian_Red.paa" };
	};
	class Denmark_Red : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Red Team (Danish Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Denmark_Red.paa" };
	};

								/* ~~~~Blue Vests~~~~ */

	class None_Blue : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Blue Team (No Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\None_Blue.paa" };
	};
	class British_Blue : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Blue Team (British Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\British_Blue.paa" };
	};
	class Scottish_Blue : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Blue Team (Scottish Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Scottish_Blue.paa" };
	};
	class Welsh_Blue : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Blue Team (Welsh Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Welsh_Blue.paa" };
	};
	class Dutch_Blue : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Blue Team (Dutch Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Dutch_Blue.paa" };
	};
	class German_Blue : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Blue Team (German Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\German_Blue.paa" };
	};
	class Swedish_Blue : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Blue Team (Swedish Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Swedish_Blue.paa" };
	};
	class Norwegian_Blue : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Blue Team (Norwegian Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Norwegian_Blue.paa" };
	};
	class Denmark_Blue : Vest_carrier_spec_rig_base
	{
		scope = 2;
		displayName = "[VKN] Blue Team (Danish Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Denmark_Blue.paa" };
	};