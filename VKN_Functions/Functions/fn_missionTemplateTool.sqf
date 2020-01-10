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

createDialog "VKN_Template_Tool_Info";

collect3DENHistory {
	//define
	_squad = 0;
	_position = screenToWorld [0.5, 0.5];
	if (isClass (configFile >> "CfgPatches" >> "VKN_PMC_Characters")) then {
		_squad = configfile >> "CfgGroups" >> "West" >> "B_VKN_ODIN_PMC" >> "Infantry" >> "B_VKN_ODIN_infantry_squad_pmc"; //Units inherit off one origin, possibly causing the problem
	} else {
		_squad = configfile >> "CfgGroups" >> "West" >> "BLU_F" >> "Infantry" >> "BUS_InfSquad";
	};

	//Check for 3DEN Enhanced, then setup those features
	if (isclass (configfile >> "CfgPatches" >> "3denEnhanced")) then {
		set3DENMissionAttributes[["Multiplayer", "Enh_DynamicGroups", true]];
		set3DENMissionAttributes[["Multiplayer", "Enh_SaveLoadout", true]];
	} else {
		systemChat "3DEN Enhanced not found but is recommended to be used at all times, missing these attributes however...";
	};

	//Set all of the mission settings to their defaults
	set3DENMissionAttributes [
		["Multiplayer", "respawn", 3],
		["Multiplayer", "respawnDelay", 5],
		["Multiplayer", "GameType", "VKN_OP"],
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
	_ZeusEntity1 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntity1 set3DENAttribute ["name", "ZeusEntity1"];

	_ZeusEntity2 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntity2 set3DENAttribute ["name", "ZeusEntity2"];

	_ZeusEntity3 = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntity3 set3DENAttribute ["name", "ZeusEntity3"];

	_ZeusEntityAdmin = create3DENEntity ["Logic", "VirtualCurator_F", _position];
	_ZeusEntityAdmin set3DENAttribute ["name", "ZeusEntityAdmin"];

	_ZeusEntities = [_ZeusEntity1, _ZeusEntity2, _ZeusEntity3, _ZeusEntityAdmin];
	_ZeusEntitiesNames = ["ZeusEntity1", "ZeusEntity2", "ZeusEntity3", "ZeusEntityAdmin"];

	//setup in-module settings
	{ _x set3DENAttribute ["ControlMP", true]; } forEach _ZeusEntities;
	for "_i" from 0 to 3 step 1 do {
		_Module = _ZeusModules select _i;
		_Entity = _ZeusEntitiesNames select _i;
		_Module set3DENAttribute[ "ModuleCurator_F_Owner", _Entity ];
		_Module set3DENAttribute[ "ModuleCurator_F_Name", "Zeus" ];
		_Module set3DENAttribute[ "ModuleCurator_F_Addons", 3 ];
		_Module set3DENAttribute[ "ModuleCurator_F_Forced", 1 ];
	};

	//setup squads and sync them to Zeus
	[_squad, _position, _ZeusAttributeCuratorAddEditableObjects] spawn {
		for "_i" from 1 to 6 step 1 do {
			_group = create3DENComposition [_this select 0, _this select 1];
		   	{ add3DENConnection ["sync", _x, _this select 2]; } forEach _group;
			{
				set3DENAttributes [[_x, "ControlMP", true]];
				sleep 0.01;
			} forEach _group;
			sleep 0.01;
		};
	};
};

//Notification
["Viking PMC Mission Template Created."] call BIS_fnc_3DENNotification;
