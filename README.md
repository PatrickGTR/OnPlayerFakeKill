AntiFakeKill
============
Thanks to pds2k12 for this include, Y_Less for his amazing YSI Library (y_hooks), SA-MP Team - for the a_samp include and last but not least BodyBoardVEVO - for helping me testing the include.

Callback
============

## Callback ##
public OnFakeKillDetected(playerid)
{
	Ban(playerid);
	SendClientMessage(playerid, -1, "You have been banned for fake-killing.");
	return true;
	
}
## Different buttons sizes ##

If you want to make a more prominent or a less prominent call-to-action button, you have options:

	<button class="small button">Button</button>
	<button class="large button">Button</button>
	
## Various buttons colors ##
