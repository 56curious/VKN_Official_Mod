/*
Script name:    fn_VTT_BasicSettingspDisplay.sqf
Created on:     04 January ‎2021
Author:         Curious

License:		    This file is under "Arma Public License No Derivatives (APL-ND)"
				        More information can be found at:
				        https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    deal with UI elements for tool

Framework:      Mission Template

Parameters:
				        N/A
*/
//Don't run if not in 3den
if !(is3DEN) exitWith {systemChat "You're not in the editor! Please go into the editor to run this function!"};

//Setup settings and define variables
_VTT_Basic_Settings_Display = findDisplay 313 createDisplay "VKN_Template_Tool_Basic_Settings";

if (isNull _VTT_Basic_Settings_Display) exitWith {systemChat "can't find display."; false};

//Disable Escape Key
_VTT_Basic_Settings_Display displayAddEventHandler ["KeyDown", "if ((_this select 1) == 1) then { true }"];

VKN_Template_Tool_Basic_Settings_open = true;
VKN_Template_Tool_Basic_Settings_Complete = false;
VKN_Template_Tool_selectionChange = true;


//Init tool and menus
_sides = [West, East, Independent];

_ctrl_Players_Side_Combo = _VTT_Basic_Settings_Display displayCtrl 2100;
_ctrl_Faction_Combo = _VTT_Basic_Settings_Display displayCtrl 2101;
_ctrl_Squad_Combo = _VTT_Basic_Settings_Display displayCtrl 2102;
_ctrl_Spectator_Combo = _VTT_Basic_Settings_Display displayCtrl 2103;

_ctrl_complete_button = _VTT_Basic_Settings_Display displayCtrl 1600;

_ctrl_groups_check_Box = _VTT_Basic_Settings_Display displayCtrl 2800;
_ctrl_loadout_check_Box = _VTT_Basic_Settings_Display displayCtrl 2801;

//Add sides to listbox
{ _ctrl_Players_Side_Combo lbAdd str _x } forEach _sides;

//apply events to list boxes
_ctrl_Players_Side_Combo ctrlAddEventHandler [
  "LBSelChanged",
  "
    _VTT_Basic_Settings_Display = findDisplay 3481;
    _ctrl_Players_Side_Combo = _VTT_Basic_Settings_Display displayCtrl 2100;
    _ctrl_Faction_Combo = _VTT_Basic_Settings_Display displayCtrl 2101;
    _ctrl_Squad_Combo = _VTT_Basic_Settings_Display displayCtrl 2102;
    VKN_Template_Tool_selectionChange = true;
    lbClear _ctrl_Faction_Combo;
    lbClear _ctrl_Squad_Combo;
    [_ctrl_Players_Side_Combo, _ctrl_Faction_Combo, _ctrl_Squad_Combo] spawn VKN_fnc_sideChanged;
  "
]; //Side LB

_ctrl_Faction_Combo ctrlAddEventHandler [
  "LBSelChanged",
  "
    _VTT_Basic_Settings_Display = findDisplay 3481;
    _ctrl_Players_Side_Combo = _VTT_Basic_Settings_Display displayCtrl 2100;
    _ctrl_Faction_Combo = _VTT_Basic_Settings_Display displayCtrl 2101;
    _ctrl_Squad_Combo = _VTT_Basic_Settings_Display displayCtrl 2102;
    VKN_Template_Tool_selectionChange = true;
    lbClear _ctrl_Squad_Combo;
    [_ctrl_Players_Side_Combo, _ctrl_Faction_Combo, _ctrl_Squad_Combo] spawn VKN_fnc_sideChanged;
  "
]; //Faction LB

//fnc to check side and then filter faction
VKN_fnc_sideChanged = {
  _ctrl_Players_Side_Combo = _this select 0;
  _ctrl_Faction_Combo = _this select 1;
  _ctrl_Squad_Combo = _this select 2;
  waitUntil {VKN_Template_Tool_selectionChange};
  _factionList = [];

  //get the selected side
  _side_lbText = "";
  _cursorIndex = lbCurSel _ctrl_Players_Side_Combo;
  _side_lbText = _ctrl_Players_Side_Combo lbText _cursorIndex;
  _side = toUpper _side_lbText;

  //get all factions in a side.
  switch (_side) do {
      case ("WEST"): {
        _side = "West";
        _factionList = 1 call VKN_fnc_sideGetFaction;
      };
      case ("EAST"): {
        _side = "East";
        _factionList = 0 call VKN_fnc_sideGetFaction;
      };
      case ("GUER"): {
        _side = "Indep";
        _factionList = 2 call VKN_fnc_sideGetFaction;
      };
      default {};
  };

  //get the selected faction
  { _ctrl_Faction_Combo lbadd _x; } forEach _factionList;

  _faction_lbText = "";
  private _cursorIndex = lbCurSel _ctrl_Faction_Combo;
  _faction_lbText = _ctrl_Faction_Combo lbText _cursorIndex;
  _curSelFac = toUpper _faction_lbText;

  //apply group
  _squadArray = "true" configClasses (configfile >> "CfgGroups" >> _side >> _curSelFac >> "Infantry");
  {
    _ctrl_Squad_Combo lbadd (getText( _x >> "name"));
    _ctrl_Squad_Combo lbSetData [_forEachIndex, str _x];
  } forEach _squadArray;

  VKN_Template_Tool_selectionChange = false;
};


//Apply spectator settings
_Specoptions = ["All Enabled", "All Disabled", "Freecam Disabled", "3pp Disabled", "Freecam only", "1pp Disabled"];
{ _ctrl_Spectator_Combo lbAdd _x } forEach _Specoptions;
_ctrl_Spectator_Combo lbSetCurSel  2;


_ctrl_complete_button buttonSetAction "VKN_Template_Tool_Basic_Settings_Complete = true;";
[_ctrl_Players_Side_Combo, _ctrl_Faction_Combo, _ctrl_Squad_Combo] spawn VKN_fnc_sideChanged;
waitUntil {VKN_Template_Tool_Basic_Settings_Complete isEqualTo true};

//If a listbox is missed, default to first of each type.
if (_ctrl_Players_Side_Combo lbText lbCurSel _ctrl_Players_Side_Combo == "") then {
  _ctrl_Players_Side_Combo lbSetCurSel 0;
  systemChat "Side option was missed, taking default instead.";
};

//If faction is missed, get first squad from config.
if (_ctrl_Faction_Combo lbText lbCurSel _ctrl_Faction_Combo == "") then {
  _ctrl_Faction_Combo lbSetCurSel 0;
  systemChat "Faction option was missed, taking default instead.";
  _ctrl_Squad_Combo lbSetCurSel 0;
};

if (_ctrl_Squad_Combo lbText lbCurSel _ctrl_Squad_Combo == "") then {
  _ctrl_Squad_Combo lbSetCurSel 0;
  systemChat "Squad option was missed, taking default instead.";
};

//Fixed missing indep factions not spawning.
//get the selected side
_side_lbText = "";
_cursorIndex = lbCurSel _ctrl_Players_Side_Combo;
_side_lbText = _ctrl_Players_Side_Combo lbText _cursorIndex;
_side_Option_Temp = toUpper _side_lbText;
//get all factions in a side.
_side_Option = "West";
switch (_side_Option_Temp) do {
    case ("WEST"): {
      _side_Option = "West";
    };
    case ("EAST"): {
      _side_Option = "East";
    };
    case ("GUER"): {
      _side_Option = "Indep";
    };
    default {};
};



_factions_option = _ctrl_Faction_Combo lbText lbCurSel _ctrl_Faction_Combo;
_squads_option = ([_ctrl_Squad_Combo lbData lbCurSel _ctrl_Squad_Combo] call BIS_fnc_configPath) select 5; //Only option extracted not as a string
_spectate_option = _ctrl_Spectator_Combo lbText lbCurSel _ctrl_Spectator_Combo;
_saveLoadouts = cbChecked _ctrl_loadout_check_Box;
_dynamicGroups = cbChecked _ctrl_groups_check_Box;


//default is freecam disabled (auto selected in lbCurSel 2)
_fncParams = "[player, [], false, false, true]";
switch (_spectate_option) do {
  case "All Enabled": {_fncParams = "[player, [], true, true, true, true, true, true, true, true]";};
  case "All Disabled": {_fncParams = "[player, [], false, false, false, false, false, false, false, false]";};
  case "Freecam Disabled": {_fncParams = "[player, [], false, false]";}; 
  case "3pp Disabled": {_fncParams = "[player, [], false, false, false]";};
  case "Freecam only": {_fncParams = "[player, [], false, true, false]";};
  case "1pp Disabled": {_fncParams = "[player, [], false, false, true]";};
  default {_fncParams = "[player, [], false, false, true]";};
};

missionNamespace setVariable ["VKN_VTT_SpectatorOptions", format ["%1 call BIS_fnc_EGSpectator;", _fncParams] ];


_VTT_Basic_Settings_Display closedisplay 0;


//return true when complete
_return = [_side_Option, _factions_option, _squads_option, _spectate_option, _saveLoadouts, _dynamicGroups];
missionNamespace setVariable ["VKN_VTT_basicSettingsReturn", _return];
