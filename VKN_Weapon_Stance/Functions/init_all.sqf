waituntil {!isnull (finddisplay 46)}; 


//https://community.bistudio.com/wiki/actionKeys
//https://community.bistudio.com/wiki/Arma_3:_Event_Handlers#UserAction_Event_Handlers
//https://community.bistudio.com/wiki/addUserActionEventHandler

private PlayersCurrentPostState == 1;
if (vkn_PostActionUp_Handler = true) then [PlayersCurrentPostState + 1 % 3]
if (vkn_PostActionDown_Handler = true) then [PlayersCurrentPostState - 1 % 3]  
//Modulo (%) will make the Post state cycle between 0, 1, 2

//addUserActionEventHandler [keyName, event, expression]
//Event Post Up
private _vknPostActionUp_Handle = addUserActionEventHandler ["vkn_PostActionUp", "Activate", "" { systemChat "PostUp"; }];
//Event Post Down
private _vknPostActionDown_Handle = addUserActionEventHandler ["vkn_PostActionDown", "Activate", "" { systemChat "PostDown"; }];
//Event Press W
private _vknMoveForward_Handle = addUserActionEventHandler ["MoveForward", "Activate", "" { systemChat "MoveForward"; }];
//Event Press A
private _vknTurnLeft_Handle = addUserActionEventHandler ["TurnLeft", "Activate", "" { systemChat "TurnLeft"; }];
//Event Press S
private _vknMoveBack_Handle = addUserActionEventHandler ["MoveBack", "Activate", "" { systemChat "MoveBack"; }];
//Event Press D
private _vknTurnRight_Handle = addUserActionEventHandler ["TurnRight", "Activate", "" { systemChat "TurnRight"; }];
//Event Press W+S/2xW (Combat movement toggle)
private _vknMoveFastForward_Handle = addUserActionEventHandler ["MoveFastForward", "Activate", "" { systemChat "MoveFastForward"; }];
//Event Press Shift (Sprinting)
private _vknMoveForward_Handle = addUserActionEventHandler ["turbo", "Activate", "" { systemChat "turbo"; }];

//Wishlist for parameters:
//parameter for player weapon current magazine size, if over 60. play alternate animation, EI Alternate Running Style and animation set
//(isSprintAllowed player)
//!(currentWeapon player == "")
//(handgunWeapon player != currentWeapon player)
//((getStamina player) >= 3)
//!(stance player == "UNDEFINED") <- swimming
//(player == vehicle player)
//((getPosASL player select 2) > -0.5)) <- Above sea level


//Event Release W
//private _vknMoveForward_Handle = addUserActionEventHandler ["MoveForward", "Deactivate", "" { systemChat "Release MoveForward"; }];
//Event Release A
//private _vknTurnLeft_Handle = addUserActionEventHandler ["TurnLeft", "Deactivate", "" { systemChat "Release TurnLeft"; }];
//Event Release S
//private _vknMoveBack_Handle = addUserActionEventHandler ["MoveBack", "Deactivatee", "" { systemChat "Release MoveBack"; }];
//Event Release D
//private _vknTurnRight_Handle = addUserActionEventHandler ["TurnRight", "Deactivate", "" { systemChat "Release TurnRight"; }];
//Event Release W+S/2xW (Combat movement toggle)
//private _vknMoveFastForward_Handle = addUserActionEventHandler ["MoveFastForward", "Deactivate", "" { systemChat "Release MoveFastForward"; }];
//Event Release Shift (Sprinting)
//private _vknMoveForward_Handle = addUserActionEventHandler ["turbo", "Deactivate", "" { systemChat "Release turbo"; }];
