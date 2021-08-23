////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Curious, v1.063, #Fuluja)
////////////////////////////////////////////////////////

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
class Button3DEditor: RscButton
{
	shortcuts[] = {"512 + 0x20"};
	idc = 115;
	onButtonClick = "!cheatsenabled";

	x = -3.83233 * safezoneW + safezoneX;
	y = -5.275 * safezoneH + safezoneY;
	w = 0 * safezoneW;
	h = 0 * safezoneH;
	colorBackground[] = {0,0,0,0};
};
class BackgroundSpotlight: RscPicture
{
	idc = 1201;

	text = "#(argb,8,8,3)color(1,1,1,0)";
	x = 1.00028 * safezoneW + safezoneX;
	y = 0.137 * safezoneH + safezoneY;
	w = 0.123781 * safezoneW;
	h = 0.726 * safezoneH;
	colorText[] = {0,0,0,0.9};
};
class BackgroundSpotlightLeft: BackgroundSpotlight
{
	angle = 180;
	idc = 1202;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
	x = -0.000281541 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0257877 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0};
};
class BackgroundSpotlightRight: BackgroundSpotlightLeft
{
	angle = 0;
	idc = 1203;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
	x = -0.000281541 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0257877 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0};
};
class Spotlight1: RscMainMenuSpotlight
{
	idc = 1021;

	x = 1.00028 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.123781 * safezoneW;
	h = 0.22 * safezoneH;
	colorText[] = {0,0,0,0};
	class Controls
	{
	};
};
class Spotlight2: RscMainMenuSpotlight
{
	show = 0;
	idc = 1020;

	x = 1.00028 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.123781 * safezoneW;
	h = 0.22 * safezoneH;
	colorText[] = {0,0,0,0};
	class Controls
	{
	};
};
class Spotlight3: RscMainMenuSpotlight
{
	idc = 1022;

	x = 1.00028 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.123781 * safezoneW;
	h = 0.22 * safezoneH;
	colorText[] = {0,0,0,0};
	class Controls
	{
	};
};
class SpotlightPrev: RscActivePictureKeepAspect
{
	color[] = {1,1,1,0.25};
	idc = 1060;
	fade = 1;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightPrev_ca.paa"; //--- ToDo: Localize;
	x = 1.00028 * safezoneW + safezoneX;
	y = 0.137 * safezoneH + safezoneY;
	w = 0.123781 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {0,0,0,0};
	colorActive[] = {1,1,1,1};
};
class SpotlightNext: SpotlightPrev
{
	idc = 1061;
	angle = 180;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightNext_ca.paa"; //--- ToDo: Localize;
	x = 1.00028 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.123781 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {0,0,0,0};
	colorActive[] = {1,1,1,1};
};
class BackgroundBar: RscText
{
	idc = 1006;

	x = -0.000281025 * safezoneW + safezoneX;
	y = 0.863 * safezoneH + safezoneY;
	w = 1.00056 * safezoneW;
	h = 0.143 * safezoneH;
	colorBackground[] = {0,0,0,0.75};
};
class BackgroundCenter: BackgroundBar
{
	idc = 1007;

	x = -0.000281541 * safezoneW + safezoneX;
	y = -0.00599999 * safezoneH + safezoneY;
	w = 1.00056 * safezoneW;
	h = 0.11 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class BackgroundBarLeft: RscPicture
{
	angle = 180;
	idc = 1204;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradientMods_ca.paa";
	x = -0.000281541 * safezoneW + safezoneX;
	y = 0.522 * safezoneH + safezoneY;
	w = 0.0412603 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {0,0,0,0};
};
class BackgroundBarRight: BackgroundBarLeft
{
	angle = 0;
	idc = 1205;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradientMods_ca.paa";
	x = -0.000281541 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.0412603 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {0,0,0,0};
};
class Logo: RscActivePicture
{
	color[] = {0.9,0.9,0.9,1};
	shadow = 0;
	onButtonClick = "if (scriptdone (missionnamespace getvariable ['RscDisplayMain_credits',scriptnull])) then {RscDisplayMain_credits = _this spawn (uinamespace getvariable 'bis_fnc_credits');};";
	onSetFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
	onKillFocus = "(_this select 0) ctrlsettextcolor [0.9,0.9,0.9,1];";
	onLoad = "(_this select 0) ctrlshow !(395180 in getDLCs 1)";
	idc = 1008;

	text = "\a3\Ui_f\data\Logos\arma3_shadow_ca.paa"; //--- ToDo: Localize;
	x = 0.324644 * safezoneW + safezoneX;
	y = 0.885 * safezoneH + safezoneY;
	w = 0.0833542 * safezoneW;
	h = 0.0740741 * safezoneH;
	colorText[] = {1,1,1,1};
	colorActive[] = {1,1,1,1};
	tooltip = "View game credits, see the names behind Arma 3."; //--- ToDo: Localize;
};
class LogoApex: Logo
{
	onLoad = "(_this select 0) ctrlshow (395180 in getDLCs 1)";
	idc = 1009;

	text = "\a3\Ui_f\data\Logos\arma3_shadow_ca.paa"; //--- ToDo: Localize;
	x = 0.324644 * safezoneW + safezoneX;
	y = 0.885 * safezoneH + safezoneY;
	w = 0.0833542 * safezoneW;
	h = 0.0740741 * safezoneH;
	colorText[] = {1,1,1,1};
	colorActive[] = {1,1,1,1};
	tooltip = "View game credits, see the names behind Arma 3."; //--- ToDo: Localize;
};
class TitleSingleplayer: RscButtonMenu
{
	idc = 1011;
	size = "1.25 * 	(pixelH * pixelGrid * 2)";
	style = "0x02 + 0xC0";

	text = "Singleplayer"; //--- ToDo: Localize;
	x = 0.195705 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
};
class TitleIconSingleplayer: RscButton
{
	colorBackgroundActive[] = {1,1,1,1};
	colorFocused[] = {1,1,1,1};
	idc = 1111;
	show = 0;
	style = "0x30 + 0x800";
	onMouseEnter = "(_this select 0) ctrlsettextcolor [0,0,0,1];";
	onSetFocus = "(_this select 0) ctrlsettextcolor [0,0,0,1];";
	onMouseExit = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
	onKillFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_singleplayer_ca.paa"; //--- ToDo: Localize;
	x = 0.211178 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0412603 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0,0,0,0};
	tooltip = "Singleplayer"; //--- ToDo: Localize;
};
class GroupSingleplayer: RscControlsGroupNoScrollbars
{
	idc = 1001;

	x = 0.195705 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.11 * safezoneH;
	class Controls
	{
	};
};
class TitleMultiplayer: TitleSingleplayer
{
	idc = 1012;

	text = "Multiplayer"; //--- ToDo: Localize;
	x = 0.334959 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
};
class TitleIconMultiplayer: TitleIconSingleplayer
{
	idc = 1112;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_multiplayer_ca.paa"; //--- ToDo: Localize;
	x = 0.350431 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0412603 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0,0,0,0};
	tooltip = "Multiplayer"; //--- ToDo: Localize;
};
class GroupMultiplayer: GroupSingleplayer
{
	idc = 1002;

	x = 0.334959 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.088 * safezoneH;
	class Controls
	{
		class directConnect: QuickPlay {
			idc = 20000;	
			y = "(3 * 	1.5) * 	(pixelH * pixelGrid * 2) + 	(pixelH)";
			text = "Server Quick Join";
			onbuttonclick = "0 = [_this, '', '', ''] execVM '\VKN_Functions\Functions\fn_joinServer.sqf';";
		};
	};
};
class TitleTutorials: TitleSingleplayer
{
	idc = 1013;

	text = "Tutorials"; //--- ToDo: Localize;
	x = 0.47937 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
};
class TitleIconTutorials: TitleIconSingleplayer
{
	idc = 1113;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_tutorials_ca.paa"; //--- ToDo: Localize;
	x = 0.494842 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0412603 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0,0,0,0};
	tooltip = "Tutorials"; //--- ToDo: Localize;
};
class GroupTutorials: GroupSingleplayer
{
	idc = 1003;

	x = 0.47937 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.132 * safezoneH;
	class Controls
	{
	};
};
class TitleOptions: TitleSingleplayer
{
	idc = 1014;

	text = "Options"; //--- ToDo: Localize;
	x = 0.623781 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
};
class TitleIconOptions: TitleIconSingleplayer
{
	idc = 1114;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_options_ca.paa"; //--- ToDo: Localize;
	x = 0.639254 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0412603 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {0,0,0,0};
	tooltip = "Options"; //--- ToDo: Localize;
};
class GroupOptions: GroupSingleplayer
{
	idc = 1004;

	x = 0.623781 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.133333 * safezoneH;
	class Controls
	{
	};
};
class TitleSession: TitleSingleplayer
{
	colorBackgroundActive[] = {1,1,1,1};
	colorFocused[] = {0,0,0,0};
	idc = 1015;
	style = "0x30 + 0x800";
	onMouseEnter = "";
	onSetFocus = "";
	onMouseExit = "";
	onKillFocus = "";

	text = "PROFILE SETTINGS"; //--- ToDo: Localize;
	x = 0.763035 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
	tooltip = "Edit profile settings"; //--- ToDo: Localize;
};
class Exit: TitleSingleplayer
{
	idc = 106;
	text = "Quit Game"; //--- ToDo: Localize;
	size = "1.25 * 	(pixelH * pixelGrid * 2)";

	onMouseEnter = "";
	onSetFocus = "";
	onMouseExit = "";
	onKillFocus = "";

	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};

	x = 0.891973 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.044 * safezoneH;
	style = "0x02 + 0xC0";
	tooltip = "Close the game"; //--- ToDo: Localize;
};
class GroupSession: GroupSingleplayer
{
	idc = 1005;

	x = 0.763035 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.066 * safezoneH;
	class Controls
	{
	};
};
class InfoMods: RscControlsGroupNoHScrollbars
{
	idc = 1030;

	x = -0.000281541 * safezoneW + safezoneX;
	y = 0.918 * safezoneH + safezoneY;
	w = 0.195987 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {0,0,0,0};
	class Controls
	{
	};
};
class InfoDLCsOwned: InfoMods
{
	idc = 10311;

	x = -0.000281541 * safezoneW + safezoneX;
	y = 0.962 * safezoneH + safezoneY;
	w = 0.195987 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {0,0,0,0};
	class Controls
	{
	};
};
class InfoDLCs: InfoDLCsOwned
{
	idc = 1031;

	x = -0.000281541 * safezoneW + safezoneX;
	y = 0.874 * safezoneH + safezoneY;
	w = 0.195987 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {0,0,0,0};
	class Controls
	{
	};
};
class InfoNews: InfoMods
{
	idc = 1032;

	x = 0.917761 * safezoneW + safezoneX;
	y = 0.94 * safezoneH + safezoneY;
	w = 0.0979933 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {0,0,0,0};
	class Controls
	{
	};
};
class InfoVersion: InfoNews
{
	idc = 1033;

	x = 0.917761 * safezoneW + safezoneX;
	y = 0.896 * safezoneH + safezoneY;
	w = 0.0979933 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {0,0,0,0};
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

	text = "© 2013-2020 BOHEMIA INTERACTIVE a.s. All rights reserved."; //--- ToDo: Localize;
	x = 0.422637 * safezoneW + safezoneX;
	y = 0.962 * safezoneH + safezoneY;
	w = 0.159884 * safezoneW;
	h = 0.022 * safezoneH;
	sizeEx = 0.7 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0};
};
class AllMissions: RscButtonMenuMain
{
	idc = 104;

	text = "All Missions"; //--- ToDo: Localize;
	x = -0.000281541 * safezoneW + safezoneX;
	y = 0.137 * safezoneH + safezoneY;
	w = 0.0833542 * safezoneW;
	h = 0.0222222 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.25};
};
class ProofsOfConcept: AllMissions
{
	show = 0;
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	onbuttonclick = "				uinamespace setvariable ['RscDisplaySingleMission_title','INTERNAL CONCEPTS'];				(ctrlparent (_this select 0)) createMissionDisplay ['','Concepts'];			";
	onLoad = "if (cheatsenabled && {count (configfile >> 'CfgMissions' >> 'Concepts') > 0}) then {(_this select 0) ctrlshow true;};";
	idc = 2405;

	text = "Concepts"; //--- ToDo: Localize;
	x = -0.000281541 * safezoneW + safezoneX;
	y = 0.115 * safezoneH + safezoneY;
	w = 0.0833542 * safezoneW;
	h = 0.0222222 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.784314,0.137255,0.0627451,0.5};
};
class EditorButton: TitleSingleplayer
{
	idc = 142;

	text = "3DEN EDITOR"; //--- ToDo: Localize;
	x = 0.0564514 * safezoneW + safezoneX;
	y = 0.038 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.75};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
};
class VKN_Text: RscActiveText
{
	idc = 1000;

	text = "VIKING PMC EDITION"; //--- ToDo: Localize;
	x = 0.417479 * safezoneW + safezoneX;
	y = 0.885 * safezoneH + safezoneY;
	w = 0.268192 * safezoneW;
	h = 0.0740741 * safezoneH;
	colorText[] = {1,1,1,1};
	colorActive[] = {1,1,1,1};
	tooltip = "View Viking PMC Lore."; //--- ToDo: Localize;
	sizeEx = 3.5 * GUI_GRID_H;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
