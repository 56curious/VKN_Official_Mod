class CfgPatches {
    class VKN_Extensions_Misc {
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
            "ALiVE_intro",
            "ALiVE_main",
            "ALiVE_ui",
            "cba_settings",
            "FIR_AirWeaponSystem_US",
            "FIR_Baseplate"
        };
    };
};

class Extended_PreInit_EventHandlers {
    class VKN_Settings_preInit {
        init = "call compile preprocessFileLineNumbers '\VKN_Functions\XEH_Preinit.sqf'";
    };
};

class RscStandardDisplay;
class RscControlsGroup;
class RscPictureKeepAspect;
class RscText;
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
                sizeEx = 0.185;
              };
            };
        };
    };
};

//Custom ACE interactions
class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class VKN_Panic_Start {
                displayName = "Press Panic Alarm";
                condition = "_player in (crew vehicle _player) && {speed  vehicle _player < 20}";
                exceptions[] = {};
                statement = "_player call VKN_fnc_Panic_Start; VKN_Panic_State = true;";
                icon = "";
            };
            class VKN_Panic_Cancel { //TO-DO Add this into the start function to remove this from always being present.
                displayName = "Press Panic Alarm";
                condition = "_player in (crew vehicle _player) && {speed  vehicle _player < 20}";
                exceptions[] = {};
                statement = "if (VKN_Panic_State) then {_player call VKN_fnc_Panic_Cancel;} else {hintSilent 'No alarms active.'};";
                icon = "";
            };
        };
    };
};

// remove fir insignias
class CfgUnitInsignia {
    delete Emblem_501;
    delete Emblem_502;
    delete Emblem_503;
    delete Emblem_504;
    delete Emblem_505;
    delete Emblem_506;
    delete Emblem_507;
    delete Emblem_508;
    delete Emblem_Alisa;
    delete Decal_Armagirl_1;
    delete Decal_Armagirl_v_L;
    delete Decal_Armagirl_v_R;
    delete Decal_bunnygirl;
    delete Decal_charlotte_2;
    delete Decal_iowa1;
    delete Decal_iowa2;
    delete Decal_IronMaiden;
    delete Decal_katusha;
    delete Decal_noseart1;
    delete Decal_noseart2;
    delete Decal_riseup;
    delete Decal_Shirley;
    delete Roundel_Shirley;
    delete decal_warspite;
    delete Emblem_Crow;
    delete Emblem_Cyclops;
    delete Emblem_Galm;
    delete Emblem_Gargoyle;
    delete Emblem_Gelb;
    delete Emblem_Golem;
    delete Emblem_Grun;
    delete Emblem_Mage;
    delete Emblem_Rot;
    delete Emblem_Skeleton;
    delete Emblem_Sol;
    delete Emblem_Sol2;
    delete Emblem_Spare;
    delete Emblem_Strider;
    delete Emblem_Trigger;
    delete Emblem_Trigger2;
    delete Emblem_6airdiv;
};


/*

class RscDisplayMain: RscStandardDisplay {

    #include "\VKN_Misc\Main Menu\VKN_MainMenuDefines.hpp"
    idd=0;
    scriptName="RscDisplayMain";
    scriptPath="GUI";
    onLoad="[""onLoad"",_this,""RscDisplayMain"",'GUI'] call    (uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload="[""onUnload"",_this,""RscDisplayMain"",'GUI'] call    (uinamespace getvariable 'BIS_fnc_initDisplay')";
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

        class cba_help_credits_base;
        class cba_help_CreditsVersion: RscText {};
        class ALiVEGameLogo: RscPicture {text = ""};
        class cba_help_credits: cba_help_credits_base {size = ""};
        class JohariLogo: RscPicture {text = "\";};
        class ACE_news_apex: InfoNews {};
        class ProjectOPFORLogo: RscPictureKeepAspect{text = "";};

        class cba_help_CreditsVersion: RscText
        {
            onLoad = "_this call (uiNamespace getVariable 'cba_help_fnc_setVersionLine')";
            idc = 222712;
            font = "RobotoCondensedLight";
            shadow = 0;
            style = 1;

            x = 0.851463 * safezoneW + safezoneX;
            y = 0.9802 * safezoneH + safezoneY;
            w = 0.123781 * safezoneW;
            h = 0.0176 * safezoneH;
            sizeEx = ((0.8) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)) * GUI_GRID_H;
        };
    };
*/
