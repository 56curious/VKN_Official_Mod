// by ALIAS
//[position_1_name, position_2_name, target_name, duration, zoom_level1, zoom_level_2, attached, x_rel_coord, y_rel_coord, z_rel_coord,last_shot]
_campos1= _this select 0;
_campos2= _this select 1;
_targetcam = _this select 2;
_camera_duration = _this select 3;
_zoom_level1 = _this select 4;
_zoom_level2 = _this select 5;
_cam_attached = _this select 6;
_x_coord = _this select 7;
_y_coord = _this select 8;
_z_coord = _this select 9;
_last_shot = _this select 10;

// ----------------------
loopDone = false;

if (!loopdone) then
{
	if (_cam_attached) then {

		_camera = "camera" camCreate (getpos _campos1);
				showCinemaBorder true;
		_camera attachTo [_campos2, [_x_coord, _y_coord, _z_coord]];
		_camera cameraEffect ["internal", "BACK"];
		_camera camCommand "inertia on";
		_camera camPrepareTarget _targetcam;
		_camera camPrepareFOV _zoom_level1;
		_camera camCommitPrepared _camera_duration;
		sleep _camera_duration;
		_camera cameraEffect ["terminate","back"];
		camDestroy _camera;

	} else
		{
		// initial/start position where camera is created
		_camera = "camera" camCreate (getpos _campos1);
				showCinemaBorder true;
		_camera cameraEffect ["internal", "BACK"];
		_camera camCommand "inertia on";
		_camera camPrepareTarget _targetcam;
		_camera camPrepareFOV _zoom_level1;
		_camera camCommitPrepared 0;

		// pos 2 - where camera is moving next - target2
		_camera camPreparePos (getpos _campos2);
		_camera camPrepareTarget _targetcam;
		_camera camPrepareFOV _zoom_level2;
		_camera camCommitPrepared _camera_duration;
		sleep _camera_duration;
		_camera cameraEffect ["terminate","back"];
		camDestroy _camera;
		};
	if (_last_shot) then {loopdone = true};
};

true