/*
Script name:    fn_registerNewMission.sqf
Created on:     11 ‎December ‎2018
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    Register a new "mission" for the strategic map framework

Framework:      Strategic Map

Parameters:
                0: Position - 2D or 3D position of mission
                1: Code - Expression executed when user clicks on mission icon
                2: String - Mission name
                3: String - Short description
                4: String - Name of mission's player
                5: String - Path to overview image
                6: Number - Size multiplier for overview image
                7: Array - Parameters for on-click action. Can be accessed in code with _this # 9
*/

_mission = _this param [0,[],[[]]];

private ["_pos","_code","_title","_description","_player","_picture","_iconSize","_infoText","_codeParams"];
_pos = _mission param [0,player];
_pos = _pos call bis_fnc_position;

_code = _mission param [1,{},[{}]];
_title = _mission param [2,"ERROR: MISSING TITLE",[""]];
_description = _mission param [3,"",[""]];
_player = _mission param [4,"",[""]];
_picture = _mission param [5,"",[""]];
_iconSize = _mission param [6,1,[1]];
_codeParams = _mission param [7,[],[[]]];

_infoText = _title;
if (_player != "") then {_infoText = _infoText + format ["<br /><t size='0.2' color='#00000000'>-<br /></t><img size='1' image='%2' color='%3'/><t size='0.8'> %1</t>",_player,_playerIcon,_playerColor];};
if (_description != "") then {_infoText = _infoText + format ["<br /><t size='0.5' color='#00000000'>-<br /></t><t size='0.8'>%1</t>",_description];};
//if (_picture != "") then {_infoText = _infoText + format ["<br /><img size='5.55' image='%1' />",_picture];};

_VKN_fnc_strategicMapOpen_mission_Registered set [
			count VKN_fnc_strategicMapOpen_missions,
				[
					_pos,
					_code,
					_title,
					_iconSize,
					_picture,
					0,
					0,
					0,
					_infoText,
					_codeParams
				]
];
_oldVar = missionNamespace getVariable ["VKN_fnc_strategicMapOpen_missions_Registered_Var", []];
_newVar = _oldVar + _VKN_fnc_strategicMapOpen_mission_Registered;
missionNamespace setVariable ["VKN_fnc_strategicMapOpen_missions_Registered_Var", _newVar];