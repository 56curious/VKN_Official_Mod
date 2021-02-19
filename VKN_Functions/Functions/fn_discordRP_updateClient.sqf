/*
Script name:    fn_discordRP_updateClient.sqf
Created on:     17 July 2019
Author:         Curious

License:		    This file is under "Arma Public License No Derivatives (APL-ND)"
				        More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Deal with clients UI updates and set the Discord Rich Presence to fit.
                Requires https://steamcommunity.com/sharedfiles/filedetails/?id=1493485159


Framework:      Discord Rich Presense

Parameters:
                N/A
*/

//Active displays and their names for DRP to work correctly
/*
Display #0, Display #313, Display #46, Display #49, Display #12
https://docs.google.com/spreadsheets/d/1mfvetmBp2iC44rOzQwNnvlSzQyXAYbkOEw2vhFLLJGg/edit#gid=0
*/

while {true} do {
  _state = false;
  //Check for Connors DRP mod.
  if (isClass(configFile >> "CfgPatches" >> "CAU_DiscordRichPresence")) then {

    _fnc_CheckState = {
      _finalState = "Default State";
      if (isClass(configFile >> "CfgPatches" >> "ace_main")) then {
        _state = player getVariable ["ACE_isUnconscious", false];
        if (_state isEqualTo true) then { _finalState = "Unconscious"; } else { _finalState = "Alive"; };

      } else {
        _state = getDammage player;
        if (_state == 0) then {
          _finalState = "Alive";
        };
        if (_state >= 0.2) then {
          _finalState = "Slightly Injuried";
        };
        if (_state >= 0.4) then {
          _finalState = "Quite Injuried";
        };
        if (_state >= 0.7) then {
          _finalState = "Very Injuried";
        };
        if (_state == 1) then {
          _finalState = "Unconscious/Dead";
        };2
      };
      hint str _finalState;
      _finalState
    };

    {
      //Case Select for each display open in the default game-state environment.
      switch (str _x) do {
        case ("Display #4"): {
          _newDetails = "Currently adjusting their controls.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #5"): {
          _newDetails = "Currently adjusting their video settings.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #6"): {
          _newDetails = "Currently adjusting their audio settings.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #12"): {
          _newDetails = "Currently looking at the map.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #46"): {
          _newDetails = format ["Playing %1 - Created by %2", getMissionConfigValue ["onLoadName", "Viking PMC Operation"], getMissionConfigValue ["Author", "Unknown Author"]];
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #49"): {
          _newDetails = "Currently in the pause menu.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #151"): {
          _newDetails = "Currently adjusting their game settings.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #154"): {
          _newDetails = "Currently adjusting their UI layout.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #160"): {
          _newDetails = "Using a UAV.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #162"): {
          _newDetails = "Viewing their field manual.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #174"): {
          _newDetails = "Looking at the DLC shop.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #312"): {
          _newDetails = format ["Zeusing %1 - Created by %2", getMissionConfigValue ["onLoadName", "Viking PMC Operation"], getMissionConfigValue ["Author", "Unknown Author"]];
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #313"): {
          _newDetails = "In the 3DEN Editor";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #314"): {
          _newDetails = "In the splendid Camera taking screenshots.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        case ("Display #602"): {
          _newDetails = "In their inventory.";
          _newState = format ["Status: %1 | Playing at: %2 on %3", call _fnc_CheckState, if (serverName == "") then {"Server Unknown"} else {serverName}, worldName];
        };
        default {
          _newDetails = "";
          _newState = "";
        };
      };

    } forEach allDisplays;

    [ ["UpdateDetails", _newDetails], ["UpdateState", _newState] ] call DiscordRichPresence_fnc_update;

  };

sleep 5; // temp until the display detection system is made
};
