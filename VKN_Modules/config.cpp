class CfgPatches {
    class VKN_modules {
        name = VKN_Modules;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {};

		requiredAddons[] = {
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Functions_F",
			"A3_Functions_F_Curator",
			"A3_Functions_F_Mark",
			"A3_Modules_F",
			"A3_Modules_F_Curator"
		};
	};
};

class CfgFactionClasses {
	class NO_CATEGORY;
	class VKN_Base: NO_CATEGORY {
		displayName = "Viking PMC";
	};
};

class IGUIBack;
class RscButton;
class RscText;
class RscEdit;
class RscListbox;
class RscStructuredText;

#include "Displays\VKN_Function_Guide_Home.hpp"
#include "Displays\VKN_Function_Guide_Option.hpp"

class CfgVehicles {
	class Logic;
	class Module_F: Logic {

    class AttributesBase {
      class Default;
      class Edit;
      class Combo;
      class Checkbox;
      class CheckboxNumber;
      class ModuleDescription;
    };

		class ModuleDescription {
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
		};
	};

  #include "\VKN_Modules\Descriptions\Curator.hpp"
  #include "\VKN_Modules\Descriptions\Intel.hpp"




	class VKN_Modules_Base: Module_F {
		mapSize=1;
		author="Curious";
		vehicleClass="Modules";
		category="VKN_Base";
		side=7;
		scope=1;
		scopeCurator=2;
		displayName="VKN Module Base";
		icon="\VKN_Misc\VikingLogo128.paa";
		picture="\VKN_Misc\VikingLogo128.paa";
		portrait="";
		function="";
		functionPriority=1;
		isGlobal=2;
		isTriggerActivated=0;
		isDisposable=0;
		class Arguments
		{
		};
		class ModuleDescription: ModuleDescription {
			description="VKN Module Base";
		};
	};
  /*
	class VKN_Apply_Textures: VKN_Modules_Base {
		displayName = "Apply Texture";
		curatorCanAttach=1;
		function = "VKN_fnc_applyTexture";
	};
	class VKN_Spawn_Jukebox: VKN_Modules_Base  {
		displayName ="Spawn Jukebox (Can't be stopped)"
		function = "VKN_fnc_spawnJukebox";
	};
	class VKN_Spawn_AI: VKN_Modules_Base {
		displayName = "Spawn AI";
		function = "VKN_fnc_spawnAI";
	};
  */
  class VKN_Function_Guide: VKN_Modules_Base {
    displayName ="Function Guide"
		function = "VKN_fnc_functionGuide";
  };
};
