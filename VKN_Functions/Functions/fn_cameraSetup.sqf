/*
Script name: fn_camerasetup.sqf
Created on: 21 ‎December ‎2018
Author: Alias (modifed by Curious)

Description: fire an EMP with the following params

Framework: EMP

parameters:
0: strinG - name of object where camera is created.
1: strinG - name of the object where the camera will move to.
2: strinG - name of the target object the camera will face.
3: NUMBER - time in seconds in which the camera will be around.
4: NUMBER - Accepted values: 0.01 to 2, FOV (field of view) value for initial position.
5: NUMBER - Accepted values: 0.01 to 2, FOV (field of view) value for final position.
6: BOOLEAN - if camera will be attached to a moving object. (true = Yes, false = No).
7: distance - relative position to the attached object on x coordinate
8: distance - relative position to the attached object on y coordinate
9: distance - relative position to the attached object on z coordinate
10: BOOLEAN - if camera shot is last shot of scene. (true = Yes, false = No).
Example:

[obj1, obj2, targetobj, 10, 1, 1, true, 0, 0, 5, true] call VKN_fnc_camerasetup;
*/

// by ALIAS
// [position_1_name, position_2_name, target_name, duration, zoom_level1, zoom_level_2, attached, x_rel_coord, y_rel_coord, z_rel_coord, last_shot]
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
loopdone = false;

if (!loopdone) then {
    if (_cam_attached) then {
        _camera = "camera" camCreate (getPos _campos1);
        showCinemaBorder true;
        _camera attachto [_campos2, [_x_coord, _y_coord, _z_coord]];
        _camera cameraEffect ["internal", "BACK"];
        _camera camCommand "inertia on";
        _camera camPrepareTarget _targetcam;
        _camera camPrepareFov _zoom_level1;
        _camera camCommitPrepared _camera_duration;
        sleep _camera_duration;
        _camera cameraEffect ["terminate", "back"];
        camDestroy _camera;
    } else {
        // initial/start position where camera is created
        _camera = "camera" camCreate (getPos _campos1);
        showCinemaBorder true;
        _camera cameraEffect ["internal", "BACK"];
        _camera camCommand "inertia on";
        _camera camPrepareTarget _targetcam;
        _camera camPrepareFov _zoom_level1;
        _camera camCommitPrepared 0;
        
        // pos 2 - where camera is moving next - target2
        _camera camPreparePos (getPos _campos2);
        _camera camPrepareTarget _targetcam;
        _camera camPrepareFov _zoom_level2;
        _camera camCommitPrepared _camera_duration;
        sleep _camera_duration;
        _camera cameraEffect ["terminate", "back"];
        camDestroy _camera;
    };
    if (_last_shot) then {
        loopdone = true
    };
};

true