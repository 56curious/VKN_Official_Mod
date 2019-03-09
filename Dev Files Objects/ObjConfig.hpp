class cfgVehicles {
class ReammoBox_F;

	class VKN_Crate_F: ReammoBox_F
	{
		author="Curious";
		mapSize=1.25;
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0.382;
			verticalOffsetWorld=0;
			init="''";
		};
		editorPreview="";
		scope=2;
		displayName="[VKN] Ammo Crate";
		model="\VKN_Misc\Objects\Ammo_Crate.p3d";
		icon="\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
		editorCategory="VKN_Objects";
		maximumLoad=7000;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,0,0.501961,1.0,co)",
			"\VKN_Misc\Objects\Black_Texture.paa"
		};
		class DestructionEffects
		{
			class HouseDestr
			{
				simulation="destroy";
				type="DelayedDestructionAmmoBox";
				position="";
				intensity=1;
				interval=1;
				lifeTime=6;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_V_Rangemaster_belt
			{
				name="V_Rangemaster_belt";
				count=2;
			};
		};
	};
};

class cfgWeapons {
	class arifle_Katiba_F;

	class G36: arifle_Katiba_F {
		displayName = "Test Rifle";
		model = "\VKN_Misc\Objects\G36\g36.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\VKN_Misc\Objects\Black_Texture.paa"
		};

	};

}


class CfgModels
{
   class VKN_Crate {
      sections[] ={"camo1", "camo2"};
      skeletonName = "VKN_Crate";
   };
};





