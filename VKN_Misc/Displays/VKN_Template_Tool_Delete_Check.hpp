class VKN_Template_Tool_Delete_Check {
  idd = 3485;
  enableDisplay = 1;
  enableSimulation = 1;

  class ControlsBackground {
    DISABLE_BACKGROUND
  };

  class controls {
    class background: IGUIBack
    {
    	idc = 2200;
    	x = 0.427794 * safezoneW + safezoneX;
    	y = 0.434 * safezoneH + safezoneY;
    	w = 0.144411 * safezoneW;
    	h = 0.132 * safezoneH;
    	colorBackground[] = {0.137,0.137,0.137,0.75};
      tooltip = "This will delete all of the files created by the mission template tool!";
    };
    class backgroundTitle: IGUIBack
    {
    	idc = 2201;
    	x = 0.427794 * safezoneW + safezoneX;
    	y = 0.434 * safezoneH + safezoneY;
    	w = 0.144411 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorBackground[] = {0.03,0.51,1,0.75};
    };
    class titleText: RscEdit
    {
    	idc = 1400;
    	text = "Are you sure?"; //--- ToDo: Localize;
    	x = 0.427794 * safezoneW + safezoneX;
    	y = 0.434 * safezoneH + safezoneY;
    	w = 0.144411 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class confirmButton: ctrlButton
    {
    	idc = 1600;
    	text = "Confirm"; //--- ToDo: Localize;
    	x = 0.438109 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.0515754 * safezoneW;
    	h = 0.033 * safezoneH;
      tooltip = "Will delete all files in mission folder created via this tool.";
    };
    class cancelButton: confirmButton
    {
    	idc = 1601;
    	text = "Cancel"; //--- ToDo: Localize;
    	x = 0.505158 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.0515754 * safezoneW;
    	h = 0.033 * safezoneH;
      tooltip = "Return to home screen";
    };
  };
};
