class CfgPatches {
    class VKN_Misc {
        name = VKN_Misc;
        author = "Curious";
        version = 1.0.0;
        versionStr = "1.0.0";
        versionAr[] = {0,1,0};

        units[] = {};

        requiredAddons[] =
        {
            "A3_Editor_F",
            "A3_Data_F",
            "A3_UI_F",
            "A3_UI_F_Curator",
            "A3_Functions_F",
            "A3_Functions_F_Curator",
            "A3_Functions_F_Mark",
            "A3_Modules_F",
            "A3_Modules_F_Curator",
            "A3_Map_Altis",
            "A3_Map_Stratis",
            "A3_Map_VR",
            "A3_Map_Malden",
            "A3_Map_Stratis_Scenes",
            "A3_Map_Altis_Scenes",
            "A3_Map_VR_Scenes",
            "A3_Map_Malden_Scenes_F",
            "FA_Weapons_VKN",
            "VKN_Functions"
        };
    };
};

#define private 0       // Hidden to all
#define protected 1     // Can use but still hidden
#define public 2        // Visible to all

//UI Inheritence
class rscText;
class rscButton;
class rscPicture;
class rscActiveText;
class rscListBox;
class rscCombo;
class rscProgress;
class iGUIBack;
class rscStructuredText;
class rscCheckbox;
class rscFrame;
class rscEdit;


//Eden ctrls
class ctrlEdit;
class ctrlEditMulti;
class ctrlButton;
class ctrlButtonPicture;
class ctrlButtonClose;
class ctrlButtonCancel;
class ctrlButtonOK;
class ctrlButtonSearch;
class ctrlButtonCollapseAll;
class ctrlButtonExpandAll;
class ctrlButtonPictureKeepAspect;
class ctrlStructuredText;
class ctrlCombo;
class ctrlCheckbox;
class ctrlXSliderH;
class ctrlControlsGroup;
class ctrlControlsGroupNoScrollbars;
class ctrlMenuStrip;
class ctrlMenu;
class ctrlStaticBackground;
class ctrlStatic;
class ctrlStaticFooter;
class ctrlStaticBackgroundDisable;
class ctrlStaticBackgroundDisableTiles;
class ctrlStaticPictureKeepAspect;
class ctrlStaticPicture;
class ctrlStaticMulti;
class ctrlStaticTitle;
class ctrlStaticLine;
class ctrlTree;
class ctrlListbox;
class ctrlListNBox;
class ctrlToolbox;
class ctrlToolboxPictureKeepAspect;
class ctrlProgress;
class ctrlStaticFrame;
class scrollbar;
class ctrlShortcutButton;
class ctrlActivePicture;

class VKN_ctrlActivePicture: ctrlActivePicture {
  colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
  colorBackgroundActive[] = {-1,-1,-1,-1};
};


///////
//3DEN Enhanced Disable Background - Credits to R3vo https://github.com/R3voA3/3den-Enhanced/
//GUI and script related macros
#include "\a3\3DEN\UI\macros.inc"
//DIK Key Codes
#include "\a3\ui_f\hpp\definedikcodes.inc"
//Common GRIDs
#include "\a3\ui_f\hpp\definecommongrids.inc"
//Eden Editor IDDs and IDCs as well as controls types and styles and macros
#include "\a3\3den\ui\resincl.inc"

//Defines
#define CENTERED_X(w) (CENTER_X - (w / 2 * GRID_W))
#define DIALOG_TOP (safezoneY + 17 * GRID_H)
#define CTRL_DEFAULT_H (5 * GRID_H)

//Disabled background
#define DISABLE_BACKGROUND class BackgroundDisable: ctrlStaticBackgroundDisable {};\
                           class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
//////////////////////
//////////////////////


enableDebugConsole[] = {"76561197996326460", "76561198116251840", "76561198138461195", "76561198044162606", "76561198036865266", "76561197960287930"};

class CfgMPGameTypes {
    class COOP;
    class VKN_OP {
        id = 433;
        name = "VKN Operation";
        picture = "\VKN_Misc\VikingLogo128.paa";
        shortcut = "VKN OP";
        description = "Custom Viking PMC Operation - Customized gametype cfg.";
    };
};


//Orbats and mainMenu Credit
class cfgOrbat {
    #include "configs\VKN_Orbat.hpp"
};

class cfgCredits {
    #include "configs\VKN_Orbat.hpp"

    class VKNCreditsMovie {
      #include "configs\cfgCredits_Roles.hpp"
    };
    class VKNCreditsRanks {
      #include "configs\cfgCredits_Ranks.hpp"
    };
};

class CfgEditorSubcategories {
    class VKN_Objects
    {
        displayName = "Viking Objects";
    };
};

class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic {
	class States {
		class LadderCivilStatic;
    class AswmPercMstpSnonWnonDnon;
		class AsswPercMstpSnonWnonDnon;
		class AbswPercMstpSnonWnonDnon;
		class AdvePercMstpSnonWrflDnon;
		class AsdvPercMstpSnonWrflDnon;
		class AbdvPercMstpSnonWrflDnon;
		class LadderCivilUpLoop: LadderCivilStatic {
			speed="1.05/(2/3)";
		};

    class AswmPercMrunSnonWnonDf: AswmPercMstpSnonWnonDnon {
			speed=0.38;
		};
		class AsswPercMrunSnonWnonDf: AsswPercMstpSnonWnonDnon {
			speed=0.38;
		};
		class AbswPercMrunSnonWnonDf: AbswPercMstpSnonWnonDnon {
			speed=0.34;
		};
		class AdvePercMrunSnonWrflDf: AdvePercMstpSnonWrflDnon {
			speed=0.2;
		};
		class AsdvPercMrunSnonWrflDf: AsdvPercMstpSnonWrflDnon {
			speed=0.2;
		};
		class AbdvPercMrunSnonWrflDf: AbdvPercMstpSnonWrflDnon {
			speed=0.2;
		};

	};
};
class CfgAnimation {
	ladderSpeed="0.5*2";
};


//ASDG Joint Rails - cba merge configs

#include "ASDGJR\jr_config.hpp"

//Sort out our custom weapons - same as compat mod
//Normal
class SlotInfo;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class WeaponSlotsInfo;

class CfgWeapons {

  class FA_Base_Rifle_VKN;
  class FA_Base_Pistol_VKN;

  class VKN_MP5: FA_Base_Rifle_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class CowsSlot : asdg_OpticRail1913_short {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_FrontSideRail {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };

  class VKN_VSS: FA_Base_Rifle_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class CowsSlot : asdg_OpticRail1913_long {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_FrontSideRail {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };
  class VKN_AKM: FA_Base_Rifle_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_762R {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class CowsSlot : asdg_OpticRail1913 {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_FrontSideRail {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class UnderBarrelSlot : SlotInfo {
            linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
            compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };
  class VKN_AK74M: FA_Base_Rifle_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_545R {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class CowsSlot : asdg_OpticRail1913 {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_FrontSideRail {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class UnderBarrelSlot : SlotInfo {
            linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
            compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };
  class VKN_SVD: FA_Base_Rifle_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_762R_SVD {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class CowsSlot : asdg_OpticRail1913 {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_FrontSideRail {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class UnderBarrelSlot : SlotInfo {
            linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
            compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };
  class VKN_AK5C: FA_Base_Rifle_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_556 {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class CowsSlot : asdg_OpticRail1913 {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_FrontSideRail {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class UnderBarrelSlot : SlotInfo {
            linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
            compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };
  class VKN_ASVAL: FA_Base_Rifle_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_556 {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class CowsSlot : asdg_OpticRail1913 {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_FrontSideRail {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class UnderBarrelSlot : SlotInfo {
            linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
            compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };
  class VKN_Remington870: FA_Base_Rifle_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class MuzzleSlot : asdg_MuzzleSlot_556 {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class CowsSlot : asdg_OpticRail1913 {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_FrontSideRail {
            //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class UnderBarrelSlot : SlotInfo {
            linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
            compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };
  class VKN_DesertEagle: FA_Base_Pistol_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo	{
        class CowsSlot : asdg_PistolOpticRail1913 {
            linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_PistolUnderRail {
            linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };
  class VKN_SigP250: FA_Base_Pistol_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class CowsSlot : asdg_PistolOpticRail1913 {
            linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_PistolUnderRail {
            linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };
  class VKN_SigP226: FA_Base_Pistol_VKN {
    class WeaponSlotsInfo : WeaponSlotsInfo {
        class CowsSlot : asdg_PistolOpticRail1913 {
            linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
        class PointerSlot : asdg_PistolUnderRail {
            linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            //compatibleItems[] = {};
            iconScale = 0.1;
        };
    };
  };
};



//////
//////    RSC DISPLAY INVENTORY ADJUSTMENTS - attempt to overwrite existing data while keeping rest of system intact
//////

// Need to switch mags UI pos on primary weapon as its the wrong way round
//Adjust opacity on logo
//Make repack mag button same style as exit
//fix missing text on items
//See Suggestions on discord

/*
class RscDisplayInventory {
  class controls {
    #include "displays\VKN_rscDisplayInventory.hpp"
  };
};

class RscDisplayInventory_DLCTemplate {
  class controls {
    #include "displays\VKN_rscDisplayInventory.hpp"
  };
}

class VKN_Inventory {
  class controls {
    #include "displays\VKN_rscDisplayInventory.hpp"
  };
};
*/



// Default Discord Rich Presence for Connors's workshop mod.
class cfgDiscordRichPresence {
  applicationID = "565082898638569472";
  defaultDetails = "Viking PMC";
  defaultState = "In the Menus...";
  defaultLargeImageKey = "vkn_logo";
  defaultLargeImageText = "Viking PMC";
  defaultSmallImageKey = "arma3";
  defaultSmallImageText = "";
};

#include "fonts\cfgFontFamilies.hpp"
#include "markers\cfgMarkers.hpp"
#include "compositions\cfgGroups.hpp"
#include "configs\cfgInsignia.hpp"


class RscStandardDisplay;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscVignette;

//Full screen loading
//display change
class RscPictureload: RscPictureKeepAspect
{
    style="0x30 + 0x800";
    idc=999;
    text="#(argb,8,8,3)color(0,0,0,1)";
    colorText[]={1,1,1,1};
    x="safezoneX";
    y="safezoneY";
    w="0.5*(safezoneW)";
    h="0.5*(safezoneH)";

};

class RscDisplayLoadMission: RscStandardDisplay
{
    onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
    onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
    class controlsBackground
    {
        class CA_Vignette: RscVignette
        {
            colorText[]={0,0,0,1};
        };
        class Map: RscPicture
        {
            idc=999;
            text="#(argb,8,8,3)color(0,0,0,1)";
            colorText[]={1,1,1,1};
            x="safezoneX";
            y="safezoneY - (safezoneW * 4/3) / 4";
            w="safezoneW";
            h="safezoneW * 4/3";
        };
        class Noise: RscPicture
        {
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
            colorText[]={1,1,1,0.3};
            x="safezoneX";
            y="safezoneY";
            w="safezoneW";
            h="safezoneH";
        };
    };
};
class RscDisplayLoading
{
    onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
    onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

    class controlsBackground
    {
        class CA_Vignette: RscVignette
        {
            colorText[]={0,0,0,1};
        };
        class Map: RscPicture
        {
            idc=999;
            text="#(argb,8,8,3)color(0,0,0,1)";
            colorText[]={1,1,1,1};
            x="safezoneX";
            y="safezoneY - (safezoneW * 4/3) / 4";
            w="safezoneW";
            h="safezoneW * 4/3";
        };
        class Noise: RscPicture
        {
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
            colorText[]={1,1,1,0.3};
            x="safezoneX";
            y="safezoneY";
            w="safezoneW";
            h="safezoneH";
        };
    };
};
class RscDisplayNotFreeze: RscStandardDisplay
{
    onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
    onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

    class controlsBackground
    {
        class CA_Vignette: RscVignette
        {
            colorText[]={0,0,0,1};
        };
        class Map: RscPicture
        {
            idc=999;
            text="#(argb,8,8,3)color(0,0,0,1)";
            colorText[]={1,1,1,1};
            x="safezoneX";
            y="safezoneY - (safezoneW * 4/3) / 4";
            w="safezoneW";
            h="safezoneW * 4/3";
        };
        class Noise: RscPicture
        {
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
            colorText[]={1,1,1,0.3};
            x="safezoneX";
            y="safezoneY";
            w="safezoneW";
            h="safezoneH";
        };
    };

};
class RscDisplayLoadCustom: RscDisplayLoadMission
{
    onLoad="['onload',_this,'RscDisplayLoading'] call (uiNamespace getVariable 'full_mission_load_fnc_load')";
    onUnload="[""onUnload"",_this,""RscDisplayLoading""] call (uiNamespace getVariable 'full_mission_load_fnc_load')";

    class controlsBackground
    {
        class CA_Vignette: RscVignette
        {
            colorText[]={0,0,0,1};
        };
        class Map: RscPicture
        {
            idc=999;
            text="#(argb,8,8,3)color(0,0,0,1)";
            colorText[]={1,1,1,1};
            x="safezoneX";
            y="safezoneY - (safezoneW * 4/3) / 4";
            w="safezoneW";
            h="safezoneW * 4/3";
        };
        class Noise: RscPicture
        {
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa";
            colorText[]={1,1,1,0.3};
            x="safezoneX";
            y="safezoneY";
            w="safezoneW";
            h="safezoneH";
        };
    };
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//3den Editor edits
class cfg3DEN {
  class EventHandlers {
    class VKN {
      OnTerrainNew = "call VKN_EH_fnc_eh_onMissionLoad";
    };
  };
};

class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class Tools {
                    items[] += {"Mission_Template_Tool", "Separator"};
                };
                class Mission_Template_Tool {
                    text = "Mission Template Tool";
                    Picture = "\VKN_Misc\VikingLogo128.paa";
                    action = "[] spawn VKN_VTT_fnc_VTT_home;";
                };

                //disable enter key
                class MissionPreviewSP {
        					shortcuts[]={156};
        				};
                class ButtonPlay: ctrlShortcutButton {

            			shortcuts[]= {
            				"0x00050000 + 0",
            				57
            			};
            		};
            };
        };
    };
};


#define COLOR_TRANSPARENT { 0, 0, 0, 0 }
#define COLOR_WHITE { 1, 1, 1, 1 }
#define BACKGROUND_IMAGE ["\VKN_Misc\Main Menu\Static Background Images\Background1.paa","\VKN_Misc\Main Menu\Static Background Images\Background2.paa","\VKN_Misc\Main Menu\Static Background Images\Background3.paa","\VKN_Misc\Main Menu\Static Background Images\Background4.paa","\VKN_Misc\Main Menu\Static Background Images\Background5.paa","\VKN_Misc\Main Menu\Static Background Images\Background6.paa","\VKN_Misc\Main Menu\Static Background Images\Background7.paa","\VKN_Misc\Main Menu\Static Background Images\Background8.paa"]

class RscDisplayStart: RscStandardDisplay {
    class controls {
        class LoadingStart: RscControlsGroup {
            class controls {
              delete Logo;
              delete Noise;
              delete Black;
              class RscPicture;
              class RscText;

              class Viking_Background: RscPicture
              {
              	idc = 1211;
                style = "0x30";
              	text = __EVAL(selectRandom BACKGROUND_IMAGE);
                x = 0 * safezoneW; y = 0 * safezoneH;
                w = 1 * safezoneW; h = 1 * safezoneH;
                colorBackground[] = COLOR_TRANSPARENT;
              };
              class Viking_Logo: RscPictureKeepAspect {
              	idc = 1200;
                style = "0x30 + 0x800";
              	text = "\VKN_Misc\VikingLogo2048.paa";
              	x = 0.066875 * safezoneW; y = 0.236 * safezoneH;
                w = 0.288750 * safezoneW; h = 0.528 * safezoneH;
              };
              /*class Viking_Text_Image: RscPictureKeepAspect {
              	idc = 1201;
                style = "0x30 + 0x800";
              	text = "\VKN_Misc\Main Menu\VikingPMCText.paa";
              	x = 0.360781 * safezoneW; y = 0.456 * safezoneH;
              	w = 0.618750 * safezoneW; h = 0.077 * safezoneH;
              };*/
              class Viking_Text: RscText {
              	idc = 1000;
                style = "0x00 + 0x02";
                colorBackground[] = COLOR_TRANSPARENT;
                colorText[] = COLOR_WHITE;
                font = "ExoMedium";
              	text = "ARMA 3 | VIKING PMC EDITION"; //--- ToDo: Localize; //
              	x = 0.371093 * safezoneW; y = 0.379 * safezoneH;
              	w = 0.623906 * safezoneW; h = 0.22 * safezoneH;
                sizeEx = safeZoneH * 0.1;
              };
            };
        };
    };
};

#include "\vkn_misc\displays\displayDefines.hpp"
#include "\VKN_Misc\displays\VKN_Template_Tool_Home.hpp"
#include "\VKN_Misc\displays\VKN_Template_Tool_Basic_Settings.hpp"
#include "\VKN_Misc\displays\VKN_Template_Tool_File_Setup.hpp"
#include "\VKN_Misc\displays\VKN_Template_Tool_Info.hpp"
#include "\VKN_Misc\displays\VKN_Template_Tool_Notification.hpp"
#include "\VKN_Misc\displays\VKN_Template_Tool_Delete_Check.hpp"



class RscDisplayMain: RscStandardDisplay {

    //#include "\VKN_Misc\Main Menu\VKN_MainMenuDefines.hpp"

    class Spotlight {
        class Viking_Welcome {
            text = "VKN Offical Mod";
            textIsQuote = 0;
            picture = "\VKN_Misc\VikingLogo512.paa";
            video = "\VKN_Misc\VKNLOGO_512x.ogv";
            action = "disableserialization; _script = [] execVM '\VKN_Functions\Functions\fn_ORBATCreate.sqf'; _code = uiNamespace getvariable 'CUR_bis_fnc_credits'; [_code] spawn _code;";
            actionText = "Developed By Viking PMC";
            condition = "true";
        };
        class Server_Join {
            text = "Quick Join Server #1";
            textIsQuote = 0;
            picture = "\VKN_Misc\VikingLogo512.paa";
            video = "";
            action = "0 = [_this, '', '', ''] execVM '\VKN_Functions\Functions\fn_joinServer.sqf';";
            actionText = "Direct Connect to Server";
            condition = "true";
        };
    };
/*
    idd=0;
    scriptName="RscDisplayMain";
    scriptPath="GUI";
    onLoad="_script = [""onLoad"",_this,""RscDisplayMain"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); diag_log 'VKN_MainMenu_start'; diag_log str _script; diag_log 'VKN_MainMenu_end';";
    onUnload="[""onUnload"",_this,""RscDisplayMain"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
    class ControlsBackground
    {
        class MouseArea: RscText
        {
            idc=999;
            style=16;
            x="safezoneXAbs";
            y="safezoneY";
            w="safezoneWAbs";
            h="safezoneH";
        };
        class BackgroundLeft: RscText
        {
            idc = 1001;
            x = -3.83233 * safezoneW + safezoneX;
            y = -5.275 * safezoneH + safezoneY;
            w = 3.83233 * safezoneW;
            h = 11 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0};
        };
        class BackgroundRight: BackgroundLeft
        {
            idc = 1002;
            x = 1 * safezoneW + safezoneX;
            y = -5.275 * safezoneH + safezoneY;
            w = 4.12603 * safezoneW;
            h = 11 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0};
        };
        class Picture: RscPicture
        {
            idc = 998;

            text = "";
            x = -0.000281541 * safezoneW + safezoneX;
            y = 0.000329973 * safezoneH + safezoneY;
            w = 1.00056 * safezoneW;
            h = 1.771 * safezoneH;
        };
    };
    class Controls {

        //Remove/overwrite old main menu
        delete ModIcons;
        delete B_Quit;
        delete B_Expansions;
        delete B_Credits;
        delete B_Player;
        delete B_Options;
        delete B_SinglePlayer;
        delete B_MissionEditor;
        delete B_MultiPlayer;
        delete B_SingleMission;
        delete B_Campaign;
        delete Date;
        delete ModList;
        delete TrafficLight;
        delete Version;

        class RscMainMenuSpotlight;
        class RscActivePicture;
        class RscButton;
        class RscActivePictureKeepAspect;
        class RscButtonMenu;
        class RscControlsGroupNoScrollbars;
        class RscControlsGroupNoHScrollbars;
        class BackgroundSpotlight: RscPicture {colorText[] = {0,0,0,0};};
        class BackgroundSpotlightLeft: BackgroundSpotlight {colorText[] = {0,0,0,0};};
        class BackgroundSpotlightRight: BackgroundSpotlightLeft {colorText[] = {0,0,0,0};};
        class Spotlight1: RscMainMenuSpotlight {x = 1.00028 * safezoneW + safezoneX; y = 0.148 * safezoneH + safezoneY; w = 0.166708 * safezoneW; h = 0.296296 * safezoneH;};
        class Spotlight3: RscMainMenuSpotlight {x = 1.00028 * safezoneW + safezoneX; y = 0.148 * safezoneH + safezoneY; w = 0.166708 * safezoneW; h = 0.296296 * safezoneH;};
        class BackgroundBar: RscText {colorBackground[] = {0,0,0,0};};
        class BackgroundCenter: BackgroundBar {colorBackground[] = {0,0,0,0};};
        class BackgroundBarLeft: RscPicture {text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradientMods_ca.paa";};
        class BackgroundBarRight: BackgroundBarLeft {text = "";};
        class Logo: RscActivePicture {text = "\a3\Ui_f\data\Logos\arma3_shadow_ca.paa";};
        class BackgroundLeft: RscText {colorBackground[] = {0.1,0.1,0.1,0};};
        class BackgroundRight: BackgroundLeft {colorBackground[] = {0.1,0.1,0.1,0};};
        class Picture: RscPicture {text = "";};



        class Button3DEditor: RscButton
        {
            idc = 115;
            shortcuts[] = {"512 + 0x20"};
            onButtonClick = "!cheatsenabled";

            x = -3.83233 * safezoneW + safezoneX;
            y = -5.275 * safezoneH + safezoneY;
            w = 0 * safezoneW;
            h = 0 * safezoneH;
            colorBackground[] = {0,0,0,0};
        };
        class Spotlight2: RscText
        {
            idc = 1020;
            show = 0;

            x = 0.54126 * safezoneW + safezoneX;
            y = 0.368 * safezoneH + safezoneY;
            w = 0.166708 * safezoneW;
            h = 0.296296 * safezoneH;
        };
        class SpotlightPrev: RscActivePictureKeepAspect
        {
            idc = 1060;
            //color[] = {1,1,1,0.25};
            //fade = 1;

            show = 0;

            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightPrev_ca.paa"; //--- ToDo: Localize;
            x = 0.54126 * safezoneW + safezoneX;
            y = 0.676 * safezoneH + safezoneY;
            w = 0.166708 * safezoneW;
            h = 0.037037 * safezoneH;
            //colorActive[] = {1,1,1,1};
        };
        class SpotlightNext: SpotlightPrev
        {
            idc = 1061;
            angle = 180;

            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightNext_ca.paa"; //--- ToDo: Localize;
            x = 0.54126 * safezoneW + safezoneX;
            y = 0.324 * safezoneH + safezoneY;
            w = 0.165041 * safezoneW;
            h = 0.033 * safezoneH;
            colorActive[] = {1,1,1,1};
        };
        class TitleSingleplayer: RscButtonMenu
        {
            idc = 1011;

            text = "Singleplayer"; //--- ToDo: Localize;
            x = 0.195705 * safezoneW + safezoneX;
            y = 0.291 * safezoneH + safezoneY;
            w = 0.0979933 * safezoneW;
            h = 0.044 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
        };
        class GroupSingleplayer: RscControlsGroupNoScrollbars
        {
            idc = 1001;

            x = 0.293698 * safezoneW + safezoneX;
            y = 0.291 * safezoneH + safezoneY;
            w = 0.0833542 * safezoneW;
            h = 0.111111 * safezoneH;
            class Controls
            {
            };
        };
        class TitleMultiplayer: RscButtonMenu
        {
            idc = 1012;

            text = "Multiplayer"; //--- ToDo: Localize;
            x = 0.195705 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.0979933 * safezoneW;
            h = 0.044 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
        };
        class GroupMultiplayer: RscControlsGroupNoScrollbars
        {
            idc = 1002;

            x = 0.293698 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.0833542 * safezoneW;
            h = 0.0666667 * safezoneH;
            class Controls
            {
            };
        };
        class TitleTutorials: RscButtonMenu
        {
            idc = 1013;

            text = "Tutorials"; //--- ToDo: Localize;
            x = 0.195705 * safezoneW + safezoneX;
            y = 0.467 * safezoneH + safezoneY;
            w = 0.0979933 * safezoneW;
            h = 0.044 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
        };
        class GroupTutorials: RscControlsGroupNoScrollbars
        {
            idc = 1003;

            x = 0.293698 * safezoneW + safezoneX;
            y = 0.467 * safezoneH + safezoneY;
            w = 0.112528 * safezoneW;
            h = 0.133333 * safezoneH;
            class Controls
            {
            };
        };
        class TitleOptions: RscButtonMenu
        {
            idc = 1014;

            text = "Options"; //--- ToDo: Localize;
            x = 0.195705 * safezoneW + safezoneX;
            y = 0.555 * safezoneH + safezoneY;
            w = 0.0979933 * safezoneW;
            h = 0.044 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
        };
        class TitleSession: RscButtonMenu
        {
            idc = 1015;

            text = "Profile Settings"; //--- ToDo: Localize;
            x = 0.195705 * safezoneW + safezoneX;
            y = 0.643 * safezoneH + safezoneY;
            w = 0.0979933 * safezoneW;
            h = 0.044 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
        };
        class TitleIconSingleplayer: RscButton
        {
            idc = 1111;
            show = 0;
            style = "0x30 + 0x800";
            colorBackgroundActive[] = {1,1,1,1};
            colorFocused[] = {1,1,1,1};
            onMouseEnter = "(_this select 0) ctrlsettextcolor [0,0,0,1];";
            onSetFocus = "(_this select 0) ctrlsettextcolor [0,0,0,1];";
            onMouseExit = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
            onKillFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";

            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_singleplayer_ca.paa"; //--- ToDo: Localize;
            x = 0.216335 * safezoneW + safezoneX;
            y = 0.291 * safezoneH + safezoneY;
            w = 0.0333416 * safezoneW;
            h = 0.0296296 * safezoneH;
            colorBackground[] = {0,0,0,0};
            tooltip = "Singleplayer"; //--- ToDo: Localize;
        };
        class TitleIconMultiplayer: TitleIconSingleplayer
        {
            idc = 1112;

            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_multiplayer_ca.paa"; //--- ToDo: Localize;
            x = 0.216335 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.0333416 * safezoneW;
            h = 0.0296296 * safezoneH;
            colorBackground[] = {0,0,0,0};
            tooltip = "Multiplayer"; //--- ToDo: Localize;
        };
        class TitleIconTutorials: TitleIconSingleplayer
        {
            idc = 1113;

            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_tutorials_ca.paa"; //--- ToDo: Localize;
            x = 0.20602 * safezoneW + safezoneX;
            y = 0.467 * safezoneH + safezoneY;
            w = 0.0333416 * safezoneW;
            h = 0.0296296 * safezoneH;
            colorBackground[] = {0,0,0,0};
            tooltip = "Tutorials"; //--- ToDo: Localize;
        };
        class TitleIconOptions: TitleIconSingleplayer
        {
            idc = 1114;

            text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_options_ca.paa"; //--- ToDo: Localize;
            x = 0.200863 * safezoneW + safezoneX;
            y = 0.555 * safezoneH + safezoneY;
            w = 0.0333416 * safezoneW;
            h = 0.0296296 * safezoneH;
            colorBackground[] = {0,0,0,0};
            tooltip = "Options"; //--- ToDo: Localize;
        };
        class Exit: RscButtonMenu
        {
            idc = 106;

            text = "Exit Game"; //--- ToDo: Localize;
            x = 0.195705 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.0979933 * safezoneW;
            h = 0.044 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
        };
        class RscPicture_1201: RscPicture
        {
            idc = 1201;
            text = "\VKN_misc\main menu\VikingPMCText.paa";
            x = 0.195705 * safezoneW + safezoneX;
            y = 0.203 * safezoneH + safezoneY;
            w = 0.510597 * safezoneW;
            h = 0.066 * safezoneH;
        };
        class RscPicture_1202: RscPicture
        {
            idc = 1202;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.75272 * safezoneW + safezoneX;
            y = 0.203 * safezoneH + safezoneY;
            w = 0.211459 * safezoneW;
            h = 0.561 * safezoneH;
        };
        class GroupOptions: RscControlsGroupNoScrollbars
        {
            idc = 1004;

            x = 0.293698 * safezoneW + safezoneX;
            y = 0.555 * safezoneH + safezoneY;
            w = 0.0833542 * safezoneW;
            h = 0.133333 * safezoneH;
            class Controls
            {
            };
        };
        class GroupSession: RscControlsGroupNoScrollbars
        {
            idc = 1005;

            x = 0.293698 * safezoneW + safezoneX;
            y = 0.643 * safezoneH + safezoneY;
            w = 0.0833542 * safezoneW;
            h = 0.0888889 * safezoneH;
            class Controls
            {
            };
        };
        class InfoMods: RscControlsGroupNoHScrollbars
        {
            idc = 1030;

            x = 0.00277848 * safezoneW + safezoneX;
            y = 0.944778 * safezoneH + safezoneY;
            w = 1.00056 * safezoneW;
            h = 0.033 * safezoneH;
            class Controls
            {
            };
        };
        class InfoDLCsOwned: InfoMods
        {
            idc = 10311;

            x = 0.00487599 * safezoneW + safezoneX;
            y = 0.907 * safezoneH + safezoneY;
            w = 0.497222 * safezoneW;
            h = 0.0296296 * safezoneH;
            class Controls
            {
            };
        };
        class InfoNews: InfoMods
        {
            idc = 1032;

            x = 0.913867 * safezoneW + safezoneX;
            y = 0.914815 * safezoneH + safezoneY;
            w = 0.0833542 * safezoneW;
            h = 0.0296296 * safezoneH;
            class Controls
            {
            };
        };
        class InfoVersion: InfoNews
        {
            idc = 1033;

            x = 0.913867 * safezoneW + safezoneX;
            y = 0.948148 * safezoneH + safezoneY;
            w = 0.0833542 * safezoneW;
            h = 0.0296296 * safezoneH;
            class Controls
            {
            };
        };
        class Footer: RscText
        {
            style = 2;
            shadow = 0;
            font = "RobotoCondensedLight";

            idc = 1010;
            text = "Â© 2013-2018 Bohemia Interactive a.s. All rights reserved. (Main Menu by Curious)"; //--- ToDo: Localize;
            x = 0 * safezoneW + safezoneX;
            y = 0.985185 * safezoneH + safezoneY;
            w = 1 * safezoneW;
            h = 0.0148148 * safezoneH;
            colorText[] = {1,1,1,0.5};
            colorBackground[] = {0,0,0,0.75};
            sizeEx = 1 *    (pixelH * pixelGrid * 2) * GUI_GRID_H;
        };
        class InfoDLCs: InfoDLCsOwned
        {
            idc = 10311;

            x = 0.505158 * safezoneW + safezoneX;
            y = 0.907 * safezoneH + safezoneY;
            w = 0.497222 * safezoneW;
            h = 0.0296296 * safezoneH;
            class Controls
            {
            };
        };
    };
*/
};
/*
class RscDisplayMainMenuBackground {
    #include "\VKN_Misc\Main Menu\VKN_MainMenuDefines.hpp"
    scriptName="RscDisplayMainMenuBackground";
    scriptPath="GUI";
    onLoad="[""onLoad"",_this,""RscDisplayMainMenuBackground"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload="[""onUnload"",_this,""RscDisplayMainMenuBackground"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
    idd=-1;
    fadein=0;
    fadeout=0;
    duration=1e+010;
    class Controls
    {
        class Background {
            colorBackground[]={0,0,0,0};
        };
        class Picture {
            text="";
        };
        class BackgroundLeft: RscText
        {
            idc = 1001;
            x = -3.83233 * safezoneW + safezoneX;
            y = -5.275 * safezoneH + safezoneY;
            w = 3.83233 * safezoneW;
            h = 11 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class BackgroundRight: BackgroundLeft
        {
            idc = 1002;
            x = 1 * safezoneW + safezoneX;
            y = -5.275 * safezoneH + safezoneY;
            w = 4.12603 * safezoneW;
            h = 11 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,1};
        };
    };
};
*/
