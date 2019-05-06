/*
Script name:    fn_missionTemplateTool.sqf
Created on:     11 ‎December ‎2018
Author:         Curious

License:		This file is under "Arma Public License No Derivatives (APL-ND)"
				More information can be found at:
				https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    setup mission with predefined settings.

Framework:      Mission Template

Parameters:
				N/A
*/

collect3DENHistory {
	_position = screenToWorld [0.5,0.5];
	if (isClass (configFile >> "CfgPatches" >> "VKN_PMC_Custom_Units")) then {
		_Squad = configfile >> "CfgGroups" >> "West" >> "B_VKN_ODIN_PMC" >> "Infantry" >> "B_VKN_ODIN_infantry_squad_pmc";
	} else {
		_Squad = configfile >> "CfgGroups" >> "West" >> "BLU_F" >> "Infantry" >> "BUS_InfSquad";
	};

	set3DENMissionAttributes [
		["Multiplayer", "respawn", 3],
		["Multiplayer", "respawnDelay", 5],
		["Multiplayer", "GameType", "COOP"], //TO-DO: Create config for Viking Operations string
		["Multiplayer", "DisabledAI", true],
		["Multiplayer", "JoinUnassigned", false],
		["Multiplayer", "RespawnDialog", true],
		["Multiplayer", "EnableTeamSwitch", false],
		["Multiplayer", "AIKills", true],
		["General", "LoadScreen", "\VKN_Misc\VikingLogoLarge_ca.paa"],
		["General", "OverviewPicture", "\VKN_Misc\VikingLogoLarge_ca.paa"],
		["General", "SaveBinarized", false],
		["General", "IntelBriefingName", "Viking PMC Zeus OP"]
	];

	sleep 0.5;

	_RespawnPos = create3DENEntity ["Logic", "ModuleRespawnPosition_F", _position];

	_ZeusAttributeCuratorAddEditableObjects = create3DENEntity ["Logic", "ModuleCuratorAddEditableObjects", _position];
	_ZeusAttributeCuratorAddEditingAreaPlayers = create3DENEntity ["Logic", "ModuleCuratorAddEditingAreaPlayers_F", _position];

	_ZeusModule1 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModule2 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModule3 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModuleAdmin = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModules = [_ZeusModule1, _ZeusModule2, _ZeusModule3, _ZeusModuleAdmin];

	add3DENConnection ["sync", _ZeusModules, _ZeusAttributeCuratorAddEditableObjects];
	add3DENConnection ["sync", _ZeusModules, _ZeusAttributeCuratorAddEditingAreaPlayers];

	sleep 0.5;

	_ZeusEntity1 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntity2 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntity3 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntityAdmin = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntities = [_ZeusEntity1, _ZeusEntity2, _ZeusEntity3, _ZeusEntityAdmin];

	add3DENConnection ["sync", _ZeusEntities, _ZeusAttributeCuratorAddEditableObjects];
	add3DENConnection ["sync", _ZeusEntities, _ZeusAttributeCuratorAddEditingAreaPlayers];
	set3DENAttributes [[_ZeusEntities,"ControlMP",true]];

	sleep 0.5;

	for "_i" from 1 to 6 step 1 do {
		_group = create3DENComposition [_squad, _position];
	   	add3DENConnection ["sync", _group, _ZeusAttributeCuratorAddEditableObjects];
	   	add3DENConnection ["sync", _group, _ZeusAttributeCuratorAddEditingAreaPlayers];
		{
			set3DENAttributes [[_x,"ControlMP",true]];
		} forEach _group;
	};
};

["Viking PMC Mission Template Created."] call BIS_fnc_3DENNotification;
