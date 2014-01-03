#include <a_samp>
#include <YSI\y_hooks>

forward OnFakeKillDetected(playerid);

static
	FakeKill [ MAX_PLAYERS char ];

hook OnPlayerConnect(playerid)
{
	return FakeKill{ playerid } = 0;
}


hook OnPlayerDeath(playerid, killerid, reason)
{
	if(killerid == INVALID_PLAYER_ID) return false;

	if(GetKillerDistance(playerid, killerid, 50.0) == 0)
	{
		if(GetPlayerWeapon(killerid) != reason)
		{
			return CallLocalFunction("OnFakeKillDetected", "i", playerid);
		}
		else
		{
			FakeKill{ playerid } ++;
		}
	}
    else if(GetKillerDistance(playerid, killerid, 50.0) == 1)
    {
        if(reason == 0)
        {
            FakeKill{ playerid } ++;
        }
    }
	SetTimerEx("DetectedFakeKill", 1000, false, "i", playerid);
	return true;
}

#define function:%0(%1) forward %0(%1); public %0(%1)

function:DetectedFakeKill(playerid)
{
	FakeKill{ playerid } --;
	if( FakeKill { playerid } >= 5 )
		return CallLocalFunction("OnFakeKillDetected", "i", playerid);
	return true;
}

function:GetKillerDistance(playerid, killerid, Float:Distance)
{
	new Float:ReturnPos[3];
	if(!IsPlayerConnected(playerid) || !IsPlayerConnected(killerid)) return false;

	GetPlayerPos(killerid, ReturnPos[0] , ReturnPos[1], ReturnPos[2]);

	if(IsPlayerInRangeOfPoint(playerid, Distance, ReturnPos[0], ReturnPos[1], ReturnPos[2])) return true;
	else return false;
}
