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
            "VKN_Functions"
        };
    };
};

enableDebugConsole[] = {"76561197996326460", "76561198116251840"};

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
		class LadderCivilUpLoop: LadderCivilStatic {
			speed="1.05/(2/3)";
		};
	};
};
class CfgAnimation {
	ladderSpeed="0.5*2";
};

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
class RscPicture;
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


class ctrlMenuStrip;
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class Tools {
                    items[] += {"Separator", "Mission_Template_Tool", "Separator"};
                };
                class Mission_Template_Tool {
                    text = "Mission Template Tool";
                    Picture = "\VKN_Misc\VikingLogo128.paa";
                    action = "[] call VKN_fnc_missionTemplateTool;";
                };
            };
        };
    };
};

///*
#define COLOR_TRANSPARENT { 0, 0, 0, 0 }
#define COLOR_WHITE { 1, 1, 1, 1 }
#define BACKGROUND_IMAGE ["\VKN_Misc\Main Menu\Static Background Images\Background1.paa","\VKN_Misc\Main Menu\Static Background Images\Background2.paa","\VKN_Misc\Main Menu\Static Background Images\Background3.paa","\VKN_Misc\Main Menu\Static Background Images\Background4.paa","\VKN_Misc\Main Menu\Static Background Images\Background5.paa","\VKN_Misc\Main Menu\Static Background Images\Background6.paa","\VKN_Misc\Main Menu\Static Background Images\Background7.paa","\VKN_Misc\Main Menu\Static Background Images\Background8.paa"]
class rscText;

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
              	idc = 1200;
                //style = "0x30 + 0x800";
              	text = "\VKN_Misc\Main Menu\Static Background Images\Background8.paa";
              	x = 0 * safezoneW; y = 0 * safezoneH;
              	w = 1 * safezoneW; h = 1 * safezoneH;
                colorText[] = {-1,-1,-1,-1};
                colorBackground[] = COLOR_TRANSPARENT;
              };
              class Viking_Logo: RscPictureKeepAspect {
              	idc = 1200;
                style = "0x30 + 0x800";
              	text = "\VKN_Misc\VikingLogo2048.paa";
              	x = 0.066875 * safezoneW; y = 0.236 * safezoneH;
                w = 0.288750 * safezoneW; h = 0.528 * safezoneH;
              };
              class Viking_Text_Image: RscPictureKeepAspect {
              	idc = 1201;
                style = "0x30 + 0x800";
              	text = "\VKN_Misc\Main Menu\VikingPMCText.paa";
              	x = 0.360781 * safezoneW; y = 0.456 * safezoneH;
              	w = 0.618750 * safezoneW; h = 0.077 * safezoneH;
              };
              class Viking_Text: RscText {
              	idc = 1000;
                style = "0x00 + 0x02";
                colorBackground[] = COLOR_TRANSPARENT;
                colorText[] = COLOR_WHITE;
                font = "ExoMedium";
              	text = "ARMA 3 | VIKING PMC EDITION"; //--- ToDo: Localize; //
              	x = 0.371093 * safezoneW; y = 0.379 * safezoneH;
              	w = 0.623906 * safezoneW; h = 0.22 * safezoneH;
                sizeEx = 0.19;
              };
            };
        };
    };
};
//*/





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
        class Viking_Server_Join {
            text = "VKN Private Operations Server #1";
            textIsQuote = 0;
            picture = "\VKN_Misc\VikingLogo512.paa";
            video = "";
            action = "0 = [_this, '78.31.67.210', '2302', ''] execVM '\VKN_Functions\Functions\fn_joinServer.sqf';";
            actionText = "Direct Connect to Server";
            condition = "true";
        };
    };
///*
    idd=0;
    scriptName="RscDisplayMain";
    scriptPath="GUI";
    onLoad="_script = [""onLoad"",_this,""RscDisplayMain"",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); copyToClipboard str _script;";
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
//*/
};
///*
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
//*/
