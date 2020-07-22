/*
Script name:    fn_formatChange.sqf
Created on:     08 July ‎2020
Author:         Curious

License:		    This file is under "Arma Public License No Derivatives (APL-ND)"
				        More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Change the format of a data type.

Framework:      Mission Template

Parameters:
				        0: String - data type
                1: String - data type required to switch to

Example:        ["side", "Integer"] call VKN_fnc_formatChange;
*/

_curDataType = param [0, objNull, [0, 1, 2, 3]];
_requestedDataType = param [1, objNull, [0, 1, 2, 3]];
