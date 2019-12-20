

/// Actions have untested scripts - need to check on them
/// Need to fix the scripts on the zeus modules


class IGUIBack;
class RscStructuredText;
class RscButton;

class VKN_Template_Tool_Info {
  idd = -1;

  class controls {

    class IGUIBack_2200: IGUIBack
    {
    	idc = 2200;
    	x = 0.3425 * safezoneW + safezoneX;
    	y = 0.206 * safezoneH + safezoneY;
    	w = 0.315 * safezoneW;
    	h = 0.588 * safezoneH;
      colorBackground[] = {0.137,0.137,0.137,0.75};
    };
    class IGUIBack_2201: IGUIBack
    {
    	idc = 2201;
    	x = 0.3425 * safezoneW + safezoneX;
    	y = 0.206 * safezoneH + safezoneY;
    	w = 0.315 * safezoneW;
    	h = 0.042 * safezoneH;
      colorBackground[] = {0.03,0.51,1,0.75};
    };
    class RscText_1000: RscText
    {
    	idc = 1000;
    	text = "VKN Template Tool Information"; //--- ToDo: Localize;
    	x = 0.3425 * safezoneW + safezoneX;
    	y = 0.206 * safezoneH + safezoneY;
    	w = 0.275625 * safezoneW;
    	h = 0.042 * safezoneH;
    };
    class RscStructuredText_1100: RscStructuredText
    {
    	idc = 1100;
    	text = "Due to the way that arma 3 works, I currently cannot do this next part for you :/ <br />You'll instead need to follow these steps.<br /><br />Firstly, ensure you have saved the mission and named it.<br />Second, goto Scenario >> Open Scenario Folder<br />Create a new text document and name it description.ext<br />Make sure you have set the file format!!!<br />Click the 'Copy File Contents' button below. <br /> <br />All done, Zeus will work with virtual entities."; //--- ToDo: Localize;
    	x = 0.362187 * safezoneW + safezoneX;
    	y = 0.276 * safezoneH + safezoneY;
    	w = 0.275625 * safezoneW;
    	h = 0.364 * safezoneH;
    };
    class RscButton_1600: RscButton
    {
    	idc = 1600;
    	text = "Copy File Name"; //--- ToDo: Localize;
    	x = 0.362187 * safezoneW + safezoneX;
    	y = 0.668 * safezoneH + safezoneY;
    	w = 0.091875 * safezoneW;
    	h = 0.056 * safezoneH;
      action = "copyToClipboard ""description.ext""";
    };
    class RscButton_1601: RscButton
    {
    	idc = 1601;
    	text = "Copy File Contents"; //--- ToDo: Localize;
    	x = 0.545937 * safezoneW + safezoneX;
    	y = 0.668 * safezoneH + safezoneY;
    	w = 0.091875 * safezoneW;
    	h = 0.056 * safezoneH;
      action = "copyToClipboard ""respawnTemplatesVirtual[] = {};""";
    };
    class RscButton_1602: RscButton
    {
    	idc = 1602;
    	text = "Got it!"; //--- ToDo: Localize;
    	x = 0.47375 * safezoneW + safezoneX;
    	y = 0.724 * safezoneH + safezoneY;
    	w = 0.0525 * safezoneW;
    	h = 0.042 * safezoneH;
      action = "closeDialog 0;";
    };
  };

};
