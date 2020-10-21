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

      systemChat str _magazineSize;

      // Add full magazines back to player
      for "_i" from 1 to floor (_magazineSize / _magazineSizeMax) do
      {
          _unit addMagazine [_item, _magazineSizeMax];
          systemChat "Added Mag";
      };
      // Add last non full magazine
      if ((_magazineSize % _magazineSizeMax) > 0) then {
          _unit addMagazine [_item, floor (_magazineSize % _magazineSizeMax)];
      };
      systemChat "Ammo Repacked";
  };
sleep 1;
} forEach _AllMags;
