params ["_ActingActor"];
private _playersCurrentPostState = missionNamespace getVariable "vkn_ws_currentPostState";
private _vknMoveForward_var = missionNamespace getVariable "vkn_ws_vknMoveForward";
private _vknTurnLeft_var = missionNamespace getVariable "vkn_ws_vknTurnLeft";
private _vknMoveBack_var = missionNamespace getVariable "vkn_ws_vknMoveBack";
private _vknTurnRight_var = missionNamespace getVariable "vkn_ws_vknTurnRight";
private _vknMoveFastForward_var = missionNamespace getVariable "vkn_ws_vknMoveFastForward";
private _vknMoveTurbo_var = missionNamespace getVariable "vkn_ws_vknMoveTurbo";
private _vknReloadDone = missionNamespace getVariable "vkn_ws_vknReloadDone";
private _vknAbleSprint = missionNamespace getVariable "vkn_ws_vknAbleSprint";
private _vknAbleToAnimatePost = missionNamespace getVariable "vkn_ws_vknAbleToAnimatePost";
private _vkntoggleRaiseWeapon = missionNamespace getVariable "vkn_ws_toggleRaiseWeapon";
private _vknWeaponAction = missionNamespace getVariable "vkn_ws_vknWeaponAction";
private _vknInterruptEventArray = missionNamespace getVariable "vkn_ws_vknInterruptEventArray";

if (inputAction "reloadMagazine" > 0) then
{
_vknReloadDone = false;
_ActingActor setVariable ["_reloadInterruption", "true"]
};

if (inputAction "turbo" > 0) then
{
	if((stance _ActingActor != "STAND")||(isSprintAllowed _ActingActor == false)||(primaryWeapon _ActingActor != currentWeapon _ActingActor)||(_actor getVariable "_reloadInterruption" IN [true])) then 
	{_vknAbleSprint == false;} else 
	{_vknAbleSprint == true;}
};

if ((((stance _ActingActor == "STAND")||(stance _ActingActor == "CROUCH"))&&(primaryWeapon _ActingActor == currentWeapon _ActingActor))&&(_ActingActor getVariable "_reloadInterruption" IN [false])) then 
{
	_vknAbleToAnimatePost == true;
} else 
{
	_vknAbleToAnimatePost == false;
};


if (inputAction "defaultAction" > 0) then 
{
	_vknWeaponAction == true;
} else 
{
	_vknWeaponAction == false;
};

if (inputAction "optics	" > 0) then 
{
	_vknWeaponAction == true;
} else 
{
	_vknWeaponAction == false;
};

missionNamespace setVariable ["vkn_ws_vknInterruptEventArray", [_vknAbleToAnimatePost, _vknWeaponAction]];