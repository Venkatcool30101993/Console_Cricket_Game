#ifndef TEAMPLAYERINFO_H_INCLUDED
#define TEAMPLAYERINFO_H_INCLUDED
#include "types.h"
#include "TeamBuilding.h"
#include "TeamPlayerInfo.h"
#include <map>
using namespace TYPES_NS;
namespace TeamPlayer_NS
{



class TeamPlayerInfo
{
    vector<playerInfo> team_information;
    map<int,int>batsmen_runs;
public:
    void showHandType(Playing_HAND hand);
    void showBowlingType(Bowling_TYPE btype);
    void showTypeInfo(Player_Type type);
    void showTeam(vector<playerInfo> vec_PlayerInfo);
    void displayScore(int score,int wickets,int balls,int batsmenscore = DEFAULT_SCORE,int index = DEFAULT_BATSMEN_INDEX);
    void displayScoreBoard();
    void updateBatsmenScore(int index, int score);
    void clearBatsmenScore();
};

}
#endif // TEAMPLAYERINFO_H_INCLUDED
