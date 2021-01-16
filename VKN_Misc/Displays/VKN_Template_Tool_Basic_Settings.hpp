class VKN_Template_Tool_Basic_Settings {
  idd = 3481;
  enableDisplay = 1;
  enableSimulation = 1;

  class ControlsBackground {
    DISABLE_BACKGROUND
  };

  class controls {
    ////////////////////////////////////////////////////////
    // GUI EDITOR OUTPUT START (by Curious, v1.063, #Moxeke)
    ////////////////////////////////////////////////////////
    class Background: IGUIBack
    {
    	idc = 2200;

    	x = 0.360746 * safezoneW + safezoneX;
    	y = 0.225 * safezoneH + safezoneY;
    	w = 0.278507 * safezoneW;
    	h = 0.528 * safezoneH;
    	colorBackground[] = {0.137,0.137,0.137,0.75};
    };
    class titleBackground: IGUIBack
    {
    	idc = 2201;

    	x = 0.360746 * safezoneW + safezoneX;
    	y = 0.225 * safezoneH + safezoneY;
    	w = 0.278507 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
    };
    class titleText: RscText
    {
    	idc = 1000;

    	text = "VKN Template Tool Setup"; //--- ToDo: Localize;
    	x = 0.360746 * safezoneW + safezoneX;
    	y = 0.225 * safezoneH + safezoneY;
    	w = 0.278507 * safezoneW;
    	h = 0.033 * safezoneH;
    };
    class sideText: RscText
    {
    	idc = 1001;

    	text = "Players Side:"; //--- ToDo: Localize;
    	x = 0.412322 * safezoneW + safezoneX;
    	y = 0.302 * safezoneH + safezoneY;
    	w = 0.07875 * safezoneW;
    	h = 0.022 * safezoneH;
    	tooltip = "Set the side the playable units will spawn as."; //--- ToDo: Localize;
    };
    class Players_Side_Combo: RscCombo
    {
    	idc = 2100;

    	text = "Test"; //--- ToDo: Localize;
    	x = 0.505158 * safezoneW + safezoneX;
    	y = 0.302 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class factionText: RscText
    {
    	idc = 1002;

    	text = "Faction Override:"; //--- ToDo: Localize;
    	x = 0.391692 * safezoneW + safezoneX;
    	y = 0.357 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.022 * safezoneH;
    	tooltip = """B_VKN_ODIN_infantry_squad_pmc"", if not present ""BUS_InfSquad"" is used - default playable factions. Overrides the faction to spawn. Taken from cfgFactionClasses."; //--- ToDo: Localize;
    };
    class Factions_Override_Combo: RscCombo
    {
    	idc = 2101;

    	text = "Test"; //--- ToDo: Localize;
    	x = 0.505158 * safezoneW + safezoneX;
    	y = 0.357 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class squadText: RscText
    {
    	idc = 1002;

    	text = "Squad Select:"; //--- ToDo: Localize;
    	x = 0.417479 * safezoneW + safezoneX;
    	y = 0.412 * safezoneH + safezoneY;
    	w = 0.0722056 * safezoneW;
    	h = 0.022 * safezoneH;
    	tooltip = "Select the squad to have the playerable units spawn as."; //--- ToDo: Localize;
    };
    class Squad_Select_Combo: RscCombo
    {
    	idc = 2102;

    	x = 0.505158 * safezoneW + safezoneX;
    	y = 0.412 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class spectatorText: RscText
    {
    	idc = 1003;

    	text = "Spectator Restriction:"; //--- ToDo: Localize;
    	x = 0.376219 * safezoneW + safezoneX;
    	y = 0.467 * safezoneH + safezoneY;
    	w = 0.113466 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class Spectator_Restriction_Combo: RscCombo
    {
    	idc = 2103;

    	text = "Test"; //--- ToDo: Localize;
    	x = 0.505158 * safezoneW + safezoneX;
    	y = 0.467 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class groupsText: RscText
    {
    	idc = 1004;

    	text = "Dynamic Groups:"; //--- ToDo: Localize;
    	x = 0.396849 * safezoneW + safezoneX;
    	y = 0.522 * safezoneH + safezoneY;
    	w = 0.0928357 * safezoneW;
    	h = 0.022 * safezoneH;
    	tooltip = "Check to enable dynamic groups. (Requires 3DEN Enhanced.)"; //--- ToDo: Localize;
    };
    class Dynamic_Groups_Check: RscCheckBox
    {
    	idc = 2800;

    	x = 0.505158 * safezoneW + safezoneX;
    	y = 0.522 * safezoneH + safezoneY;
    	w = 0.0129183 * safezoneW;
    	h = 0.0229259 * safezoneH;
    };
    class loadoutsText: RscText
    {
    	idc = 1005;

    	text = "Save Loadouts:"; //--- ToDo: Localize;
    	x = 0.402007 * safezoneW + safezoneX;
    	y = 0.577 * safezoneH + safezoneY;
    	w = 0.0876782 * safezoneW;
    	h = 0.022 * safezoneH;
    	tooltip = "Check to enable loadout saving. (Requires 3DEN Enhanced.)"; //--- ToDo: Localize;
    };
    class Save_Loadouts_Check: RscCheckBox
    {
    	idc = 2801;

    	x = 0.505158 * safezoneW + safezoneX;
    	y = 0.577 * safezoneH + safezoneY;
    	w = 0.0129183 * safezoneW;
    	h = 0.0229259 * safezoneH;
    };
    class informationStrucText: RscStructuredText
    {
    	idc = 1100;

    	text = "If CBA is loaded, general mission settings can be set for all missions. 3DEN En also suggested!"; //--- ToDo: Localize;
    	x = 0.376219 * safezoneW + safezoneX;
    	y = 0.676 * safezoneH + safezoneY;
    	w = 0.249375 * safezoneW;
    	h = 0.056 * safezoneH;
    };
    class confirmButton: RscButton
    {
    	idc = 1600;

    	text = "Confirm Settings"; //--- ToDo: Localize;
    	x = 0.453582 * safezoneW + safezoneX;
    	y = 0.621 * safezoneH + safezoneY;
    	w = 0.091875 * safezoneW;
    	h = 0.042 * safezoneH;
    };
    ////////////////////////////////////////////////////////
    // GUI EDITOR OUTPUT END
    ////////////////////////////////////////////////////////

  };

};
