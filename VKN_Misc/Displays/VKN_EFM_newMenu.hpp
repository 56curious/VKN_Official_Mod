class VKN_EFM_newMenu {
  idd = 3691;
  enableDisplay = 1;
  enableSimulation = 1;

  class ControlsBackground {
    DISABLE_BACKGROUND
  };

	class controls {

		class mainBackground: IGUIBack
		{
			idc = 2200;
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.412603 * safezoneW;
			h = 0.462 * safezoneH;
			colorBackground[] = {0.137,0.137,0.137,0.75};
		};
		class titleBackground: IGUIBack
		{
			idc = 2201;
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.412603 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
		};
		class title: RscText
		{
			idc = 1000;
			text = "External File Manager - File/Folder Creation Wizard"; //--- ToDo: Localize;
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.35587 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class fileList: ctrlTree
		{
			idc = 1500;
			text = "Test"; //--- ToDo: Localize;
			x = 0.304014 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.175356 * safezoneW;
			h = 0.385 * safezoneH;
		};
		class titleTextSaveAs: RscText
		{
			idc = 1001;
			style = 1;
			text = "Save as:"; //--- ToDo: Localize;
			x = 0.489685 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class informationStrucText: RscStructuredText
		{
			idc = 1100;
			text = "<t align='center'>Please select a folder branch to save the file into. <br />Once selected, name the file and choose a file type. <br />To save a folder, select the folder option at the bottom.</t>"; //--- ToDo: Localize;
			x = 0.489685 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.206302 * safezoneW;
			h = 0.088 * safezoneH;
		};
		class user_name: ctrlEdit
		{
			idc = 1400;
			x = 0.530945 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.165041 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class user_type: ctrlCombo
		{
			idc = 2100;
			x = 0.530945 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.165041 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class titleFileType: RscText
		{
			idc = 1002;
			style = 1;
			text = "Type:"; //--- ToDo: Localize;
			x = 0.489685 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class backButton: ctrlButton
		{
			idc = 1600;
			text = "Back"; //--- ToDo: Localize;
			x = 0.54126 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class confirmButton: ctrlButton
		{
			idc = 1601;
			text = "Confirm"; //--- ToDo: Localize;
			x = 0.603151 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.022 * safezoneH;
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////


	};
};