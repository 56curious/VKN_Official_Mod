/*
	File: fn_collectArsenalLoadouts.sqf
	Author: Curious

	Description:
	Search through the clients arsenal loadouts and return a random working loadout from the array. if none are found or error occours, use predefined.

	Parameter(s):

  _this: Object - Unit to apply to.

	Returned value:
	Array: iterable array of loadout items to add.
*/

//Default data assign
_completeLoadoutArray = profilenamespace getvariable ["bis_fnc_saveInventory_data",[]];
_randomNumber = floor random (count _completeLoadoutArray);
_title = "undefined Title";
_items = "undefined items";
_unit = _this param [0, player, [player]];


//Get info randomly and or invert random grab.
if (_randomNumber % 2 == 0) then {
  _title = _completeLoadoutArray select _randomNumber;
  _items = _completeLoadoutArray select _randomNumber + 1;
} else {
  _title = _completeLoadoutArray select _randomNumber - 1;
  _items = _completeLoadoutArray select _randomNumber;
};

// seperate each part
_uniform = _items select 0 select 0;
_uniformitems = _items select 0 select 1;

_vest = _items select 1 select 0;
_vestitems = _items select 1 select 1;

_backpack = _items select 2 select 0;
_backpackitems = _items select 2 select 1;

_headgear = _items select 3;
_facewear = _items select 4;

_binocs = _items select 5;

_primweapon = _items select 6 select 0;
_primweaponattach = _items select 6 select 1;
_primweaponammo = _items select 6 select 2;

_launchweapon = _items select 7 select 0;
_launchweaponattach = _items select 7 select 1;
_launchweaponammo = _items select 7 select 2;

_secweapon = _items select 8 select 0;
_secweaponattach = _items select 8 select 1;
_secweaponammo = _items select 8 select 2;

_map = _items select 9 select 0;
_compass = _items select 9 select 1;
_watch = _items select 9 select 2;
_radio = _items select 9 select 3;
_gps = _items select 9 select 4;


//apply loadout to unit

removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeUniform _unit;
removeVest _unit;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

//Add Gear
if ("" in _uniform) then {
  _unit forceAddUniform _uniform;
  { _unit addItemToUniform _x } forEach _uniformitems;
};
if ("" in _vest) then {
  _unit addVest _vest;
  { _unit addItemToVest _x } forEach _vestitems;
};
if ("" in _backpack) then {
   _unit addBackpack _backpack;
   {  _unit addItemToBackpack _x  } forEach _backpackitems;
 };

if ("" in _facewear) then {_unit addGoggles _facewear};
if ("" in _headgear) then {_unit addHeadgear _headgear};


//Add Weapons
if ("" in _primweapon) then {
  _unit addWeapon _primweapon;
  _unit addPrimaryWeaponItem _primweaponammo;
  { _unit addPrimaryWeaponItem _x } forEach _primweaponattach;
};

if ("" in _secweapon) then {
  _unit addWeapon _secweapon;
  _unit addPrimaryWeaponItem _secweaponammo;
  { _unit addHandgunItem _x } forEach _secweaponattach;
};

if ("" in _launchweapon) then {
  _unit addWeapon _launchweapon;
  _unit addPrimaryWeaponItem _launchweaponammo;
  { _unit addPrimaryWeaponItem _x } forEach _launchweaponattach;
};

//Misc Items
if ("" in _map) then {  _unit addItem _map; _unit linkItem _map; };
if ("" in _compass) then {  _unit addItem _compass; _unit linkItem _compass; };
if ("" in _watch) then {  _unit addItem _watch; _unit linkItem _watch; };
if ("" in _radio) then {  _unit addItem _radio; _unit linkItem _radio; };
if ("" in _gps) then {  _unit addItem _gps; _unit linkItem _gps; };

if ("" in _binocs) then { _unit addWeapon _binocs; };
