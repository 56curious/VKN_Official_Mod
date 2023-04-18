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

    	x = 0.365904 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.268192 * safezoneW;
    	h = 0.297 * safezoneH;
    	colorBackground[] = {0.137,0.137,0.137,0.75};
    };
    class IGUIBack_2201: IGUIBack
    {
    	idc = 2201;

    	x = 0.365904 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.268192 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
    };
    class RscText_1000: RscText
    {
    	idc = 1000;

    	text = "Template Tool Home Page - By Curious, Viking PMC"; //--- ToDo: Localize;
    	x = 0.365905 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.232089 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class editPicture: VKN_ctrlActivePicture
    {
    	idc = 1600;

    	text = "\VKN_Misc\Misc\editIcon.paa"; //--- ToDo: Localize;
    	x = 0.386534 * safezoneW + safezoneX;
    	y = 0.379 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.11 * safezoneH;
    	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
    };
    class createPicture: VKN_ctrlActivePicture
    {
    	idc = 1601;

    	text = "\VKN_Misc\Misc\createIcon.paa"; //--- ToDo: Localize;
    	x = 0.469055 * safezoneW + safezoneX;
    	y = 0.379 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.11 * safezoneH;
    	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
    };
    class deletePicture: VKN_ctrlActivePicture
    {
    	idc = 1602;

    	text = "\VKN_Misc\Misc\deleteIcon.paa"; //--- ToDo: Localize;
    	x = 0.551575 * safezoneW + safezoneX;
    	y = 0.379 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.11 * safezoneH;
    	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
    };
    class startText: RscText
    {
    	style = 2;
      sizeEx = "5 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
    	idc = 1001;

    	text = "Start Tool"; //--- ToDo: Localize;
    	x = 0.469055 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class editText: startText
    {
    	idc = 1002;

    	text = "Edit External Files"; //--- ToDo: Localize;
    	x = 0.386534 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class deleteText: startText
    {
    	idc = 1003;

    	text = "Delete External Files"; //--- ToDo: Localize;
    	x = 0.551575 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.0618905 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class exitButton: ctrlButton
    {
    	idc = 1603;
    	action = "findDisplay 3480 closeDisplay 0;";

    	text = "Exit Tool"; //--- ToDo: Localize;
    	x = 0.474212 * safezoneW + safezoneX;
    	y = 0.555 * safezoneH + safezoneY;
    	w = 0.0515754 * safezoneW;
    	h = 0.022 * safezoneH;
    };
  };
};
