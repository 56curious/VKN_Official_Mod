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
	//define
	_squad = 0;
	_position = screenToWorld [0.5,0.5];
	if (isClass (configFile >> "CfgPatches" >> "VKN_PMC_Characters")) then {
		_squad = configfile >> "CfgGroups" >> "West" >> "B_VKN_ODIN_PMC" >> "Infantry" >> "B_VKN_ODIN_infantry_squad_pmc";
	} else {
		_squad = configfile >> "CfgGroups" >> "West" >> "BLU_F" >> "Infantry" >> "BUS_InfSquad";
	};

	//Check for 3DEN Enhanced, then setup those features
	if (isclass (configfile >> "CfgPatches" >> "3denEnhanced")) then {
		set3DENMissionAttributes[["Multiplayer", "Enh_DynamicGroups", true]];
		set3DENMissionAttributes[["Multiplayer", "Enh_SaveLoadout", true]];
	} else {
		systemChat "3DEN Enhanced not found but is recommended to be used at all times, missing these attributes...";
	};

	//Set all of the mission settings to their defaults
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

	//Create Billboard
	_billboard = create3DENEntity ["Object", "Land_Billboard_F", _position];
	_billboard set3DENAttribute ["ObjectTextureCustom0", "VKN_Extensions_Misc\vkn_poster.paa"];

	//Setup the respawn positions/settings
	_RespawnPos = create3DENEntity ["Logic", "ModuleRespawnPosition_F", _position];
  _RespawnPos set3DENAttribute ["name", "defaultRespawnPosition"];
  _RespawnPos setVariable ["Side","1"];

	//create the Zeus sub-settings
	_ZeusAttributeCuratorAddEditableObjects = create3DENEntity ["Logic", "ModuleCuratorAddEditableObjects", _position];
	_ZeusAttributeCuratorAddEditingAreaPlayers = create3DENEntity ["Logic", "ModuleCuratorAddEditingAreaPlayers_F", _position];

	//setup Zeus modules
	_ZeusModule1 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModule2 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModule3 = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModuleAdmin = create3DENEntity ["Logic", "ModuleCurator_F", _position];
	_ZeusModules = [_ZeusModule1, _ZeusModule2, _ZeusModule3, _ZeusModuleAdmin];

	//sync
	add3DENConnection ["sync", _ZeusModules, _ZeusAttributeCuratorAddEditableObjects];
	add3DENConnection ["sync", _ZeusModules, _ZeusAttributeCuratorAddEditingAreaPlayers];

	//Setup the Zeus entities
	ZeusEntity1 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	ZeusEntity2 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	ZeusEntity3 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	ZeusEntityAdmin = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntities = [ZeusEntity1, ZeusEntity2, ZeusEntity3, ZeusEntityAdmin];

	//setup in-module settings
	{ set3DENAttributes [[_x, "ControlMP", true]]; } forEach _ZeusEntities;
	for "_i" from 1 to 4 step 1 do {
		set3DENAttributes [[_ZeusModules select _i - 1, "ModuleCurator_F_Owner", _ZeusEntities select _i - 1]];
	};

	//setup squads and sync them to Zeus
	[_squad, _position, _ZeusAttributeCuratorAddEditableObjects, _ZeusAttributeCuratorAddEditingAreaPlayers] spawn {
		params ["_squad", "_position", "_ZeusAttributeCuratorAddEditableObjects", "_ZeusAttributeCuratorAddEditingAreaPlayers"];
		for "_i" from 1 to 6 step 1 do {
			_group = create3DENComposition [_squad, _position];
		   	add3DENConnection ["sync", _group, _ZeusAttributeCuratorAddEditableObjects];
		   	add3DENConnection ["sync", _group, _ZeusAttributeCuratorAddEditingAreaPlayers];
			{
				set3DENAttributes [[_x,"ControlMP",true]];
				sleep 0.01;
			} forEach _group;
			sleep 0.01;
		};
	};
};

//Notification
["Viking PMC Mission Template Created."] call BIS_fnc_3DENNotification;
