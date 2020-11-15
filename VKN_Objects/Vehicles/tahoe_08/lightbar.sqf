private["_car"];

_car = _this;

_red =  "\VKN_Objects\Vehicles\tahoe_08\data\lbSystem_red.rvmat";
_white = "\VKN_Objects\Vehicles\tahoe_08\lbSystem_white.rvmat";
_blue = "\VKN_Objects\Vehicles\tahoe_08\lbSystem_blue.rvmat";
_amber = "\VKN_Objects\Vehicles\tahoe_08\lbSystem_amber.rvmat";
_blank = "a3\data_f\default.rvmat";
_light1 = "";
_light2 = "";
_light3 = "";
_light4 = "";
		
_emergencyType = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyLightbarType");

switch(_emergencyType) do {
    
    case 1: { // US style lights, red and blue 
        _light1 = _red;
        _light2 = _white;
        _light3 = _blue;
        _light4 = _amber;
    };
        
    case 2: { // EMS style lights, all red
        _light1 = _red;
        _light2 = _white;
        _light3 = _red;
        _light4 = _amber;
    };
    
    case 3: { // EU style lights, all blue
        _light1 = _blue;
        _light2 = _white;
        _light3 = _blue;
        _light4 = _amber;
    };
	
    case 4: { // NYC style lights, red and white
        _light1 = _red;
        _light2 = _white;
        _light3 = _white;
        _light4 = _amber;
    };
	
    case 5: { // SECURITY lights, all amber
        _light1 = _amber;
        _light2 = _amber;
        _light3 = _amber;
        _light4 = _amber;
    };
    
};


_lbb_left_1 = 20;
_lbb_left_2 = 21;
_lbb_right_1 = 22;
_lbb_right_2 = 23;
_lbf_left_1 = 24;
_lbf_left_2 = 25;
_lbf_right_1 = 26;
_lbf_right_2 = 27;
_lbg_left_1 = 28;
_lbg_right_1 = 29;
_lbt_back_left_1 = 30;
_lbt_back_left_2 = 31;
_lbt_back_left_3 = 32;
_lbt_back_left_4 = 33;
_lbt_back_left_5 = 34;
_lbt_back_right_1 = 35;
_lbt_back_right_2 = 36;
_lbt_back_right_3 = 37;
_lbt_back_right_4 = 38;
_lbt_back_right_5 = 39;
_lbt_front_left_1 = 40;
_lbt_front_left_2 = 41;
_lbt_front_left_3 = 42;
_lbt_front_left_4 = 43;
_lbt_front_left_5 = 44;
_lbt_front_right_1 = 45;
_lbt_front_right_2 = 46;
_lbt_front_right_3 = 47;
_lbt_front_right_4 = 48;
_lbt_front_right_5 = 49;

while {alive _car} do 
{
	_ani_lightbar = round(_car animationPhase "ani_lightbar");
	_ani_directional = round(_car animationPhase "ani_directional");

	
    switch (_ani_lightbar) do {
		
		case 1: {
            
            //////////////////////////////////////////////// FIRST ANIMATION 
            
			_car animate["lightf_l", 0];
			_car animate["lightf_r", 1];
			_car animate["lightb_l", 0];
			_car animate["lightb_r", 1];
			
			_car setObjectMaterial [_lbb_left_1, _blank];
			_car setObjectMaterial [_lbb_left_2, _light1];
            
			_car setObjectMaterial [_lbb_right_1, _blank];
			_car setObjectMaterial [_lbb_right_2, _light3];
            
			if(_ani_directional == -1) then 
			{
				_car setObjectMaterial [_lbt_back_left_1, _light1];
				_car setObjectMaterial [_lbt_back_left_2, _light1];
				_car setObjectMaterial [_lbt_back_left_3, _blank];
				_car setObjectMaterial [_lbt_back_left_4, _blank];
                
				_car setObjectMaterial [_lbt_back_right_1, _blank];
				_car setObjectMaterial [_lbt_back_right_2, _blank];
				_car setObjectMaterial [_lbt_back_right_3, _blank];
				_car setObjectMaterial [_lbt_back_right_4, _blank];
			};
			
			_car setObjectMaterial [_lbt_back_left_5, _blank];
            
			_car setObjectMaterial [_lbt_back_right_5, _light3];
            
			_car setObjectMaterial [_lbt_front_left_1, _light1];
			_car setObjectMaterial [_lbt_front_left_2, _light1];
			_car setObjectMaterial [_lbt_front_left_3, _blank];
			_car setObjectMaterial [_lbt_front_left_4, _blank];
			_car setObjectMaterial [_lbt_front_left_5, _blank];
            
			_car setObjectMaterial [_lbt_front_right_1, _blank];
			_car setObjectMaterial [_lbt_front_right_2, _blank];
			_car setObjectMaterial [_lbt_front_right_3, _blank];
			_car setObjectMaterial [_lbt_front_right_4, _blank];
			_car setObjectMaterial [_lbt_front_right_5, _light3];
            
			_car setObjectMaterial [_lbf_left_1, _blank];
			_car setObjectMaterial [_lbf_left_2, _light1];
            
			_car setObjectMaterial [_lbf_right_1, _blank];
			_car setObjectMaterial [_lbf_right_2, _light3];
            
			_car setObjectMaterial [_lbg_left_1, _light1];
			
			_car setObjectMaterial [_lbg_right_1, _blank];
			
			
			sleep 0.3;
            
            //////////////////////////////////////////////// SECOND ANIMATION 
            
			_car animate["lightf_l", 1];
			_car animate["lightf_r", 0];
			_car animate["lightb_l", 1];
			_car animate["lightb_r", 0];
			
			_car setObjectMaterial [_lbb_left_1, _light1];
			_car setObjectMaterial [_lbb_left_2, _blank];
            
			_car setObjectMaterial [_lbb_right_1, _light3];
			_car setObjectMaterial [_lbb_right_2, _blank];
            
        
			if(_ani_directional == -1) then 
			{
				_car setObjectMaterial [_lbt_back_left_1, _blank];
				_car setObjectMaterial [_lbt_back_left_2, _blank];
				_car setObjectMaterial [_lbt_back_left_3, _blank];
				_car setObjectMaterial [_lbt_back_left_4, _blank];
                
				_car setObjectMaterial [_lbt_back_right_1, _light3];
				_car setObjectMaterial [_lbt_back_right_2, _light3];
				_car setObjectMaterial [_lbt_back_right_3, _blank];
				_car setObjectMaterial [_lbt_back_right_4, _blank];
			};
			
			_car setObjectMaterial [_lbt_back_left_5, _light1];
            
			_car setObjectMaterial [_lbt_back_right_5, _blank];
            
			_car setObjectMaterial [_lbt_front_left_1, _blank];
			_car setObjectMaterial [_lbt_front_left_2, _blank];
			_car setObjectMaterial [_lbt_front_left_3, _blank];
			_car setObjectMaterial [_lbt_front_left_4, _blank];
			_car setObjectMaterial [_lbt_front_left_5, _light1];
            
			_car setObjectMaterial [_lbt_front_right_1, _light3];
			_car setObjectMaterial [_lbt_front_right_2, _light3];
			_car setObjectMaterial [_lbt_front_right_3, _blank];
			_car setObjectMaterial [_lbt_front_right_4, _blank];
			_car setObjectMaterial [_lbt_front_right_5, _blank];
            
			_car setObjectMaterial [_lbf_left_1, _light1];
			_car setObjectMaterial [_lbf_left_2, _blank];
            
			_car setObjectMaterial [_lbf_right_1, _light3];
			_car setObjectMaterial [_lbf_right_2, _blank];
            
			_car setObjectMaterial [_lbg_left_1, _blank];
			
			_car setObjectMaterial [_lbg_right_1, _light3];
			
			
			sleep 0.3;
            
		};
		
		case 2: {
            
            //////////////////////////////////////////////// FIRST ANIMATION 
            
			_car animate["lightf_l", 0];
			_car animate["lightf_r", 1];
			_car animate["lightb_l", 0];
			_car animate["lightb_r", 1];
			
			_car setObjectMaterial [_lbb_left_1, _light1];
			_car setObjectMaterial [_lbb_left_2, _light1];
            
			_car setObjectMaterial [_lbb_right_1, _blank];
			_car setObjectMaterial [_lbb_right_2, _blank];
            
			if(_ani_directional == -1) then 
			{
				_car setObjectMaterial [_lbt_back_left_1, _light1];
				_car setObjectMaterial [_lbt_back_left_2, _light1];
				_car setObjectMaterial [_lbt_back_left_3, _light1];
				_car setObjectMaterial [_lbt_back_left_4, _light1];
                
				_car setObjectMaterial [_lbt_back_right_1, _blank];
				_car setObjectMaterial [_lbt_back_right_2, _blank];
				_car setObjectMaterial [_lbt_back_right_3, _blank];
				_car setObjectMaterial [_lbt_back_right_4, _blank];
			};
			
			_car setObjectMaterial [_lbt_back_left_5, _light1];
            
			_car setObjectMaterial [_lbt_back_right_5, _blank];
            
			_car setObjectMaterial [_lbt_front_left_1, _light1];
			_car setObjectMaterial [_lbt_front_left_2, _light1];
			_car setObjectMaterial [_lbt_front_left_3, _light1];
			_car setObjectMaterial [_lbt_front_left_4, _light1];
			_car setObjectMaterial [_lbt_front_left_5, _light1];
            
			_car setObjectMaterial [_lbt_front_right_1, _blank];
			_car setObjectMaterial [_lbt_front_right_2, _blank];
			_car setObjectMaterial [_lbt_front_right_3, _blank];
			_car setObjectMaterial [_lbt_front_right_4, _blank];
			_car setObjectMaterial [_lbt_front_right_5, _blank];
            
			_car setObjectMaterial [_lbf_left_1, _light1];
			_car setObjectMaterial [_lbf_left_2, _light1];
            
			_car setObjectMaterial [_lbf_right_1, _blank];
			_car setObjectMaterial [_lbf_right_2, _blank];
            
			_car setObjectMaterial [_lbg_left_1, _light1];
			
			_car setObjectMaterial [_lbg_right_1, _blank];
			
			sleep 0.3;
            
            //////////////////////////////////////////////// SECOND ANIMATION 
            
			_car animate["lightf_l", 1];
			_car animate["lightf_r", 0];
			_car animate["lightb_l", 1];
			_car animate["lightb_r", 0];
			
			_car setObjectMaterial [_lbb_left_1, _blank];
			_car setObjectMaterial [_lbb_left_2, _blank];
            
			_car setObjectMaterial [_lbb_right_1, _light3];
			_car setObjectMaterial [_lbb_right_2, _light3];
            
        
			if(_ani_directional == -1) then 
			{
				_car setObjectMaterial [_lbt_back_left_1, _blank];
				_car setObjectMaterial [_lbt_back_left_2, _blank];
				_car setObjectMaterial [_lbt_back_left_3, _blank];
				_car setObjectMaterial [_lbt_back_left_4, _blank];
                
				_car setObjectMaterial [_lbt_back_right_1, _light3];
				_car setObjectMaterial [_lbt_back_right_2, _light3];
				_car setObjectMaterial [_lbt_back_right_3, _light3];
				_car setObjectMaterial [_lbt_back_right_4, _light3];
			};
			
			_car setObjectMaterial [_lbt_back_left_5, _blank];
            
			_car setObjectMaterial [_lbt_back_right_5, _light3];
            
			_car setObjectMaterial [_lbt_front_left_1, _blank];
			_car setObjectMaterial [_lbt_front_left_2, _blank];
			_car setObjectMaterial [_lbt_front_left_3, _blank];
			_car setObjectMaterial [_lbt_front_left_4, _blank];
			_car setObjectMaterial [_lbt_front_left_5, _blank];
            
			_car setObjectMaterial [_lbt_front_right_1, _light3];
			_car setObjectMaterial [_lbt_front_right_2, _light3];
			_car setObjectMaterial [_lbt_front_right_3, _light3];
			_car setObjectMaterial [_lbt_front_right_4, _light3];
			_car setObjectMaterial [_lbt_front_right_5, _light3];
            
			_car setObjectMaterial [_lbf_left_1, _blank];
			_car setObjectMaterial [_lbf_left_2, _blank];
            
			_car setObjectMaterial [_lbf_right_1, _light3];
			_car setObjectMaterial [_lbf_right_2, _light3];
            
			_car setObjectMaterial [_lbg_left_1, _blank];
            
			_car setObjectMaterial [_lbg_right_1, _light3];
			
			
			sleep 0.3;
            
		};
        
		case 0: {
            
            //////////////////////////////////////////////// STOP ALL
            
			_car setObjectMaterial [_lbb_left_1, _blank];
			_car setObjectMaterial [_lbb_left_2, _blank];
            
			_car setObjectMaterial [_lbb_right_1, _blank];
			_car setObjectMaterial [_lbb_right_2, _blank];
            
			_car setObjectMaterial [_lbt_back_left_1, _blank];
			_car setObjectMaterial [_lbt_back_left_2, _blank];
			_car setObjectMaterial [_lbt_back_left_3, _blank];
			_car setObjectMaterial [_lbt_back_left_4, _blank];
			_car setObjectMaterial [_lbt_back_left_5, _blank];
            
			_car setObjectMaterial [_lbt_back_right_1, _blank];
			_car setObjectMaterial [_lbt_back_right_2, _blank];
			_car setObjectMaterial [_lbt_back_right_3, _blank];
			_car setObjectMaterial [_lbt_back_right_4, _blank];
			_car setObjectMaterial [_lbt_back_right_5, _blank];
            
			_car setObjectMaterial [_lbt_front_left_1, _blank];
			_car setObjectMaterial [_lbt_front_left_2, _blank];
			_car setObjectMaterial [_lbt_front_left_3, _blank];
			_car setObjectMaterial [_lbt_front_left_4, _blank];
			_car setObjectMaterial [_lbt_front_left_5, _blank];
            
			_car setObjectMaterial [_lbt_front_right_1, _blank];
			_car setObjectMaterial [_lbt_front_right_2, _blank];
			_car setObjectMaterial [_lbt_front_right_3, _blank];
			_car setObjectMaterial [_lbt_front_right_4, _blank];
			_car setObjectMaterial [_lbt_front_right_5, _blank];
            
			_car setObjectMaterial [_lbf_left_1, _blank];
			_car setObjectMaterial [_lbf_left_2, _blank];
            
			_car setObjectMaterial [_lbf_right_1, _blank];
			_car setObjectMaterial [_lbf_right_2, _blank];
            
			_car setObjectMaterial [_lbg_left_1, _blank];
            
			_car setObjectMaterial [_lbg_right_1, _blank];
            
            _car animate ["ani_lightbar",-1];
			
			_car animate["lightf_l", 0];
			_car animate["lightf_r", 0];
			_car animate["lightb_l", 0];
			_car animate["lightb_r", 0];
            
		};
		
	};
	
	sleep 0.01;
}; 

exit;