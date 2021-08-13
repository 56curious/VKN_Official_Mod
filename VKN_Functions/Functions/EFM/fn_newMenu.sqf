/*
Script name:    fn_newMenu.sqf
Created on:     13 August ‎2021
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
    systemChat "You're not in the editor! Please go into the editor to run this function!"
};

// setup displays
_EFM_newMenu = findDisplay 313 createDisplay "VKN_EFM_newMenu";
if (isNull _EFM_newMenu) exitwith {
    systemChat "can't find display."
};

// Disable Escape Key
_EFM_newMenu displayAddEventHandler ["Keydown", "if ((_this select 1) == 1) then {
    true
}"];


//Get Elements
_EFM_newAsEdit = _EFM_newMenu displayCtrl 1400;
_EFM_typeCombo = _EFM_newMenu displayCtrl 2100;

_EFM_backButton = _EFM_newMenu displayCtrl 1600;
_EFM_confirmButton = _EFM_newMenu displayCtrl 1601;

_EFM_fileList = _EFM_newMenu displayCtrl 1500;

//populate with default text
_EFM_newAsEdit ctrlSetText "myFilename";
{	
		_EFM_typeCombo lbAdd _x;
} forEach [".ext", ".sqf", ".fsm", ".sqm", ".html", "Folder"];

//sort tree view
//get files for list
//get the files/folders and sub dirs from the path and create a py dict out of it
_path = [getMissionPath "", "\", "\\"] call PX_fnc_stringReplace; 
_fileList = ["viking.createDictFiles", [_path]] call (uiNamespace getVariable "py3_fnc_callExtension"); 

_allowedFileCount = 0;

//Sort path to remove the mission name for shorter text later in CT_Tree
_pathNew = getMissionPath ""; 
_MissionWorldExtension = missionName + "." + worldName + "\";  
_editedPath = [_pathNew, _MissionWorldExtension, ""] call PX_fnc_stringReplace; 

//load mission root and sort tree
_fileListAllowed = [_fileList, _editedPath, _efm_fileList, _pathNew, _MissionWorldExtension] call VKN_EFM_fnc_loadSortMissionRoot;

//Deal with tooltop on mouse hover
_EFM_fileList ctrlAddEventHandler ["TreeMouseMove", "
	params ['_control', '_selectionPath'];

	_control tvSetTooltip [_selectionPath, (_control tvText _selectionPath)];
"];


//deal with confirming settings - catch errors too
_EFM_confirmButton ctrlAddEventHandler ["ButtonClick","
	_efmEH_newMenu = findDisplay 3691;	
	_efmnewEH_fileList = _efmEH_newMenu displayCtrl 1500;
	_efmnewEH_newAsEdit = _efmEH_newMenu displayCtrl 1400;
	_efmnewEH_typeCombo = _efmEH_newMenu displayCtrl 2100;

	
	_curSel = tvCurSel _efmnewEH_fileList;
	_curSelText = _efmnewEH_fileList tvText _curSel;

	_type = false;
	{	
		_isFile = [_x, toLower _curSelText] call BIS_fnc_inString;
		if (_isFile) then {
			_type = true; 
		};
	} forEach ['.ext', '.sqf', '.fsm', '.sqm', '.html'];

	if (_type) then { 
		['Error: Please select a folder, not a file.', 1] call BIS_fnc_3DENNotification;
		systemchat 'Error: Please select a folder, not a file.'; 
	} else {
		_pathNewEH = getMissionPath '';
		_MissionWorldExtension = missionName + '.' + worldName + '\';  
		_editedPathEH = [_pathNewEH, _MissionWorldExtension, ''] call PX_fnc_stringReplace;
		_path = '';
		if (_curSelText == _editedPathEH) then {
			_path = _pathNewEH;
		} else {
			_path = _editedPathEH + _curSelText + '\';
		};
		
		_finalPath = [_path, '\', '\\'] call PX_fnc_stringReplace;


		_comboText = _efmnewEH_typeCombo lbText lbCurSel _efmnewEH_typeCombo;
		_editText = ctrlText _efmnewEH_newAsEdit;
		_filename = _editText + _comboText;

		_createFiles = ['viking.VKN_createFiles', [_finalPath, [[_filename, '']]]] call (uiNamespace getVariable 'py3_fnc_callExtension');
		if (_createFiles == 'true') then {
			[format ['%1 was created successfully at %2!', _filename, _curSelText + '\'], 0] call BIS_fnc_3DENNotification;
			_EFM_newDisplay = findDisplay 3691; _EFM_newDisplay closeDisplay 0;
			[] spawn VKN_EFM_fnc_handleCore;
		};
	};
"];
_EFM_backButton ctrlAddEventHandler ["ButtonClick", "_EFM_newDisplay = findDisplay 3691; _EFM_newDisplay closeDisplay 0; [] spawn VKN_EFM_fnc_handleCore;"];
