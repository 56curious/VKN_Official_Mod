//Play and stop the sound
[] spawn {
  "paniccall" remoteExec ["playSound"];
  sleep 7;
  "" remoteExec ["playSound"];
};

sleep 1;

_text = str parseText "<t size='1.25' font='Zeppelin33' color='#ff0000' align='center'>OFFICER PRESSED PANIC BUTTON (check your map)</t>";
_text remoteExec ["hintSilent", 0];

_markerstr = createMarker ["Panic1", _this];
_markerstr setMarkerShape "ELLIPSE";
_markerstr setMarkerColor "ColorWEST";
_markerstr setMarkerBrush "SolidBorder";
_markerstr setMarkerAlpha 0.8;
_markerstr setMarkerSize [70, 70];
sleep 1;

//Allocate a new segment in the scheduler to avoid this entire file being open | instead just the code block.
[] spawn {
  [
  "<t color='#ff0000' shadow = 0 size='1.5'>DISPATCH: </t><t color ='#FFFFFF' shadow = 0 size ='1.5'>All available units, officer in need of assistance, check your maps for the Red Panic Circle.</t>",
  "PLAIN DOWN"
  ] remoteExec ["titleText", 0];
  sleep 180;
  deleteMarker "Panic1";
};
