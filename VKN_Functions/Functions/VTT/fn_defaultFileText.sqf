/*
Script 			 name: fn_VTT_defaultFileText.sqf
Created on: 	 16 January ‎2021
Author: 		 Curious

License:		 This file is under "Arma Public License No Derivatives (APL-ND)"
More information can be found at:
https:// www.bohemia.net/community/licenses/arma-public-license-nd

Description: 	setup the default text for each box for file setup.

Framework: 		Mission Template

parameters:
N/A
*/

_returnArray = [];


_ctrl_init_edit_text = "";
_ctrl_initplayerlocal_edit_text = format ["['InitializePlayer', [player]] call BIS_fnc_dynamicGroups;%1['InitializePlayer', [player, true]] call BIS_fnc_dynamicGroups;", endl];
_ctrl_initplayerServer_edit_text = format ["{        %1 if (!isNull (getAssignedCuratorUnit _x)) then {            %1		_unit = getAssignedCuratorUnit _x;            %1		if (isNull (getAssignedCuratorlogic _unit)) then {                %1			unassignCurator _x;                %1			sleep 1;                %1			_unit assignCurator _x;                %1			if (isClass (configFile >> 'CfgPatches' >> 'task_force_radio')) then {                    %1				_unit call TFAR_fnc_isforcedCurator;                    %1                };                %1            };            %1        };        %1    } forEach allCurators;", endl];
_ctrl_initServer_edit_text = "";
_ctrl_onplayerKilled_edit_text = format ["[player, [missionnamespace, 'inventory_var']] call BIS_fnc_saveinventory;%1['Initialize', %2", endl, missionNamespace getVariable ["VKN_VTT_SpectatorOptions", "[ player, [], false, false, true]] call BIS_fnc_EGSpectator;"]];
_ctrl_onplayerRespawn_edit_text = format ["[player, [missionnamespace, 'inventory_var']] call BIS_fnc_loadinventory;%1['Terminate', [ player]] call BIS_fnc_EGSpectator;", endl];
_ctrl_description_edit_text = format ["respawnOnStart = 0;%1respawnTemplatesVirtual[] = {};", endl];


_returnArray = [_ctrl_init_edit_text, _ctrl_initplayerlocal_edit_text, _ctrl_initplayerServer_edit_text, _ctrl_initServer_edit_text, _ctrl_onplayerKilled_edit_text, _ctrl_onplayerRespawn_edit_text, _ctrl_description_edit_text];

_returnArray