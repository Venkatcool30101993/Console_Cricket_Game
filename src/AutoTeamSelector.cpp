#include "AutoTeamSelector.h"

using namespace std;
namespace autoTeamSelector_NS
{
    AutoTeamSelector::AutoTeamSelector()
    {

        playerInfo inf0 ={Player_Type::BATSMEN,Playing_HAND::RIGHT_ARM,Bowling_TYPE::INVALID_FOR_BATSMEN,"RohitSharma"};
        vec_DefaultPlayerInfo.push_back(inf0);
        playerInfo inf1 = {Player_Type::BATSMEN,Playing_HAND::RIGHT_ARM,Bowling_TYPE::INVALID_FOR_BATSMEN,"KLRahul"};
        vec_DefaultPlayerInfo.push_back(inf1);
        playerInfo inf2 = {Player_Type::BATSMEN,Playing_HAND::RIGHT_ARM,Bowling_TYPE::INVALID_FOR_BATSMEN,"ViratKohli"};
        vec_DefaultPlayerInfo.push_back(inf2);
        playerInfo inf3 = {Player_Type::WK_KEEPER,Playing_HAND::LEFT_ARM,Bowling_TYPE::INVALID_FOR_BATSMEN,"RishabhPant"};
        vec_DefaultPlayerInfo.push_back(inf3);
        playerInfo inf4 = {Player_Type::ALL_ROUNDER,Playing_HAND::LEFT_ARM,Bowling_TYPE::SPINNER,"AxarPatel"};
        vec_DefaultPlayerInfo.push_back(inf4);
    }
    vector<playerInfo> AutoTeamSelector::getDefaultPlayerInfo()
    {
        return vec_DefaultPlayerInfo;
    }
}
