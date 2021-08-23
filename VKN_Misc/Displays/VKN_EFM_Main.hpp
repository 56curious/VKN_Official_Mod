class VKN_EFM_Main {
  idd = 3690;
  enableDisplay = 1;
  enableSimulation = 1;

  class ControlsBackground {
    DISABLE_BACKGROUND
  };

  class controls {
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Curious, v1.063, #Ludywa)
////////////////////////////////////////////////////////

class IGUIBack_2200: IGUIBack
{
	idc = 2200;

	x = 0.0667665 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.871624 * safezoneW;
	h = 0.803 * safezoneH;
	colorBackground[] = {0.137,0.137,0.137,0.5};
};
class IGUIBack_2201: IGUIBack
{
	idc = 2201;

	x = 0.0667665 * safezoneW + safezoneX;
	y = 0.137 * safezoneH + safezoneY;
	w = 0.195937 * safezoneW;
	h = 0.77 * safezoneH;
	colorBackground[] = {0.137,0.137,0.137,0.75};
};
class IGUIBack_2202: IGUIBack
{
	idc = 2202;

	x = 0.0667665 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.871624 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
};
class IGUIBack_2203: IGUIBack
{
	idc = 2203;

	x = 0.273068 * safezoneW + safezoneX;
	y = 0.159 * safezoneH + safezoneY;
	w = 0.655008 * safezoneW;
	h = 0.033 * safezoneH;
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
};
class fileList: ctrlTree
{
	idc = 1500;
	colorLines[] = {1,1,1,1};
	borderSize = 0;
	iconFolder = "\a3\3DEN\Data\Cfg3DEN\Layer\icon_ca.paa";
	iconFolderDefault = "\a3\3DEN\Data\Cfg3DEN\Layer\iconDefault_ca.paa";

	x = 0.0770816 * safezoneW + safezoneX;
	y = 0.203 * safezoneH + safezoneY;
	w = 0.175356 * safezoneW;
	h = 0.638 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
};
class codeGroup: ctrlControlsGroup
{
	idc = 14010;

	x = 0.273125 * safezoneW + safezoneX;
	y = 0.203 * safezoneH + safezoneY;
	w = 0.655008 * safezoneW;
	h = 0.682 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.5};

	class controls 
	{
		class codeEditor: ctrlEditMulti
		{
			autocomplete = "scripting";
			idc = 14011;

			text = "select a file to start making edits"; //--- ToDo: Localize;
			x = 0.075;
			y = 0;
			w = 0.623906 * safezoneW;
			h = 0.682 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
			linespacing = 0;
		};
		class codeLines: ctrlStructuredText
		{
			idc = 14012;

			x = 0;
			y = 0;
			w = 0.0309375 * safezoneW;
			h = 0.682 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};
};
class deleteButton: ctrlButton
{
	idc = 1600;

	text = "Delete"; //--- ToDo: Localize;
	x = 0.0770816 * safezoneW + safezoneX;
	y = 0.852 * safezoneH + safezoneY;
	w = 0.0412603 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	tooltip = "Delete the SELECTED file or folder. In the case of a folder, all subsequent files will be deleted too.";
};
class revertButton: ctrlButton
{
	idc = 1601;

	text = "Undo"; //--- ToDo: Localize;
	x = 0.16476 * safezoneW + safezoneX;
	y = 0.852 * safezoneH + safezoneY;
	w = 0.0412603 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	tooltip = "Undo up to 11 changes backwards.";
};
class saveButton: ctrlButton
{
	idc = 1602;

	text = "Save"; //--- ToDo: Localize;
	x = 0.211178 * safezoneW + safezoneX;
	y = 0.852 * safezoneH + safezoneY;
	w = 0.0412603 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	tooltip = "Save the selected file.";
};
class closeButton: ctrlButton
{
	idc = 1603;
	action = "findDisplay 3690 closeDisplay 0;";

	text = "Close"; //--- ToDo: Localize;
	x = 0.897651 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.0412603 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	colorActive[] = {0.976,0.333,0.333,1};
	tooltip = "close the menu.";
};
class Title: RscText
{
	idc = 1000;

	text = "Mission External File Manager"; //--- ToDo: Localize;
	x = 0.262753 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.618905 * safezoneW;
	h = 0.033 * safezoneH;
};
class missionName: RscText
{
	idc = 1001;

	text = "missionNamespace"; //--- ToDo: Localize;
	x = 0.0667665 * safezoneW + safezoneX;
	y = 0.104 * safezoneH + safezoneY;
	w = 0.190829 * safezoneW;
	h = 0.033 * safezoneH;
};
class filename: RscText
{
	idc = 1002;

	text = "filenameSpace"; //--- ToDo: Localize;
	x = 0.273068 * safezoneW + safezoneX;
	y = 0.159 * safezoneH + safezoneY;
	w = 0.190829 * safezoneW;
	h = 0.033 * safezoneH;
};
class fileCount: RscText
{
	idc = 1003;

	text = "File Count: "; //--- ToDo: Localize;
	x = 0.0734859 * safezoneW + safezoneX;
	y = 0.144296 * safezoneH + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.011 * safezoneH;
};
class newButton: ctrlButton
{
	idc = 1604;

	text = "New"; //--- ToDo: Localize;
	x = 0.123499 * safezoneW + safezoneX;
	y = 0.852 * safezoneH + safezoneY;
	w = 0.0361028 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
};
class SearchBar: ctrlEdit
{
	idc = 1400;

	x = 0.0770816 * safezoneW + safezoneX;
	y = 0.159 * safezoneH + safezoneY;
	w = 0.154726 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.5};
};
class searchbtn: ctrlButtonSearch
{
	idc = 1605;

	text = "\a3\3DEN\Data\Displays\Display3DEN\search_start_ca.paa"; //--- ToDo: Localize;
	x = 0.231808 * safezoneW + safezoneX;
	y = 0.159 * safezoneH + safezoneY;
	w = 0.0206302 * safezoneW;
	h = 0.033 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	tooltip = "Search"; //--- ToDo: Localize;
};

class openDirectory: ctrlButton {
	idc = 1606;

	style = "0x02 + 0x30 + 0x800";
	text = "\a3\3den\data\cfg3den\layer\iconhidden_ca.paa"; //--- ToDo: Localize;

	x = 0.907446 * safezoneW + safezoneX;
	y = 0.159 * safezoneH + safezoneY;
	w = 0.0206302 * safezoneW;
	h = 0.033 * safezoneH;
	tooltip = "open the selected file or folder directory in file explorer";
};
class CopyButton: ctrlButton
{
	idc = 1607;
	text = "Copy"; //--- ToDo: Localize;
	x = 0.835156 * safezoneW + safezoneX;
	y = 0.159 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.033 * safezoneH;
	tooltip = "Copy the selected text in the code editor.";
};
class PasteButton: ctrlButton
{
	idc = 1608;
	text = "Paste"; //--- ToDo: Localize;
	x = 0.870729 * safezoneW + safezoneX;
	y = 0.159 * safezoneH + safezoneY;
	w = 0.0366145 * safezoneW;
	h = 0.033 * safezoneH;
	tooltip = "Paste the contents of the clipboard into the cursor position inside code editor.";
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
  };

};