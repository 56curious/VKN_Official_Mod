class VKN_Function_Guide_Home {
  idd = -1;
  movingEnabled = false;

  class controls {
    class IGUIBack_2200: IGUIBack
    {
    	idc = 2200;
    	x = 0.276875 * safezoneW + safezoneX;
    	y = 0.29 * safezoneH + safezoneY;
    	w = 0.44625 * safezoneW;
    	h = 0.42 * safezoneH;
      colorBackground[] = {0.137,0.137,0.137,0.75};
    };
    class IGUIBack_2201: IGUIBack
    {
    	idc = 2201;
    	x = 0.276875 * safezoneW + safezoneX;
    	y = 0.29 * safezoneH + safezoneY;
    	w = 0.44625 * safezoneW;
    	h = 0.042 * safezoneH;
      colorBackground[] = {0.03,0.51,1,0.75};
    };
    class RscButton_1600: RscButton
    {
    	idc = 1600;
    	text = "Close"; //--- ToDo: Localize;
    	x = 0.6575 * safezoneW + safezoneX;
    	y = 0.29 * safezoneH + safezoneY;
    	w = 0.065625 * safezoneW;
    	h = 0.042 * safezoneH;
      action = "closeDialog 0;";
    };
    class RscText_1000: RscText
    {
    	idc = 1000;
    	text = "Viking Mod - Common Functions Guide"; //--- ToDo: Localize;
    	x = 0.276875 * safezoneW + safezoneX;
    	y = 0.29 * safezoneH + safezoneY;
    	w = 0.328125 * safezoneW;
    	h = 0.042 * safezoneH;
    };
    class RscListbox_1500: RscListbox
    {
    	idc = 1500;
    	x = 0.303125 * safezoneW + safezoneX;
    	y = 0.374 * safezoneH + safezoneY;
    	w = 0.18375 * safezoneW;
    	h = 0.28 * safezoneH;
    };
    class RscButton_1601: RscButton
    {
    	idc = 1601;
    	text = "Get Function Help"; //--- ToDo: Localize;
    	x = 0.526249 * safezoneW + safezoneX;
    	y = 0.374 * safezoneH + safezoneY;
    	w = 0.1575 * safezoneW;
    	h = 0.056 * safezoneH;
    };
    class RscText_1001: RscText
    {
    	idc = 1001;
    	text = "Function Information"; //--- ToDo: Localize;
    	x = 0.5525 * safezoneW + safezoneX;
    	y = 0.458 * safezoneH + safezoneY;
    	w = 0.105 * safezoneW;
    	h = 0.028 * safezoneH;
    };
    class RscStructuredText_1100: RscStructuredText
    {
    	idc = 1100;
    	x = 0.506562 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.196875 * safezoneW;
    	h = 0.154 * safezoneH;
    };
  };
};
