OnPlayerFakeKill
============

## Credits ##
Hook Method 7: Y_Less and IpSBruno.

Include Developer: pds2k12.

[[uL]Pottus](http://forum.sa-mp.com/member.php?u=169807).

## Callback ##
	
	public OnFakeKillDetected(playerid)
	{
		Ban(playerid);
		SendClientMessage(playerid, -1, "You have been banned for fake-killing.");
		return true;
	}
