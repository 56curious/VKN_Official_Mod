/*
Script name:    fn_strategicMapInit.sqf
Created on:     11 ‎December ‎2018
Author:         Curious

License:        This file is under "Arma Public License No Derivatives (APL-ND)"
                More information can be found at:
                https://www.bohemia.net/community/licenses/arma-public-license-nd

Description:    setup params and create strategic map

Framework:      Strategic Map

Parameters:
                0: OBJECT - Useally player
*/

params ["_unit"];

{
    _x setMarkerAlphaLocal 0;
} forEach allMapMarkers;

private _sunEval = call VKN_fnc_sunEval;
private _time = [false , true] select (    (_sunEval <= 6) or (_sunEval >=21)  );

//Collect loading screen image - if none, use terrain default
private _loadingPicture = getText (missionconfigfile >> "loadScreen");
if (_loadingPicture == "") then {
    _loadingPicture = getText (configFile >> "cfgworlds" >> worldName >> "pictureShot");
};

sleep 0.1;

private _missionData = (_unit call BIS_fnc_tasksUnit) apply {
    private _taskInfo = _x call BIS_fnc_taskDescription; //return ["description", "title", "marker"]
    private _taskPos = _x call BIS_fnc_taskDestination; //return  [x,y,z], or [object,precision]
    private _taskState = _x call BIS_fnc_taskState;

    private _taskDescription = _taskInfo select 0; //Isolate Description
    private _taskTitle = _taskInfo select 1; //Isolate Title

    //If taskPos is a object, resolve it to a position.
    if ((_taskPos select 0) isEqualType objNull) then {
        //getPos and convert to [x,y,z]
        _taskPos =  getPos (_taskPos select 0);
    };

    //setup custom mission using final data
    [
        _taskPos,
        {systemChat format ["%1, you can't use this feature!",name ((_this # 9) # 0)]},
        _taskTitle select 0,
        _taskDescription select 0,
        "Task State: " + str _taskState,
        "",
        1.8,
        [player]
    ]
};

sleep 0.1;

//Collect ORBAT data
_orbatData = [
    [
        getPos _unit, //TO-DO: Grab respawn and apply full ORBAT, grab player and apply their sections ORBAT.
        configFile >> "CfgORBAT" >> "VKN" >> "VKN_Home",
        configFile >> "CfgORBAT" >> "VKN" >> "VKN_Home",
        ["Viking PMC ORBAT"],
        10
    ]
];

sleep 0.1;

_Var = missionNamespace getVariable ["VKN_fnc_strategicMapOpen_missions_Registered_Var", []];
_missionData + _Var;

//Ignore client/server side exec - function VKN_fnc_initStrategicPreInit does this already
[
    findDisplay 46, //display type

    [worldSize / 2, worldsize / 2, 0], //Position - currently map center

    _missionData, //large array of every task type

    _orbatData, //Apply orbat onto the map at the position of the player

    [], //Markers - TO-DO: Grab all pre-placed markers and place them

    [], //images

    overcast, //Mission overcast

    _time, //Evaluated time

    1, //scaler (zoom) max 1

    true, //Simulation of effect

    "Viking PMC Strategic Map Viewer", //Default lable at bottom

    true, // Show map name

    "\a3\ui_f\data\map\groupicons\selector_selectedmission_ca.paa"

] call VKN_fnc_StrategicMapOpen;

{
    _x setMarkerAlphaLocal 1;
} forEach allMapMarkers;

true