createDialog "VKN_Function_Guide_Home";
sleep 0.01;
//setup list box

_functionNames = [["Enable Groups", "This function will enable the dynamic groups system."], ["Heal All Players", "This function will reset all of the players to full health. Useful if the game broke."]];

{
  lbAdd [1500, _x select 0];
} forEach _functionNames;

//Loop a check to get the correct fnc information
while {dialog} do {
  _index = _functionNames findIf {_x select 0 == _curFnc} //Only first element in every subarray
  _index = _functionNames findIf {_x find _curFnc != -1} //Any element in subarray
  //returns either the index, or -1 if not found.
  //So  returns either your ["some","thing"] or [] if not found.
  //_curFnc param [_index, []]
  ctrlSetText [1100, _functionNames select _curFnc param [_index, []]];
};
