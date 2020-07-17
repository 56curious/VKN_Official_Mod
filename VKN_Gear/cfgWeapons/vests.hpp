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
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\Vanilla\VKN_Black_Carrier.paa"};
	descriptionShort="BLK Rig Lite";
};
class VKN_Black_Carrier_RIG: VKN_Carrier_Rig_Base {
	scope=2;
	displayName="[VKN] FBA Carrier Rig (Black)";
	author="Apple";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\Vanilla\VKN_Black_Carrier.paa"};
	descriptionShort="BLK Rig";
};

class VKN_Carrier_Lite_Loki_Black_1: VKN_Carrier_Rig_Base {
	scope=2;
	displayName="[VKN] LokiCarrier Lite (Black)";
	picture = "\VKN_Misc\VKN_Logo_Inverted.paa";
	author="Shagger (Eric McHogan)";
	model="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
	hiddenSelections[]={"camo"};
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\Faction\Vest_loki_Black.paa"};
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
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\Faction\Vest_loki_Black.paa"};
	descriptionShort="BLK Rig";
	class ItemInfo: Carrier_ItemInfo_Base { uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d"; };
};

class VKN_Carrier_Spec_Police_Riot : VKN_Carrier_Spec_Rig_Base	{
	scope = 2;
	displayName = "[VKN] Police Riot Vest";
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = { "\VKN_Gear\data\vests\Faction\vkn_carrier_gl_rig_police_co.paa" };
};

class VKN_Vest_V_HarnessO_drk_F: Vest_NoCamo_Base {
	author = "Jonmo";
	scope = 2;
	displayName = "[VKN] VIS LVB Harness (Dark)";
	picture="\VKN_Misc\VKN_Logo_Inverted.paa";
	model = "\A3\Characters_F\OPFOR\equip_o_vest01";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"\VKN_Gear\data\Uniforms\clothing_drk_tna_CO.paa","\VKN_Gear\data\Uniforms\tech_drk_tna_CO.paa","\VKN_Gear\data\Uniforms\tech_drk_tna_CO.paa"};
	class ItemInfo: VestItem {
		uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
		containerClass = "Supply160";
		mass = 30;
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
	};
};

/// M98/M90 Vests

	class VKN_Carrier_M98_Rig: VKN_Carrier_Rig_Base {
	scope=2;
	displayName="[VKN] Carrier Rig (M98)";
	author="Jonmo";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\Vanilla\Vest_M98.paa"};
	descriptionShort="Norwegian M98 Rig";
};

class VKN_Carrier_Lite_M98: VKN_Carrier_Lite_Base {
	scope=2;
	displayName="[VKN] Carrier Lite (M98)";
	author="Jonmo";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\Vanilla\Vest_M98.paa"};
	descriptionShort="Norwegian M98 Rig";
};

class VKN_Carrier_M90_Rig: VKN_Carrier_Rig_Base {
	scope=2;
	displayName="[VKN] Carrier Rig (M90)";
	author="Jonmo";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\Vanilla\Vest_M90.paa"};
	descriptionShort="Swedish M90 Rig";
};

class VKN_Carrier_Lite_M90: VKN_Carrier_Lite_Base {
	scope=2;
	displayName="[VKN] Carrier Lite (M90)";
	author="Jonmo";
	hiddenSelectionsTextures[]={"\VKN_Gear\data\Vests\Vanilla\Vest_M90.paa"};
	descriptionShort="Swedish M90 Rig";
};

