class VKN_Template_Tool_Info {
  idd = 3483;
  enableDisplay = 1;
  enableSimulation = 1;

  class ControlsBackground {
    DISABLE_BACKGROUND
  };

  class controls {

    class BackgroundDark: IGUIBack
    {
    	idc = 2200;

    	x = 0.273068 * safezoneW + safezoneX;
    	y = 0.192 * safezoneH + safezoneY;
    	w = 0.459021 * safezoneW;
    	h = 0.583 * safezoneH;
    	colorBackground[] = {0.137,0.137,0.137,0.75};
    };
    class BackgroundLight: IGUIBack
    {
    	idc = 2201;

    	x = 0.273068 * safezoneW + safezoneX;
    	y = 0.192 * safezoneH + safezoneY;
    	w = 0.464179 * safezoneW;
    	h = 0.044 * safezoneH;
    	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
    };
    class Title: RscText
    {
    	idc = 1000;

    	text = "VKN Template Tool Information"; //--- ToDo: Localize;
    	x = 0.273068 * safezoneW + safezoneX;
    	y = 0.192 * safezoneH + safezoneY;
    	w = 0.361028 * safezoneW;
    	h = 0.044 * safezoneH;
    };
    class Frame: RscFrame
    {
    	idc = 1800;

    	x = 0.283383 * safezoneW + safezoneX;
    	y = 0.269 * safezoneH + safezoneY;
    	w = 0.27335 * safezoneW;
    	h = 0.484 * safezoneH;
    };
    class Explain: RscStructuredText
    {
    	idc = 1100;

    	text = "Due to the way that arma 3 works, I currently cannot do this next part for you :/ I am working on an extension that does it all, but until then you will need to do it.<br />You'll need to follow these steps carefully to ensure the mission will work properly. You can leave this box open and still use the rest of the editor's menus.<br /><br />Firstly, ensure you have saved the mission and named it.<br />Second, goto Scenario >> Open Scenario Folder<br />Create a new text document and name it description.ext<br />Click the 'Copy File Contents' button below.<br /><br />Do the same for the rest of the files on the right hand side of this menu.<br />Make sure you have set the file format for each file!!!<br /> <br />All done, Zeus will work with virtual entities. The spectator settings will work, loadouts will save and dynamic groups will be setup!"; //--- ToDo: Localize;
    	x = 0.283383 * safezoneW + safezoneX;
    	y = 0.269 * safezoneH + safezoneY;
    	w = 0.27335 * safezoneW;
    	h = 0.484 * safezoneH;
    };
    class DescTitle: RscText
    {
    	idc = 1001;

    	text = "description.ext"; //--- ToDo: Localize;
    	x = 0.572206 * safezoneW + safezoneX;
    	y = 0.269 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class DescFileName: RscButton
    {
    	idc = 1600;
    	action = "copyToClipboard ""description.ext""";

    	text = "Copy File Name"; //--- ToDo: Localize;
    	x = 0.572206 * safezoneW + safezoneX;
    	y = 0.302 * safezoneH + safezoneY;
    	w = 0.067048 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.03,0.51,1,0.75};
    };
    class DescFileCont: RscButton
    {
    	idc = 1601;
    	action = "copyToClipboard ""respawnOnStart = 0; respawnTemplatesVirtual[] = {};""";

    	text = "Copy File Contents"; //--- ToDo: Localize;
    	x = 0.654726 * safezoneW + safezoneX;
    	y = 0.302 * safezoneH + safezoneY;
    	w = 0.0722056 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.03,0.51,1,0.75};
    };
    class LocalServerText: RscText
    {
    	idc = 1002;

    	text = "initPlayerServer.sqf"; //--- ToDo: Localize;
    	x = 0.572206 * safezoneW + safezoneX;
    	y = 0.368 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class LocalServerFileName: RscButton
    {
    	idc = 1600;
    	action = "copyToClipboard ""initPlayerServer.sqf""";

    	text = "Copy File Name"; //--- ToDo: Localize;
    	x = 0.572206 * safezoneW + safezoneX;
    	y = 0.401 * safezoneH + safezoneY;
    	w = 0.067048 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.03,0.51,1,0.75};
    };
    class LocalServerFileCont: RscButton
    {
    	idc = 1601;
    	action = "copyToClipboard ""{	if (!isnull (getassignedcuratorunit _x)) then {		_unit = getassignedcuratorunit _x;		if (isnull (getassignedcuratorlogic _unit)) then {			unassignCurator _x;			sleep 1;			_unit assignCurator _x;			if (isClass (configFile >> 'CfgPatches' >> 'task_force_radio')) then {				_unit call TFAR_fnc_isForcedCurator;			};		};	};} foreach allcurators;""";

    	text = "Copy File Contents"; //--- ToDo: Localize;
    	x = 0.654726 * safezoneW + safezoneX;
    	y = 0.401 * safezoneH + safezoneY;
    	w = 0.0722056 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.03,0.51,1,0.75};
    };
    class localText: RscText
    {
    	idc = 1002;

    	text = "initPlayerLocal.sqf"; //--- ToDo: Localize;
    	x = 0.577363 * safezoneW + safezoneX;
    	y = 0.456 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class LocalFileName: RscButton
    {
    	idc = 1600;
    	action = "copyToClipboard ""initPlayerLocal.sqf""";

    	text = "Copy File Name"; //--- ToDo: Localize;
    	x = 0.572206 * safezoneW + safezoneX;
    	y = 0.489 * safezoneH + safezoneY;
    	w = 0.067048 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.03,0.51,1,0.75};
    };
    class LocalFileCont: RscButton
    {
    	idc = 1601;
    	action = "copyToClipboard ""['Initialize', [true]] remoteExec ['BIS_fnc_dynamicGroups', 2];			['InitializePlayer', [player, true]] remoteExec ['BIS_fnc_dynamicGroups', 0, true];""";

    	text = "Copy File Contents"; //--- ToDo: Localize;
    	x = 0.654726 * safezoneW + safezoneX;
    	y = 0.489 * safezoneH + safezoneY;
    	w = 0.0722056 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.03,0.51,1,0.75};
    };
    class respawnText: RscText
    {
    	idc = 1003;

    	text = "onPlayerRespawn.sqf"; //--- ToDo: Localize;
    	x = 0.572206 * safezoneW + safezoneX;
    	y = 0.544 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class respawnFileName: RscButton
    {
    	idc = 1600;
    	action = "copyToClipboard ""onPlayerRespawn.sqf""";

    	text = "Copy File Name"; //--- ToDo: Localize;
    	x = 0.572206 * safezoneW + safezoneX;
    	y = 0.577 * safezoneH + safezoneY;
    	w = 0.067048 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.03,0.51,1,0.75};
    };
    class respawnFileContents: RscButton
    {
    	idc = 1601;
    	action = "copyToClipboard ""[player, [missionNamespace, 'inventory_var']] call BIS_fnc_loadInventory;			['Terminate', [ player]] call BIS_fnc_EGSpectator;""";

    	text = "Copy File Contents"; //--- ToDo: Localize;
    	x = 0.654726 * safezoneW + safezoneX;
    	y = 0.577 * safezoneH + safezoneY;
    	w = 0.0722056 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.03,0.51,1,0.75};
    };
    class KilledText: RscText
    {
    	idc = 1004;

    	text = "onPlayerKilled.sqf"; //--- ToDo: Localize;
    	x = 0.572206 * safezoneW + safezoneX;
    	y = 0.632 * safezoneH + safezoneY;
    	w = 0.0979933 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class killedFileName: RscButton
    {
    	idc = 1600;
    	action = "copyToClipboard ""onPlayerKilled.sqf""";

    	text = "Copy File Name"; //--- ToDo: Localize;
    	x = 0.572206 * safezoneW + safezoneX;
    	y = 0.665 * safezoneH + safezoneY;
    	w = 0.067048 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.03,0.51,1,0.75};
    };
    class killedFileContents: RscButton
    {
    	idc = 1601;
    	action = "copyToClipboard ""[player, [missionNamespace, 'inventory_var']] call BIS_fnc_saveInventory;			['Initialize', [ player, [], false, false, true]] call BIS_fnc_EGSpectator;""";

    	text = "Copy File Contents"; //--- ToDo: Localize;
    	x = 0.654726 * safezoneW + safezoneX;
    	y = 0.665 * safezoneH + safezoneY;
    	w = 0.0722056 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.03,0.51,1,0.75};
    };
    class ExitButton: RscButton
    {
    	idc = 1602;
    	action = "closeDialog 0;";

    	text = "Got it!"; //--- ToDo: Localize;
    	x = 0.618623 * safezoneW + safezoneX;
    	y = 0.72 * safezoneH + safezoneY;
    	w = 0.0515754 * safezoneW;
    	h = 0.033 * safezoneH;
    	colorActive[] = {0.298,0.949,0.251,0.75};
    };



  };

};
