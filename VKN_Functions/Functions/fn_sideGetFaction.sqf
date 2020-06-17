/*
Script name:  fn_sideGetFaction.sqf
Created on:   05 May ‎2020
Author:       Curious

Description:  Get all factions in config format with a given side ID.

License:      This file is under "Arma Public License No Derivatives (APL-ND)"
              More information can be found at:
              https://www.bohemia.net/community/licenses/arma-public-license-nd

              Parameters:
                              0: side - side in integer format.

Example:      1 call VKN_fnc_sideGetFaction;
*/

_selectedSide = param [0, [1], [0, 1, 2, 3]];

_westFactions = [];
_eastFactions = [];
_indeFactions = [];
_civiFactions = [];
_selectedFaction = [];

//format each faction into its side
_fullfac = [] call BIS_fnc_getFactions;
{
  _value = getNumber (configfile >> "CfgFactionClasses" >> _x >> "side");
  switch (_value) do {
      case (0): {
          _eastFactions pushBack _x;
      };
      case (1): {
          _westFactions pushBack _x;
      };
      case (2): {
          _indeFactions pushBack _x;
      };
      case (3): {
          _civiFactions pushBack _x;
      };
      default {};
  };
} forEach _fullfac;


switch (_selectedSide) do {
    case (0): {
      _selectedFaction = _eastFactions;
    };
    case (1): {
      _selectedFaction = _westFactions;
    };
    case (2): {
      _selectedFaction = _indeFactions;
    };
    case (3): {
      _selectedFaction = _civiFactions;
    };
};

_selectedFaction
