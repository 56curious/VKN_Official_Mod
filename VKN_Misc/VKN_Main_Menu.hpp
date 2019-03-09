/*

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
	color[] = {1,1,1,0.25};
	fade = 1;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightPrev_ca.paa"; //--- ToDo: Localize;
	x = 0.54126 * safezoneW + safezoneX;
	y = 0.676 * safezoneH + safezoneY;
	w = 0.166708 * safezoneW;
	h = 0.037037 * safezoneH;
	colorActive[] = {1,1,1,1};
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
	size = "1.25 * 	(pixelH * pixelGrid * 2)";

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
class TitleMultiplayer: TitleSingleplayer
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
class GroupMultiplayer: GroupSingleplayer
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
class TitleTutorials: TitleSingleplayer
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
class GroupTutorials: GroupSingleplayer
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
class TitleOptions: TitleSingleplayer
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
class TitleSession: TitleSingleplayer
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
class Exit: TitleSingleplayer
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
class GroupOptions: GroupSingleplayer
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
class GroupSession: GroupSingleplayer
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
	sizeEx = 1 * 	(pixelH * pixelGrid * 2) * GUI_GRID_H;
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





























































class Picture: RscPicture
{
	idc = 998;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\backgroundGrey.jpg";
	x = -28.55 * GUI_GRID_W + GUI_GRID_X;
	y = -10.4 * GUI_GRID_H + GUI_GRID_Y;
	w = 97.072 * GUI_GRID_W;
	h = 45.6498 * GUI_GRID_H;
};
class MouseArea: RscText
{
	idc = 999;
	style = 16;

	x = -28 * GUI_GRID_W + GUI_GRID_X;
	y = -9.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 97 * GUI_GRID_W;
	h = 46 * GUI_GRID_H;
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
	x = -4.5 * GUI_GRID_W + GUI_GRID_X;
	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 49 * GUI_GRID_W;
	h = 13.5 * GUI_GRID_H;
	colorText[] = {0,0,0,0.9};
};
class BackgroundSpotlightLeft: BackgroundSpotlight
{
	angle = 180;

	idc = 1202;
	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
	x = 44.5 * GUI_GRID_W + GUI_GRID_X;
	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 24 * GUI_GRID_W;
	h = 13.5 * GUI_GRID_H;
	colorText[] = {0,0,0,0.9};
};
class BackgroundSpotlightRight: BackgroundSpotlightLeft
{
	angle = 0;

	idc = 1203;
	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
	x = -28.5 * GUI_GRID_W + GUI_GRID_X;
	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 24 * GUI_GRID_W;
	h = 13.6263 * GUI_GRID_H;
	colorText[] = {0,0,0,0.9};
};
class Spotlight1: RscMainMenuSpotlight
{
	idc = 1021;

	x = 12.06 * GUI_GRID_W + GUI_GRID_X;
	y = 20.84 * GUI_GRID_H + GUI_GRID_Y;
	w = 16 * GUI_GRID_W;
	h = 13 * GUI_GRID_H;
	class Controls
	{
	};
};
class Spotlight2: RscText
{
	idc = 1020;
	show = 0;

	x = -4.45 * GUI_GRID_W + GUI_GRID_X;
	y = 20.84 * GUI_GRID_H + GUI_GRID_Y;
	w = 16.5 * GUI_GRID_W;
	h = 13 * GUI_GRID_H;
};
class Spotlight3: RscMainMenuSpotlight
{
	idc = 1022;

	x = 28.1 * GUI_GRID_W + GUI_GRID_X;
	y = 20.88 * GUI_GRID_H + GUI_GRID_Y;
	w = 16.3486 * GUI_GRID_W;
	h = 12.8316 * GUI_GRID_H;
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
	x = 11.9 * GUI_GRID_W + GUI_GRID_X;
	y = 33.71 * GUI_GRID_H + GUI_GRID_Y;
	w = 16.1616 * GUI_GRID_W;
	h = 1.6835 * GUI_GRID_H;
	colorActive[] = {1,1,1,1};
};
class SpotlightNext: SpotlightPrev
{
	idc = 1061;
	angle = 180;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlightNext_ca.paa"; //--- ToDo: Localize;
	x = 11.9 * GUI_GRID_W + GUI_GRID_X;
	y = 19.08 * GUI_GRID_H + GUI_GRID_Y;
	w = 16.1616 * GUI_GRID_W;
	h = 1.6835 * GUI_GRID_H;
	colorActive[] = {1,1,1,1};
};
class BackgroundBarLeft: RscPicture
{
	angle = 180;

	idc = 1204;
	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
	x = -28.5 * GUI_GRID_W + GUI_GRID_X;
	y = -10.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 28.5 * GUI_GRID_W;
	h = 3 * GUI_GRID_H;
	colorText[] = {0,0,0,1};
};
class BackgroundBarRight: BackgroundBarLeft
{
	angle = 0;

	idc = 1205;
	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
	x = 40 * GUI_GRID_W + GUI_GRID_X;
	y = -10.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 28.5 * GUI_GRID_W;
	h = 3 * GUI_GRID_H;
	colorText[] = {0,0,0,1};
};
class TitleSingleplayer: RscButtonMenu
{
	idc = 1011;
	size = "1.25 * 	(pixelH * pixelGrid * 2)";
	style = "0x02 + 0xC0";

	text = "Singleplayer"; //--- ToDo: Localize;
	x = -14 * GUI_GRID_W + GUI_GRID_X;
	y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 14 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
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
	x = -3.5 * GUI_GRID_W + GUI_GRID_X;
	y = 1 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0};
	tooltip = "Singleplayer"; //--- ToDo: Localize;
};
class GroupSingleplayer: RscControlsGroupNoScrollbars
{
	idc = 1001;

	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 4 * GUI_GRID_H + GUI_GRID_Y;
	w = 10 * GUI_GRID_W;
	h = 3 * GUI_GRID_H;
	class Controls
	{
	};
};
class TitleMultiplayer: TitleSingleplayer
{
	idc = 1012;

	text = "Multiplayer"; //--- ToDo: Localize;
	x = -14 * GUI_GRID_W + GUI_GRID_X;
	y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 14 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
class TitleIconMultiplayer: TitleIconSingleplayer
{
	idc = 1112;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_multiplayer_ca.paa"; //--- ToDo: Localize;
	x = -3.5 * GUI_GRID_W + GUI_GRID_X;
	y = 5 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0};
	tooltip = "Multiplayer"; //--- ToDo: Localize;
};
class GroupMultiplayer: GroupSingleplayer
{
	idc = 1002;

	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 0 * GUI_GRID_H + GUI_GRID_Y;
	w = 10 * GUI_GRID_W;
	h = 3 * GUI_GRID_H;
	class Controls
	{
	};
};
class TitleTutorials: TitleSingleplayer
{
	idc = 1013;

	text = "Tutorials"; //--- ToDo: Localize;
	x = -14 * GUI_GRID_W + GUI_GRID_X;
	y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 14 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
class TitleIconTutorials: TitleIconSingleplayer
{
	idc = 1113;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_tutorials_ca.paa"; //--- ToDo: Localize;
	x = -3.5 * GUI_GRID_W + GUI_GRID_X;
	y = 9 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0};
	tooltip = "Tutorials"; //--- ToDo: Localize;
};
class GroupTutorials: GroupSingleplayer
{
	idc = 1003;

	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 8 * GUI_GRID_H + GUI_GRID_Y;
	w = 10 * GUI_GRID_W;
	h = 3 * GUI_GRID_H;
	class Controls
	{
	};
};
class TitleOptions: TitleSingleplayer
{
	idc = 1014;

	text = "Options"; //--- ToDo: Localize;
	x = -14 * GUI_GRID_W + GUI_GRID_X;
	y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 14 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
class TitleIconOptions: TitleIconSingleplayer
{
	idc = 1114;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\menu_options_ca.paa"; //--- ToDo: Localize;
	x = -3.5 * GUI_GRID_W + GUI_GRID_X;
	y = 13 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0};
	tooltip = "Options"; //--- ToDo: Localize;
};
class GroupOptions: GroupSingleplayer
{
	idc = 1004;

	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 12 * GUI_GRID_H + GUI_GRID_Y;
	w = 10 * GUI_GRID_W;
	h = 3 * GUI_GRID_H;
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
	x = 63 * GUI_GRID_W + GUI_GRID_X;
	y = -10 * GUI_GRID_H + GUI_GRID_Y;
	w = 4 * GUI_GRID_W;
	h = 2.5 * GUI_GRID_H;
	colorText[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,0};
};
class GroupSession: GroupSingleplayer
{
	idc = 1005;

	x = 60.5 * GUI_GRID_W + GUI_GRID_X;
	y = -7.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.08081 * GUI_GRID_W;
	h = 4.0404 * GUI_GRID_H;
	class Controls
	{
	};
};
class InfoMods: RscControlsGroupNoHScrollbars
{
	idc = 1030;

	x = -6 * GUI_GRID_W + GUI_GRID_X;
	y = -7.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 51.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	class Controls
	{
	};
};
class InfoDLCsOwned: InfoMods
{
	idc = 10311;

	x = -6 * GUI_GRID_W + GUI_GRID_X;
	y = -6 * GUI_GRID_H + GUI_GRID_Y;
	w = 51.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	class Controls
	{
	};
};
class InfoDLCs: InfoDLCsOwned
{
	idc = 1031;

	x = -6 * GUI_GRID_W + GUI_GRID_X;
	y = -4.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 51.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	class Controls
	{
	};
};
class RscButtonMenu_2406: RscButtonMenu
{
	idc = 1014;

	text = "Exit"; //--- ToDo: Localize;
	x = -14 * GUI_GRID_W + GUI_GRID_X;
	y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 14 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
class RscButton_1608: RscButton
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
	x = -3.5 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorText[] = {1,1,1,0.5};
	colorBackground[] = {0,0,0,0};
	tooltip = "Quit the game..."; //--- ToDo: Localize;
};
class BackgroundCenter: BackgroundBar
{
	idc = 1206;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = -10.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 40 * GUI_GRID_W;
	h = 3 * GUI_GRID_H;
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
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

*/