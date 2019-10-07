/*
Script name:  fn_displayPlayerInfoAbove.sqf
Created on:   09 July ‎2019
Author:       Curious

Description:  Clear all name icons and repalce with one above the client

License:      This file is under "Arma Public License No Derivatives (APL-ND)"
              More information can be found at:
              https://www.bohemia.net/community/licenses/arma-public-license-nd

Example:      N/A
*/
[] spawn {
_cfgCredits = configfile >> "CfgCredits" >> "VKNCreditsRanks";
_layers = ["credits1" call bis_fnc_rscLayer,"credits2" call bis_fnc_rscLayer];
_delayT = 5.5;
_duration = _delayT * 1.5;

_credits = [
 ["item1", 7],
 ["item2", 5],
 ["item3",6],
 ["item4", 17],
 ["item5", 6],
 ["item6",7]
];

onEachFrame
{
  {
  _curUnit = _x;
    if ((side _curUnit == playerSide) && (_curUnit != player)) then {
      _creditsLoop = {
        _curItem = _x;
        _param = [_curItem,0,""] call bis_fnc_paramin;
        _resize = [_curItem,1,-1] call bis_fnc_paramin;

        _item = getarray (_cfgCredits >> _param);
        _title = _item select 0;
        _names = _item select 1;
        if (_resize >= 0) then {_names resize _resize};
        _text = format ["<t font='ExoMedium'>[%1] </t>",toUpper (_title select 0)];
        {
          _curName = _x;
          _text = _text + name _curName + "<br />";
        } foreach _names;
        _text = format ["<t size='0.8'>%1</t>",_text];

        addMissionEventHandler
        [
        	"Draw3D",
        	{
        		alphaText = linearConversion[5, 15, player distance _curUnit, 1, 0, true];
        		drawIcon3D ["", [0.85,0.85,0, alphaText], _curUnit modelToWorld[0,0,0.7], 0, 0, 0, _text, 0, 0.05];
        	}
        ];

      } forEach _credits;
    };
    sleep 0.01;
  } foreach allunits;
};
};
