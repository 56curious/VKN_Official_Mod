/*
Script name:    fn_cameraSetup.sqf
Created on:     21 ‎December ‎2018
Author:         Alias (Modifed by Curious)

Description:    Fire an EMP with the following params

Framework:      EMP

Parameters:
								0: STRING - Name of object where camera is created.
								1: STRING - Name of the object where the camera will move to.
								2: STRING - Name of the target object the camera will face.
								3: NUMBER - Time in seconds in which the camera will be around.
								4: NUMBER - Accepted values: 0.01 to 2, FOV (field of view) value for initial position.
								5: NUMBER - Accepted values: 0.01 to 2, FOV (field of view) value for final position.
								6: BOOLEAN - If camera will be attached to a moving object. (True = Yes, False = No).
								7: DISTANCE - relative position to the attached object on x coordinate
								8: DISTANCE - relative position to the attached object on y coordinate
								9: DISTANCE - relative position to the attached object on z coordinate
								10: BOOLEAN - If camera shot is last shot of scene. (True = Yes, False = No).
Example:

								[obj1, obj2, targetobj, 10, 1, 1, true, 0, 0, 5, true] call VKN_fnc_cameraSetup;
*/

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
