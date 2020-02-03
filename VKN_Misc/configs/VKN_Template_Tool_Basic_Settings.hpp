class RscCombo;
class RscCheckbox;

class VKN_Template_Tool_Basic_Settings {
  idd = 348567;

  class controls {
    ////////////////////////////////////////////////////////
    // GUI EDITOR OUTPUT START (by Curious, v1.063, #Xucaro)
    ////////////////////////////////////////////////////////

    class IGUIBack_2200: IGUIBack
    {
    	idc = 2200;

    	x = 0.36875 * safezoneW + safezoneX;
    	y = 0.262 * safezoneH + safezoneY;
    	w = 0.275625 * safezoneW;
    	h = 0.532 * safezoneH;
    	colorBackground[] = {0.137,0.137,0.137,0.75};
    };
    class IGUIBack_2201: IGUIBack
    {
    	idc = 2201;

    	x = 0.36875 * safezoneW + safezoneX;
    	y = 0.262 * safezoneH + safezoneY;
    	w = 0.275625 * safezoneW;
    	h = 0.042 * safezoneH;
    	colorBackground[] = {0.03,0.51,1,0.75};
    };
    class RscText_1000: RscText
    {
    	idc = 1000;

    	text = "VKN Template Tool Setup"; //--- ToDo: Localize;
    	x = 0.36875 * safezoneW + safezoneX;
    	y = 0.262 * safezoneH + safezoneY;
    	w = 0.255937 * safezoneW;
    	h = 0.042 * safezoneH;
    };
    class RscText_1001: RscText
    {
    	idc = 1001;

    	text = "Players Side:"; //--- ToDo: Localize;
    	x = 0.436041 * safezoneW + safezoneX;
    	y = 0.33037 * safezoneH + safezoneY;
    	w = 0.07875 * safezoneW;
    	h = 0.028 * safezoneH;
    	tooltip = "Set the side the playable units will spawn as."; //--- ToDo: Localize;
    };
    class Players_Side_Combo: RscCombo
    {
    	idc = 2100;

    	text = "Test"; //--- ToDo: Localize;
    	x = 0.519688 * safezoneW + safezoneX;
    	y = 0.332 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.028 * safezoneH;
    };
    class RscText_1002: RscText
    {
    	idc = 1002;

    	text = "Faction Override:"; //--- ToDo: Localize;
    	x = 0.4175 * safezoneW + safezoneX;
    	y = 0.388222 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.028 * safezoneH;
    	tooltip = """B_VKN_ODIN_infantry_squad_pmc"", if not present ""BUS_InfSquad"" is used - default playable factions. Overrides the faction to spawn. Taken from cfgFactionClasses."; //--- ToDo: Localize;
    };
    class Factions_Override_Combo: RscCombo
    {
    	idc = 2101;

    	text = "Test"; //--- ToDo: Localize;
    	x = 0.519688 * safezoneW + safezoneX;
    	y = 0.388 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.028 * safezoneH;
    };
    class RscText_1008: RscText
    {
    	idc = 1002;

    	text = "Squad Select:"; //--- ToDo: Localize;
    	x = 0.432395 * safezoneW + safezoneX;
    	y = 0.444 * safezoneH + safezoneY;
    	w = 0.0721875 * safezoneW;
    	h = 0.028 * safezoneH;
    	tooltip = "Select the squad to have the playerable units spawn as."; //--- ToDo: Localize;
    };
    class Squad_Select_Combo: RscCombo
    {
    	idc = 2102;

    	x = 0.519688 * safezoneW + safezoneX;
    	y = 0.444 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.028 * safezoneH;
    };
    class RscText_1003: RscText
    {
    	idc = 1003;

    	text = "Spectator Restriction:"; //--- ToDo: Localize;
    	x = 0.395 * safezoneW + safezoneX;
    	y = 0.498148 * safezoneH + safezoneY;
    	w = 0.124687 * safezoneW;
    	h = 0.028 * safezoneH;
    };
    class Spectator_Restriction_Combo: RscCombo
    {
    	idc = 2103;

    	text = "Test"; //--- ToDo: Localize;
    	x = 0.519688 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.028 * safezoneH;
    };
    class RscText_1004: RscText
    {
    	idc = 1004;

    	text = "Dynamic Groups:"; //--- ToDo: Localize;
    	x = 0.416771 * safezoneW + safezoneX;
    	y = 0.555074 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.028 * safezoneH;
    	tooltip = "Check to enable dynamic groups. (Requires 3DEN Enhanced.)"; //--- ToDo: Localize;
    };
    class Dynamic_Groups_Check: RscCheckBox
    {
    	idc = 2800;

    	x = 0.522813 * safezoneW + safezoneX;
    	y = 0.553926 * safezoneH + safezoneY;
    	w = 0.0209375 * safezoneW;
    	h = 0.0338889 * safezoneH;
    };
    class RscText_1005: RscText
    {
    	idc = 1005;

    	text = "Save Loadouts:"; //--- ToDo: Localize;
    	x = 0.424375 * safezoneW + safezoneX;
    	y = 0.609222 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.028 * safezoneH;
    	tooltip = "Check to enable loadout saving. (Requires 3DEN Enhanced.)"; //--- ToDo: Localize;
    };
    class Save_Loadouts_Check: RscCheckBox
    {
    	idc = 2801;

    	x = 0.521772 * safezoneW + safezoneX;
    	y = 0.605296 * safezoneH + safezoneY;
    	w = 0.0204167 * safezoneW;
    	h = 0.0338889 * safezoneH;
    };
    class RscStructuredText_1100: RscStructuredText
    {
    	idc = 1100;

    	text = "If CBA is loaded, general mission settings can be set for all missions. 3DEN En also suggested!"; //--- ToDo: Localize;
    	x = 0.381875 * safezoneW + safezoneX;
    	y = 0.71 * safezoneH + safezoneY;
    	w = 0.249375 * safezoneW;
    	h = 0.056 * safezoneH;
    };
    class RscButton_1600: RscButton
    {
    	idc = 1600;
    	text = "Confirm Settings"; //--- ToDo: Localize;
    	x = 0.460625 * safezoneW + safezoneX;
    	y = 0.654 * safezoneH + safezoneY;
    	w = 0.091875 * safezoneW;
    	h = 0.042 * safezoneH;
    };
    ////////////////////////////////////////////////////////
    // GUI EDITOR OUTPUT END
    ////////////////////////////////////////////////////////
  };

};
