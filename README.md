## OnPlayerFakeKill ##


## Credits ##
* [Y_Less](http://forum.sa-mp.com/member.php?u=29176) and [IpSBruno](http://forum.sa-mp.com/member.php?u=87608): Hook Method 7
* [pds2k12](http://forum.sa-mp.com/member.php?u=178953): Developing the script.
* [[uL]Pottus](http://forum.sa-mp.com/member.php?u=169807): His critisism improved the script.
* [Emmet_](http://forum.sa-mp.com/member.php?u=73154): Asisting me via skype, and helped me testing the fake kill.

## Callback ##
	
	public OnFakeKillDetected(playerid)
	{
		Ban(playerid);
		SendClientMessage(playerid, -1, "You have been banned for fake-killing.");
		return true;
	}
