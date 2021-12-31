class VKN_3PP_Cam_Adjustment {
  idd = 5600;
  enableDisplay = 1;
  enableSimulation = 1;

	class controls {
		class background: IGUIBack
		{
			idc = 2200;

			x = 0.773281 * safezoneW + safezoneX;
			y = 0.016 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.297 * safezoneH;

			colorBackground[] = {0.137,0.137,0.137,0.75};
		};
		class titleBackground: IGUIBack
		{
			idc = 2201;

			x = 0.773281 * safezoneW + safezoneX;
			y = 0.016 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.033 * safezoneH;

			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
		};
		class title: RscText
		{
			idc = 1000;

			text = "3rd Person Perspective Adjustment"; //--- ToDo: Localize;
			x = 0.773281 * safezoneW + safezoneX;
			y = 0.016 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class closeButton: RscActiveText
		{
			idc = 1600;
			color[] = {1,1,1,0.7};
			style = 48;
			colorText[] = {1,1,1,0.7};
			colorActive[] = {1,1,1,1};
			tooltip = "Close";

			text = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"; //--- ToDo: Localize;
			x = 0.969219 * safezoneW + safezoneX;
			y = 0.016 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class xSlider: RscXSliderH
		{
			idc = 1900;
			type = 43;
			style = "0x400	+ 0x10";
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
			thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";

			x = 0.835156 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ySlider: xSlider
		{
			idc = 1901;

			x = 0.835156 * safezoneW + safezoneX;
			y = 0.115 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class zSlider: xSlider
		{
			idc = 1902;

			x = 0.835156 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class xText: RscText
		{
			idc = 1001;

			text = "X: "; //--- ToDo: Localize;
			x = 0.778437 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class yText: RscText
		{
			idc = 1002;

			text = "Y: "; //--- ToDo: Localize;
			x = 0.778437 * safezoneW + safezoneX;
			y = 0.115 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class zText: RscText
		{
			idc = 1003;

			text = "Z: "; //--- ToDo: Localize;
			x = 0.778437 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class xEdit: RscEdit
		{
			idc = 1400;
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class yEdit: RscEdit
		{
			idc = 1401;
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.115 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class zEdit: RscEdit
		{
			idc = 1402;
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class presetText: RscText
		{
			idc = 1004;

			text = "Presets"; //--- ToDo: Localize;
			x = 0.778437 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class presetCombo: RscCombo
		{
			idc = 2100;

			x = 0.835156 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class resetButton: RscButton
		{
			idc = 1601;

			text = "Reset to Default"; //--- ToDo: Localize;
			x = 0.793906 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Reset to current camera settings in config (before edits).";
		};
		class confirmButton: RscButton
		{
			idc = 1602;

			text = "Confirm Position"; //--- ToDo: Localize;
			x = 0.891875 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
	};
};