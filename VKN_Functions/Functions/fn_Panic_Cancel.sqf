_text = str parseText "<t size='1.25' font='Zeppelin33' color='#ff0000' align='center'>Last Panic call CANCELED</t>";
_text remoteExec ["hintSilent", 0];

deleteMarker "Panic1";

sleep 6;

"" remoteExec ["hintSilent", 0];
