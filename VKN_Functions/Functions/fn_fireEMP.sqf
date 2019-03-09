/*
Script name:    fn_fireEMP.sqf
Created on:     21 ‎December ‎2018
Author:         Curious

Description:    Fire an EMP with the following params

Framework:      EMP

Parameters:
                0: ARRAY of object(s) - Object to assign EMP to
                1: NUMBER (Optional) - Range of EMP
                2: NUMBER (Optional) - Display visual effect of emp
                3: BOOL (Optional) - Players vision will be affected for a half a minute or so
                4: BOOL (Optional) - Damage unit with given number

Example:
 				[emp_me,500,true,true,0.1] call VKN_fnc_fireEMP;
*/

_obj_emp = param [0, [objNull], [[objNull]]];
_rang_emp = param [1, 1000, [0]];
_viz_eff = param [2, true, [true]];
_player_viz = param [3, false, [true]];
_dam_unit = param [4, 0, [0]];

[_obj_emp, _rang_emp, _viz_eff, _player_viz, _dam_unit] call VKN_fnc_empStarter;