AntiFakeKill
============
Credits to Y_Less and IpSBruno for Hook Method 7 and pds2k12 for scripting the whole include.

## Callback ##


	public OnFakeKillDetected(playerid)
	{
		Ban(playerid);
		SendClientMessage(playerid, -1, "You have been banned for fake-killing.");
		return true;
	}
