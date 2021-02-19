//macros
#include "\vkn_misc\displays\displayDefines.hpp"

//Notification onload of 3den about an update.
add3DENEventHandler ["OnTerrainNew", {
  _var = profilenamespace getVariable ['VKN_VTT_Notification_V121', false];
  if (_var isEqualTo false) then {
    _display = findDisplay 313 createDisplay 'VKN_Template_Tool_Alert';
    _button = _display displayCtrl 1600;
    _button buttonSetAction "(findDisplay 3484) closedisplay 0; profilenamespace setVariable ['VKN_VTT_Notification_V121', true]; saveprofilenamespace;";
  };
}];
