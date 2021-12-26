disableserialization;

_mode = _this select 0;
_params = _this select 1;
_class = _this select 2;

switch _mode do {

	case "onLoad_remoteMissions": {
		_display = _params select 0;
		
		//--- set player's name
		_name = format[ "%1 | Client ID: %2", profileName, clientOwner];
		(_display displayctrl 109) ctrlSetText _name;
		[_display, 109] call (uinamespace getvariable 'BIS_fnc_setIDCStreamFriendly');

		//Sets title and button texts toUpper
		["RscDisplayRemoteMissions",["RscText","RscTitle"],["PlayersName"]] call bis_fnc_toUpperDisplayTexts;
		
		//Hide chat, show mission summary
		showChat false;
		_missionSummary = (_display displayctrl 2300);
		_missionSummary ctrlSetFade 0;
		_missionSummary ctrlCommit 0;
		_missionSummary ctrlEnable true;
		
		//Mission Summary button
		_button = _display displayctrl 1085;
		_button ctrladdeventhandler ["buttonclick","with uinamespace do {['missionSummaryButton',_this,''] call RscDisplayRemoteMissions_script};"];
		_button ctrlSetBackgroundColor [1,1,1,1];
		_button ctrlSetTextColor [0,0,0,1];
		
		//Chat button
		_button = _display displayctrl 1086;
		_button ctrladdeventhandler ["buttonclick","with uinamespace do {['chatButton',_this,''] call RscDisplayRemoteMissions_script};"];
		
		//count missions
		//_vel = lbSize (_display displayctrl 102);
		
		//debuglog _vel;

		//don't count New-Editor and New-Wizard
		//_size = _size - 2;
		//if(_size < 0) then {_size = 0;};
		//(_display displayctrl 1014) ctrlSetText (str _vel);
		
		//(_display displayctrl 101) ctrladdeventhandler ["lbselchanged","with uinamespace do {['mapChanged',_this,''] call RscDisplayRemoteMissions_script};"];
	};
	case "onLoad_remoteMissionsVoted":
	{
		private ["_display"];
		_display = _params select 0;
		
		//--- set player's name
		_name = format["%1 | Client ID: %2", profileName, clientOwner];
		(_display displayctrl 109) ctrlSetText _name;
		[_display, 109] call (uinamespace getvariable 'BIS_fnc_setIDCStreamFriendly');
		
		//toUpper title - TODO: This must be done in code
		//(_display displayctrl 118) ctrlSetText (toUpper (ctrlText _control));
	};
};