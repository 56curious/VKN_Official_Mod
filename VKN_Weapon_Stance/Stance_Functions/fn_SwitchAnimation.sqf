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


_fn_getConfigAnim = {

	_r = getText(configFile >> "" >> _this);

	_r

};



switch (_vknInterruptEventArray) do 
{
	case [true, false]: //Player is not interrupted by anything, and can animate
	{
		switch (_playersCurrentPostState) do 
		{
			case 0: 
			{ //weapon stance down 
			_ActingActor action ["WeaponOnBack", _ActingActor]; //Placeholder for Stance Down 
			};

			case 1: 
			{ 
			//Transition to normal movement //Following code determining players animationstate I believe might be inefficient, consider replacing with global variable. 
			//TODO: ADD POST DOWN TO THE RUNNING ANIMATIONS.
			//Potential bug: "Seems to be forced to lower case in Arma 3." https://community.bistudio.com/wiki/animationState
				if (_ActingActor getVariable animationState in ["vkn_Moving_Erected_Sprint_RaisedPost_Rifle_Forward", "VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Left", "VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Right"]) then 
				{
					if (_ActingActor getVariable animationState in "vkn_Moving_Erected_Sprint_RaisedPost_Rifle_Forward") then 
					{
						//exitLowered = "AmovPercMevaSlowWrflDf";
						_Actinexitlowered gActor playAction "Exitlowered";
						
						//_ActingActor switchMove ""; May or may not be needed, probably not... playtesting needed.
					} else
					{
						if (_ActingActor getVariable animationState in "VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Left") then 
						{
							_ActingActor playMove "AmovPercMevaSrasWrflDfl";
							//_ActingActor switchMove ""; May or may not be needed, probably not... playtesting needed.
						} else 
						{
							if (_ActingActor getVariable animationState in "VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Right") then 
							{
								_ActingActor playMove "AmovPercMevaSrasWrflDfr";
								//_ActingActor switchMove ""; May or may not be needed, probably not... playtesting needed.
							}
						};
					};
				} else 
				{
					if (_ActingActor getVariable gestureState in ["vkn_Moving_Erected_Moving_RaisedPost_Rifle", "vkn_Static_Erected_Stopped_RaisedPost_Rifle"]) then 
					{
						_ActingActor switchMove "";
						//_ActingActor playActionNow "vkn_Static_Erected_Stopped_ExitLoweredPost_Rifle"; //Animation not created yet.
					} else 
					{
						if (_ActingActor getVariable gestureState in ["vkn_Moving_Erected_Moving_LoweredPost_Rifle", "vkn_Static_Erected_Stopped_LoweredPost_Rifle"]) then 
						{
							_ActingActor switchMove "";
							//_ActingActor playActionNow "vkn_Static_Erected_Stopped_ExitLoweredPost_Rifle"; //Ditto, todo.
						}
					}
				}
			};

			case 2: 
			{ //weapon stance up.
			//TODO: LOGIC FOR STRANSITION TO, LOOKS LIKE WE NEED THAT ANIMATION STATE HANDLER AFTER ALL. MAYBE IF I START WITH IF STATEMENT?
			_Ydirection = "Ystatic"; //Forward, Back
			_Xdirection = "Xstatic"; //Left, Right
			if ((_vknTurnLeft_var == "Activate")) then { _Xdirection = "left"; };
			if ((_vknTurnRight_var == "Activate")) then { _Xdirection = "right"; };
			if ((_vknTurnLeft_var == "Deactivate")&&(_vknTurnRight_var == "Deactivate")) then { _Xdirection = "Xstatic"; };
			if ((_vknMoveForward_var == "Activate")) then { _Ydirection = "forward"; };
			if ((_vknMoveBack_var == "Activate")) then { _Ydirection = "backward"; };
			if ((_vknMoveBack_var == "Deactivate")&&(_vknMoveForward_var == "Dectivate")) then { _Ydirection = "Ystatic"; };
			};

			default 
			{
				systemChat "Error in L62 fn_SwitchAnimation, unexpected weapon stance."
			};
		};

		switch (_Xdirection) do 
		//If Left or right
		{
			case "left": 
			{
			//If starting with sprinting
				if ((_Ydirection == "forward")&&(_vknMoveTurbo_var == "Activate")&&(_vknAbleSprint == true)) then 
				{
					_ActingActor playMove "VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Left";
				} else
			//If starting with moving. 
			//TODO: Needs a "weapon up" animation if not already playing a "raised post" action.
				{
					_ActingActor playActionNow "vkn_Moving_Erected_Moving_RaisedPost_Rifle";
				}
			};
			case "right":
			{
				if ((_Ydirection == "forward")&&(_vknMoveTurbo_var == "Activate")&&(_vknAbleSprint == true)) then 
				{
					_ActingActor playMove "VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Right";
				} else 
				{
					//Ditto last.
					_ActingActor playActionNow "vkn_Moving_Erected_Moving_RaisedPost_Rifle";
				}
			};
			case "Xstatic":
			{
				if ((_Ydirection == "forward")&&(_vknMoveTurbo_var == "Activate")&&(_vknAbleSprint == true)) then 
				{
				//Ditto last
					_ActingActor playMove "vkn_Moving_Erected_Sprint_RaisedPost_Rifle_Forward";
				} else 
				{
					if (_Ydirection == "Ystatic") then
					{
						_ActingActor playActionNow "vkn_Static_Erected_Stopped_RaisedPost_Rifle";
					} else
					{
						_ActingActor playActionNow "vkn_Moving_Erected_Moving_RaisedPost_Rifle";
					};
				}
			};
			default 
			{
				systemChat "Error in L62 fn_SwitchAnimation, unexpexted direction.";
			};
		};

		switch (_Ydirection) do 
		//If Forward or backward
		{
			case "forward":
			{
				//If moving
				if ((_vknMoveTurbo_var == "Activate")&&(_vknAbleSprint == true)&&(_Xdirection == "static")) then 
				{
					_ActingActor playMove "vkn_Moving_Erected_Sprint_RaisedPost_Rifle_Forward"
				} else
				{
					_ActingActor playActionNow "vkn_Moving_Erected_Moving_RaisedPost_Rifle";
				};
			};
			case "backward":
			{
				_ActingActor playActionNow "vkn_Moving_Erected_Moving_RaisedPost_Rifle";
			};
			case "Ystatic":
			{
				//If standing still
				if (_Xdirection != "Xstatic") then 
				{
					_ActingActor playActionNow "vkn_Moving_Erected_Moving_RaisedPost_Rifle";
				} else 
				{
					_ActingActor playActionNow "vkn_Static_Erected_Stopped_RaisedPost_Rifle";
				};
			};
		};
	};
	case [true, true]: //Weapon Action interruption
	{
		if (_playersCurrentPostState != 1) then 
		{
			if (_playersCurrentPostState == 2) then
			{
			//_ActingActor playActionNow "vkn_Static_Erected_Stopped_ExitRaisedPost_Rifle"; //Placeholder Animation name
			_ActingActor SwitchMove "";
			} else
			{
			//_ActingActor playActionNow "vkn_Static_Erected_Stopped_ExitLoweredPost_Rifle"; //Placeholder Animation name
			_ActingActor SwitchMove "";
			}
		}	
	};
	case [false, false]: //Player is prone or undefined (Swimming, in a vehicle etc...) Might even need to add an evenhandler for going prone if this switchmove cancels that animation.
	{
		_ActingActor SwitchMove "";
	};
	default 
	{
		systemChat "Error in 169 fn_SwitchAnimation, unexpected variable.";
	};
};





//// Event shift + W
// sprintRun = "someAnim";

_anim = getText(configFile >> "VKN_WS" >> "sprintRun"); //returns "someAnim"

player playAction _anim;

