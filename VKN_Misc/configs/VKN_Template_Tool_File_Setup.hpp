class VKN_Template_Tool_File_Setup {
  idd = 348568;
  enableDisplay = 1;
  enableSimulation = 1;

  controlsBackground[] = { ctrlStaticBackgroundDisableTiles };

  class controls {
    ////////////////////////////////////////////////////////
    // GUI EDITOR OUTPUT START (by Curious, v1.063, #Nudilu)
    ////////////////////////////////////////////////////////

    class IGUIBack_2200: IGUIBack
    {
    	idc = 2200;
    	x = 0.293698 * safezoneW + safezoneX;
    	y = 0.0930001 * safezoneH + safezoneY;
    	w = 0.412603 * safezoneW;
    	h = 0.814 * safezoneH;
    	colorBackground[] = {0.137,0.137,0.137,0.75};
    };
    class VKN_TT_Edit: RscEdit
    {
      style = 15;
    	idc = 1400;
    	x = 0.309171 * safezoneW + safezoneX;
    	y = 0.324 * safezoneH + safezoneY;
    	w = 0.180514 * safezoneW;
    	h = 0.099 * safezoneH;
    	tooltip = "Please ensure all data is correct before continuing."; //--- ToDo: Localize;
    };
    class IGUIBack_2201: IGUIBack
    {
    	idc = 2201;
    	x = 0.293698 * safezoneW + safezoneX;
    	y = 0.093 * safezoneH + safezoneY;
    	w = 0.412603 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorBackground[] = {0.03,0.51,1,0.75};
    };
    class RscText_1000: RscText
    {
    	idc = 1000;
    	text = "VKN Template Tool - Event Script File Setup"; //--- ToDo: Localize;
    	x = 0.293698 * safezoneW + safezoneX;
    	y = 0.093 * safezoneH + safezoneY;
    	w = 0.190829 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class RscText_1001: RscText
    {
    	idc = 1001;
    	text = "init.sqf"; //--- ToDo: Localize;
    	x = 0.309171 * safezoneW + safezoneX;
    	y = 0.137 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class RscText_1002: RscText
    {
    	idc = 1002;
    	text = "initPlayerLocal.sqf"; //--- ToDo: Localize;
    	x = 0.309171 * safezoneW + safezoneX;
    	y = 0.291 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class RscEdit_1401: VKN_TT_Edit
    {
    	idc = 1401;
    	x = 0.510315 * safezoneW + safezoneX;
    	y = 0.17 * safezoneH + safezoneY;
    	w = 0.180514 * safezoneW;
    	h = 0.099 * safezoneH;
    	tooltip = "Please ensure all data is correct before continuing."; //--- ToDo: Localize;
    };
    class RscText_1003: RscText
    {
    	idc = 1003;
    	text = "initPlayerServer.sqf"; //--- ToDo: Localize;
    	x = 0.309171 * safezoneW + safezoneX;
    	y = 0.445 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class RscEdit_1402: VKN_TT_Edit
    {
    	idc = 1402;
    	x = 0.309171 * safezoneW + safezoneX;
    	y = 0.17 * safezoneH + safezoneY;
    	w = 0.180514 * safezoneW;
    	h = 0.099 * safezoneH;
    	tooltip = "Please ensure all data is correct before continuing."; //--- ToDo: Localize;
    };
    class RscEdit_1403: VKN_TT_Edit
    {
    	idc = 1403;
    	x = 0.309171 * safezoneW + safezoneX;
    	y = 0.478 * safezoneH + safezoneY;
    	w = 0.180514 * safezoneW;
    	h = 0.099 * safezoneH;
    	tooltip = "Please ensure all data is correct before continuing."; //--- ToDo: Localize;
    };
    class RscText_1004: RscText
    {
    	idc = 1004;
    	text = "initServer.sqf"; //--- ToDo: Localize;
    	x = 0.510315 * safezoneW + safezoneX;
    	y = 0.137 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class RscText_1005: RscText
    {
    	idc = 1005;
    	text = "onPlayerKilled.sqf"; //--- ToDo: Localize;
    	x = 0.510315 * safezoneW + safezoneX;
    	y = 0.291 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class RscEdit_1404: VKN_TT_Edit
    {
    	idc = 1404;
    	x = 0.510315 * safezoneW + safezoneX;
    	y = 0.324 * safezoneH + safezoneY;
    	w = 0.180514 * safezoneW;
    	h = 0.099 * safezoneH;
    	tooltip = "Please ensure all data is correct before continuing."; //--- ToDo: Localize;
    };
    class RscText_1006: RscText
    {
    	idc = 1006;
    	text = "onPlayerRespawn.sqf"; //--- ToDo: Localize;
    	x = 0.510315 * safezoneW + safezoneX;
    	y = 0.445 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class RscEdit_1406: VKN_TT_Edit
    {
    	idc = 1406;
    	x = 0.510315 * safezoneW + safezoneX;
    	y = 0.478 * safezoneH + safezoneY;
    	w = 0.180514 * safezoneW;
    	h = 0.099 * safezoneH;
    	tooltip = "Please ensure all data is correct before continuing."; //--- ToDo: Localize;
    };
    class RscText_1007: RscText
    {
    	idc = 1007;
    	text = "description.ext"; //--- ToDo: Localize;
    	x = 0.309171 * safezoneW + safezoneX;
    	y = 0.599 * safezoneH + safezoneY;
    	w = 0.103151 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class RscEdit_1405: VKN_TT_Edit
    {
    	idc = 1405;
    	x = 0.309171 * safezoneW + safezoneX;
    	y = 0.632 * safezoneH + safezoneY;
    	w = 0.381658 * safezoneW;
    	h = 0.187 * safezoneH;
    	tooltip = "Please ensure all data is correct before continuing."; //--- ToDo: Localize;
    };
    class RscButton_1600: RscButton
    {
    	idc = 1600;
    	text = "Complete"; //--- ToDo: Localize;
    	x = 0.45874 * safezoneW + safezoneX;
    	y = 0.841 * safezoneH + safezoneY;
    	w = 0.0825207 * safezoneW;
    	h = 0.044 * safezoneH;
    	tooltip = "Please ensure all data is correct before clicking."; //--- ToDo: Localize;
    };
    class VKN_TT_LinkButton_1: RscButton
    {
      style = 13;
    	idc = 1601;
    	text = "Wiki Help"; //--- ToDo: Localize;
    	x = 0.309171 * safezoneW + safezoneX;
    	y = 0.841 * safezoneH + safezoneY;
    	w = 0.0825207 * safezoneW;
    	h = 0.044 * safezoneH;
    	tooltip = "<a href=""https://community.bistudio.com/wiki/Description.ext"">Description.ext Community Wiki Help</a>"; //--- ToDo: Localize;

      action = "systemChat 'Description.ext wiki page will be opened in your web browser.';";
    };
    class VKN_TT_LinkButton_2: VKN_TT_LinkButton_1
    {
    	idc = 1602;
    	text = "Wiki Help"; //--- ToDo: Localize;
    	x = 0.608308 * safezoneW + safezoneX;
    	y = 0.841 * safezoneH + safezoneY;
    	w = 0.0825207 * safezoneW;
    	h = 0.044 * safezoneH;
    	tooltip = "<a href=""https://community.bistudio.com/wiki/Event_Scripts"">Event Scripting Community Wiki Help</a>"; //--- ToDo: Localize;

      action = "systemChat 'Event Scripts wiki page will be opened in your web browser.';";
    };
    ////////////////////////////////////////////////////////
    // GUI EDITOR OUTPUT END
    ////////////////////////////////////////////////////////
  };
};
