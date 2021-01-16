/*
Script 			 name: fn_VTT_deleteFiles.sqf
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

/*
// count users and disableinput for 1 min.
_ctrl_init_edit_text = "
_playercount = count (allplayers - (entities 'HeadlessClient_F'));
if (_playercount >= 10) then {
    {
        [_x] spawn {
            true remoteExec ['disableUserinput', _this, false];
            sleep 60;
            false remoteExec ['disableUserinput', _this, false];
        };
    } forEach allplayers - (entities 'HeadlessClient_F');
};
};
";
*/

// Disableinput
_ctrl_init_edit_text = "";

// Ties with the init and counting + disable
/*
_ctrl_initplayerlocal_edit_text = format ["
    ['initialize', [true]] remoteExec ['BIS_fnc_dynamicgroups', 2];
    %1['initializeplayer', [player, true]] remoteExec ['BIS_fnc_dynamicgroups', 0, true];
", endl];
*/

_ctrl_initplayerlocal_edit_text = format ["
    ['initialize', [true]] remoteExec ['BIS_fnc_dynamicgroups', 2];
    %1['initializeplayer', [player, true]] remoteExec ['BIS_fnc_dynamicgroups', 0, true];
    [player] spawn VKN_fnc_setupMission;
", endl];

_ctrl_initplayerServer_edit_text = format ["
    {
        %1 if (!isNull (getAssignedCuratorUnit _x)) then {
            %1		_unit = getAssignedCuratorUnit _x;
            %1		if (isNull (getAssignedCuratorlogic _unit)) then {
                %1			unassignCurator _x;
                %1			sleep 1;
                %1			_unit assignCurator _x;
                %1			if (isClass (configFile >> 'CfgPatches' >> 'task_force_radio')) then {
                    %1				_unit call TFAR_fnc_isforcedCurator;
                    %1
                };
                %1
            };
            %1
        };
        %1
    } forEach allCurators;
", endl];

_ctrl_initServer_edit_text = "";

_ctrl_onplayerKilled_edit_text = format ["
    [player, [missionnamespace, 'inventory_var']] call BIS_fnc_saveinventory;
    %1['initialize', [ player, [], false, false, true]] call BIS_fnc_EGSpectator;
", endl];

_ctrl_onplayerRespawn_edit_text = format ["
    [player, [missionnamespace, 'inventory_var']] call BIS_fnc_loadinventory;
    %1['terminate', [ player]] call BIS_fnc_EGSpectator;
", endl];

_ctrl_description_edit_text = format ["
    respawnOnStart = 0;
    %1respawnTemplatesVirtual[] = {};
", endl];

_returnArray = [
    _ctrl_init_edit_text, // 0
    _ctrl_initplayerlocal_edit_text, // 1
    _ctrl_initplayerServer_edit_text, // 2
    _ctrl_initServer_edit_text, // 3
    _ctrl_onplayerKilled_edit_text, // 4
    _ctrl_onplayerRespawn_edit_text, // 5
    _ctrl_description_edit_text // 6
];

_returnArray