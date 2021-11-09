/*
Script name:  fn_quickSupply.sqf
Created on:   12 October 2021
Author:       Curious

Description:  Quick Supply script for ammo crates.

License:      This file is under "Arma Public License No Derivatives (APL-ND)"
              More information can be found at:
              https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:      N/A
*/

_logic = param [0,objNull,[objNull]];
private _modulePos = position _logic;
private _sunEval = call VKN_fnc_sunEval;
private _time = [false , true] select (    (_sunEval <= 6) or (_sunEval >=21)  );

_parachute = createVehicle ["B_Parachute_02_F", [(_modulePos select 0), (_modulePos select 1), ((_modulePos select 2)+300)], [], 0, 'FLY'];
_crate = createVehicle ["B_supplyCrate_F", position _parachute, [], 0, 'NONE'];
_crate attachTo [_parachute, [0, 0, -1.3]];
_crate allowdamage false;

//maybe add task so people know where
//add ir strobe

_smoke = "SmokeShellBlue" createVehicle position _crate; 
_smoke attachTo [_crate, [0, 0, 0.45]]; 
_chem1 = "Chemlight_blue" createVehicle position _crate;
_chem2 = "Chemlight_blue" createVehicle position _crate;  
_chem1 attachTo [_crate, [0, 0, 0.45]];
_chem2 attachTo [_crate, [0, 0, 0]]; 

true