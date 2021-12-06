/*
Script name:    fn_handleCore.sqf
Created on:     27 July 2021
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with UI elements for EFM tool.

Framework:      External File Manager

Parameters:
				N/A
*/


// don't run if not in 3den
if !(is3DEN) exitwith {
    systemChat "You're not in the editor! Please go into the editor to run this function!";
};

// setup display
_display = findDisplay 46 createDisplay "VKN_3PP_Cam_Adjustment";
if (isNull _display) exitwith {
    systemChat "The File Manager Display is not open, aborting...";
};

// Disable Escape Key
_display displayAddEventHandler ["Keydown", "if ((_this select 1) == 1) then {
    true
}"];

//Presets same as Deadfast's Third Person View MGS V STYLE Camera - https://steamcommunity.com/sharedfiles/filedetails/?id=1285275308
_presets = [
	["Ghost Recon Style", [0.4,-0.3,-0.6]],
	["Deadfast Over the Shoulder",[0.4,-0.1,-1.2]],
	["Personal Space - Operator",[0.4,-0.1,-2.1]],
	["MGS V - Quackor",[0.45,-0.225,-2]],
	["The Fast and the Dead",[0.3, 0, -1.2]],
	["Arma 3 (Default)",[0.22,-0.05,-2.2]]
];

missionNamespace setVariable ["VKN_3PP_Camera_Presets", _presets];

//Get Elements
_ctrlEditX = _display displayCtrl 1400;
_ctrlEditY = _display displayCtrl 1401;
_ctrlEditZ = _display displayCtrl 1402;

_ctrlSliderX = _display displayCtrl 1900;
_ctrlSliderY = _display displayCtrl 1901;
_ctrlSliderZ = _display displayCtrl 1902;

_ctrlCombo = _display displayCtrl 2100;

_ctrlClose = _display displayCtrl 1600;
_ctrlReset = _display displayCtrl 1601;
_ctrlConfirm = _display displayCtrl 1602;

private _pos = getposatl cameraon; 
_pos set [2,(_pos select 2) + 2]; 
private _camera = "camera" camcreate _pos; 
_camera cameraeffect ["terminate","back"]; 
_camera setdir direction cameraon;  
showcinemaborder false; 
showhud false;
missionNamespace setVariable ["VKN_3PP_Camera_Object", _camera];

private _intCameraPosition = player selectionposition "pilot";
private _extCameraPosition = getarray (configfile >> "CfgVehicles" >> typeof vehicle player >> "extCameraPosition"); 

private _cameraPosition = [0,0,0]; 
_cameraPosition set [0,(_intCameraPosition select 0) + (_extCameraPosition select 0)]; 
_cameraPosition set [1,(_intCameraPosition select 1) + (_extCameraPosition select 2)];  
_cameraPosition set [2,(_intCameraPosition select 2) + (_extCameraPosition select 1)]; 

[player, _cameraPosition] call VKN_3PPCAM_fnc_updateCameraEffect;

_ctrlEditX ctrlSetText str (_extCameraPosition select 0);
_ctrlEditY ctrlSetText str (_extCameraPosition select 1);
_ctrlEditZ ctrlSetText str (_extCameraPosition select 2);

_ctrlSliderX sliderSetRange [0, 1];
_ctrlSliderX sliderSetPosition (_extCameraPosition select 0);

_ctrlSliderY sliderSetRange [-1, 0];
_ctrlSliderY sliderSetPosition (_extCameraPosition select 1);

_ctrlSliderZ sliderSetRange [-3, 0];
_ctrlSliderZ sliderSetPosition (_extCameraPosition select 2);

_camera setpos (player modeltoworld _cameraPosition); 

_camera camSetDir ([sin getDir player, cos getDir player, 0]); 
_camera camcommitprepared 0; 

_camera setvelocity [0,0,0]; 
_camera cameraeffect ["internal","back"]; 
cameraeffectenablehud true;

_camera camCommit 0;

{ _ctrlCombo lbadd (_x select 0); } forEach _presets;


_ctrlClose ctrlAddEventHandler ["ButtonClick", "_display = findDisplay 5600; _display closeDisplay 0; _cam = missionNamespace getVariable ""VKN_3PP_Camera_Object""; camDestroy _cam;"];
_ctrlReset ctrlAddEventHandler ["ButtonClick", "
	_display = findDisplay 5600; 

	_ctrlEditX = _display displayCtrl 1400;
	_ctrlEditY = _display displayCtrl 1401;
	_ctrlEditZ = _display displayCtrl 1402;

	_ctrlSliderX = _display displayCtrl 1900;
	_ctrlSliderY = _display displayCtrl 1901;
	_ctrlSliderZ = _display displayCtrl 1902;
	
	_extCameraPosition = getarray (configfile >> ""CfgVehicles"" >> typeof vehicle player >> ""extCameraPosition""); 

	_ctrlEditX ctrlSetText str (_extCameraPosition select 0);
	_ctrlSliderX sliderSetPosition (_extCameraPosition select 0);

	_ctrlEditY ctrlSetText str (_extCameraPosition select 1);
	_ctrlSliderY sliderSetPosition (_extCameraPosition select 1);

	_ctrlEditZ ctrlSetText str (_extCameraPosition select 2);
	_ctrlSliderZ sliderSetPosition (_extCameraPosition select 2);

	private _cameraPosition = [0,0,0];
	private _intCameraPosition = player selectionposition ""pilot"";
	 
	_cameraPosition set [0,(_intCameraPosition select 0) + parseNumber ctrlText _ctrlEditX];
	_cameraPosition set [1,(_intCameraPosition select 1) + parseNumber ctrlText _ctrlEditZ];
	_cameraPosition set [2,(_intCameraPosition select 2) + parseNumber ctrlText _ctrlEditY];

	[player, _cameraPosition] call VKN_3PPCAM_fnc_updateCameraEffect;
	
"];
_ctrlConfirm ctrlAddEventHandler ["ButtonClick", "
	_display = findDisplay 5600;
	_ctrlEditX = _display displayCtrl 1400;
	_ctrlEditY = _display displayCtrl 1401;
	_ctrlEditZ = _display displayCtrl 1402;

	_ctrlEditXText = ctrlText _ctrlEditX;
	_ctrlEditYText = ctrlText _ctrlEditY;
	_ctrlEditZText = ctrlText _ctrlEditZ;

	_path = [""\!Workshop\@Viking PMC Mod - All-In-One\addons"", ""\!Workshop\@Viking PMC Mod - Core\addons""];
	_filename = 'cameraSettings.hpp';
	_data = [_ctrlEditXText, _ctrlEditYText, _ctrlEditZText];

	_test = [""viking.VKN_updateCameraSetting"", [_path, _filename, _data]] call (uiNamespace getVariable ""py3_fnc_callExtension"");
	systemChat _test;
"];

_ctrlCombo ctrlAddEventHandler ["lbSelChanged", "

	_display = findDisplay 5600;
	_ctrlEditX = _display displayCtrl 1400;
	_ctrlEditY = _display displayCtrl 1401;
	_ctrlEditZ = _display displayCtrl 1402;

	_ctrlSliderX = _display displayCtrl 1900;
	_ctrlSliderY = _display displayCtrl 1901;
	_ctrlSliderZ = _display displayCtrl 1902;

	_ctrlCombo = _display displayCtrl 2100;

	_curSel =  lbCurSel _ctrlCombo;
	_curSelText = _ctrlCombo lbText _curSel;

	_presets = missionNamespace getVariable ""VKN_3PP_Camera_Presets"";
	_selectedPresetIndex = -1;
	
	{ 
		_check = _presets select _forEachIndex find _curSelText;
		if (_check != -1) then {
			_selectedPresetIndex = _forEachIndex;
		};
	} forEach _presets;
	
	_selectedPreset = _presets select _selectedPresetIndex;

	_presetText = _selectedPreset select 0;
	_presetArray = _selectedPreset select 1;

	_ctrlEditX ctrlSetText str (_presetArray select 0);
	_ctrlSliderX sliderSetPosition (_presetArray select 0);

	_ctrlEditY ctrlSetText str (_presetArray select 1);
	_ctrlSliderY sliderSetPosition (_presetArray select 1);

	_ctrlEditZ ctrlSetText str (_presetArray select 2);
	_ctrlSliderZ sliderSetPosition (_presetArray select 2);
	
	private _cameraPosition = [0,0,0];
	private _intCameraPosition = player selectionposition ""pilot"";

	_cameraPosition set [0,(_intCameraPosition select 0) + parseNumber ctrlText (_display displayCtrl 1400)];
	_cameraPosition set [1,(_intCameraPosition select 1) + parseNumber ctrlText (_display displayCtrl 1402)];
	_cameraPosition set [2,(_intCameraPosition select 2) + parseNumber ctrlText (_display displayCtrl 1401)];

	[player, _cameraPosition] call VKN_3PPCAM_fnc_updateCameraEffect;
"];

_ctrlSliderX ctrlSetEventHandler ["SliderPosChanged", " 
	params [""_control"",""_newValue""];  
	_display = findDisplay 5600;

	if (str _control == str (_display displayCtrl 1900)) then {
		(_display displayCtrl 1400) ctrlSetText str _newValue;

		private _intCameraPosition = player selectionposition ""pilot"";

		private _cameraPosition = [0,0,0]; 
		_cameraPosition set [0,(_intCameraPosition select 0) + _newValue];
		_cameraPosition set [1,(_intCameraPosition select 1) + parseNumber ctrlText (_display displayCtrl 1402)];
		_cameraPosition set [2,(_intCameraPosition select 2) + parseNumber ctrlText (_display displayCtrl 1401)];
		
		[player, _cameraPosition] call VKN_3PPCAM_fnc_updateCameraEffect;
	};
"];
_ctrlSliderY ctrlSetEventHandler ["SliderPosChanged", "
	params [""_control"",""_newValue""];  
	_display = findDisplay 5600;

	if (str _control == str (_display displayCtrl 1901)) then {
		(_display displayCtrl 1401) ctrlSetText str _newValue; 

		private _intCameraPosition = player selectionposition ""pilot"";

		private _cameraPosition = [0,0,0]; 
		_cameraPosition set [0,(_intCameraPosition select 0) + parseNumber ctrlText (_display displayCtrl 1400)];
		_cameraPosition set [1,(_intCameraPosition select 1) + parseNumber ctrlText (_display displayCtrl 1402)];
		_cameraPosition set [2,(_intCameraPosition select 2) + _newValue];

		[player, _cameraPosition] call VKN_3PPCAM_fnc_updateCameraEffect;
	};
"];
_ctrlSliderZ ctrlSetEventHandler ["SliderPosChanged", "
	params [""_control"",""_newValue""];  
	_display = findDisplay 5600;

	if (str _control == str (_display displayCtrl 1902)) then {
		(_display displayCtrl 1402) ctrlSetText str _newValue; 

		private _intCameraPosition = player selectionposition ""pilot"";

		private _cameraPosition = [0,0,0]; 
		_cameraPosition set [0,(_intCameraPosition select 0) + parseNumber ctrlText (_display displayCtrl 1400)];
		_cameraPosition set [1,(_intCameraPosition select 1) + _newValue];
		_cameraPosition set [2,(_intCameraPosition select 2) + parseNumber ctrlText (_display displayCtrl 1401)];

		[player, _cameraPosition] call VKN_3PPCAM_fnc_updateCameraEffect;
	};
"];