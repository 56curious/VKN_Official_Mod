private _actor = _this select 0 select 0;
if (inputAction "reloadMagazine" > 0) exitWith
{
_vknReloadDone = false;
_actor setVariable ["ReloadInterruption", "true"]
};

if (inputAction "turbo" > 0)
exitWith
{
	if((stance _actor != "STAND")
	||(isSprintAllowed _actor == false)
	||(primaryWeapon _actor != currentWeapon _actor)
	||(_actor getVariable "ReloadInterruption" IN [true]))
	then {_vknAbleSprint == false;}
	else {_vknAbleSprint == true;};
};

if (((stance _actor == "STAND")||(stance _actor == "CROUCH"))
&&(primaryWeapon _actor == currentWeapon _actor))
&&(_actor getVariable "ReloadInterruption" IN [false])
then {_vknAbleToAnimatePost == true;}
else {_vknAbleToAnimatePost == false;};

if (inputAction "defaultAction" > 0)
then {_vknAbleToAnimatePost == false;}
else {_vknAbleToAnimatePost == true;};

if (inputAction "optics	" > 0)
then {_vknAbleToAnimatePost == false;}
else {_vknAbleToAnimatePost == true;};
