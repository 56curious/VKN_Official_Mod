class RscText
{
	x=0;
	y=0;
	h=0.037;
	w=0.30000001;
	style=0;
	shadow=1;
	colorShadow[]={0,0,0,0.5};
	font="RobotoCondensed";
	SizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[]={1,1,1,1};
	colorBackground[]={0,0,0,0};
	linespacing=1;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class RscStructuredText
{
	x=0;
	y=0;
	h=0.035;
	w=0.1;
	text="";
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[]={1,1,1,1};
	shadow=1;
	class Attributes
	{
		font="RobotoCondensed";
		color="#ffffff";
		colorLink="#D09B43";
		align="left";
		shadow=1;
	};
};
class RscButton
{
	idc=-1;
	style=2;
	x=0;
	y=0;
	w=0.095588997;
	h=0.039216001;
	shadow=2;
	font="RobotoCondensed";
	sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url="";
	colorText[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.25};
	colorBackground[]={0,0,0,0.5};
	colorBackgroundActive[]={0,0,0,1};
	colorBackgroundDisabled[]={0,0,0,0.5};
	colorFocused[]={0,0,0,1};
	colorShadow[]={0,0,0,0};
	offsetX=0;
	offsetY=0;
	offsetPressedX=0;
	offsetPressedY=0;
	colorBorder[]={0,0,0,1};
	borderSize=0;
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
};
class RscPicture
{
	shadow=0;
	colorText[]={1,1,1,1};
	x=0;
	y=0;
	w=0.2;
	h=0.15000001;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class RscPictureKeepAspect: RscPicture
{
	style="0x30 + 0x800";
};
class RscActiveText
{
	idc=-1;
	x=0;
	y=0;
	h=0.035;
	w=0.035;
	font="RobotoCondensed";
	shadow=2;
	sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	url="";
	color[]={0,0,0,1};
	colorActive[]={0.30000001,0.40000001,0,1};
	colorDisabled[]={1,1,1,0.25};
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class RscActivePicture: RscActiveText
{
	style=48;
	color[]={1,1,1,0.5};
	colorActive[]={1,1,1,1};
};
class RscActivePictureKeepAspect: RscActivePicture
{
	style="0x30 + 0x800";
};
class RscVideo: RscPicture
{
	autoplay=1;
	loops=1;
};
class RscVideoKeepAspect: RscPictureKeepAspect
{
	autoplay=1;
	loops=1;
};
class RscShortcutButton
{
	idc=-1;
	style=0;
	default=0;
	shadow=1;
	w=0.183825;
	h="(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20)";
	color[]={1,1,1,1};
	colorFocused[]={1,1,1,1};
	color2[]={0.94999999,0.94999999,0.94999999,1};
	colorDisabled[]={1,1,1,0.25};
	colorBackground[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		1
	};
	colorBackgroundFocused[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.13])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.54])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.21])",
		1
	};
	colorBackground2[]={1,1,1,1};
	textSecondary="";
	colorSecondary[]={1,1,1,1};
	colorFocusedSecondary[]={1,1,1,1};
	color2Secondary[]={0.94999999,0.94999999,0.94999999,1};
	colorDisabledSecondary[]={1,1,1,0.25};
	sizeExSecondary="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary="RobotoCondensed";
	animTextureDefault="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureNormal="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureDisabled="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\normal_ca.paa";
	animTextureOver="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\over_ca.paa";
	animTextureFocused="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\focus_ca.paa";
	animTexturePressed="\A3\ui_f\data\GUI\RscCommon\RscShortcutButton\down_ca.paa";
	periodFocus=1.2;
	periodOver=0.80000001;
	class HitZone
	{
		left=0;
		top=0;
		right=0;
		bottom=0;
	};
	class ShortcutPos
	{
		left=0;
		top="(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		w="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		h="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	};
	class TextPos
	{
		left="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1) * (3/4)";
		top="(			(		(		((safezoneW / safezoneH) min 1.2) / 1.2) / 20) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right=0.0049999999;
		bottom=0;
	};
	period=0.40000001;
	font="RobotoCondensed";
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	text="";
	url="";
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
	action="";
	class Attributes
	{
		font="RobotoCondensed";
		color="#E5E5E5";
		align="left";
		shadow="true";
	};
	class AttributesImage
	{
		font="RobotoCondensed";
		color="#E5E5E5";
		align="left";
	};
};

class RscButtonMenu: RscShortcutButton
{
	idc=-1;
	type=16;
	style="0x02 + 0xC0";
	default=0;
	shadow=0;
	x=0;
	y=0;
	w=0.095588997;
	h=0.039216001;
	animTextureNormal="#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled="#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver="#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused="#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed="#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault="#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[]={0,0,0,0.80000001};
	colorBackgroundFocused[]={1,1,1,1};
	colorBackground2[]={0.75,0.75,0.75,1};
	color[]={1,1,1,1};
	colorFocused[]={0,0,0,1};
	color2[]={0,0,0,1};
	colorText[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.25};
	textSecondary="";
	colorSecondary[]={1,1,1,1};
	colorFocusedSecondary[]={0,0,0,1};
	color2Secondary[]={0,0,0,1};
	colorDisabledSecondary[]={1,1,1,0.25};
	sizeExSecondary="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	fontSecondary="PuristaLight";
	period=1.2;
	periodFocus=1.2;
	periodOver=1.2;
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	class TextPos
	{
		left="0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right=0.0049999999;
		bottom=0;
	};
	class Attributes
	{
		font="PuristaLight";
		color="#E5E5E5";
		align="left";
		shadow="false";
	};
	class ShortcutPos
	{
		left="5.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top=0;
		w="1 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		h="1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
		0.090000004,
		1
	};
};

class ScrollBar
{
	color[]={1,1,1,0.60000002};
	colorActive[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.30000001};
	thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow=0;
	scrollSpeed=0.059999999;
	width=0;
	height=0;
	autoScrollEnabled=0;
	autoScrollSpeed=-1;
	autoScrollDelay=5;
	autoScrollRewind=0;
};

class RscControlsGroup
{
	type=15;
	idc=-1;
	x=0;
	y=0;
	w=1;
	h=1;
	shadow=0;
	style=16;
	class VScrollbar: ScrollBar
	{
		width=0.021;
		autoScrollEnabled=1;
	};
	class HScrollbar: ScrollBar
	{
		height=0.028000001;
	};
	class Controls
	{
	};
};
class RscControlsGroupNoScrollbars: RscControlsGroup
{
	class VScrollbar: VScrollbar
	{
		width=0;
	};
	class HScrollbar: HScrollbar
	{
		height=0;
	};
};
class RscControlsGroupNoHScrollbars: RscControlsGroup
{
	class HScrollbar: HScrollbar
	{
		height=0;
	};
};
class RscControlsGroupNoVScrollbars: RscControlsGroup
{
	class VScrollbar: VScrollbar
	{
		width=0;
	};
};
class BackgroundBar: RscText
{
	colorBackground[]={0,0,0,0.75};
	x="safezoneX";
	y="safezoneY + 2 * 	(pixelH * pixelGrid * 2)";
	w="safezoneW";
	h="2 * 	(pixelH * pixelGrid * 2)";
};
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars
{
	fade=1;
	x="0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 	(2 * pixelW)";
	y="0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
	w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
	h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
	class Controls
	{
		class GroupPicture: RscControlsGroupNoScrollbars
		{
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Controls
			{
				class Picture: RscPictureKeepAspect
				{
					idc=1023;
					text="#(argb,8,8,3)color(1,0,1,1)";
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
				class Video: RscVideo
				{
					idc=1024;
					show=0;
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
			};
		};
		class GroupHover: RscControlsGroupNoScrollbars
		{
			idc=1025;
			fade=1;
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Controls
			{
				class Overlay: RscPicture
				{
					text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\hover_ca.paa";
					colorText[]={0,0,0,0.5};
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
				class LineLeft: RscText
				{
					colorBackground[]={1,1,1,1};
					x=0;
					y=0;
					w="pixelW";
					h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
				};
				class LineRight: LineLeft
				{
					x="10 * 	(pixelW * pixelGridNoUIScale * 2) - pixelW";
				};
				class LineTop: LineLeft
				{
					idc=1027;
					x=0;
					y=0;
					w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
					h="(pixelH * pixelGrid * 2)";
					colorText[]={0,0,0,1};
					shadow=0;
					style=0;
					sizeEx="(pixelH * pixelGrid * 2)";
					font="PuristaLight";
					onLoad="(_this select 0) ctrlsettext toupper ctrltext (_this select 0);";
				};
				class LineBottom: LineTop
				{
					y="10 * 	(pixelH * pixelGridNoUIScale * 2) - pixelH";
					h="pixelH";
				};
			};
		};
		class TextBackground: RscPicture
		{
			idc=1029;
			text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_backgroundText_ca.paa";
			colorText[]={0,0,0,0.5};
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
		class Text: RscStructuredText
		{
			idc=1028;
			size="1.00 * 	(pixelH * pixelGridNoUIScale * 2)";
			shadow=2;
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			class Attributes
			{
				align="center";
				color="#ffffff";
				font="PuristaBold";
			};
		};
		class Button: RscButton
		{
			idc=1026;
			colorBackground[]={0,0,0,0};
			colorBackgroundActive[]={0,0,0,0};
			colorBackgroundDisabled[]={0,0,0,0};
			colorFocused[]={0,0,0,0};
			colorDisabled[]={0,0,0,0};
			x=0;
			y=0;
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
		};
	};
};