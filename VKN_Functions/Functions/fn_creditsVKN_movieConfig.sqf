/*
	File: fn_creditsVKN_movieConfig.sqf
	Author: Borivoj Hlava, Curious

	Description:
	Movie credits config preprocessor.

	Parameter(s):
	_this select 0: Number - Index of item in config (CfgCredits >> VKNCreditsMovie >> item)

	Returned value:
	_array: Array
	_array select 0: String - Position name (and tags) as structured text.
	_array select 1: String - Names (and tags) as structured text.
	_array select 2: Number - Required space coeficient (numberOfNames * textSizeCoef), -1 if config entry doesn't exist
*/

private ["_id","_config","_item","_pos","_arrayPart1","_names","_arrayPart2","_size","_x","_array","_color"];

_id = _this select 0;
_config = configFile >> "CfgCredits" >> "VKNCreditsMovie";
_item = getArray (_config >> ("item" + str _id));
_array = [];
if (count _item != 0) then {
	// --- Position
	_pos = (_item select 0) select 0;
	_color = [profilenamespace getvariable ['GUI_BCG_RGB_R',0.69],profilenamespace getvariable ['GUI_BCG_RGB_G',0.69],profilenamespace getvariable ['GUI_BCG_RGB_B',0.69]];
	_color = _color call BIS_fnc_colorRGBtoHTML;
	_arrayPart1 = "<t align='center' size='1.5' color='" + _color + "'>" + _pos + "</t>";

	if !("Special Thanks" == _pos) then {
		// --- Names
		_names = _item select 1;

		_arrayPart2 = "<t align='center' size='1.3' color='#ffffff'>";		// names font parameters - size must be changed in _size parameter too
		_size = 0;
		{
			_arrayPart2 = _arrayPart2 + _x + "<br/>";
			_size = _size + 1;
		} forEach _names;
		_arrayPart2 = _arrayPart2 + "</t>";
		_size = _size * 1.3;

		// --- Final array create
		_array = [_arrayPart1,_arrayPart2,_size];
	} else {	// =============== exception for special thanks - profileName is added before the last item ===============
		// --- Names
		_names = _item select 1;

		_arrayPart2 = "<t align='center' size='1.3' color='#ffffff'>";		// names font parameters - size must be changed in _size parameter too
		_size = 0;
		_xOld = "";
		{
			if (_xOld != "") then {
				_arrayPart2 = _arrayPart2 + _xOld + "<br/>";
			};
			_xOld = _x;
			_size = _size + 1;
		} forEach _names;
		_arrayPart2 = _arrayPart2 + profileName + "<br/>" + _xOld + "<br/><br/><br/><br/></t>";
		_size = _size * 1.3;

		// --- Final array create
		_array = [_arrayPart1,_arrayPart2,_size];
	};

} else {
	_array = ["","",-1];
};

_array