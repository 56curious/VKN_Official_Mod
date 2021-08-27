/*
Script name:    fn_ammoRepack.sqf
Created on:     16 ‎January ‎2021
Author:         Curious

License:		    This file is under "Arma Public License No Derivatives (APL-ND)"
				        More information can be found at:
				        https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    repack all magazines inside the players inventory.

Framework:      N/A

Parameters:
                0: object - unit to have magazines repacked.
Example:
				        player call VKN_fnc_ammoRepack;
*/
_AllMags = [];
_unit = _this;

_playerInv = itemsWithMagazines _unit;

{
  if (isClass (configFile >> "CfgMagazines" >> _x)) then {
    if !(_x in _AllMags) then {
      _AllMags pushBack _x;
    };
  };
} forEach _playerInv;

{

  _item = _x;

  _magazineSizeMax = getNumber (configfile >> "CfgMagazines" >> _item >> "count");
  // allow repack for all magazines with greater than 1 bullet
  if (_magazineSizeMax > 1) then {
      _magazineSize = 0;
      _magazinesAmmoFull = magazinesAmmoFull _unit;
      {
          if (_item isEqualTo (_x select 0)) then {
              if (!(_x select 2)) then {
                  _magazineSize = _magazineSize + (_x select 1);
              };
          };
      } forEach _magazinesAmmoFull;

      // remove all
      _unit removeMagazines _item;

      // Add full magazines back to player
      for "_i" from 1 to floor (_magazineSize / _magazineSizeMax) do
      {
          _unit addMagazine [_item, _magazineSizeMax];
      };
      // Add last non full magazine
      if ((_magazineSize % _magazineSizeMax) > 0) then {
          _unit addMagazine [_item, floor (_magazineSize % _magazineSizeMax)];
      };
      systemChat "Magazine Repacked";
  };
} forEach _AllMags;
