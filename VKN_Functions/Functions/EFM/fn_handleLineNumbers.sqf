/*
Script name:    fn_handleLineNumbers.sqf
Created on:     22 August ‎2021
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with UI elements for EFM tool.

Framework:      External File Manager

Parameters:
				0: CONTROL - control with CT_EDIT.
				1: CONTROL - control with CT_STRUCTURED_TEXT.

Example:
				[_myEditCtrl, _myStrucTextCtrl] call VKN_EFM_fnc_handleLineNumbers;
*/
/*
Line number code and code box adjuster from:
https://github.com/R3voA3/3den-Enhanced/blob/master/3denEnhanced/functions/GUI/functionsViewer/fn_functionsViewer_onTreeSelChanged.sqf#L45
Written by R3vo
*/

params ["_ctrlEdit", "_ctrlStructuredText"];
_linesText = "";

_textHeight = (1.2 max (ctrlTextHeight _ctrlEdit));
_numLines = round (_textHeight / 0.0315); //0.0315 default

for '_i' from 1 to _numLines do { 
	_linesText = _linesText + format [' %1<br/>', _i]; 
};

_ctrlEdit ctrlSetPositionH _textHeight; 
_ctrlEdit ctrlCommit 0; 

_ctrlStructuredText ctrlSetPositionH _textHeight; 
_ctrlStructuredText ctrlCommit 0; 
_ctrlStructuredText ctrlSetStructuredText parseText _linesText;

