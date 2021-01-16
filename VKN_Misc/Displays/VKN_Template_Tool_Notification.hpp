class VKN_Template_Tool_Alert {
  idd = 3484;
  enableDisplay = 1;
  enableSimulation = 1;

  class ControlsBackground {
    DISABLE_BACKGROUND
  };

  class controls {

    class BackgroundDark: IGUIBack
    {
    	idc = 2200;
    	x = 0.407164 * safezoneW + safezoneX;
    	y = 0.401 * safezoneH + safezoneY;
    	w = 0.185671 * safezoneW;
    	h = 0.176 * safezoneH;
    	colorBackground[] = {0.137,0.137,0.137,0.75};
    };
    class BackgroundLight: IGUIBack
    {
    	idc = 2201;
    	x = 0.407164 * safezoneW + safezoneX;
    	y = 0.401 * safezoneH + safezoneY;
    	w = 0.185671 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
    };
    class Title: RscText
    {
    	idc = 1000;
    	text = "Mission Template Tool Notification"; //--- ToDo: Localize;
    	x = 0.407164 * safezoneW + safezoneX;
    	y = 0.401 * safezoneH + safezoneY;
    	w = 0.149569 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class Frame: RscFrame
    {
    	idc = 1800;
    	x = 0.417479 * safezoneW + safezoneX;
    	y = 0.445 * safezoneH + safezoneY;
    	w = 0.165041 * safezoneW;
    	h = 0.066 * safezoneH;
    };
    class Explain: RscStructuredText
    {
    	idc = 1100;
    	text = "There has been an update to the template tool. Please ensure you have the most recent version in your mission."; //--- ToDo: Localize;
    	x = 0.417479 * safezoneW + safezoneX;
    	y = 0.445 * safezoneH + safezoneY;
    	w = 0.165041 * safezoneW;
    	h = 0.066 * safezoneH;
    };
    class ExitButton: RscButton
    {
    	idc = 1600;
    	text = "Confirmed"; //--- ToDo: Localize;
    	x = 0.469055 * safezoneW + safezoneX;
    	y = 0.533 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.033 * safezoneH;
    };

  };

};
