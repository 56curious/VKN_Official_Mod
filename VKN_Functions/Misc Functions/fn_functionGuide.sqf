createdialog "VKN_Function_Guide_Home";
sleep 0.01;
// setup list box

_functionnames = [["Enable groups", "This function will enable the dynamic groups system."], ["Heal All players", "This function will reset all of the players to full health. Useful if the game broke."]];

{
    lbAdd [1500, _x select 0];
} forEach _functionnames;

// Loop a check to get the correct fnc information
while {dialog} do {
    _index = _functionnames findif {
        _x select 0 == _curFnc
    } // Only first element in every subarray
    _index = _functionnames findif {
        _x find _curFnc != -1
    } // Any element in subarray
    // returns either the index, or -1 if not found.
    // So returns either your ["some", "thing"] or [] if not found.
    // _curFnc param [_index, []]
    ctrlsettext [1100, _functionnames select _curFnc param [_index, []]];
};