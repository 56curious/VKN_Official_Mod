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
//Check for Connors DRP mod.
if (isClass(configFile >> "CfgPatches" >> "CAU_DiscordRichPresence")) then {

  _fnc_CheckState = {
    _finalState = "Default State";
    if (isClass(configFile >> "CfgPatches" >> "ace_main")) then {
      _state = player getVariable ["ACE_isUnconscious", false];
      if ((_state == True) OR (_state == false)) then {
        if (_state == True) then { _finalState = "Unconscious"; } else { _finalState = "Alive"; };
      };

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
      };
    };
    hint str _finalState;
    _finalState
  };

  {
    //Case Select for each display open in the default game-state environment.

    switch (str _x) do {
        case ("Display #46"): {
          [
            ["UpdateDetails", format ["%1 - Created by %2", getMissionConfigValue ["onLoadName", "Viking PMC Operation"], getMissionConfigValue ["Author", "Unknown Author"]]],
            ["UpdateState",
              format [
                "Status: %1 | Playing at: %2 on %3",
                call _fnc_CheckState,
                if (serverName == "") then {"Server Unknown"} else {serverName},
                worldName
              ]
            ]
          ] call DiscordRichPresence_fnc_update;
        };
    };

  } forEach allDisplays;

};
