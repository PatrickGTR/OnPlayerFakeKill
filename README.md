AntiFakeKill
============
Thanks to pds2k12 for this include, Y_Less for his amazing YSI Library (y_hooks), SA-MP Team - for the a_samp include and last but not least BodyBoardVEVO - for helping me testing the include.

## Callback ##


	public OnFakeKillDetected(playerid)
	{
		Ban(playerid);
		SendClientMessage(playerid, -1, "You have been banned for fake-killing.");
		return true;
	}
