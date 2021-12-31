params [_WeaponAction];
private _vknPostState = missionNamespace getVariable "vkn_ws_currentPostState";
switch (_WeaponAction) do 
{
	case "vkn_PostUp": {
		_vknPostState = _vknPostState + 1 min 2;
		systemChat "Posting up";
	};
	case "vkn_PostDown": {
		_vknPostState = _vknPostState - 1 max 0;
		systemChat "Posting Down";
	};
	default {systemChat "VKN_Weapon_Stance: Impossible parameter at line 3 in fn_PostAction.sqf"};
};

