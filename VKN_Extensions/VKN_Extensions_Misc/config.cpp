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

class RscDisplayStart: RscStandardDisplay
{
    class controls
    {
        class LoadingStart: RscControlsGroup
        {
            class controls {
                class Logo: RscPictureKeepAspect
                {
                    access = 1;
                    text = "\VKN_Misc\VikingLogoLarge_ca.paa";
                    onLoad = "";
                    x = "0.252437 * safezoneW";
                    y = "0.159 * safezoneH";
                    h = "0.693 * safezoneH";
                    w = "0.495124 * safezoneW";

                };
            };
        };
    };
};

// remove fir insignias
class CfgUnitInsignia {
    class Emblem_501 { scope = 1; };
    class Emblem_502 { scope = 1; };
    class Emblem_503 { scope = 1; };
    class Emblem_504 { scope = 1; };
    class Emblem_505 { scope = 1; };
    class Emblem_506 { scope = 1; };
    class Emblem_507 { scope = 1; };
    class Emblem_508 { scope = 1; };
    class Emblem_Alisa { scope = 1; };
    class Decal_Armagirl_1 { scope = 1; };
    class Decal_Armagirl_v_L { scope = 1; };
    class Decal_Armagirl_v_R { scope = 1; };
    class Decal_bunnygirl { scope = 1; };
    class Decal_charlotte_2 { scope = 1; };
    class Decal_iowa1 { scope = 1; };
    class Decal_iowa2 { scope = 1; };
    class Decal_IronMaiden { scope = 1; };
    class Decal_katusha { scope = 1; };
    class Decal_noseart1 { scope = 1; };
    class Decal_noseart2 { scope = 1; };
    class Decal_riseup { scope = 1; };
    class Decal_Shirley { scope = 1; };
    class Roundel_Shirley { scope = 1; };
    class decal_warspite { scope = 1; };
    class Emblem_Crow { scope = 1; };
    class Emblem_Cyclops { scope = 1; };
    class Emblem_Galm { scope = 1; };
    class Emblem_Gargoyle { scope = 1; };
    class Emblem_Gelb { scope = 1; };
    class Emblem_Golem { scope = 1; };
    class Emblem_Grun { scope = 1; };
    class Emblem_Mage { scope = 1; };
    class Emblem_Rot { scope = 1; };
    class Emblem_Skeleton { scope = 1; };
    class Emblem_Sol { scope = 1; };
    class Emblem_Sol2 { scope = 1; };
    class Emblem_Spare { scope = 1; };
    class Emblem_Strider { scope = 1; };
    class Emblem_Trigger { scope = 1; };
    class Emblem_Trigger2 { scope = 1; };
    class Emblem_6airdiv { scope = 1; };
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