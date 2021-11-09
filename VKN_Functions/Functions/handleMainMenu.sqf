/*
Script name:    fn_handleMainMenu.sqf
Created on:     15 August ‎2021
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with UI elements for main menu.

Framework:      Main Menu

Parameters:
				N/A
*/

#include "\a3\Ui_f\hpp\defineResincl.inc"
#include "\a3\Ui_f\hpp\defineResinclDesign.inc"
#include "\a3\Ui_f\hpp\defineDIKCodes.inc"

#define MENU_TIME		0.2
//--- Delay before another spotlight rolls in
#define SPOTLIGHT_DELAY		10
//--- Commit time of spotlight change animation
#define SPOTLIGHT_MOVE		0.7
//--- Commit time of spotlight change animation when triggered manually
#define SPOTLIGHT_MOVE_USER	0.3
//--- Commit time of spotlight button when appearing
#define SPOTLIGHT_BUTTON_IN	0.1
//--- Commit time of spotlight button when disappearing
#define SPOTLIGHT_BUTTON_OUT	0.3
//--- Spotlight picture zoom on hover (disabled at this moment)
#define SPOTLIGHT_ZOOM		1.2
//--- Commit time of the zoom animation (disabled at this moment)
#define SPOTLIGHT_TIME		0.1

disableserialization;
private _mode = _this select 0;
private _params = _this select 1;
private _class = _this select 2;




switch _mode do {
	case "onLoad": {
		
	};
};
