/*
File: fn_creditsVKN_movie.sqf
Author: Karel Moricky, Borivoj Hlava, Curious

Description:
Movie credits function.

parameter(s):
_this select 0: Display - Display for credits.
_this select 1: Number - mode: 0 for end of credits, 1 for start of credits.

Returned value:
None
*/

private ["_display", "_displayMain"];
_displayMain = _this param [0, findDisplay 46, [displayNull]];
_mode = _this param [1, 1, [0]];

BIS_fnc_credits_movie_script = [_displayMain, _mode] spawn {
    disableSerialization;
    uiNamespace setVariable ["BIS_fnc_credits_movie_script", BIS_fnc_credits_movie_script];
    _displayMain = _this select 0;
    _mode = _this select 1;
    
    if (_mode > 0) then {
        // --- Show display
        102 cuttext ["", "black out", 0];
        (["BIS_fnc_credits_movie"] call bis_fnc_rscLayer) cutRsc ["RscCredits", "plain"];
        waitUntil {
            !isNull (uiNamespace getVariable ["A3_RscCredits", displayNull])
        };
        
        with uiNamespace do {
            disableSerialization;
            
            // ----- Basic Variables ------
            _backColor = [0, 0, 0, 1];
            		// background color
            _delay = 10;
            						// travel time
            
            _supporterArray = [""];
            		// moved here because of lag, here nobody should see it
            _display = uiNamespace getVariable "A3_RscCredits";
            // _display = findDisplay 999;
            BIS_fnc_credits_A3_display = _display;
            
            // --- Background
            _ctrlBack = _display displayCtrl 1000;
            _ctrlBack ctrlsetBackgroundColor _backColor;
            _ctrlBack ctrlsetPosition [safeZoneXAbs, safeZoneY, safeZoneWAbs, safeZoneH];
            _ctrlBack ctrlCommit 0;
            
            _ctrlBlackLeft = _display displayCtrl 9098;
            _ctrlBlackLeft ctrlsetBackgroundColor [0, 0, 0, 1];
            _ctrlBlackLeft ctrlsetPosition [safeZoneX - 10, safeZoneY, 10, safeZoneH];
            _ctrlBlackLeft ctrlCommit 0;
            
            _ctrlBlackRight = _display displayCtrl 9099;
            _ctrlBlackRight ctrlsetBackgroundColor [0, 0, 0, 1];
            _ctrlBlackRight ctrlsetPosition [safeZoneX + safeZoneW, safeZoneY, 10, safeZoneH];
            _ctrlBlackRight ctrlCommit 0;
            /*
            _BGpicture = gettext (configFile >> "CfgWorlds" >> "Altis" >> "pictureMap");
            _ctrlBG = _display displayCtrl 1301;
            _ctrlBG ctrlsettext _BGpicture;
            _ctrlBG ctrlsettextColor [1, 1, 1, 1];
            _ctrlBG_W = safeZoneW;
            _ctrlBG_H = safeZoneH;
            _ctrlBG_X = safeZoneX;
            _ctrlBG_Y = safeZoneY;
            _ctrlBG ctrlsetPosition [_ctrlBG_X, _ctrlBG_Y, _ctrlBG_W, _ctrlBG_H];
            _ctrlBG ctrlCommit 0;
            */
            // uiSleep 1;
            102 cuttext ["", "black in", 0.25];
            // 3 fadeMusic 0.5;
            
            // --- EH - keydown
            BIS_fnc_credits_A3_keydown = {
                _key = _this select 1;
                _display = BIS_fnc_credits_A3_display;
                
                // --- Escape
                if ((_key == 156) || (_key == 28) || (_key == 57) || (_key == 1)) exitwith {
                    // num_enter, enter, space, esc
                    terminate BIS_fnc_credits_movie_script;
                    BIS_fnc_credits_A3_display closeDisplay 0;
                    (["BIS_fnc_credits_movie"] call BIS_fnc_rscLayer) cuttext ["", "PLAin"];
                };
            };
            uiNamespace setVariable ["BIS_fnc_credits_A3_keydown", BIS_fnc_credits_A3_keydown];
            _display displayAddEventHandler ["keydown", "with uiNamespace do {
                _this call BIS_fnc_credits_A3_keydown;
            };
        "];
        
        // --- Start logo
        _ctrllogoA = _display displayCtrl 1310;
        if (395180 in getDLCs 1) then {
            _ctrllogoA ctrlsettext "\a3\Ui_f\data\logos\arma3apex_shadow_ca.paa";
        } else {
            _ctrllogoA ctrlsettext "\a3\Ui_f\data\logos\arma3_shadow_ca.paa";
        };
        _ctrllogoA ctrlsettextColor [1, 1, 1, 1];
        _ctrllogoA_W = 0.25 * safeZoneW;
        _ctrllogoA_H = 0.25 * safeZoneH;
        _ctrllogoA_X = 0.5 - _ctrllogoA_W / 2;
        _ctrllogoA_Y = safeZoneY + safeZoneH;
        _ctrllogoA ctrlsetPosition [_ctrllogoA_X, _ctrllogoA_Y, _ctrllogoA_W, _ctrllogoA_H];
        _ctrllogoA ctrlCommit 0;
        
        _ctrllogoA_Y = safeZoneY - _ctrllogoA_H;
        _ctrllogoA ctrlsetPosition [_ctrllogoA_X, _ctrllogoA_Y, _ctrllogoA_W, _ctrllogoA_H];
        _delayCoef = _delay * (1 + (_ctrllogoA_H/safeZoneH));
        _ctrllogoA ctrlCommit _delayCoef;
        
        uiSleep 5;
        
        // --- names
        _oldId = 0;
        _id = 1;
        _c = 0;
        _cmod = 10;
        while {_id != _oldId} do {
            _oldId = _id;
            _nameArray = [_id] call VKN_fnc_creditsVKN_movieConfig;
            _ctrltext = _display displayCtrl 9011;
            _ctrltextold = _display displayCtrl 9012;
            
            if !((_nameArray select 2) < 0) then {
                _id = _id + 1;
                _text = (_nameArray select 0) + "<br/>" + (_nameArray select 1) + "<br/>";
                
                // Paragraph
                _ctrltext = _display displayCtrl (9000 + (_c % _cmod));
                _ctrltext ctrlsetstructuredtext parsetext _text;
                _ctrltext_W = 0.8 * safeZoneW;
                _ctrltext_H = ctrltextHeight _ctrltext;
                _ctrltext_X = safeZoneX + (safeZoneW - _ctrltext_W)/2;
                _ctrltext_Y = safeZoneY + safeZoneH;
                _ctrltext ctrlsetPosition [_ctrltext_X, _ctrltext_Y, _ctrltext_W, _ctrltext_H];
                _ctrltext ctrlCommit 0;
                
                // move up
                _ctrltext_Y = safeZoneY - _ctrltext_H;
                _ctrltext ctrlsetPosition [_ctrltext_X, _ctrltext_Y, _ctrltext_W, _ctrltext_H];
                _delayCoef = _delay * (1 + (_ctrltext_H/safeZoneH));
                _ctrltext ctrlCommit _delayCoef;
                
                _c = _c + 1;
                waitUntil {
                    (((ctrlposition _ctrltext) select 1) + ctrltextHeight _ctrltext) < (safeZoneY + safeZoneH)
                };
            } else {
                // --- Supporters
                // --- Title
                _text = (_supporterArray select 0) + "<br/>";
                // Paragraph
                _ctrltext = _display displayCtrl (9000 + (_c % _cmod));
                _ctrltext ctrlsetstructuredtext parsetext _text;
                _ctrltext_W = 0.8 * safeZoneW;
                _ctrltext_H = ctrltextHeight _ctrltext;
                _ctrltext_X = safeZoneX + (safeZoneW - _ctrltext_W)/2;
                _ctrltext_Y = safeZoneY + safeZoneH;
                _ctrltext ctrlsetPosition [_ctrltext_X, _ctrltext_Y, _ctrltext_W, _ctrltext_H];
                _ctrltext ctrlCommit 0;
                
                // move up
                _ctrltext_Y = safeZoneY - _ctrltext_H;
                _ctrltext ctrlsetPosition [_ctrltext_X, _ctrltext_Y, _ctrltext_W, _ctrltext_H];
                _delayCoef = _delay * (1 + (_ctrltext_H/safeZoneH));
                _ctrltext ctrlCommit _delayCoef;
                
                _c = _c + 1;
                waitUntil {
                    (((ctrlposition _ctrltext) select 1) + ctrltextHeight _ctrltext) < (safeZoneY + safeZoneH)
                };
                
                // --- names
                _intPos = 0.1 * safeZoneW;
                _i = 0;
                _cmod = 9;
                _height = 0;
                {
                    if ((typeName _x) == "strinG") then {
                        _heightold = _height;
                        _text = _x;
                        // Paragraph
                        _ctrltext = _display displayCtrl (9000 + (_c % _cmod));
                        _ctrltext ctrlsetstructuredtext parsetext _text;
                        _ctrltext_W = 0.8 * safeZoneW / 3;
                        _ctrltext_H = ctrltextHeight _ctrltext;
                        _ctrltext_X = safeZoneX + _intPos;
                        _ctrltext_Y = safeZoneY + safeZoneH;
                        _ctrltext ctrlsetPosition [_ctrltext_X, _ctrltext_Y, _ctrltext_W, _ctrltext_H];
                        _ctrltext ctrlCommit 0;
                        
                        // move up
                        _ctrltext_Y = safeZoneY - _ctrltext_H;
                        _ctrltext ctrlsetPosition [_ctrltext_X, _ctrltext_Y, _ctrltext_W, _ctrltext_H];
                        _delayCoef = _delay * (1 + (_ctrltext_H/safeZoneH));
                        _ctrltext ctrlCommit _delayCoef;
                        
                        _c = _c + 1;
                        _i = _i + 1;
                        _intPos = _intPos + safeZoneW * (0.8/3);
                        _height = ctrltextHeight _ctrltext;
                        
                        if (_height > _heightold) then {
                            _ctrltextold = _ctrltext
                        };
                        if (_i == 3) then {
                            _height = 0;
                            _i = 0;
                            _intPos = 0.1 * safeZoneW;
                            waitUntil {
                                (((ctrlposition _ctrltextold) select 1) + ctrltextHeight _ctrltextold) < (safeZoneY + safeZoneH)
                            };
                        };
                    };
                } forEach (_supporterArray select 1);
                waitUntil {
                    (((ctrlposition _ctrltextold) select 1) + ctrltextHeight _ctrltextold) < (safeZoneY + safeZoneH)
                };
                _cmod = 10;
            };
        };
        
        uiSleep (_delay / 4);
        
        // --- Final logo
        _ctrllogo = _display displayCtrl (1302 + (_c % _cmod));
        _ctrllogo ctrlsettext "A3\Ui_f\data\logos\bi_white_ca.paa";
        _ctrllogo ctrlsettextColor [1, 1, 1, 1];
        _ctrllogo_W = 0.5 * safeZoneW;
        _ctrllogo_H = 0.5 * safeZoneH;
        _ctrllogo_X = 0.5 - _ctrllogo_W / 2;
        _ctrllogo_Y = safeZoneY + safeZoneH;
        _ctrllogo ctrlsetPosition [_ctrllogo_X, _ctrllogo_Y, _ctrllogo_W, _ctrllogo_H];
        _ctrllogo ctrlCommit 0;
        
        _ctrllogo ctrlsetPosition [_ctrllogo_X, 0.5 - (_ctrllogo_H / 2), _ctrllogo_W, _ctrllogo_H];
        _delayCoef = _delay * (1 + (_ctrllogo_H/safeZoneH));
        _ctrllogo ctrlCommit (_delayCoef / 2);
        
        waitUntil {
            ctrlCommitted _ctrllogo
        };
        
        uiSleep 10;
        
        BIS_fnc_credits_A3_display closeDisplay 0;
        (["BIS_fnc_credits_movie"] call BIS_fnc_rscLayer) cuttext ["", "PLAin"];
        // [_displayMain, 0] call bis_fnc_credits_Movie;
    };
    
    waitUntil {
        isNull (uiNamespace getVariable ["A3_RscCredits", displayNull])
    };
} else {
    // --- End
    // 103 cuttext ["", "black out", 3];
    uiSleep 3;
    102 cuttext ["", "plain"];
    103 cuttext ["", "plain"];
    
    BIS_fnc_credits_A3_display = nil;
    BIS_fnc_credits_A3_keydown = nil;
};
};