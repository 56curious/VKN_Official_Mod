//Notification onload of 3den about an update.
add3DENEventHandler ["OnTerrainNew", {
  _var = profilenamespace getVariable ['VKN_MTT_Notification_V117', false];
  if (_var isEqualTo false) then {
    createDialog 'VKN_Template_Tool_Alert';
  };
}];
