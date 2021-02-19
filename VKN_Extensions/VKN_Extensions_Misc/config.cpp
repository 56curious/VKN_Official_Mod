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
            "cba_settings",
            "FIR_AirWeaponSystem_US",
            "FIR_Baseplate",
            "ace_ui",
            "VKN_Misc",
            "rhs_main"
        };
    };
};

#define private 0       // Hidden to all
#define protected 1     // Can use but still hidden
#define public 2        // Visible to all

class Extended_PreInit_EventHandlers {
    class VKN_Settings_preInit {
        init = "call compile preprocessFileLineNumbers '\VKN_Functions\XEH_Preinit.sqf'";
    };
};

/*
//Custom ACE interactions
class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class VKN_Panic_Start {
                displayName = "Press Panic Alarm";
                condition = "_player in (vehicle _player) && {speed vehicle _player < 20}";
                exceptions[] = {};
                statement = "_player call VKN_fnc_Panic_Start; VKN_Panic_State = true;";
                icon = "";
            };
            class VKN_Panic_Cancel { //TO-DO Add this into the start function to remove this from always being present.
                displayName = "Press Panic Alarm";
                condition = "_player in (vehicle _player) && {speed vehicle _player < 20}";
                exceptions[] = {};
                statement = "if (VKN_Panic_State) then {_player call VKN_fnc_Panic_Cancel; VKN_Panic_State = false;} else {hintSilent 'No alarms active.'};";
                icon = "";
            };
        };
    };
};
*/


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

class RscActivePicture;
class RscActivePictureKeepAspect;
class RscButtonMenu;
class RscButtonMenuMain;
class RscControlsGroupNoHScrollbars;
class RscControlsGroupNoScrollbars;
class RscMainMenuSpotlight;

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
class RscControlsGroup;
class RscPictureKeepAspect;
class RscVignette;
class RscStandardDisplay;

class RscDisplayMain : RscStandardDisplay
{

    //onLoad = "['onload', _this, 'RscDisplayMain', 'GUI'] call compile preprocessFileLineNumbers 'VKN_Misc\Displays\Scripts\handleMainMenu.sqf ';";
    //onUnload = "['onunload', _this, 'RscDisplayMain', 'GUI'] call compile preprocessFileLineNumbers 'VKN_Misc\Displays\Scripts\handleMainMenu.sqf ';";

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
    class Controls
    {

    //#include "\VKN_Misc\Main Menu\VKN_Menu.hpp"
        
    };
};


class RscDisplayInventory
    {
        class controls
        {
#include "\VKN_Misc\displays\VKN_rscDisplayInventory.hpp"
        };
    };

    class RscDisplayInventory_DLCTemplate
    {
        class controls
        {
#include "\VKN_Misc\displays\VKN_rscDisplayInventory.hpp"
        };
    }

    class VKN_Inventory
    {
        class controls
        {
#include "\VKN_Misc\displays\VKN_rscDisplayInventory.hpp"
        };
    };
