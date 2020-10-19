class CA_ContainerBackground: RscText
{
	idc = 1001;

	x = 0.00487602 * safezoneW + safezoneX;
	y = 0.137 * safezoneH + safezoneY;
	w = 0.257877 * safezoneW;
	h = 0.726 * safezoneH;
	colorBackground[] = {0.137,0.137,0.137,0.75};
};
class CA_PlayerBackground: RscText
{
	idc = 1002;

	x = 0.275956 * safezoneW + safezoneX;
	y = 0.181 * safezoneH + safezoneY;
	w = 0.716898 * safezoneW;
	h = 0.66 * safezoneH;
	colorBackground[] = {0.137,0.137,0.137,0.75};
};
class TitleBackground: RscText
{
	idc = 1020;

	x = 0.0100336 * safezoneW + safezoneX;
	y = 0.148 * safezoneH + safezoneY;
	w = 0.221774 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0.03,0.51,1,0.75};
};
class PlayersName: RscText
{
	idc = 111;

	text = ""; //--- ToDo: Localize;
	x = 0.0100336 * safezoneW + safezoneX;
	y = 0.148 * safezoneH + safezoneY;
	w = 0.221774 * safezoneW;
	h = 0.022 * safezoneH;
};
class RankBackground: RscText
{
	idc = 1014;

	x = 0.242123 * safezoneW + safezoneX;
	y = 0.148 * safezoneH + safezoneY;
	w = 0.0103151 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {1,1,1,0.2};
};
class RankPicture: RscPicture
{
	idc = 1203;

	text = "\A3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa";
	x = 0.242123 * safezoneW + safezoneX;
	y = 0.148 * safezoneH + safezoneY;
	w = 0.0103151 * safezoneW;
	h = 0.022 * safezoneH;
};
class ButtonBack: RscActiveText
{
	idc = 2;
	style = 48;
	color[] = {1,1,1,0.7};

	text = "\VKN_Misc\Misc\exitRectangleIcon.paa"; //--- ToDo: Localize;
	x = 0.546418 * safezoneW + safezoneX;
	y = 0.775 * safezoneH + safezoneY;
	w = 0.056733 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {1,1,1,0.7};
	colorActive[] = {1,1,1,1};
	tooltip = "Close"; //--- ToDo: Localize;
};
class BackgroundSlotPrimary: RscPicture
{
	idc = 1242;

	text = "";
	x = 0.324644 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.175356 * safezoneW;
	h = 0.088 * safezoneH;
};
class BackgroundSlotPrimaryMuzzle: BackgroundSlotPrimary
{
	idc = 1243;

	text = "";
	x = 0.293698 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotPrimaryUnderBarrel: BackgroundSlotPrimary
{
	idc = 1200;

	text = "";
	x = 0.334959 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotPrimaryFlashlight: BackgroundSlotPrimary
{
	idc = 1244;

	text = "";
	x = 0.334959 * safezoneW + safezoneX;
	y = 0.192 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotPrimaryOptics: BackgroundSlotPrimary
{
	idc = 1245;

	text = "";
	x = 0.422637 * safezoneW + safezoneX;
	y = 0.192 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotPrimaryMagazineGL: BackgroundSlotPrimary
{
	idc = 1267;

	text = "";
	x = 0.463897 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotPrimaryMagazine: BackgroundSlotPrimary
{
	idc = 1246;

	text = "";
	x = 0.360746 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotSecondary: BackgroundSlotPrimary
{
	idc = 1247;

	text = "";
	x = 0.324644 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.175356 * safezoneW;
	h = 0.088 * safezoneH;
};
class BackgroundSlotSecondaryMuzzle: BackgroundSlotPrimary
{
	idc = 1248;

	text = "";
	x = 0.288541 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotSecondaryUnderBarrel: BackgroundSlotPrimary
{
	idc = 1266;

	text = "";
	x = 0.334959 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotSecondaryFlashlight: BackgroundSlotPrimary
{
	idc = 1249;

	text = "";
	x = 0.334959 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotSecondaryOptics: BackgroundSlotPrimary
{
	idc = 1250;

	text = "";
	x = 0.422637 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotSecondaryMagazine: BackgroundSlotPrimary
{
	idc = 1251;

	text = "";
	x = 0.45874 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotHandgun: BackgroundSlotPrimary
{
	idc = 1252;

	text = "";
	x = 0.324644 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.175356 * safezoneW;
	h = 0.088 * safezoneH;
};
class BackgroundSlotHandgunMuzzle: BackgroundSlotPrimary
{
	idc = 1253;

	text = "";
	x = 0.288541 * safezoneW + safezoneX;
	y = 0.698 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotHandgunUnderBarrel: BackgroundSlotPrimary
{
	idc = 1268;

	text = "";
	x = 0.329801 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotHandgunFlashlight: BackgroundSlotPrimary
{
	idc = 1254;

	text = "";
	x = 0.334959 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotHandgunOptics: BackgroundSlotPrimary
{
	idc = 1255;

	text = "";
	x = 0.422637 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotHandgunMagazine: BackgroundSlotPrimary
{
	idc = 1256;

	text = "";
	x = 0.45874 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotHeadgear: BackgroundSlotPrimary
{
	idc = 1257;

	text = "";
	x = 0.861028 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0361028 * safezoneW;
	h = 0.066 * safezoneH;
};
class BackgroundSlotGoggles: BackgroundSlotPrimary
{
	idc = 1258;

	text = "";
	x = 0.907446 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0361028 * safezoneW;
	h = 0.066 * safezoneH;
};
class BackgroundSlotHMD: BackgroundSlotPrimary
{
	idc = 1259;

	text = "";
	x = 0.948706 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0361028 * safezoneW;
	h = 0.066 * safezoneH;
};
class BackgroundSlotBinoculars: BackgroundSlotPrimary
{
	idc = 1260;

	text = "";
	x = 0.819767 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0361028 * safezoneW;
	h = 0.066 * safezoneH;
};
class BackgroundSlotMap: BackgroundSlotPrimary
{
	idc = 1261;

	text = "";
	x = 0.824925 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0262416 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotGPS: BackgroundSlotPrimary
{
	idc = 1262;

	text = "";
	x = 0.85587 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0262416 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotCompass: BackgroundSlotPrimary
{
	idc = 1263;

	text = "";
	x = 0.922918 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0262416 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotRadio: BackgroundSlotPrimary
{
	idc = 1264;

	text = "";
	x = 0.890426 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0247562 * safezoneW;
	h = 0.044 * safezoneH;
};
class BackgroundSlotWatch: BackgroundSlotPrimary
{
	idc = 1265;

	text = "";
	x = 0.953864 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0262416 * safezoneW;
	h = 0.044 * safezoneH;
};
class ExternalContainerBackground: RscPicture
{
	idc = 1240;

	text = "";
	x = 0.0100336 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.242404 * safezoneW;
	h = 0.561 * safezoneH;
	colorText[] = {1,1,1,0.1};
};
class PlayerContainerBackground: ExternalContainerBackground
{
	idc = 1241;

	text = "";
	x = 0.824925 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.154726 * safezoneW;
	h = 0.418 * safezoneH;
	colorText[] = {1,1,1,0.1};
};
class GroundTab: RscActiveText
{
	idc = 6321;
	colorBackgroundSelected[] = {1,1,1,1};
	colorFocused[] = {1,1,1,0};
	soundDoubleClick[] = {"",0.1,1};
	color[] = {1,1,1,1};

	x = 0.18539 * safezoneW + safezoneX;
	y = 0.181 * safezoneH + safezoneY;
	w = 0.0680795 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class SoldierTab: GroundTab
{
	idc = 6401;

	x = 0.18539 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0680795 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class GroundContainer: RscListBox
{
	idc = 632;
	sizeEx2 = "0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	rowHeight = "2 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	canDrag = 1;
	itemBackground[] = {1,1,1,0.1};
	itemSpacing = 0.001;

	x = 0.0100336 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.242404 * safezoneW;
	h = 0.561 * safezoneH;
	colorBackground[] = {0,0,0,0};
	sizeEx = 0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
};
class SoldierContainer: GroundContainer
{
	idc = 640;

	x = 0.0100336 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.242404 * safezoneW;
	h = 0.561 * safezoneH;
	colorBackground[] = {0,0,0,0};
	sizeEx = 0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
};
class GroundFilter: RscCombo
{
	idc = 6554;

	x = 0.0100336 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.067048 * safezoneW;
	h = 0.022 * safezoneH;
};
class GroundLoad: RscProgress
{
	idc = 6307;
	texture = "";
	textureExt = "";
	colorBar[] = {0.9,0.9,0.9,0.9};
	colorExtBar[] = {1,1,1,1};
	colorFrame[] = {1,1,1,1};

	x = 0.0100336 * safezoneW + safezoneX;
	y = 0.83 * safezoneH + safezoneY;
	w = 0.242404 * safezoneW;
	h = 0.022 * safezoneH;
};
class SlotPrimary: GroundTab
{
	idc = 610;
	style = "0x30 + 0x800";
	color[] = {1,1,1,1};
	colorBackgroundSelected[] = {1,1,1,0.1};
	colorFocused[] = {0,0,0,0};
	canDrag = 1;

	x = 0.324644 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.175356 * safezoneW;
	h = 0.088 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotPrimaryMuzzle: SlotPrimary
{
	idc = 620;

	x = 0.293698 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotPrimaryUnderBarrel: SlotPrimary
{
	idc = 641;

	x = 0.334959 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotPrimaryFlashlight: SlotPrimary
{
	idc = 622;

	x = 0.334959 * safezoneW + safezoneX;
	y = 0.192 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotPrimaryOptics: SlotPrimary
{
	idc = 621;

	x = 0.422637 * safezoneW + safezoneX;
	y = 0.192 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotPrimaryMagazineGL: SlotPrimary
{
	idc = 644;

	x = 0.463897 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.0257877 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotPrimaryMagazine: SlotPrimary
{
	idc = 623;

	x = 0.360746 * safezoneW + safezoneX;
	y = 0.346 * safezoneH + safezoneY;
	w = 0.0235184 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotSecondary: SlotPrimary
{
	idc = 611;

	x = 0.324644 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.175356 * safezoneW;
	h = 0.088 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotSecondaryMuzzle: SlotPrimary
{
	idc = 624;

	x = 0.288541 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotSecondaryUnderBarrel: SlotPrimary
{
	idc = 642;

	x = 0.334959 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotSecondaryFlashlight: SlotPrimary
{
	idc = 626;

	x = 0.334959 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotSecondaryOptics: SlotPrimary
{
	idc = 625;

	x = 0.422637 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotSecondaryMagazine: SlotPrimary
{
	idc = 627;

	x = 0.45874 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotHandgun: SlotPrimary
{
	idc = 612;

	x = 0.324644 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.175356 * safezoneW;
	h = 0.088 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotHandgunMuzzle: SlotPrimary
{
	idc = 628;

	x = 0.288541 * safezoneW + safezoneX;
	y = 0.698 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotHandgunUnderBarrel: SlotPrimary
{
	idc = 643;

	x = 0.329801 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotHandgunFlashlight: SlotPrimary
{
	idc = 630;

	x = 0.334959 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotHandgunOptics: SlotPrimary
{
	idc = 629;

	x = 0.422637 * safezoneW + safezoneX;
	y = 0.632 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotHandgunMagazine: SlotPrimary
{
	idc = 631;

	x = 0.45874 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.0284696 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotHeadgear: SlotPrimary
{
	idc = 6240;

	x = 0.861028 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0361028 * safezoneW;
	h = 0.066 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotGoggles: SlotPrimary
{
	idc = 6216;

	x = 0.907446 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0361028 * safezoneW;
	h = 0.066 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotHMD: SlotPrimary
{
	idc = 6217;

	x = 0.948706 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0361028 * safezoneW;
	h = 0.066 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotBinoculars: SlotPrimary
{
	idc = 6238;

	x = 0.819767 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0361028 * safezoneW;
	h = 0.066 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotMap: SlotPrimary
{
	idc = 6211;

	x = 0.824925 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0247562 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotGPS: SlotPrimary
{
	idc = 6215;

	x = 0.85587 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0247562 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotCompass: SlotPrimary
{
	idc = 6212;

	x = 0.922918 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0247562 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotRadio: SlotPrimary
{
	idc = 6214;

	x = 0.890426 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0247562 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class SlotWatch: SlotPrimary
{
	idc = 6213;

	x = 0.953864 * safezoneW + safezoneX;
	y = 0.72 * safezoneH + safezoneY;
	w = 0.0247562 * safezoneW;
	h = 0.044 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class UniformTab: GroundTab
{
	idc = 6332;

	x = 0.75272 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.0515754 * safezoneW;
	h = 0.088 * safezoneH;
	colorBackground[] = {1,1,1,0.5};
};
class UniformSlot: SlotPrimary
{
	idc = 6331;

	x = 0.75272 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.0515754 * safezoneW;
	h = 0.088 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class UniformLoad: GroundLoad
{
	idc = 6304;

	x = 0.75272 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0515754 * safezoneW;
	h = 0.022 * safezoneH;
};
class UniformContainer: GroundContainer
{
	idc = 633;

	x = 0.824925 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.154726 * safezoneW;
	h = 0.418 * safezoneH;
	colorBackground[] = {0,0,0,0};
	sizeEx = 0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
};
class VestTab: UniformTab
{
	idc = 6382;

	x = 0.75272 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0515754 * safezoneW;
	h = 0.088 * safezoneH;
	colorBackground[] = {1,1,1,0.5};
};
class VestSlot: SlotPrimary
{
	idc = 6381;

	x = 0.75272 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0515754 * safezoneW;
	h = 0.088 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class VestLoad: GroundLoad
{
	idc = 6305;

	x = 0.75272 * safezoneW + safezoneX;
	y = 0.533 * safezoneH + safezoneY;
	w = 0.0515754 * safezoneW;
	h = 0.022 * safezoneH;
};
class VestContainer: UniformContainer
{
	idc = 638;

	x = 0.824925 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.154726 * safezoneW;
	h = 0.418 * safezoneH;
	colorBackground[] = {0,0,0,0};
	sizeEx = 0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
};
class BackpackTab: UniformTab
{
	idc = 6192;

	x = 0.75272 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.0515754 * safezoneW;
	h = 0.088 * safezoneH;
	colorBackground[] = {1,1,1,0.5};
};
class BackpackSlot: SlotPrimary
{
	idc = 6191;

	x = 0.75272 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.0515754 * safezoneW;
	h = 0.088 * safezoneH;
	colorText[] = {0,0,0,0.5};
	colorBackground[] = {1,1,1,0.1};
};
class BackpackLoad: GroundLoad
{
	idc = 6306;

	x = 0.75272 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.0515754 * safezoneW;
	h = 0.022 * safezoneH;
};
class BackpackContainer: UniformContainer
{
	idc = 619;

	x = 0.824925 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.154726 * safezoneW;
	h = 0.418 * safezoneH;
	colorBackground[] = {0,0,0,0};
	sizeEx = 0.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
};
class TotalLoad: GroundLoad
{
	idc = 6308;

	x = 0.75272 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.226932 * safezoneW;
	h = 0.033 * safezoneH;
};
class ContainerMarker: GroundTab
{
	idc = 6325;

	x = 0.00487602 * safezoneW + safezoneX;
	y = 0.874 * safezoneH + safezoneY;
	w = 0.0123781 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class GroundMarker: ContainerMarker
{
	idc = 6385;

	x = 0.0255062 * safezoneW + safezoneX;
	y = 0.874 * safezoneH + safezoneY;
	w = 0.0123781 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class SoldierMarker: ContainerMarker
{
	idc = 6405;

	x = 0.0461363 * safezoneW + safezoneX;
	y = 0.874 * safezoneH + safezoneY;
	w = 0.0123781 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class RscPicture_1232: RscPicture
{
	idc = 1232;
	text = "";
	x = 0.515473 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0154726 * safezoneW;
	h = 0.594 * safezoneH;
};
class RscPicture_1234: RscPicture
{
	idc = 1234;
	text = "";
	x = 0.721774 * safezoneW + safezoneX;
	y = 0.214 * safezoneH + safezoneY;
	w = 0.0154726 * safezoneW;
	h = 0.594 * safezoneH;
};
class RscText_1055: RscText
{
	idc = 1055;
	text = "Armour Values:"; //--- ToDo: Localize;
	x = 0.536103 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.033 * safezoneH;
};
class RscText_1056: RscText
{
	idc = 1056;
	text = "> Head Gear: "; //--- ToDo: Localize;
	x = 0.613466 * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.0979933 * safezoneW;
	h = 0.033 * safezoneH;
};
class RscText_1057: RscText
{
	idc = 1057;
	text = "> Vest Plates: "; //--- ToDo: Localize;
	x = 0.613466 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.0979933 * safezoneW;
	h = 0.033 * safezoneH;
};
class RscText_1058: RscText
{
	idc = 1058;
	text = "> Uniform: "; //--- ToDo: Localize;
	x = 0.613466 * safezoneW + safezoneX;
	y = 0.269 * safezoneH + safezoneY;
	w = 0.0979933 * safezoneW;
	h = 0.033 * safezoneH;
};
class RscText_1059: RscText
{
	idc = 1059;
	text = "Current Unit Stats:"; //--- ToDo: Localize;
	x = 0.536103 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.033 * safezoneH;
};
class RscText_1060: RscText
{
	idc = 1060;
	text = "> Avg Health: "; //--- ToDo: Localize;
	x = 0.613466 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.0979933 * safezoneW;
	h = 0.033 * safezoneH;
};
class RscText_1061: RscText
{
	idc = 1061;
	text = "> Stamina: "; //--- ToDo: Localize;
	x = 0.613466 * safezoneW + safezoneX;
	y = 0.412 * safezoneH + safezoneY;
	w = 0.0979933 * safezoneW;
	h = 0.033 * safezoneH;
};
class RscText_1062: RscText
{
	idc = 1062;
	text = "> Direction: "; //--- ToDo: Localize;
	x = 0.613466 * safezoneW + safezoneX;
	y = 0.456 * safezoneH + safezoneY;
	w = 0.0979933 * safezoneW;
	h = 0.033 * safezoneH;
};
class RscPicture_1231: RscPicture
{
	idc = 1231;
	text = "\VKN_Misc\VikingLogo2048.paa";
	x = 0.56189 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.128939 * safezoneW;
	h = 0.242 * safezoneH;
};
class RscButton_1600: RscButton
{
	idc = 1600;
	text = "Repack Magazines"; //--- ToDo: Localize;
	x = 0.628939 * safezoneW + safezoneX;
	y = 0.775 * safezoneH + safezoneY;
	w = 0.0773631 * safezoneW;
	h = 0.033 * safezoneH;
};
