class Carrier_Lite_ItemInfo_Base: VestItem {
	uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
	hiddenSelections[]={"camo"};
	containerClass="Supply120";
	mass=80;
	armor=20;
	class HitpointsProtectionInfo {
		class Chest {
			HitpointName="HitChest";
			armor=16;
			PassThrough=0.30000001;
		};
		class Diaphragm {
			HitpointName="HitDiaphragm";
			armor=16;
			PassThrough=0.30000001;
		};
		class Abdomen {
			hitpointName="HitAbdomen";
			armor=16;
			passThrough=0.30000001;
		};
		class Body {
			hitpointName="HitBody";
			passThrough=0.30000001;
		};
	};
};

class Carrier_ItemInfo_Base: VestItem {
	uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
	hiddenSelections[]={"camo"};
	containerClass="Supply120";
	mass=80;
	armor=20;
	class HitpointsProtectionInfo {
		class Chest {
			HitpointName="HitChest";
			armor=20;
			PassThrough=0.2;
		};
		class Diaphragm {
			HitpointName="HitDiaphragm";
			armor=20;
			PassThrough=0.2;
		};
		class Abdomen {
			hitpointName="HitAbdomen";
			armor=20;
			passThrough=0.2;
		};
		class Body {
			hitpointName="HitBody";
			passThrough=0.2;
		};
	};
};

class Carrier_Spec_Rig_ItemInfo_Base: VestItem {
		hiddenSelections[] = { "camo" };
		containerClass = "Supply100";
		uniformType = "Default";
		type = 701;
		mass = 120;
		showHolsteredPistol = 0;
		passThrough = 1;
		armor = "5*0";
		class HitpointsProtectionInfo {
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

// Base Classes
class VKN_Carrier_Lite_Base: Vest_Camo_Base {
	scope = 0;
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
	hiddenSelections[]={"camo"};
	class ItemInfo: Carrier_Lite_ItemInfo_Base { uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d"; };
};
class VKN_Carrier_Rig_Base: Vest_Camo_Base {
	scope = 0;
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
	hiddenSelections[]={"camo"};
	class ItemInfo: Carrier_ItemInfo_Base { uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d"; };
};
class VKN_Carrier_Spec_Rig_Base : Vest_Camo_Base {
	scope = 0;
	weaponPoolAvailable = 1;
	allowedSlots[] = { 901 };
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
	class ItemInfo : Carrier_Spec_Rig_ItemInfo_Base { uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d"; };
};



//Vests (Default)

class VKN_Carrier_Lite_Black_1: VKN_Carrier_Lite_Base {
	scope=2;
	displayName="[VKN] FBA Carrier Lite (Black)";
	author="Apple";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\VKN_Black_Carrier.paa"};
	descriptionShort="BLK Rig Lite";
};

class VKN_Black_Carrier_RIG: VKN_Carrier_Rig_Base {
	scope=2;
	displayName="[VKN] FBA Carrier Rig (Black)";
	author="Apple";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\VKN_Black_Carrier.paa"};
	descriptionShort="BLK Rig";
};

class VKN_Carrier_Lite_Loki_Black_1: VKN_Carrier_Rig_Base {
	scope=2;
	displayName="[VKN] LokiCarrier Lite (Black)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	author="Shagger (Eric McHogan)";
	model="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
	hiddenSelections[]={"camo"};
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\Vest_loki_Black.paa"};
	descriptionShort="BLK Rig Lite";
	class ItemInfo: Carrier_Lite_ItemInfo_Base { uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d"; };
};

class VKN_Black_Carrier_Loki_Black_RIG: VKN_Carrier_Rig_Base {
	scope=2;
	displayName="[VKN] Loki Carrier Rig (Black)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	author="Shagger (Eric McHogan)";
	model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
	hiddenSelections[]={"camo"};
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\Vest_loki_Black.paa"};
	descriptionShort="BLK Rig";
	class ItemInfo: Carrier_ItemInfo_Base { uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d"; };
};

class VKN_Carrier_Spec_Police_Riot : VKN_Carrier_Spec_Rig_Base	{
		scope = 2;
		displayName = "[VKN] Police Riot Vest";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\vests\vkn_carrier_gl_rig_police_co.paa" };
	};





/// PVP Vests

	class None_Red : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Red Team (No Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\None_Red.paa" };
	};
	class British_Red : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Red Team (British Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\British_Red.paa" };
	};
	class Scottish_Red : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Red Team (Scottish Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Scottish_Red.paa" };
	};
	class Welsh_Red : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Red Team (Welsh Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Welsh_Red.paa" };
	};
	class Dutch_Red : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Red Team (Dutch Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Dutch_Red.paa" };
	};
	class German_Red : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Red Team (German Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\German_Red.paa" };
	};
	class Swedish_Red : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Red Team (Swedish Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Swedish_Red.paa" };
	};
	class Norwegian_Red : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Red Team (Norwegian Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Norwegian_Red.paa" };
	};
	class Denmark_Red : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Red Team (Danish Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Denmark_Red.paa" };
	};
	class None_Blue : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Blue Team (No Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\None_Blue.paa" };
	};
	class British_Blue : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Blue Team (British Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\British_Blue.paa" };
	};
	class Scottish_Blue : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Blue Team (Scottish Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Scottish_Blue.paa" };
	};
	class Welsh_Blue : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Blue Team (Welsh Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Welsh_Blue.paa" };
	};
	class Dutch_Blue : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Blue Team (Dutch Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Dutch_Blue.paa" };
	};
	class German_Blue : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Blue Team (German Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\German_Blue.paa" };
	};
	class Swedish_Blue : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Blue Team (Swedish Flag)";
		author = "Shagger (Eric McHogan)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Swedish_Blue.paa" };
	};
	class Norwegian_Blue : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		author = "Shagger (Eric McHogan)";
		displayName = "[VKN] PVP Blue Team (Norwegian Flag)";
		descriptionShort = "Armor Level V";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Norwegian_Blue.paa" };
	};
	class Denmark_Blue : VKN_Carrier_Spec_Rig_Base
	{
		scope = 2;
		displayName = "[VKN] PVP Blue Team (Danish Flag)";
		descriptionShort = "Armor Level V";
		author = "Shagger (Eric McHogan)";
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[] = { "\VKN_Gear\data\PVP_Vests\Denmark_Blue.paa" };
	};