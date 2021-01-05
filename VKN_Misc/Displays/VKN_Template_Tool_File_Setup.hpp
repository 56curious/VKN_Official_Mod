class VKN_Template_Tool_File_Setup {
  idd = 3482;
  enableDisplay = 1;
  enableSimulation = 1;

  class ControlsBackground {
    DISABLE_BACKGROUND
  };

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
    class VKN_TT_Edit: ctrlEditMulti
    {
      autocomplete = "scripting";
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
    class RscButton_1600: ctrlButtonClose
    {
    	idc = 1600;
    	text = "Complete"; //--- ToDo: Localize;
    	x = 0.45874 * safezoneW + safezoneX;
    	y = 0.841 * safezoneH + safezoneY;
    	w = 0.0825207 * safezoneW;
    	h = 0.044 * safezoneH;
    	tooltip = "Please ensure all data is correct before clicking."; //--- ToDo: Localize;
      sizeEx = "5 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
    };
    class VKN_TT_LinkButton_1: ctrlButton
    {
    	idc = 1601;
    	text = "Wiki Help"; //--- ToDo: Localize;
      url = "https://community.bistudio.com/wiki/Description.ext";
    	x = 0.309171 * safezoneW + safezoneX;
    	y = 0.841 * safezoneH + safezoneY;
    	w = 0.0825207 * safezoneW;
    	h = 0.044 * safezoneH;
    	tooltip = "Description.ext Community Wiki Help"; //--- ToDo: Localize;
      sizeEx = "5 * (1 / (getResolution select 3)) * pixelGrid * 0.5";

      action = "systemChat 'Description.ext wiki page will be opened in your web browser.';";
    };
    class VKN_TT_LinkButton_2: VKN_TT_LinkButton_1
    {
    	idc = 1602;
    	text = "Wiki Help"; //--- ToDo: Localize;
      url = "https://community.bistudio.com/wiki/Event_Scripts";
    	x = 0.608308 * safezoneW + safezoneX;
    	y = 0.841 * safezoneH + safezoneY;
    	w = 0.0825207 * safezoneW;
    	h = 0.044 * safezoneH;
    	tooltip = "Event Scripting Community Wiki Help"; //--- ToDo: Localize;

      action = "systemChat 'Event Scripts wiki page will be opened in your web browser.';";
    };
    class VKN_TT_resetButton: ctrlButton
    {
    	idc = 1603;
    	text = "Reset"; //--- ToDo: Localize;
    	x = 0.448946 * safezoneW + safezoneX;
    	y = 0.148 * safezoneH + safezoneY;
    	w = 0.0412603 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class VKN_TT_resetButton_1: VKN_TT_resetButton
    {
    	idc = 1604;
    	x = 0.65009 * safezoneW + safezoneX;
    	y = 0.148 * safezoneH + safezoneY;
    	w = 0.0412603 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class VKN_TT_resetButton_2: VKN_TT_resetButton
    {
    	idc = 1605;
    	x = 0.448946 * safezoneW + safezoneX;
    	y = 0.302 * safezoneH + safezoneY;
    	w = 0.0412603 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class VKN_TT_resetButton_3: VKN_TT_resetButton
    {
    	idc = 1606;
    	x = 0.65009 * safezoneW + safezoneX;
    	y = 0.302 * safezoneH + safezoneY;
    	w = 0.0412603 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class VKN_TT_resetButton_4: VKN_TT_resetButton
    {
    	idc = 1607;
    	x = 0.448946 * safezoneW + safezoneX;
    	y = 0.456 * safezoneH + safezoneY;
    	w = 0.0412603 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class VKN_TT_resetButton_5: VKN_TT_resetButton
    {
    	idc = 1608;
    	x = 0.65009 * safezoneW + safezoneX;
    	y = 0.456 * safezoneH + safezoneY;
    	w = 0.0412603 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class VKN_TT_resetButton_6: VKN_TT_resetButton
    {
    	idc = 1609;
    	x = 0.65009 * safezoneW + safezoneX;
    	y = 0.61 * safezoneH + safezoneY;
    	w = 0.0412603 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class homeIcon: ctrlButtonPicture
    {
      onMouseButtonClick = "findDisplay 313 closeDisplay 0; findDisplay 313 createDisplay 'VKN_Template_Tool_Home';";

    	idc = 1200;
    	text = "\a3\3den\data\controlsgroups\tutorial\exit_ca.paa";
    	x = 0.685671 * safezoneW + safezoneX;
    	y = 0.093 * safezoneH + safezoneY;
    	w = 0.0206302 * safezoneW;
    	h = 0.033 * safezoneH;

      colorBackground[] = {0.03,0.51,1,0.75};
    };
  };
};
