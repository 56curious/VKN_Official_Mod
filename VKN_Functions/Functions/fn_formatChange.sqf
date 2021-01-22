/*
Script name: fn_formatChange.sqf
Created on: 08 July ‎2020
Author: Curious

License:		 This file is under "Arma Public License No Derivatives (APL-ND)"
More information can be found at:
https:// www.bohemia.net/community/licenses/arma-public-license-nd

Description: Change the format of a data type.
Supported data types are:
Array
string
Number
Boolean
side

Framework: Mission Template

parameters:
0: Any - Value
1: string - data type
2: string - data type required to switch to

Example: [west, "side", "Number"] call VKN_fnc_formatChange;
*/

_value = param [0, objNull];
_curDatatype = param [1, objNull];
_requestedDatatype = param [2, objNull];

_export = "";

switch (toLower _curDatatype) do {
    case ("side"): {
        switch (toLower _requestedDatatype) do {
            case ("number"): {
                switch (toLower _value) do {
                    case (west): {
                        _export = 1;
                    };
                    case ("west"): {
                        _export = 1;
                    };
                    case (east): {
                        _export = 0;
                    };
                    case ("east"): {
                        _export = 0;
                    };
                    case (independent): {
                        _export = 2;
                    };
                    case ("independent"): {
                        _export = 2;
                    };
                    case (civilian): {
                        _export = 3;
                    };
                    case ("civilian"): {
                        _export = 3;
                    };
                    default {
                        _export = "The data type given cannot be converted to a number.";
                    };
                };
            };
        };
        
        case ("string"): {
            switch (toLower _value) do {
                case (0): {
                    _export = "east";
                };
                case (1): {
                    _export = "west";
                };
                case (2): {
                    _export = "independent";
                };
                case (3): {
                    _export = "civilian";
                };
                default {
                    _export = "The data type given cannot be converted to a string.";
                };
            };
        };
        default {
            _export = "No requested data type was given or the current data type cannot be switched to requested data type.";
        };
    };
    
    // Next data type below:
};
default {
    _export = "The current data type was not given.";
};
};

_export