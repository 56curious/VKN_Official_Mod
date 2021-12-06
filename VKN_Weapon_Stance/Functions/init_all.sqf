waituntil {!isnull (finddisplay 46)}; 


//Todo and animate: 
//----Raised----

//VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Right ----Sprinting, left and right. Animations Complete
//VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Left

//Alternates when carrying heavy weapon (IE above 60 initial bullets in the magazine)


//
//
// These following todo's can be done using gestures, to save a lot of time!
// Would love a framework that can determine what gesture to play based on the players current run, walk and stopped state.
//                   
//                  

/////VKN_Moving_Erected_Run_RaisedPost_Rifle_Forward_Right
/////VKN_Moving_Erected_Run_RaisedPost_Rifle_Forward     ----High ready, meaning weapon on the ready, posted up.
/////VKN_Moving_Erected_Run_RaisedPost_Rifle_Forward_Left
/////VKN_Moving_Erected_Run_RaisedPost_Rifle_Backward_Right
/////VKN_Moving_Erected_Run_RaisedPost_Rifle_Backward     
/////VKN_Moving_Erected_Run_RaisedPost_Rifle_Backward_Left

//VKN_Moving_Erected_Walk_RaisedPost_Rifle_Forward_Right
//VKN_Moving_Erected_Walk_RaisedPost_Rifle_Forward       ----Walking, posted up, weapon ready
//VKN_Moving_Erected_Walk_RaisedPost_Rifle_Forward_Left
//VKN_Moving_Erected_Walk_RaisedPost_Rifle_Backward_Right
//VKN_Moving_Erected_Walk_RaisedPost_Rifle_Backward      
//VKN_Moving_Erected_Walk_RaisedPost_Rifle_Backward_Left

//VKN_Moving_Erected_Stopped_RaisedPost_Rifle_Turning_Right
//VKN_Moving_Erected_Stopped_RaisedPost_Rifle       ------Stopped, weapon ready, with turning animations
//VKN_Moving_Erected_Stopped_RaisedPost_Rifle_Turning_Left
//VKN_Moving_Erected_Stopped_RaisedPost_Rifle_Turning_Right
//VKN_Moving_Erected_Stopped_RaisedPost_Rifle       
//VKN_Moving_Erected_Stopped_RaisedPost_Rifle_Turning_Left

//----Lowered----

//VKN_Moving_Erected_Sprint_LoweredPost_Rifle_Forward_Right ----Sprinting, left and right.
//VKN_Moving_Erected_Sprint_LoweredPost_Rifle_Forward
//VKN_Moving_Erected_Sprint_LoweredPost_Rifle_Forward_Left

/////VKN_Moving_Erected_Run_LoweredPost_Rifle_Forward_Right
/////VKN_Moving_Erected_Run_LoweredPost_Rifle_Forward     ----High ready, meaning weapon on the ready, posted up.
/////VKN_Moving_Erected_Run_LoweredPost_Rifle_Forward_Left
/////VKN_Moving_Erected_Run_LoweredPost_Rifle_Backward_Right
/////VKN_Moving_Erected_Run_LoweredPost_Rifle_Backward     
/////VKN_Moving_Erected_Run_LoweredPost_Rifle_Backward_Left

//VKN_Moving_Erected_Walk_LoweredPost_Rifle_Forward_Right
//VKN_Moving_Erected_Walk_LoweredPost_Rifle_Forward       ----Walking, posted up, weapon ready
//VKN_Moving_Erected_Walk_LoweredPost_Rifle_Forward_Left
//VKN_Moving_Erected_Walk_LoweredPost_Rifle_Backward_Right
//VKN_Moving_Erected_Walk_LoweredPost_Rifle_Backward      
//VKN_Moving_Erected_Walk_LoweredPost_Rifle_Backward_Left

//VKN_Moving_Erected_Stopped_LoweredPost_Rifle_Turning_Right
//VKN_Moving_Erected_Stopped_LoweredPost_Rifle       ------Stopped, weapon ready, with turning animations
//VKN_Moving_Erected_Stopped_LoweredPost_Rifle_Turning_Left
//VKN_Moving_Erected_Stopped_LoweredPost_Rifle_Turning_Right
//VKN_Moving_Erected_Stopped_LoweredPost_Rifle       
//VKN_Moving_Erected_Stopped_LoweredPost_Rifle_Turning_Left


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
_mag = primaryWeaponMagazine player;
//_mag returns array, so must get first element
_ammoCount = getNumber(configfile >> "CfgMagazines" >> _mag select 0 >> "count");

//here you can set something to deal with the 60 bit change the systemChat, adjust math to fit also.
if (_ammoCount >= 60) then { systemChat "grtr thn or eql to 60"};


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
