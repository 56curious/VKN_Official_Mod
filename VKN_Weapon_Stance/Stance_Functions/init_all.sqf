waituntil {!isnull (finddisplay 46)}; 


//https://community.bistudio.com/wiki/actionKeys
//https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#UserAction_Event_Handlers
//https://community.bistudio.com/wiki/addUserActionEventHandler


//if (vkn_PostActionUp_Handler = true) then [playersCurrentPostState + 1 % 3]
//if (vkn_PostActionDown_Handler = true) then [playersCurrentPostState - 1 % 3]  
//Modulo (%) will make the Post state cycle between 0, 1, 2
// 0 is posted down, 1 is normal, 2 is posted up.

//addUserActionEventHandler [keyName, event, expression]

private _PlayersCurrentPostState == 1;
private _vknMoveForward_var == Deactivate;
private _vknTurnLeft_var == Deactivate;
private _vknMoveBack_var == Deactivate;
private _vknTurnRight_var == Deactivate;
private _vknMoveFastForward_var == Deactivate;
private _vknMoveTurbo_var == Deactivate;
private _vknReloadDone == true;
private _vknAbleSprint == true;
private _vknAbleToAnimatePost == true;
private _vkntoggleRaiseWeapon == Deactivate;
//Event Post Up



private _vknPostActionUp_Handle = addUserActionEventHandler ["vkn_PostActionUp", 
{ 
	_vknPostActionUp_var = _this select 1;
	if ((_vknPostActionUp == Activate)) 
	then {_playerCurrentPostState = _playersCurrentPostState + 1 % 3};
	systemChat format ["Posting Up, %1", _playersCurrentPostState];
}];
//Event Post Down
private _vknPostActionDown_Handle = addUserActionEventHandler ["vkn_PostActionDown", 
{ 
	_vknPostActionDown_var = _this select 1;
	if ((_vknPostActionDown == Activate)) 
	then {_playerCurrentPostState = _playersCurrentPostState - 1 % 3};
	systemChat format ["Posting Down, %1", _playersCurrentPostState];
}];
//Event Press W
private _vknMoveForward_Handle = addUserActionEventHandler ["MoveForward", 
{ 
	_vknMoveForward_var = _this select 1;
	systemChat "MoveForward"; 
}];

//Event Press A
private _vknTurnLeft_Handle = addUserActionEventHandler ["TurnLeft", 
{ 
	_vknPostTurnLeftUp_var = _this select 1;
	systemChat "TurnLeft"; 
}];
//Event Press S
private _vknMoveBack_Handle = addUserActionEventHandler ["MoveBack", 
{ 
	_vknMoveBack_var = _this select 1;
	systemChat "MoveBack"; 
}];
//Event Press D
private _vknTurnRight_Handle = addUserActionEventHandler ["TurnRight", 
{
	_vknTurnRight_var = _this select 1;
	systemChat "TurnRight"; 
}];
//Event Press W+S/2xW (Combat movement toggle)
private _vknMoveFastForward_Handle = addUserActionEventHandler ["MoveFastForward",
{
	_vknMoveFastForward_var = _this select 1;
	systemChat "MoveFastForward"; 
}];
//Event Press Shift (Sprinting)
private _vknMoveTurbo_Handle = addUserActionEventHandler ["turbo",
{
	_vknMoveTurbo_var = _this select 1;
	systemChat "turbo"; 
}];
//Event Toggle Raise Weapon
private _vkntoggleRaiseWeapon_Handle = addUserActionEventHandler ["toggleRaiseWeapon",
{
	_vkntoggleRaiseWeapon_var = _this select 1;
	systemChat "toggleRaiseWeapon";
}];
//Reload done handler
private addEventHandler 
[
	"Reloaded", {ReloadInterruption = false;}
];