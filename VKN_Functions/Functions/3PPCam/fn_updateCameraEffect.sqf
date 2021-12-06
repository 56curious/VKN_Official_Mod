params ["_player", "_cameraPosition"];

_camera = missionNamespace getVariable "VKN_3PP_Camera_Object";

_camera setpos (_player modeltoworld _cameraPosition); 
_camera camcommitprepared 0; 

_camera setvelocity [0,0,0]; 
_camera cameraeffect ["internal","back"]; 
cameraeffectenablehud true;

_camera camCommit 0;

true