_ActingActor = _this select 0;
if  (_vknReloadDone && _vknAbleToAnimatePost && _PlayersCurrentPostState != 1) then 
{
	if (_PlayersCurrentPostState == 2) then
	{
		if ((_vknMoveForward_var == Activate)&&(_vknMoveTurbo_var == Activate)&&(_vknAbleSprint == true)) then
		{	
			if ((_vknTurnLeft_var == Activate)||(_vknTurnRight_var == Activate)&&(!((_vknTurnLeft_var == Activate)&&(_vknMoveBack_var == Activate)))) then
			{
				if (_vknTurnLeft_var == Activate) then 
				{
					_ActingActor playMove "VKN_Moving_Erected_Run_RaisedPost_Rifle_Forward_Left";
				}
				else
				{
					_ActingActor playMove "VKN_Moving_Erected_Run_RaisedPost_Rifle_Forward_Right";
				}
			}
			else
			{
				_ActingActor playMove "VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward";
			}
		}
		else 
		{
			if ((_vknMoveForward_var == Activate)||(_vknTurnRight_var == Activate)||(_vknTurnLeft_var == Activate)||(_vknMoveBack_var == Activate) then
			{
				_ActingActor playActionNow "vkn_Moving_Erected_Moving_RaisedPost_Rifle";
			}
			else
			{
				_ActingActor playActionNow "vkn_Static_Erected_Stopped_RaisedPost_Rifle";
			}
		}
	}
	else 
	{
		if (_PlayersCurrentPostState == 0) then
		{
			_ActingActor action ["WeaponOnBack", _ActingActor];

		}
	}
};