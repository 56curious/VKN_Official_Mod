////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Curious, v1.063, #Jitadu)
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
class Picture: RscPicture
{
	idc = 998;

	text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\backgroundGrey.jpg";
	x = -0.923481 * safezoneW + safezoneX;
	y = 0.676 * safezoneH + safezoneY;
	w = 1 * safezoneW;
	h = 1.77733 * safezoneH;
};
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

	x = 0.494842 * safezoneW + safezoneX;
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
	x = 0.494842 * safezoneW + safezoneX;
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
	x = 0.494842 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.166708 * safezoneW;
	h = 0.037037 * safezoneH;
	colorActive[] = {1,1,1,1};
};
class TitleSingleplayer: RscButtonMenu
{
	idc = 1011;
	size = "1.25 * 	(pixelH * pixelGrid * 2)";
	style = "0x02 + 0xC0";

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
class cba_help_CreditsVersionButton: RscButton
{
	onMouseButtonClick = "_this call (uiNamespace getVariable 'cba_help_fnc_setVersionLine')";
	idc = 222713;
	colorDisabled[] = {1,1,1,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	soundClick[] = {"",1,1};

	x = 0.8765 * safezoneW + safezoneX;
	y = 0.962 * safezoneH + safezoneY;
	w = 0.123781 * safezoneW;
	h = 0.0176 * safezoneH;
	colorText[] = {1,1,1,0};
	colorBackground[] = {0,0,0,0};
};
class cba_help_credits: cba_help_credits_base
{
	size = "((1) * (pixelH * pixelGrid * 2))";

	idc = 1100;
	x = 0 * safezoneW + safezoneX;
	y = 0.97037 * safezoneH + safezoneY;
	w = 1 * safezoneW;
	h = 0.0148148 * safezoneH;
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
class RscPicture_1201: RscPicture
{
	idc = 1201;
	text = "\VKN_misc\main menu\VikingPMCText.paa";
	x = 0.195705 * safezoneW + safezoneX;
	y = 0.203 * safezoneH + safezoneY;
	w = 0.510597 * safezoneW;
	h = 0.066 * safezoneH;
};
class TitleProfileSettings: TitleSingleplayer
{
	idc = 1014;

	text = "Profile Settings"; //--- ToDo: Localize;
	x = 0.195705 * safezoneW + safezoneX;
	y = 0.643 * safezoneH + safezoneY;
	w = 0.0979933 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
class TitleExit: TitleSingleplayer
{
	idc = 1014;

	text = "Exit Game"; //--- ToDo: Localize;
	x = 0.195705 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0979933 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
