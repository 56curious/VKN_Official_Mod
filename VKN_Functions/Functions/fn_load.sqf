/*
Script name:    fn_load.sqf
Created on:     11 ‎December ‎2018
Author:         Curious

Description:    setup custom loading screen

Framework:      N/A

Parameters:
				N/A
*/
with uiNamespace do
{

	#include "\A3\ui_f\hpp\defineResincl.inc"
	#include "\A3\ui_f\hpp\defineResinclDesign.inc"
	disableserialization;

	_mode = _this select 0;
	_params = _this select 1;
	_class = _this select 2;

	_display = _params select 0;
	RscDisplayLoading_display = _display;
	//--- Initial loading - maintain visual style of RscDisplayStart
	if !(uinamespace getvariable ["BIS_initGame",false]) exitwith {};

	///////////////////////////////////////////////////////////////////////////////////////////

	//--- Hide start loading screen
	_ctrlLoadingStart = _display displayctrl IDC_LOADINGSTART_LOADINGSTART;
	_ctrlLoadingStart ctrlsetfade 1;
	_ctrlLoadingStart ctrlcommit 0;
	_pictureShot = "";

	//--- Map
	if (worldname != "") then {
		_ctrlMap = _display displayctrl IDC_LOADING_MAP;	//idc 999
		_ctrlMapName = _display displayctrl IDC_LOADING_MAPNAME;
		_ctrlMapAuthor = _display displayctrl IDC_LOADING_MAPAUTHOR;
		_ctrlMapDescription = _display displayctrl IDC_LOADING_MAPDESCRIPTION;
		_ctrlMissionDescriptionEngine = _display displayctrl IDC_LOAD_MISSION_NAME;		//101
		_ctrlMissionAuthor = _display displayctrl IDC_LOADING_MISSIONAUTHOR;

		_cfgWorld = configfile >> "cfgworlds" >> worldname;



		_pictureMap = "";
		_worldName = "";
		_loadingText = "";
		_author = "";



		//--- Mission check
		//Custom loading image(s) for loading screen and keep the if custom then display it theme.
		_ctrlMission = _display displayctrl IDC_LOADING_MISSION;
		if (!(isnull _ctrlMission)) then {

			_author = gettext (missionconfigfile >> "author");
			_cur_custom = ["CUR_", gettext (missionconfigfile >> "loadScreen")] call BIS_fnc_inString;
			if (_cur_custom isEqualTo true) then {_pictureMap = gettext (missionconfigfile >> "loadScreen");

			} else {

				/*
				_randomNumber = { (random [1,10.5,20] - random [1,10.5,20]) + 5 - 2 };
	      _num = call _randomNumber;
	      while {(_num <= 1) or (_num >=20)} do {
	          _num = call _randomNumber;
	      };

				round _num;
				_pictureMap = format ["\VKN_Misc\Loading Screen\LoadingScreen%1.paa", floor _num];
				*/

				_randomNumber = selectRandom [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20];
				_pictureMap = format ["\VKN_Misc\Loading Screen\LoadingScreen%1.paa", floor _randomNumber];

			};
				/*
				_worldName = getText (missionConfigFile >> "briefingname");
				if (_worldName == "") then {_worldName = gettext (missionconfigfile >> "onLoadName");};
				_loadingName = _worldName call (uinamespace getvariable "bis_fnc_localize");
				*/

				_loadingTextConfig = gettext (missionconfigfile >> "onLoadMission");
				_loadingText = _loadingTextConfig;
				if (_loadingText == "") then {_loadingText = ctrltext _ctrlMissionDescriptionEngine;}; //--- Use overview data
				if (_loadingText == "") then {_loadingText = gettext (missionconfigfile >> "overviewText");};
				//_loadingText = _loadingText call (uinamespace getvariable "bis_fnc_localize");
				//[missionconfigfile,_ctrlMissionAuthor] call bis_fnc_overviewauthor;
		};

		if (_pictureMap == "") then {	_pictureMap = gettext (_cfgWorld >> "pictureMap"); _pictureMap = "#(argb,8,8,3)color(1,1,1,0.9)";	};
		if (_worldName == "") then { _worldName = gettext (_cfgWorld >> "description");	};
		if (_loadingText == "") then {
			_loadingTexts = getarray (_cfgWorld >> "loadingTexts");
			_loadingText = if (count _loadingTexts > 0) then {
				_loadingTexts select floor (((diag_ticktime / 10) % (count _loadingTexts)));
			} else {
				""
			};
		};
		/*
		_pictureMap = gettext (_cfgWorld >> "pictureMap");
		if (_pictureMap == "") then {_pictureMap = "#(argb,8,8,3)color(1,1,1,0.2)";};
		*/
		_pictureShot = gettext (_cfgWorld >> "pictureShot");


		//--- Randomized map Y coordinate
		_worldType = uinamespace getvariable ["RscDisplayLoading_worldType",""];
		_ran = uinamespace getvariable ["RscDisplayLoading_ran",random 1];
		if (worldname != _worldType) then {
			_ran = random 1;
			uinamespace setvariable ["RscDisplayLoading_ran",_ran];
			uinamespace setvariable ["RscDisplayLoading_worldType",worldname];
		};
		/*
		_ctrlMapPos = ctrlposition _ctrlMap;
		_ctrlMapPos set [1,linearconversion [0,1,_ran,(safezoneY + safezoneH - (_ctrlMapPos select 3)),safezoneY,true]];
		_ctrlMap ctrlsetposition _ctrlMapPos;
		_ctrlMap ctrlcommit 0;
		*/
		/*_control ctrlSetScale 0.5;
		_control ctrlCommit 0;*/
		//--- Set texts



		_ctrlMap ctrlsettext _pictureMap;
			_ctrlMap ctrlSetPosition [safezoneX, safezoneY, safezoneW, safezoneH];
			if (_cur_custom isEqualTo true) then {
				//_ctrlMap ctrlSetPosition [0.5, 1, 0.5];
			//} else {
				//Zoom into terrain image
				//_ctrlMapPos set [1,linearconversion [0,1,_ran,(safezoneY + safezoneH - (_ctrlMapPos select 3)),safezoneY,true]];
				//_ctrlMap ctrlsetposition _ctrlMapPos;
			};
			_ctrlMap ctrlcommit 0;

		_ctrlMapName ctrlsettext toupper _worldName;
		_loadingName = gettext (missionconfigfile >> "onLoadName");
		if (_LoadingName == "") then {} else {	_ctrlMapAuthor ctrlsettext toUpper format ["%1 By %2", _loadingName, _author];	};
		_ctrlMapDescription ctrlsetstructuredtext parsetext _loadingText;
		if (!(isnull _ctrlMission)) then {
			[missionconfigfile,_ctrlMissionAuthor] call bis_fnc_overviewauthor;
		} else {
			[_cfgWorld,_ctrlMapAuthor] call bis_fnc_overviewauthor;
		};
	};

	//--- Mission
	_fnc_loadMission = {

		disableserialization;
		_display = _this select 0;
		_isMultiplayer = servertime > 0;


		_ctrlMission = _display displayctrl IDC_LOADING_MISSION;						//2300
		_ctrlMissionProgress = _display displayctrl IDC_LOADING_PROGRESSMISSION;		//1013
		_ctrlMissionType = _display displayctrl IDC_LOADING_MISSIONGAMETYPE;			//1012
		_ctrlMissionName = _display displayctrl IDC_LOADING_MISSIONNAME;				//1006
		_ctrlMissionAuthor = _display displayctrl IDC_LOADING_MISSIONAUTHOR;			//1007
		_ctrlMissionPicture = _display displayctrl IDC_LOAD_MISSION_PICTURE;			//105
		_ctrlMissionDescription = _display displayctrl IDC_LOADING_MISSIONDESCRIPTION;	//1100
		_ctrlMissionDescriptionEngine = _display displayctrl IDC_LOAD_MISSION_NAME;		//101


		//--- Controls to move to bottom right
		_toMove = [
			_ctrlMission,
			_ctrlMissionType,
			_ctrlMissionProgress,
			_ctrlMissionName,
			_ctrlMissionAuthor,
			_ctrlMissionPicture,
			_ctrlMissionProgress,
			_ctrlMissionDescription,
			_ctrlMissionDescriptionEngine
		];



		_typePos = (ctrlPosition _ctrlMissionType);
		_typePos params ["_mainX","_mainY","_mainW"];	// Get position of mission type, because it's the highest control
		_descriptionPos = (ctrlPosition _ctrlMissionDescription);
		_descriptionPos params ["_descX","_descY","_descW","_descH"];	//Get position of the description, because it's the lowest control
		_mainY= (ctrlPosition _ctrlMissionDescriptionEngine) select 1;	//Highest point in dialog
		_mainH = (_descY + _descH) - _mainY;	// Calculate the difference of the lowest point of description and highest point of type (the total height)
		//_type [0, 2.4, 16, 1];
		//_desc=  [0, 14.4, 16, 1];
		//

		_mainPos = [_mainX,_mainY,_mainW,_mainH];	//main pos as array


		//--- Find bottom bar height
		_mapBackBottom = _display displayctrl 1003;	// bottom bar
		_backBottomPos = ctrlPosition _mapBackBottom;	//x,y,w,h
		_backBottomH = _backBottomPos param [3];	// Get height of bottom
		//--- Get new position for ctrlMission
		//_mainMovePos = ctrlPosition _ctrlMission;	//x,y,w,h
		//_mainMovePos params ["_mainX","_mainY","_mainW","_mainH"];	// Get position of main
		_tempX = (safeZoneX + safezoneW) - _mainW;	// Find position Width away from right side
		_tempY = (safeZoneY + safezoneH) - (_mainH + _backBottomH);	// Find position Height away from bottom
		//_xDiff = _tempX - _mainX;	// Find difference between mainX and tempX
		//_yDiff = _tempY - _mainY;	// Find difference between mainY and tempY

		//_newX = _mainX + _xDiff;	// Add difference to the main X
		//_newY = _mainY + _yDiff;	// Add difference to the main Y
		//--- Move the mission control
		//_ctrlMission ctrlSetPosition [_tempX, _tempY];
		_ctrlMission ctrlSetPosition [_tempX+3, _tempY+3]; // Removes the whole block completely
		_ctrlMission ctrlCommit 0;
		//--- Move the mission bar1013
		//_ctrlMissionProgress ctrlSetPosition [_tempX, _tempY];
		_ctrlMissionProgress ctrlSetPosition [_tempX+3, _tempY+3]; // Removes the whole block completely
		_ctrlMission ctrlCommit 0;


		_nul = {
			_control = _x;
			_pos = ctrlPosition _control;	//x,y,w,h
			_pos params ["_moveX","_moveY","_moveW","_moveH"];
			_newX = _moveX + 10;
			_newY = _moveY + 10;
			_control ctrlSetPosition [_newX, _newY, _moveW, _moveH];
			_control ctrlCommit 0;
			false
		} count _toMove;



		//--- Mission name
		_loadingName = gettext (missionconfigfile >> "onLoadName");

		//--- Description
		_loadingTextConfig = if (false) then {gettext (missionconfigfile >> "onLoadIntro")} else {gettext (missionconfigfile >> "onLoadMission")};
		_loadingText = ctrltext _ctrlMissionDescriptionEngine;
		if (_loadingText == "") then {_loadingText = _loadingTextConfig;}; //--- Use overview data
		if (_loadingText in ["",localize "str_load_world"]) then {_loadingText = gettext (missionconfigfile >> "overviewText");};

		//--- MP type
		_gameType = gettext (missionconfigfile >> "Header" >> "gameType");
		_gameTypeName = gettext (configfile >> "CfgMPGameTypes" >> _gameType >> "name");
		if (_gameTypeName == "") then {_gameTypeName = gettext (configfile >> "CfgMPGameTypes" >> "Unknown" >> "name");};

		//_showMission = if (false) then {missionconfigfile >> "onLoadIntroTime"} else {missionconfigfile >> "onLoadMissionTime"};
		//_showMission = if (isnumber _showMission) then {getnumber _showMission > 0} else {true};
		//if (_showMission && (_loadingText != "" || _loadingPicture != "")) then {

		//--- When loading a different terrain, current mission is sometimes still available. Check if it belongs to the terrain.
		_last = uinamespace getvariable ["RscDisplayLoading_last",[worldname,missionname]];
		_lastWorld = _last select 0;
		_lastMission = _last select 1;
		_showMission = if (missionname == _lastMission) then {worldname == _lastWorld} else {true};
		uinamespace setvariable ["RscDisplayLoading_last",[worldname,missionname]];

		//--- Get loading bars
		_progressMap = _display displayctrl IDC_PROGRESS_PROGRESS;
		if (isnull _progressMap) then {_display displayctrl IDC_CLIENT_PROGRESS};
		_progressMission = _display displayctrl IDC_LOADING_PROGRESSMISSION;
		RscDisplayLoading_progress = _progressMap;

		if (str missionconfigfile != "" && _showMission) then {
			_loadingName = _loadingName call (uinamespace getvariable "bis_fnc_localize");
			_loadingText = _loadingText call (uinamespace getvariable "bis_fnc_localize");

			if (_loadingName == "") then {_loadingName = briefingname;};
			if (_loadingName == "") then {_loadingName = localize "STR_a3_rscdisplay_loading_noname";};
			if (_loadingPicture == "") then {_loadingPicture = _pictureShot;};

			if (_gameTypeName != "" && _isMultiplayer) then {
				_ctrlMissionType ctrlsettext toupper _gameTypeName;
			} else {
				_ctrlMissionType ctrlshow false;
			};
			_ctrlMissionName ctrlsettext toupper _loadingName;
			_ctrlMissionPicture ctrlsettext _loadingPicture;
			_ctrlMissionDescription ctrlsetstructuredtext parsetext _loadingText;

			//--- Set height based on text
			_ctrlMissionDescriptionPos = ctrlposition _ctrlMissionDescription;
			_ctrlMissionDescriptionPos set [3,ctrltextheight _ctrlMissionDescription + 0.01];
			if (_loadingText == "") then {_ctrlMissionDescriptionPos set [3,0];};
			_ctrlMissionDescription ctrlsetposition _ctrlMissionDescriptionPos;
			_ctrlMissionDescription ctrlcommit 0;

			[missionconfigfile,_ctrlMissionAuthor] call bis_fnc_overviewauthor;


			//DLC notification--------------------------------------------------------------------

			//DLC asset was found in mission.sqm, DLC is available and unowned => show DLC loading screen.
			//Info is selected randomly among the non-owned DLCs + DLC Bundle
			_missionDLCs = [];
			{
				_appId = getNumber(configfile >> "CfgMods" >> _x >> "appId");
				_missionDLCs = _missionDLCs + [_appId];
			} foreach (getMissionDlcs); //Take all not owned DLCs and check whether they were released already. If yes, count them as not owned

			_notOwnedDLCs = [];
			_showDLCLoading = false;

			{
				if((isDlcAvailable _x) && (_x in _missionDLCs)) then
				{
					_notOwnedDLCs = _notOwnedDLCs + [_x];
					_showDLCLoading = true;
				};
			} foreach (getDlcs 2); //Take all not owned DLCs and check whether they were released already. If yes, count them as not owned

			if(_showDLCLoading) then
			{
				_selectedDLCAppId = uinamespace getvariable ['BIS_RscDisplayLoading_SelectedDLCAppId', 0];

				if(_selectedDLCAppId == 0) then
				{
					//_notOwnedDLCs is non-empty => add DLC Bundle
					_notOwnedDLCs = _notOwnedDLCs + [getNumber(configfile >> "CfgMods" >> "DLCBundle" >> "appId")];
					//Randomly select one of the non-owned DLCs and read info from it
					_selectedDLC = floor(random (count _notOwnedDLCs));
					_selectedDLCAppId = _notOwnedDLCs select _selectedDLC;
					uinamespace setvariable ["BIS_RscDisplayLoading_SelectedDLCAppId", _selectedDLCAppId];
				};

				{ //For each class from cfgMods
					if(getNumber(_x >> "appId") == _selectedDLCAppId) then
					{
						_dlcColor = getArray(_x >> "dlcColor");

						if(count _dlcColor != 4) then
						{
							_dlcColor = [
								(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77]),
								(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51]),
								(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08]),
								1];
						};

						//name
						_ctrl = _display displayctrl IDC_LOADING_DLCNAME;
						_ctrl ctrlSetText getText(_x >> "name");
						_ctrl ctrlSetTextColor _dlcColor;
						//author
						_ctrl = _display displayctrl IDC_LOADING_DLCAUTHOR;
						_ctrl ctrlSetText (format [localize "STR_FORMAT_AUTHOR_SCRIPTED", getText(_x >> "author")]);
						_ctrl ctrlSetTextColor _dlcColor;
						//stripe
						_ctrl = _display displayctrl IDC_LOADING_DLCSTRIPE;
						_ctrl ctrlSetTextColor _dlcColor;
						//logo
						_ctrl = _display displayctrl IDC_LOADING_DLCICON;
						_ctrl ctrlSetText getText(_x >> "logo");
						//picture background
						_ctrl = _display displayctrl IDC_LOADING_DLCPICTUREBACK;
						_ctrl ctrlSetBackgroundColor _dlcColor;
						//description
						_ctrl = _display displayctrl IDC_LOADING_DLCDESCRIPTION;
						_ctrl ctrlSetStructuredText (parseText getText(_x >> "overviewText"));
					};
				} foreach ((configfile >> "CfgMods") call bis_fnc_returnChildren);
			};

			//--- Set height of description based on text
			_ctrlDLCDescription = _display displayctrl IDC_LOADING_DLCDESCRIPTION;
			_ctrlDLCDescriptionPos = ctrlposition _ctrlDLCDescription;
			_ctrlDLCDescriptionPos set [3, (ctrltextheight _ctrlDLCDescription) + 0.01]; //TODO-add proper grid
			_ctrlDLCDescription ctrlsetposition _ctrlDLCDescriptionPos;
			_ctrlDLCDescription ctrlcommit 0;

			//Show/hide DLC part of loading screen
			{
				(_display displayctrl _x) ctrlshow _showDLCLoading;
			}
			forEach
			[
				IDC_LOADING_DLCPICTUREBACK,
				IDC_LOADING_DLCPICTURE,
				IDC_LOADING_DLCDESCRIPTION,
				IDC_LOADING_DLCNAME,
				IDC_LOADING_DLCAUTHOR,
				IDC_LOADING_DLCSTRIPE,
				IDC_LOADING_DLCICON
			];

			//DLC notification--------------------------------------------------------------------


			//--- Mission loading bar
			_progressMapPos = ctrlposition _progressMap;
			_progressMissionPos = ctrlposition _progressMission;
			if (missionnamespace getvariable ["RscDisplayLoading_progressMission",false]) then {

				//--- Mission loading - make the terrain bar full and animate only the mission bar
				_progressMap ctrlsetposition _progressMissionPos;
				_progressMap ctrlshow false;
				_progressMap ctrlcommit 0;
				_progressMission ctrlsetposition _progressMapPos;
				_progressMission ctrlcommit 0;
				_progressMission progresssetposition 0;
				_progressMission ctrlshow false;
			} else {

				//--- When loading a different map, a rogue loading screen without progress bar appears. Move the progress bar by script.
				_limit = [1,2] select _isMultiplayer;
				if (count (uinamespace getvariable "loading_displays") > _limit) then {
					_progressMap ctrlshow false;
					_progressMission ctrlsetposition _progressMapPos;
					_progressMission ctrlcommit 0;
					_progressMission progresssetposition 0;
					_progressMission ctrlshow false;
				} else {
					_progressMission ctrlshow false;
				};
			};
		} else {
			_ctrlMission ctrlshow false;
			_ctrlMission ctrlsetfade 1;
			_ctrlMission ctrlcommit 0;
		};
	};

	_ctrlMission = _display displayctrl IDC_LOADING_MISSION;
	if (!(isnull _ctrlMission)) then {
		[_display,0] call _fnc_loadMission;
		//[_display,1] spawn _fnc_loadMission; //--- Spawn it for detecting text passed to the scripted loading, not used in the engine loading
	};


	/////LOADING SCREEN MESSAGES - HIDE MEEEEE
	_LOADINGSCREEN_MSGS_Array = [
		"Reticulating splines...",
		"Generating witty dialog...",
		"Swapping time and space...",
		"Spinning violently around the y-axis...",
		"Tokenizing real life...",
		"Bending the spoon...",
		"Filtering morale...",
		"Don't think of purple hippos...",
		"We need a new fuse...",
		"Have a good day.",
		"Upgrading Windows, your PC will restart several times. Sit back and relax.",
		"640K ought to be enough for anybody",
		"The architects are still drafting",
		"The bits are breeding",
		"We're building the buildings as fast as we can",
		"Would you prefer chicken, steak, or tofu?",
		"(Pay no attention to the man behind the curtain)",
		"...and enjoy the elevator music...",
		"Please wait while the little elves draw your map",
		"Don't worry - a few bits tried to escape, but we caught them",
		"Would you like fries with that?",
		"Checking the gravitational constant in your locale...",
		"Go ahead -- hold your breath!",
		"...at least you're not on hold...",
		"Hum something loud while others stare",
		"You're not in Kansas any more",
		"The server is powered by a lemon and two electrodes.",
		"Please wait while a larger software vendor in Seattle takes over the world",
		"We're testing your patience",
		"As if you had any other choice",
		"Follow the white rabbit",
		"Why don't you order a sandwich?",
		"While the satellite moves into position",
		"keep calm and npm install",
		"The bits are flowing slowly today",
		"Dig on the 'X' for buried treasure.,.. ARRR!",
		"It's still faster than you could draw it'",
		"The last time I tried this the monkey didn,'t survive. Let's hope it works better this time.",
		"I should have had a V8 this morning.",
		"My other loading screen is much faster.",
		"Testing on Timmy... We're going to need another Timmy.",
		"Reconfoobling energymotron...",
		"(Insert quarter)",
		"Are we there yet?",
		"Have you lost weight?",
		"Just count to 10",
		"Why so serious?",
		"It's not you. It's me.",
		"Counting backwards from Infinity",
		"Don't panic...",
		"Embiggening Prototypes",
		"Do not run! We are your friends!",
		"Do you come here often?",
		"Warning: Don't set yourself on fire.",
		"We're making you a cookie.",
		"Creating time-loop inversion field",
		"Spinning the wheel of fortune...",
		"Loading the enchanted bunny...",
		"Computing chance of success",
		"I'm sorry Dave, I can't do that.",
		"Looking for exact change",
		"All your web browser are belong to us",
		"All I really need is a kilobit.",
		"I feel like im supposed to be loading something. . .",
		"What do you call 8 Hobbits? A Hobbyte.",
		"Should have used a compiled language...",
		"Is this Windows?",
		"Adjusting flux capacitor...",
		"Please wait until the sloth starts moving.",
		"Don't break your screen yet!",
		"I swear it's almost done.",
		"Let's take a mindfulness minute...",
		"Unicorns are at the end of this road, I promise.",
		"Listening for the sound of one hand clapping...",
		"Keeping all the 1's and removing all the 0's...",
		"Putting the icing on the cake. The cake is not a lie...",
		"Cleaning off the cobwebs...",
		"Making sure all the i's have dots...",
		"We are not liable for any broken screens as a result of waiting.",
		"We need more dilithium crystals",
		"Where did all the internets go",
		"Connecting Neurotoxin Storage Tank...",
		"Granting wishes...",
		"Time flies when you’re having fun.",
		"Get some coffee and come back in ten minutes..",
		"Spinning the hamster…",
		"99 bottles of beer on the wall..",
		"Stay awhile and listen..",
		"Be careful not to step in the git-gui",
		"You edhall not pass! yet..",
		"Load it and they will come",
		"Convincing AI not to turn evil..",
		"There is no spoon. Because we are not done loading it",
		"Your left thumb points to the right and your right thumb points to the left.",
		"How did you get here?",
		"Wait, do you smell something burning?",
		"Computing the secret to life, the universe, and everything.",
		"When nothing is going right, go left!!...",
		"I love my job only when I'm on vacation...",
		"i'm not lazy, I'm just relaxed!!",
		"Never steal. The government hates competition....",
		"Why are they called apartments if they are all stuck together?",
		"Life is Short – Talk Fast!!!!",
		"Optimism – is a lack of information.....",
		"Save water and shower together",
		"Whenever I find the key to success, someone changes the lock.",
		"Sometimes I think war is God’s way of teaching us geography.",
		"I’ve got problem for your solution…..",
		"Where there’s a will, there’s a relative.",
		"User: the word computer professionals use when they mean !!idiot!!",
		"Adults are just kids with money.",
		"I think I am, therefore, I am. I think.",
		"A kiss is like a fight, with mouths.",
		"You don’t pay taxes—they take taxes.",
		"Coffee, Chocolate, Men. The richer the better!",
		"I am free of all prejudices. I hate everyone equally.",
		"git happens",
		"May the forks be with you",
		"A commit a day keeps the mobs away",
		"This is not a joke, it's a commit.",
		"Constructing additional pylons...",
		"Roping some seaturtles...",
		"Locating Jebediah Kerman...",
		"We are not liable for any broken screens as a result of waiting.",
		"Hello IT, have you tried turning it off and on again?",
		"If you type Google into Google you can break the internet",
		"Well, this is embarrassing.",
		"What is the airspeed velocity of an unladen swallow?",
		"Hello, IT... Have you tried forcing an unexpected reboot?",
		"They just toss us away like yesterday's jam.",
		"They're fairly regular, the beatings, yes. I'd say we're on a bi-weekly beating.",
		"The Elders of the Internet would never stand for it.",
		"Space is invisible mind dust, and stars are but wishes.",
		"Didn't know paint dried so quickly.",
		"Everything sounds the same",
		"I'm going to walk the dog",
		"I didn't choose the engineering life. The engineering life chose me.",
		"Dividing by zero...",
		"Spawn more Overlord!",
		"If I’m not back in five minutes, just wait longer.",
		"Some days, you just can’t get rid of a bug!",
		"We’re going to need a bigger boat.",
		"Chuck Norris never git push. The repo pulls before.",
		"Web developers do it with <style>",
		"I need to git pull --my-life-together",
		"Java developers never RIP. They just get Garbage Collected.",
		"Cracking military-grade encryption...",
		"Simulating traveling salesman...",
		"Proving P=NP...",
		"Entangling superstrings...",
		"Twiddling thumbs...",
		"Searching for plot device...",
		"Trying to sort in O(n)...",
		"Laughing at your pictures-i mean, loading...",
		"Sending data to NS-i mean, our servers.",
		"Looking for sense of humour, please hold on.",
		"Please wait while the intern refills his coffee.",
		"A different error message? Finally, some progress!",
		"Hold on while we wrap up our git together...sorry",
		"Please hold on as we reheat our coffee",
		"Kindly hold on as we convert this bug to a feature...",
		"Kindly hold on as our intern quits vim...",
		"Winter is coming...",
		"Installing dependencies",
		"Switching to the latest JS framework...",
		"Distracted by cat gifs",
		"Finding someone to hold my beer",
		"BRB, working on my side project",
		"@todo Insert witty loading message",
		"Let's hope it's worth the wait",
		"Aw, snap! Not..",
		"Ordering 1s and 0s...",
		"Updating dependencies...",
		"Whatever you do, don't look behind you...",
		"Please wait... Consulting the manual...",
		"It is dark. You're likely to be eaten by a grue.",
		"Loading funny message...",
		"It's 10:00pm. Do you know where your children are?",
		"Waiting Daenerys say all her titles...",
		"Feel free to spin in your chair",
		"What the what?",
		"format C: ...",
		"Forget you saw that password I just typed into the IM ...",
		"What's under there?",
		"Your computer has a virus, its name is Windows!",
		"Go ahead, hold your breath and do an ironman plank till loading complete",
		"Bored of slow loading spinner, buy more RAM!",
		"Help, I'm trapped in a loader!",
		"What is the difference btwn a hippo and a zippo? One is really heavy, the other is a little lighter",
		"Please wait, while we purge the Decepticons for you. Yes, You can thanks us later!",
		"Chuck Norris once urinated in a semi truck's gas tank as a joke....that truck is now known as Optimus Prime.",
		"Chuck Norris doesn’t wear a watch. HE decides what time it is.",
		"Mining some bitcoins...",
		"Downloading more RAM..",
		"Updating to Windows Vista...",
		"Deleting System32 folder",
		"Hiding all ;'s in your code",
		"Alt-F4 speeds things up.",
		"Initializing the initializer...",
		"When was the last time you dusted around here?",
		"Optimizing the optimizer...",
		"Last call for the data bus! All aboard!",
		"Running swag sticker detection...",
		"When nothing is going right, go left!",
		"Never let a computer know you're in a hurry.",
		"A computer will do what you tell it to do, but that may be much different from what you had in mind.",
		"Some things man was never meant to know. For everything else, there's Google.",
		"Unix is user-friendly. It's just very selective about who its friends are.",
		"Shovelling coal into the server",
		"Pushing pixels...",
		"How about this weather, eh?",
		"Building a wall...",
		"Everything in this universe is either a potato or not a potato",
		"The severity of your issue is always lower than you expected.",
		"Updating Updater...",
		"Downloading Downloader...",
		"Debugging Debugger...",
		"Reading Terms and Conditions for you.",
		"Digested cookies being baked again.",
		"Live long and prosper.",
		"There is no cow level, but there's a goat one!",
		"Deleting all your hidden porn...",
		"Running with scissors...",
		"Definitely not a virus...",
		"You may call me Steve.",
		"You seem like a nice person...",
		"Coffee at my place, tommorow at 10A.M. - don't be late!",
		"Work, work...",
		"Patience! This is difficult, you know...",
		"Discovering new ways of making you wait...",
		"Your time is very important to us. Please wait while we ignore you...",
		"Time flies like an arrow; fruit flies like a banana",
		"Two men walked into a bar; the third ducked...",
		"Sooooo... Have you seen my vacation photos yet?",
		"Sorry we are busy catching em' all, we're done soon",
		"TODO: Insert elevator music",
		"Still faster than Windows update",
		"Composer hack: Waiting for reqs to be fetched is less frustrating if you add -vvv to your command.",
		"Please wait while the minions do their work",
		"Grabbing extra minions",
		"Doing the heavy lifting",
		"We're working very Hard .... Really",
		"Waking up the minions",
		"You are number 2843684714 in the queue",
		"Please wait while we serve other customers...",
		"Our premium plan is faster"
	];
	_loadingmsg = selectRandom _LOADINGSCREEN_MSGS_Array;
	//--- Disclaimer - Moved here to prevent showing Lite Disclaimer when starting/shutting down the game
	if (getnumber (configfile >> "CfgMods" >> "gamma") == 1) then
	{
		_ctrlDisclaimer = _display displayctrl IDC_LOADING_DISCLAIMER;
		_ctrlDisclaimerName = _display displayctrl IDC_LOADING_DISCLAIMERNAME;
		_ctrlDisclaimerDescription = _display displayctrl IDC_LOADING_DISCLAIMERDESCRIPTION;
		_productVersionArray = productversion;
		_versionNr = ctrltext ((finddisplay 0) displayctrl 118);

		if (_productVersionArray select 4 == "Development") then
		{
			_disclaimerName = format ["%1 - %2", localize "STR_A3_RSCDISPLAY_LOADING_DEV", _versionNr];

			if(_productVersionArray select 5) then
			{
				//Modded dev
				_disclaimerName = _disclaimerName + "<img image='A3\Ui_f\data\GUI\RscCommon\RscTrafficLight\TrafficLight_ca.paa'/>";
			};

			_ctrlDisclaimerName ctrlSetStructuredText parseText _disclaimerName;
			_ctrlDisclaimerDescription ctrlsetstructuredtext parsetext localize "STR_A3_RSCDISPLAY_LOADING_DEVINFO";
			_ctrlDisclaimerDescription ctrlsettextcolor [1,1,1,1];
			[_ctrlDisclaimerDescription,0.01] call bis_fnc_ctrlFitToTextHeight;
			_ctrlDisclaimer ctrlshow true;
		}
		else
		{
			if(_productVersionArray select 5) then
			{
				//Modded stable
				_ctrlDisclaimerName ctrlSetStructuredText parseText format ["Loading Screen by Curious - %1 - %2%3", localize "STR_A3_RSCDISPLAY_LOADING_STABLE",
													  _versionNr,
													  "<img image='A3\Ui_f\data\GUI\RscCommon\RscTrafficLight\TrafficLight_ca.paa'/>"];

				_ctrlDisclaimerDescription ctrlsetstructuredtext parsetext _loadingmsg;
				_ctrlDisclaimerDescription ctrlsettextcolor [1,1,1,1];
				[_ctrlDisclaimerDescription,0.01] call bis_fnc_ctrlFitToTextHeight;
				_ctrlDisclaimer ctrlshow true;
			}
			else
			{
				_ctrlDisclaimer ctrlshow false;
			};
		};
	};

	//--- Track mission time
	/*
	if (str _display == "Display #101") then {
		[] call bis_fnc_trackMissionTime;
	};
	*/
};
