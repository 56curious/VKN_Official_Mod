////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Curious, v1.063, #Qaxabi)
////////////////////////////////////////////////////////

class MouseArea: RscText
{
	idc = 999;
	style = 16;

	x = -28.47 * GUI_GRID_W + GUI_GRID_X;
	y = -10.23 * GUI_GRID_H + GUI_GRID_Y;
	w = 96.9454 * GUI_GRID_W;
	h = 45.4545 * GUI_GRID_H;
};
class BackgroundLeft: RscText
{
	idc = 1001;
	x = -400 * GUI_GRID_W + GUI_GRID_X;
	y = -250 * GUI_GRID_H + GUI_GRID_Y;
	w = 371.527 * GUI_GRID_W;
	h = 500 * GUI_GRID_H;
	colorBackground[] = {0.1,0.1,0.1,1};
};
class BackgroundRight: BackgroundLeft
{
	idc = 1002;
	x = 68.47 * GUI_GRID_W + GUI_GRID_X;
	y = -250 * GUI_GRID_H + GUI_GRID_Y;
	w = 400 * GUI_GRID_W;
	h = 500 * GUI_GRID_H;
	colorBackground[] = {0.1,0.1,0.1,1};
};
class Picture: RscPicture
{
	idc = 998;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\backgroundGrey.jpg";
	x = -28.47 * GUI_GRID_W + GUI_GRID_X;
	y = -10.23 * GUI_GRID_H + GUI_GRID_Y;
	w = 96.9454 * GUI_GRID_W;
	h = 80.7878 * GUI_GRID_H;
};
class Button3DEditor: RscButton
{
	idc = 115;
	shortcuts[] = {"512 + 0x20"};
	onButtonClick = "!cheatsenabled";

	x = -400 * GUI_GRID_W + GUI_GRID_X;
	y = -250 * GUI_GRID_H + GUI_GRID_Y;
	w = 0 * GUI_GRID_W;
	h = 0 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0};
};
class BackgroundSpotlight: RscPicture
{
	idc = 1201;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = -4.44 * GUI_GRID_W + GUI_GRID_X;
	y = 5.68 * GUI_GRID_H + GUI_GRID_Y;
	w = 48.8889 * GUI_GRID_W;
	h = 13.6364 * GUI_GRID_H;
	colorText[] = {0,0,0,0.9};
};
class BackgroundSpotlightLeft: BackgroundSpotlight
{
	angle = 180;

	idc = 1202;
	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
	x = -28.47 * GUI_GRID_W + GUI_GRID_X;
	y = 5.68 * GUI_GRID_H + GUI_GRID_Y;
	w = 24.0283 * GUI_GRID_W;
	h = 13.6364 * GUI_GRID_H;
	colorText[] = {0,0,0,0.9};
};
class BackgroundSpotlightRight: BackgroundSpotlightLeft
{
	angle = 0;

	idc = 1203;
	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
	x = 44.44 * GUI_GRID_W + GUI_GRID_X;
	y = 5.68 * GUI_GRID_H + GUI_GRID_Y;
	w = 24.0283 * GUI_GRID_W;
	h = 13.6364 * GUI_GRID_H;
	colorText[] = {0,0,0,0.9};
};
class Spotlight1: RscMainMenuSpotlight
{
	idc = 1021;

	x = -4.34 * GUI_GRID_W + GUI_GRID_X;
	y = 5.77 * GUI_GRID_H + GUI_GRID_Y;
	w = 16.1616 * GUI_GRID_W;
	h = 13.468 * GUI_GRID_H;
	class Controls
	{
	};
};
class Spotlight2: RscText
{
	idc = 1020;
	show = 0;

	x = 11.92 * GUI_GRID_W + GUI_GRID_X;
	y = 5.77 * GUI_GRID_H + GUI_GRID_Y;
	w = 16.1616 * GUI_GRID_W;
	h = 13.468 * GUI_GRID_H;
};
class Spotlight3: RscMainMenuSpotlight
{
	idc = 1022;

	x = 28.18 * GUI_GRID_W + GUI_GRID_X;
	y = 5.77 * GUI_GRID_H + GUI_GRID_Y;
	w = 16.1616 * GUI_GRID_W;
	h = 13.468 * GUI_GRID_H;
	class Controls
	{
	};
};
class SpotlightPrev: RscActivePictureKeepAspect
{
	idc = 1060;
	color[] = {1,1,1,0.25};
	fade = 1;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightPrev_ca.paa"; //--- ToDo: Localize;
	x = 11.92 * GUI_GRID_W + GUI_GRID_X;
	y = 4.08 * GUI_GRID_H + GUI_GRID_Y;
	w = 16.1616 * GUI_GRID_W;
	h = 1.6835 * GUI_GRID_H;
	colorActive[] = {1,1,1,1};
};
class SpotlightNext: SpotlightPrev
{
	idc = 1061;
	angle = 180;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightNext_ca.paa"; //--- ToDo: Localize;
	x = 11.92 * GUI_GRID_W + GUI_GRID_X;
	y = 19.23 * GUI_GRID_H + GUI_GRID_Y;
	w = 16.1616 * GUI_GRID_W;
	h = 1.6835 * GUI_GRID_H;
	colorActive[] = {1,1,1,1};
};
class BackgroundBar: RscText
{
	idc = 1006;
	x = -28.47 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 96.9454 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.75};
};
class BackgroundCenter: BackgroundBar
{
	idc = 1007;
	x = 16.77 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 6.46465 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorBackground[] = {0,0,0,1};
};
class BackgroundBarLeft: RscPicture
{
	angle = 180;

	idc = 1204;
	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradientMods_ca.paa";
	x = 13.54 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.23232 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorText[] = {0,0,0,1};
};
class BackgroundBarRight: BackgroundBarLeft
{
	angle = 0;

	idc = 1205;
	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradientMods_ca.paa";
	x = 23.23 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.23232 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorText[] = {0,0,0,1};
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
	x = 15.96 * GUI_GRID_W + GUI_GRID_X;
	y = -9.89 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 3.367 * GUI_GRID_H;
	colorActive[] = {1,1,1,1};
	tooltip = "View game credits, see the names behind Arma 3."; //--- ToDo: Localize;
};
class LogoApex: Logo
{
	show = 1;
	onLoad = "(_this select 0) ctrlshow (395180 in getDLCs 1)";

	idc = 1009;
	text = "\a3\Ui_f\Data\Logos\arma3apex_shadow_ca.paa"; //--- ToDo: Localize;
	x = 14.95 * GUI_GRID_W + GUI_GRID_X;
	y = -9.76 * GUI_GRID_H + GUI_GRID_Y;
	w = 10.101 * GUI_GRID_W;
	h = 4.20875 * GUI_GRID_H;
	colorActive[] = {1,1,1,1};
	tooltip = "View game credits, see the names behind Arma 3."; //--- ToDo: Localize;
};
class TitleSingleplayer: RscButtonMenu
{
	idc = 1011;
	size = "1.25 * 	(pixelH * pixelGrid * 2)";
	style = "0x02 + 0xC0";

	text = "Singleplayer"; //--- ToDo: Localize;
	x = -0.2 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
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
	x = 9.49 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.23232 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0};
	tooltip = "Singleplayer"; //--- ToDo: Localize;
};
class GroupSingleplayer: RscControlsGroupNoScrollbars
{
	idc = 1001;

	x = -0.2 * GUI_GRID_W + GUI_GRID_X;
	y = -7.53 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 5.05051 * GUI_GRID_H;
	class Controls
	{
	};
};
class TitleMultiplayer: TitleSingleplayer
{
	idc = 1012;

	text = "Multiplayer"; //--- ToDo: Localize;
	x = 7.88 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
class TitleIconMultiplayer: TitleIconSingleplayer
{
	idc = 1112;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_multiplayer_ca.paa"; //--- ToDo: Localize;
	x = 12.73 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.23232 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0};
	tooltip = "Multiplayer"; //--- ToDo: Localize;
};
class GroupMultiplayer: GroupSingleplayer
{
	idc = 1002;

	x = 7.88 * GUI_GRID_W + GUI_GRID_X;
	y = -7.53 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 3.0303 * GUI_GRID_H;
	class Controls
	{
	};
};
class TitleTutorials: TitleSingleplayer
{
	idc = 1013;

	text = "Tutorials"; //--- ToDo: Localize;
	x = 24.04 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
class TitleIconTutorials: TitleIconSingleplayer
{
	idc = 1113;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_tutorials_ca.paa"; //--- ToDo: Localize;
	x = 24.04 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.23232 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0};
	tooltip = "Tutorials"; //--- ToDo: Localize;
};
class GroupTutorials: GroupSingleplayer
{
	idc = 1003;

	x = 24.04 * GUI_GRID_W + GUI_GRID_X;
	y = -7.53 * GUI_GRID_H + GUI_GRID_Y;
	w = 10.9091 * GUI_GRID_W;
	h = 6.06061 * GUI_GRID_H;
	class Controls
	{
	};
};
class TitleOptions: TitleSingleplayer
{
	idc = 1014;

	text = "Options"; //--- ToDo: Localize;
	x = 32.12 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
class TitleIconOptions: TitleIconSingleplayer
{
	idc = 1114;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_options_ca.paa"; //--- ToDo: Localize;
	x = 27.27 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.23232 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0};
	tooltip = "Options"; //--- ToDo: Localize;
};
class GroupOptions: GroupSingleplayer
{
	idc = 1004;

	x = 32.12 * GUI_GRID_W + GUI_GRID_X;
	y = -7.53 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 6.06061 * GUI_GRID_H;
	class Controls
	{
	};
};
class TitleSession: RscButton
{
	idc = 1015;
	style = 48;
	colorBackgroundActive[] = {1,1,1,1};
	colorFocused[] = {0,0,0,0};
	onMouseEnter = "(_this select 0) ctrlsettextcolor [0,0,0,1];";
	onSetFocus = "(_this select 0) ctrlsettextcolor [0,0,0,1];";
	onMouseExit = "(_this select 0) ctrlsettextcolor [1,1,1,0.5];";
	onKillFocus = "(_this select 0) ctrlsettextcolor [1,1,1,0.5];";

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\profile_player_ca.paa"; //--- ToDo: Localize;
	x = 65.24 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 1.61616 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorText[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,0};
};
class GroupSession: GroupSingleplayer
{
	idc = 1005;

	x = 58.73 * GUI_GRID_W + GUI_GRID_X;
	y = -7.53 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 4.0404 * GUI_GRID_H;
	class Controls
	{
	};
};
class Exit: RscButton
{
	idc = 106;
	style = 48;
	colorBackgroundActive[] = {0.784314,0.137255,0.0627451,1};
	colorFocused[] = {1,1,1,1};
	onMouseEnter = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
	onSetFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
	onMouseExit = "(_this select 0) ctrlsettextcolor [1,1,1,0.5];";
	onKillFocus = "(_this select 0) ctrlsettextcolor [1,1,1,0.5];";

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\exit_ca.paa"; //--- ToDo: Localize;
	x = 66.86 * GUI_GRID_W + GUI_GRID_X;
	y = -8.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 1.61616 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	colorText[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,0};
	tooltip = "Quit the game..."; //--- ToDo: Localize;
};
class InfoMods: RscControlsGroupNoHScrollbars
{
	idc = 1030;

	x = -28.2 * GUI_GRID_W + GUI_GRID_X;
	y = 32.87 * GUI_GRID_H + GUI_GRID_Y;
	w = 48.2034 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	class Controls
	{
	};
};
class InfoDLCsOwned: InfoMods
{
	idc = 10311;

	x = -28.2 * GUI_GRID_W + GUI_GRID_X;
	y = 31.36 * GUI_GRID_H + GUI_GRID_Y;
	w = 48.2034 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	class Controls
	{
	};
};
class InfoDLCs: InfoDLCsOwned
{
	idc = 1031;

	x = -28.2 * GUI_GRID_W + GUI_GRID_X;
	y = 29.84 * GUI_GRID_H + GUI_GRID_Y;
	w = 48.2034 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	class Controls
	{
	};
};
class InfoNews: InfoMods
{
	idc = 1032;

	x = 60.12 * GUI_GRID_W + GUI_GRID_X;
	y = 31.36 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	class Controls
	{
	};
};
class InfoVersion: InfoNews
{
	idc = 1033;

	x = 60.12 * GUI_GRID_W + GUI_GRID_X;
	y = 32.87 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
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
	text = "Â© 2013-2018 Bohemia Interactive a.s. All rights reserved."; //--- ToDo: Localize;
	x = -28.47 * GUI_GRID_W + GUI_GRID_X;
	y = 34.55 * GUI_GRID_H + GUI_GRID_Y;
	w = 96.9454 * GUI_GRID_W;
	h = 0.673401 * GUI_GRID_H;
	colorText[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,0.75};
	sizeEx = 1 * 	(pixelH * pixelGrid * 2) * GUI_GRID_H;
};
class AllMissions: RscButtonMenuMain
{
	idc = 104;

	text = "All Missions"; //--- ToDo: Localize;
	x = 15.96 * GUI_GRID_W + GUI_GRID_X;
	y = 33.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 1.0101 * GUI_GRID_H;
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
	x = 15.96 * GUI_GRID_W + GUI_GRID_X;
	y = 32.45 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 1.0101 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.784314,0.137255,0.0627451,0.5};
};
class ALiVEGameLogo: RscPicture
{
	idc = 1202;

	text = "\x\alive\addons\UI\logo_alive_white.paa";
	x = 62.95 * GUI_GRID_W + GUI_GRID_X;
	y = 29.76 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.6 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	tooltip = "ALiVE is an Arma 3 Mod that enhances MP play with a more strategic enemy, enhanced combat ambience, combat support, logistics and revolutionary mission persistence and online statistics. Please Donate at http://alivemod.com/#Donate"; //--- ToDo: Localize;
};
class cba_help_CreditsVersion: RscText
{
	onLoad = "_this call (uiNamespace getVariable 'cba_help_fnc_setVersionLine')";
	idc = 222712;
	font = "RobotoCondensedLight";
	shadow = 0;
	style = 1;

	x = 54.07 * GUI_GRID_W + GUI_GRID_X;
	y = 34.33 * GUI_GRID_H + GUI_GRID_Y;
	w = 12 * GUI_GRID_W;
	h = 0.8 * GUI_GRID_H;
	sizeEx = ((0.8) * ((((safezoneW / safezoneH) min 1.2)/ 1.2)/ 25)) * GUI_GRID_H;
};
class cba_help_CreditsVersionButton: RscButton
{
	onMouseButtonClick = "_this call (uiNamespace getVariable 'cba_help_fnc_setVersionLine')";
	idc = 222713;
	colorDisabled[] = {1,1,1,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	soundClick[] = {"",1,1};

	x = 54.07 * GUI_GRID_W + GUI_GRID_X;
	y = 34.33 * GUI_GRID_H + GUI_GRID_Y;
	w = 12 * GUI_GRID_W;
	h = 0.8 * GUI_GRID_H;
	colorText[] = {1,1,1,0};
	colorBackground[] = {0,0,0,0};
};
class cba_help_credits: cba_help_credits_base
{
	size = "((1) * (pixelH * pixelGrid * 2))";

	idc = 1100;
	x = -28.47 * GUI_GRID_W + GUI_GRID_X;
	y = 33.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 96.9454 * GUI_GRID_W;
	h = 0.673401 * GUI_GRID_H;
};
class JohariLogo: RscPicture
{
	idc = 1299;

	text = "\x\alive\addons\intro\data\johari_small.paa";
	x = 66.59 * GUI_GRID_W + GUI_GRID_X;
	y = 29.84 * GUI_GRID_H + GUI_GRID_Y;
	w = 1.536 * GUI_GRID_W;
	h = 1.28 * GUI_GRID_H;
	tooltip = "A massive thank you to Johari, the band that created two incredible and exclusive tracks for ALiVE - This is War and Everest. Go to www.johariofficial.com for more!"; //--- ToDo: Localize;
};
class ACE_news_apex: InfoNews
{
	idc = 80090;

	x = 60.12 * GUI_GRID_W + GUI_GRID_X;
	y = 29.84 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 1.3468 * GUI_GRID_H;
	class Controls
	{
	};
};
class ProjectOPFORLogo: RscPictureKeepAspect
{
	idc = 1299;
	onButtonClick = "http://www.project-opfor.eu/";

	text = "\po_main\data\po_logo_128.paa";
	x = 66.59 * GUI_GRID_W + GUI_GRID_X;
	y = 28.49 * GUI_GRID_H + GUI_GRID_Y;
	w = 1.536 * GUI_GRID_W;
	h = 1.28 * GUI_GRID_H;
	tooltip = "Project OPFOR - visit us at http://www.project-opfor.eu/"; //--- ToDo: Localize;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
