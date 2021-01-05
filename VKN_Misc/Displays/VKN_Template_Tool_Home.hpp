class VKN_Template_Tool_Home {
  idd = 3480;
  enableDisplay = 1;
  enableSimulation = 1;

  class ControlsBackground {
    DISABLE_BACKGROUND
  };

  class controls {
    class IGUIBack_2200: IGUIBack
    {
    	idc = 2200;
    	x = 0.324644 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.350713 * safezoneW;
    	h = 0.374 * safezoneH;
    	colorBackground[] = {0.137,0.137,0.137,0.75};
    };
    class IGUIBack_2201: IGUIBack
    {
    	idc = 2201;
    	x = 0.324644 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.350713 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorBackground[] = {0.03,0.51,1,0.75};
    };
    class RscText_1000: RscText
    {
    	idc = 1000;
    	text = "Template Tool Home Page - By Curious, Viking PMC"; //--- ToDo: Localize;
    	x = 0.324644 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.27335 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class editPicture: VKN_ctrlActivePicture
    {
    	idc = 1600;
    	x = 0.355589 * safezoneW + safezoneX;
    	y = 0.423 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.11 * safezoneH;

      text = "\VKN_Misc\Misc\editIcon.paa";
    };
    class createPicture: VKN_ctrlActivePicture
    {
    	idc = 1601;
    	x = 0.469055 * safezoneW + safezoneX;
    	y = 0.423 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.11 * safezoneH;

      text = "\VKN_Misc\Misc\createIcon.paa";
    };
    class deletePicture: VKN_ctrlActivePicture
    {
    	idc = 1602;
    	x = 0.582521 * safezoneW + safezoneX;
    	y = 0.423 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.11 * safezoneH;

      text = "\VKN_Misc\Misc\deleteIcon.paa";
    };
    class startText: rscText
    {
      style = 2;
      sizeEx = "5 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
    	idc = 1001;
    	text = "Start Tool"; //--- ToDo: Localize;
    	x = 0.469055 * safezoneW + safezoneX;
    	y = 0.544 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class editText: startText
    {
    	idc = 1002;
    	text = "Edit External Files"; //--- ToDo: Localize;
    	x = 0.355589 * safezoneW + safezoneX;
    	y = 0.544 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class deleteText: startText
    {
    	idc = 1003;
    	text = "Delete External Files"; //--- ToDo: Localize;
    	x = 0.582521 * safezoneW + safezoneX;
    	y = 0.544 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class RscButton_1603: RscButton
    {
    	idc = 1603;
    	text = "Exit Tool"; //--- ToDo: Localize;
    	x = 0.45874 * safezoneW + safezoneX;
    	y = 0.621 * safezoneH + safezoneY;
    	w = 0.0825207 * safezoneW;
    	h = 0.033 * safezoneH;

      action = "findDisplay 3480 closeDisplay 0;";
    };
  };
};
