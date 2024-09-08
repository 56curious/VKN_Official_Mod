_VKN_ArsenalAnimation = profileNamespace getVariable ["VKN_VKN_ArsenalAnimation_var", true];

if !(_VKN_ArsenalAnimation) exitWith {};

[missionNamespace, "arsenalOpened", {

	_playerAnim = { 

		sleep 2;
	
		private _VKNAnimations = [ 
			[["Acts_AidlPercMstpSloWWpstDnon_warmup_1_loop"], "Acts_AidlPercMstpSlowWpstDnon_warmup_1_out"],  
			[["Acts_AidlPercMstpSloWWpstDnon_warmup_2_loop"], "Acts_AidlPercMstpSlowWpstDnon_warmup_2_out"], 
			[["Acts_AidlPercMstpSloWWpstDnon_warmup_3_loop"],"Acts_AidlPercMstpSloWWpstDnon_warmup_3_out"], 
			[["Acts_AidlPercMstpSloWWpstDnon_warmup_5_loop"],"Acts_AidlPercMstpSloWWpstDnon_warmup_5_out"], 
			[["Acts_AidlPercMstpSloWWpstDnon_warmup_6_loop"],"Acts_AidlPercMstpSloWWpstDnon_warmup_6_out"], 

			[["Acts_AidlPercMstpSloWWrflDnon_warmup_1_loop"],"Acts_AidlPercMstpSloWWrflDnon_warmup_1_out"], 
			[["Acts_AidlPercMstpSloWWrflDnon_warmup_2_loop"],"Acts_AidlPercMstpSloWWrflDnon_warmup_2_out"], 
			[["Acts_AidlPercMstpSloWWrflDnon_warmup_3_loop"],"Acts_AidlPercMstpSloWWrflDnon_warmup_3_out"],  
			[["Acts_AidlPercMstpSloWWrflDnon_warmup_4_loop"],"Acts_AidlPercMstpSloWWrflDnon_warmup_4_out"], 
			[["Acts_AidlPercMstpSloWWrflDnon_warmup_5_loop"],"Acts_AidlPercMstpSloWWrflDnon_warmup_5_out"], 
			[["Acts_AidlPercMstpSloWWrflDnon_warmup_7_loop"],"Acts_AidlPercMstpSloWWrflDnon_warmup_7_out"], 
			[["Acts_AidlPercMstpSlowWrflDnon_warmup01"],""], 
			[["Acts_AidlPercMstpSlowWrflDnon_warmup02"],""], 
			[["Acts_AidlPercMstpSlowWrflDnon_warmup03"],""], 
			[["Acts_AidlPercMstpSlowWrflDnon_warmup04"],""], 
			[["Acts_AidlPercMstpSlowWrflDnon_warmup05"],""], 
			[["Acts_AidlPercMstpSnonWnonDnon_warmup_1_loop"],"Acts_AidlPercMstpSnonWnonDnon_warmup_1_out"], 
			[["Acts_AidlPercMstpSnonWnonDnon_warmup_3_loop"],"Acts_AidlPercMstpSnonWnonDnon_warmup_3_out"], 

			[ 
			[ 
			"Acts_Ambient_Facepalm_1", 
			"Acts_Ambient_Gestures_Sneeze", 
			"Acts_Ambient_Gestures_Tired", 
			"Acts_Ambient_Gestures_Yawn", 
			"Acts_Ambient_Huh", 
			"Acts_Ambient_Facepalm_2" 
			], 
			""], 

			[ 
			[ 
			"Acts_Ambient_Relax_1", 
			"Acts_Ambient_Relax_2", 
			"Acts_Ambient_Relax_3", 
			"Acts_Ambient_Relax_4", 
			"Acts_Ambient_Rifle_Drop", 
			"Acts_Ambient_Shoelaces", 
			"Acts_Ambient_Stretching" 
			], 
			""], 

			[["Acts_Briefing_SA_Loop"],"Acts_Briefing_SA_Out"], 
			[["Acts_Briefing_SB_Loop"],"Acts_Briefing_SB_Out"], 
			[["Acts_Briefing_SC_Loop"],"Acts_Briefing_SC_Out"], 
			[["Acts_Commenting_On_Fight_loop"],""], 

			[ 
			[ 
			"Acts_Rifle_Operations_Back", 
			"Acts_Rifle_Operations_Barrel", 
			"Acts_Rifle_Operations_Checking_Chamber", 
			"Acts_Rifle_Operations_Default", 
			"Acts_Rifle_Operations_Front", 
			"Acts_Rifle_Operations_Left", 
			"Acts_Rifle_Operations_Right", 
			"Acts_Rifle_Operations_Zeroing" 
			], 
			""] 
		]; 

		private _animSet = selectRandom _VKNAnimations; 
		private _player = _this; 
		private _animArray = _animSet select 0; 
		private _endAnim = _animSet select 1; 
		missionNameSpace setVariable ["VKN_ArsenalanimArray", _animArray]; 
		missionNameSpace setVariable ["VKN_ArsenalAnimOut", _endAnim]; 
		private _arraySize = count _animArray; 

		_isOpen = profileNamespace setVariable ["VKN_ArsenalOpen", true];
		_player switchMove "";

		switch (true) do { 
			case (_arraySize == 1): { 
				_player playMoveNow (_animArray select 0) select 0; 
			}; 
			case (_arraySize > 1): {
				_isOpen = profileNamespace getVariable "VKN_ArsenalOpen";
				while {_isOpen} do { 
					{
						_isOpen = profileNamespace getVariable "VKN_ArsenalOpen";
						if !(_isOpen) exitWith {};
						_player playMoveNow _x; 
						waitUntil { ((animationState _player) != _x) }; 
						sleep random [6, 10, 20]; 
					} forEach _animArray;
					if !(_isOpen) exitWith {};
				};
			}; 
			default {
				//default to first array anim with no out anim	
				_player playMoveNow "Acts_AidlPercMstpSlowWrflDnon_warmup01";
			}; 
		}; 
	};

 	player spawn _playerAnim;  
}] call BIS_fnc_addScriptedEventHandler;


[missionNamespace, "arsenalClosed", { 

	profileNamespace setVariable ["VKN_ArsenalOpen", false];
	_animOut = missionNameSpace getVariable "VKN_ArsenalAnimOut"; 
	if (_animOut == "") then {  
	player switchMove _animOut; 
	} else {  
	player playMoveNow _animOut;  
	};

}] call BIS_fnc_addScriptedEventHandler;