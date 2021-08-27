/*
Script name:    fn_loadSortMissionRoot.sqf
Created on:     13 August ‎2021
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with folders/files in mission root for tool.

Framework:      External File Manager

Parameters:
				N/A
*/
//stop fnc if display isn't open
_efm_main = findDisplay 3690;
if (isnil "_efm_main") exitwith {
    systemChat "The display is not open, please try again!";
    false
};

params ["_fileList", "_editedPath", "_efm_fileList", "_pathNew", "_MissionWorldExtension"];

_fileListAllowed = [];

{
	_x params ["_curpath", "_curFilesandFolders"];

	_curpath = [_curpath, "\\", "\"] call PX_fnc_stringReplace; 

	//Fix path sting to just mission folder and or sub dir for later use in the CT_Tree
	_curPathReduced = [_curpath, _editedPath, ""] call PX_fnc_stringReplace;
	_FilesAllowed = [];
	{ 
		//Iterate each file and folder, removing the files/folders that do not have an extension
		_curFile = _x; 
		{	
			//check if extension is in the file name, removes incompat elements
			_fileAllowed = [_x, toLower _curFile] call BIS_fnc_inString;
			if (_fileAllowed) then {
				_FilesAllowed pushBack _curFile;
				_allowedFileCount = _allowedFileCount + 1; 
			};
		} forEach [".ext", ".sqf", ".fsm", ".sqm", ".html"];
	} forEach _curFilesandFolders;

	//add all the files for this directory into array
	_fileListAllowed pushBack [_curPathReduced, _FilesAllowed];
} forEach _fileList;


//Might be better to make it a function, that gets called each "level" so that it would do anything deeper, for now stacks folders onto level 2 and increases path title 
//example: t\ 
//			t\t\ 
//			t\t\t 
_efm_fileList tvAdd [[], ([_pathNew, _MissionWorldExtension, ""] call PX_fnc_stringReplace)];
{
	_x params ["_folderPath", "_folderFiles"];
	_parent = _forEachIndex;
	_efm_fileList tvAdd [[0], _folderPath];
	//to interact with this TV element use [_parent]
	_efm_fileList tvSetPicture [[0, _parent], "\a3\3den\data\cfg3den\layer\icon_ca.paa"];
	{ 
		_efm_fileList tvAdd [[0, _parent], _x];
		//to interact with this TV element, use [_parent, _forEachIndex]
		_EFM_fileList tvSetPicture [[0, _parent, _forEachIndex], "\a3\ui_f\data\igui\cfg\simpletasks\types\documents_ca.paa"];
	} forEach _folderFiles;

} ForEach _fileListAllowed;

_fileListAllowed