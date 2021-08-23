/*
Script name:    fn_handleCore.sqf
Created on:     27 July ‎2021
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with UI elements for EFM tool.

Framework:      External File Manager

Parameters:
				N/A
*/

/*
TO-DO List
Line numbers - Done
syntax highlighting - requires external functions
copy/paste buttons - Done
text size increase - Aborted functionality due to scaling


ugent - scaling on text size in filecount and buttons
*/

// don't run if not in 3den
if !(is3DEN) exitwith {
    systemChat "You're not in the editor! Please go into the editor to run this function!";
};

// setup display
_EFM_Main = findDisplay 313 createDisplay "VKN_EFM_Main";
if (isNull _EFM_Main) exitwith {
    systemChat "The File Manager Display is not open, aborting...";
};

// Disable Escape Key
_EFM_Main displayAddEventHandler ["Keydown", "if ((_this select 1) == 1) then {
    true
}"];


//Get Elements
_EFM_missionNameTitle = _EFM_Main displayCtrl 1001;
_EFM_filenameTitle = _EFM_Main displayCtrl 1002;
_EFM_fileCount = _EFM_Main displayCtrl 1003;

_EFM_deleteButton = _EFM_Main displayCtrl 1600;
_EFM_revertButton = _EFM_Main displayCtrl 1601;
_EFM_saveButton = _EFM_Main displayCtrl 1602;
_EFM_closeButton = _EFM_Main displayCtrl 1603;
_EFM_newButton = _EFM_Main displayCtrl 1604;
_EFM_searchButton = _EFM_Main displayCtrl 1605;
_EFM_openFolder = _EFM_Main displayCtrl 1606;
_EFM_copyButton = _EFM_Main displayCtrl 1607;
_EFM_pasteButton = _EFM_Main displayCtrl 1608;

_EFM_codeBoxGroup = _EFM_Main displayCtrl 14010;
_EFM_codeBoxGroupCode = _EFM_Main displayCtrl 14011;
_EFM_codeBoxGroupLines = _EFM_Main displayCtrl 14012;

_EFM_fileList = _EFM_Main displayCtrl 1500;

//set titles
_EFM_missionNameTitle ctrlSetText missionName;

//could move entire section into VKN_EFM_fnc_loadSortMissionRoot however data is used later as well
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




//Count total files
_filecount = ["viking.countFiles", [_path]] call (uiNamespace getVariable "py3_fnc_callExtension"); 
_EFM_fileCount ctrlSetText format ["File Count: %1 | %2", str _allowedFileCount, str _filecount];

//Deal with tooltop on mouse hover
_EFM_fileList ctrlAddEventHandler ["TreeMouseMove", "
	params ['_control', '_selectionPath'];
	_text = _control tvText _selectionPath;
	if (toLower _text == 'mission.sqm') then {
		_control tvSetTooltip [_selectionPath, _text + ' - Edit at own risk!'];
	} else {
		_control tvSetTooltip [_selectionPath, _text];
	};
"];


///find out currently selected item, if a file then open its content.
_EFM_fileList ctrlAddEventHandler ["TreeLButtonDown", "

	params ['_control'];

	_efmEH_Main = findDisplay 3690;
	_efmEH_filenameTitle = _efmEH_Main displayCtrl 1002;


	_efmEH_deleteButton = _efmEH_Main displayCtrl 1600;
	_efmEH_revertButton = _efmEH_Main displayCtrl 1601;
	_efmEH_saveButton = _efmEH_Main displayCtrl 1602;
	_efmEH__closeButton = _efmEH_Main displayCtrl 1603;
	_efmEH_codeBoxGroup = _efmEH_Main displayCtrl 14010;
	_efmEH_codeBoxGroupCode = _efmEH_Main displayCtrl 14011;
	_efmEH_codeBoxGroupLines = _efmEH_Main displayCtrl 14012;
	_efmEH_fileList = _efmEH_Main displayCtrl 1500;

	_curSel = tvCurSel _control;
	_curSelText = _control tvText _curSel;

	{	
		_fileAllowed = [_x, toLower str _curSelText] call BIS_fnc_inString;
		if (_fileAllowed) then {
			_curSelParent = _curSel select [0, count _cursel - 1];
			_parentText = _efmEH_fileList tvText _curSelParent;
			
			_pathNewEH = getMissionPath '';
			_MissionWorldExtension = missionName + '.' + worldName + '\';  
			_editedPathEH = [_pathNewEH, _MissionWorldExtension, ''] call PX_fnc_stringReplace; 
			_path = '';

			if ((_parentText != _editedPathEH) || (_parentText == _pathNewEH)) then {
				_path = _editedPathEH + _parentText + '\';
			} else {
				_path = _pathNewEH;
			};
			_fileContent = ['viking.VKN_returnfileData', [_path, _curSelText]] call (uiNamespace getVariable 'py3_fnc_callExtension');
			_efmEH_filenameTitle ctrlSetText _curSelText;
			_efmEH_codeBoxGroupCode ctrlSetText _fileContent;

			[_efmEH_codeBoxGroupCode, _efmEH_codeBoxGroupLines] call VKN_EFM_fnc_handleLineNumbers;

		};
	} forEach ['.ext', '.sqf', '.fsm', '.sqm', '.html'];
"];

//detect new line added so line numbers can update.
_EFM_codeBoxGroupCode ctrlAddEventHandler ["KeyDown", "
	params ['_displayOrControl', '_key', '_shift', '_ctrl', '_alt'];

	_efmEH_Main = findDisplay 3690;
	_efmEH_codeBoxGroupCode = _efmEH_Main displayCtrl 14011;
	_efmEH_codeBoxGroupLines = _efmEH_Main displayCtrl 14012;

	if ((_key == 28) && (_shift == true)) then {
		[_efmEH_codeBoxGroupCode, _efmEH_codeBoxGroupLines] call VKN_EFM_fnc_handleLineNumbers;
	};

"];


//set up buttons with their actions
_EFM_deleteButton ctrlAddEventHandler ["ButtonClick", "
	_efmEH_Main = findDisplay 3690;	
	_efmEH_fileList = _efmEH_Main displayCtrl 1500;

	_curSel = tvCurSel _efmEH_fileList;
	_curSelText = _efmEH_fileList tvText _curSel;
	_curSelParent = _curSel select [0, count _cursel - 1];
	_type = false;
	{	
		_isFile = [_x, toLower _curSelText] call BIS_fnc_inString;
		if (_isFile) then {
			_type = true; 
		};
	} forEach ['.ext', '.sqf', '.fsm', '.sqm', '.html'];

	_parentText = _efmEH_fileList tvText _curSelParent;

	_pathNewEH = getMissionPath ''; 
	_editedPathEH = [_pathNewEH, '\', '\\'] call PX_fnc_stringReplace;
	_path = _editedPathEH;

	_type = false;
	{	
		_isFile = [_x, toLower _curSelText] call BIS_fnc_inString;
		if (_isFile) then {
			_type = true; 
		};
	} forEach ['.ext', '.sqf', '.fsm', '.sqm', '.html'];


	if ((str _curSel == str [0]) or (_curSelText == '')) then { 
		['Error: Please check your selection.', 1] call BIS_fnc_3DENNotification;
		systemchat 'Error: Please check your selection.'; 
	} else {

		_curSelParent = _curSel select [0, count _cursel - 1];
		_parentText = _efmEH_fileList tvText _curSelParent;
		
		_pathNewEH = getMissionPath '';
		_MissionWorldExtension = missionName + '.' + worldName + '\';  
		_editedPathEH = [_pathNewEH, _MissionWorldExtension, ''] call PX_fnc_stringReplace; 
		_path = '';

		if ((_parentText != _editedPathEH) || (_parentText == _pathNewEH)) then {
			_path = _editedPathEH + _parentText + '\';
		} else {
			_path = _pathNewEH;
		};
		
		[_type, _path, _curSelText] spawn VKN_EFM_fnc_deleteButton;
	};
"];

_EFM_saveButton ctrlAddEventHandler ["ButtonClick", "
	_efmEH_Main = findDisplay 3690;	
	_efmEH_fileList = _efmEH_Main displayCtrl 1500;
	_efmEH_codeBoxGroup = _efmEH_Main displayCtrl 14010;
	_efmEH_codeBoxGroupCode = _efmEH_Main displayCtrl 14011;
	_efmEH_codeBoxGroupLines = _efmEH_Main displayCtrl 14012;

	_fileData = ctrlText _efmEH_codeBoxGroupCode;

	_curSel = tvCurSel _efmEH_fileList;
	_curSelText = _efmEH_fileList tvText _curSel;

	if ((str _curSel == str [0]) or (_curSelText == '')) then { 
		['Error: Please check your selection.', 1] call BIS_fnc_3DENNotification;
		systemchat 'Error: Please check your selection.'; 
	} else {

		_curSelParent = _curSel select [0, count _cursel - 1];
		_parentText = _efmEH_fileList tvText _curSelParent;
		
		_pathNewEH = getMissionPath '';
		_MissionWorldExtension = missionName + '.' + worldName + '\';  
		_editedPathEH = [_pathNewEH, _MissionWorldExtension, ''] call PX_fnc_stringReplace; 
		_path = '';

		if ((_parentText != _editedPathEH) || (_parentText == _pathNewEH)) then {
			_path = _editedPathEH + _parentText + '\';
		} else {
			_path = _pathNewEH;
		};
	
		[_path, _curSelText, _fileData] spawn VKN_EFM_fnc_saveButton;
	};	
"];

_EFM_revertButton ctrlAddEventHandler ["ButtonClick", "	[] spawn VKN_EFM_fnc_revertButton;	"];
_EFM_newButton ctrlAddEventHandler ["ButtonClick", "	[] spawn VKN_EFM_fnc_newMenu;	"];



//Open selected file/folder in explorer
_EFM_openFolder ctrlAddEventHandler ["ButtonClick", "	
	_efmEH_Main = findDisplay 3690;	
	_efmEH_fileList = _efmEH_Main displayCtrl 1500;

	_curSel = tvCurSel _efmEH_fileList;
	_curSelText = _efmEH_fileList tvText _curSel;
	_curSelParent = _curSel select [0, count _cursel - 1];
	_parentText = _efmEH_fileList tvText _curSelParent;
	_pathNewEH = getMissionPath '';
	_MissionWorldExtension = missionName + '.' + worldName + '\';  
	_editedPathEH = [_pathNewEH, _MissionWorldExtension, ''] call PX_fnc_stringReplace; 
	_path = '';


	if ((_parentText != _editedPathEH) || (_parentText == _pathNewEH)) then {
		_path = _editedPathEH + _parentText;
	} else {
		_path = _pathNewEH;
	};
	
	_finalPath = [_path, '\', '\\'] call PX_fnc_stringReplace;

	_rtn = ['viking.openFolder', [_finalPath]] call (uiNamespace getVariable 'py3_fnc_callExtension');
"];

_EFM_copyButton ctrlAddEventHandler ["ButtonClick", "
	_efmEH_Main = findDisplay 3690;	
	_efmEH_codeBoxGroupCode = _efmEH_Main displayCtrl 14011;
	_efmEH_codeBoxGroupLines = _efmEH_Main displayCtrl 14012;
	
	_selectedText = ctrlTextSelection _efmEH_codeBoxGroupCode;
	copyToClipboard (_selectedText select 2);
"];

_EFM_PasteButton ctrlAddEventHandler ["ButtonClick", "
	_efmEH_Main = findDisplay 3690;	
	_efmEH_codeBoxGroupCode = _efmEH_Main displayCtrl 14011;
	
	_curText = ctrlText _efmEH_codeBoxGroupCode;
	_TextToPaste = copyFromClipboard;

	_efmEH_codeBoxGroupCode ctrlSetText format ['%1%2%3', _curText, endl, _TextToPaste];

	[_efmEH_codeBoxGroupCode, _efmEH_codeBoxGroupLines] call VKN_EFM_fnc_handleLineNumbers;
"];