class VKN_Template_Tool_Basic_Settings {
  idd = 3481;
  enableDisplay = 1;
  enableSimulation = 1;

  class ControlsBackground {
    DISABLE_BACKGROUND
  };

  class controls {
    ////////////////////////////////////////////////////////
    // GUI EDITOR OUTPUT START (by Curious, v1.063, #Xucaro)
    ////////////////////////////////////////////////////////

    class Background: IGUIBack
    {
    	idc = 2200;

    	x = 0.36875 * safezoneW + safezoneX;
    	y = 0.262 * safezoneH + safezoneY;
    	w = 0.275625 * safezoneW;
    	h = 0.532 * safezoneH;
    	colorBackground[] = {0.137,0.137,0.137,0.75};
    };
    class titleBackground: IGUIBack
    {
    	idc = 2201;

    	x = 0.36875 * safezoneW + safezoneX;
    	y = 0.262 * safezoneH + safezoneY;
    	w = 0.275625 * safezoneW;
    	h = 0.042 * safezoneH;
    	colorBackground[] = {0.03,0.51,1,0.75};
    };
    class titleText: rscText
    {
    	idc = 1000;

    	text = "VKN Template Tool Setup"; //--- ToDo: Localize;
    	x = 0.36875 * safezoneW + safezoneX;
    	y = 0.262 * safezoneH + safezoneY;
    	w = 0.255937 * safezoneW;
    	h = 0.042 * safezoneH;
    };
    class sideText: rscText
    {
      idc = 1001;

      text = "Players Side:"; //--- ToDo: Localize;
      x = 0.432952 * safezoneW + safezoneX;
      y = 0.335 * safezoneH + safezoneY;
      w = 0.07875 * safezoneW;
      h = 0.022 * safezoneH;
      tooltip = "Set the side the playable units will spawn as."; //--- ToDo: Localize;
    };
    class Players_Side_Combo: RscCombo
    {
    	idc = 2100;

    	text = "Test"; //--- ToDo: Localize;
    	x = 0.52063 * safezoneW + safezoneX;
    	y = 0.335 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class factionText: rscText
    {
    	idc = 1002;

    	text = "Faction Override:"; //--- ToDo: Localize;
    	x = 0.412322 * safezoneW + safezoneX;
    	y = 0.39 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.028 * safezoneH;
    	tooltip = """B_VKN_ODIN_infantry_squad_pmc"", if not present ""BUS_InfSquad"" is used - default playable factions. Overrides the faction to spawn. Taken from cfgFactionClasses."; //--- ToDo: Localize;
    };
    class Factions_Override_Combo: RscCombo
    {
    	idc = 2101;

    	text = "Test"; //--- ToDo: Localize;
    	x = 0.52063 * safezoneW + safezoneX;
    	y = 0.39 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class squadText: rscText
    {
    	idc = 1002;

    	text = "Squad Select:"; //--- ToDo: Localize;
    	x = 0.438109 * safezoneW + safezoneX;
    	y = 0.445 * safezoneH + safezoneY;
    	w = 0.0721875 * safezoneW;
    	h = 0.022 * safezoneH;
    	tooltip = "Select the squad to have the playerable units spawn as."; //--- ToDo: Localize;
    };
    class Squad_Select_Combo: RscCombo
    {
    	idc = 2102;

    	x = 0.52063 * safezoneW + safezoneX;
    	y = 0.445 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class spectatorText: rscText
    {
    	idc = 1003;

    	text = "Spectator Restriction:"; //--- ToDo: Localize;
    	x = 0.396849 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.113466 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class Spectator_Restriction_Combo: RscCombo
    {
    	idc = 2103;

    	text = "Test"; //--- ToDo: Localize;
    	x = 0.52063 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.0984375 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class groupsText: rscText
    {
    	idc = 1004;

    	text = "Dynamic Groups:"; //--- ToDo: Localize;
    	x = 0.417479 * safezoneW + safezoneX;
    	y = 0.555 * safezoneH + safezoneY;
    	w = 0.0928357 * safezoneW;
    	h = 0.022 * safezoneH;
    	tooltip = "Check to enable dynamic groups. (Requires 3DEN Enhanced.)"; //--- ToDo: Localize;
    };
    class Dynamic_Groups_Check: RscCheckBox
    {
    	idc = 2800;

    	x = 0.52063 * safezoneW + safezoneX;
    	y = 0.555 * safezoneH + safezoneY;
    	w = 0.0129183 * safezoneW;
    	h = 0.0229259 * safezoneH;
    };
    class loadoutsText: rscText
    {
    	idc = 1005;

    	text = "Save Loadouts:"; //--- ToDo: Localize;
    	x = 0.422637 * safezoneW + safezoneX;
    	y = 0.599 * safezoneH + safezoneY;
    	w = 0.0876782 * safezoneW;
    	h = 0.022 * safezoneH;
    	tooltip = "Check to enable loadout saving. (Requires 3DEN Enhanced.)"; //--- ToDo: Localize;
    };
    class Save_Loadouts_Check: RscCheckBox
    {
    	idc = 2801;

    	x = 0.52063 * safezoneW + safezoneX;
    	y = 0.599 * safezoneH + safezoneY;
    	w = 0.0129183 * safezoneW;
    	h = 0.0229259 * safezoneH;
    };
    class informationStrucText: RscStructuredText
    {
    	idc = 1100;

    	text = "If CBA is loaded, general mission settings can be set for all missions. 3DEN En also suggested!"; //--- ToDo: Localize;
    	x = 0.381875 * safezoneW + safezoneX;
    	y = 0.71 * safezoneH + safezoneY;
    	w = 0.249375 * safezoneW;
    	h = 0.056 * safezoneH;
    };
    class confirmButton: RscButton
    {
    	idc = 1600;
    	text = "Confirm Settings"; //--- ToDo: Localize;
    	x = 0.460625 * safezoneW + safezoneX;
    	y = 0.654 * safezoneH + safezoneY;
    	w = 0.091875 * safezoneW;
    	h = 0.042 * safezoneH;
    };
    class homeButton: ctrlButtonPicture
    {
      onMouseButtonClick = "findDisplay 313 closeDisplay 0; findDisplay 313 createDisplay 'VKN_Template_Tool_Home';";

    	idc = 1200;
    	text = "\a3\3den\data\controlsgroups\tutorial\exit_ca.paa";
    	x = 0.618623 * safezoneW + safezoneX;
    	y = 0.264 * safezoneH + safezoneY; //was 258
    	w = 0.0206302 * safezoneW;
    	h = 0.033 * safezoneH;

      colorBackground[] = {0.03,0.51,1,0.75};
    };
    ////////////////////////////////////////////////////////
    // GUI EDITOR OUTPUT END
    ////////////////////////////////////////////////////////
  };

};
