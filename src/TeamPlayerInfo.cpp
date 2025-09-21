#include "TeamPlayerInfo.h"
namespace TeamPlayer_NS
{
    void TeamPlayerInfo::showTeam(vector<playerInfo> vec_PlayerInfo)
    {
     team_information = vec_PlayerInfo;
     for(auto playerinfo:team_information)
     {
        cout<<playerinfo.name<<" ";
        showHandType(playerinfo.hnd);
        cout<<" ";
        showTypeInfo(playerinfo.typ);
        cout<<" ";
        if((playerinfo.typ== Player_Type::ALL_ROUNDER)||(playerinfo.typ==Player_Type::BOWLER))
        {
          showBowlingType(playerinfo.btyp);
        }
        cout<<endl;

     }
    }
    void TeamPlayerInfo::showHandType(Playing_HAND hand)
    {
        switch(hand)
        {
        case Playing_HAND::LEFT_ARM:
            cout<<"LEFT HAND";
            break;
        case Playing_HAND::RIGHT_ARM:
            cout<<"RIGHT HAND";
            break;
        default:
            break;
        }
    }
    void TeamPlayerInfo::showBowlingType(Bowling_TYPE btype)
    {
        switch(btype)
        {
        case Bowling_TYPE::FAST:
            cout<<"Fast";
            break;
        case Bowling_TYPE::MEDIUM_FAST:
            cout<<"Medium Fast";
            break;
        case Bowling_TYPE::SPINNER:
            cout<<"Spinner";
            break;
        default:
            break;
        }
    }
    void TeamPlayerInfo::showTypeInfo(Player_Type type)
    {
        switch(type)
        {
            case Player_Type::BATSMEN:
            cout<<"Batsman";
            break;
            case Player_Type::ALL_ROUNDER:
            cout<<"ALL Rounder";
            break;
            case Player_Type::BOWLER:
            cout<<"Bowler";
            break;
            case Player_Type::WK_KEEPER:
            cout<<"WicketKeeper";
            break;
            default:
            break;
        }
    }
    void TeamPlayerInfo::displayScore(int score,int wickets,int balls,int batsmenscore,int index)
    {

        if(batsmenscore == 0 && index ==0)
        cout<<"Score"<<score<<"/"<<wickets<<" "<<"Overs"<<balls/6<<"."<<balls%6<<endl;
        else
        {

           cout<<"Score"<<score<<"/"<<wickets<<" "<<"Overs"<<balls/6<<"."<<balls%6<<" "<<"Batting "<<team_information[index-1].name<<
           "*"<<batsmenscore<<endl;
        }
    }

    void TeamPlayerInfo::displayScoreBoard()
    {
        cout << "Here comes the scoreboard" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "--BATSMEN--RUNS" << endl;
        for(int i=0;i<5;i++)
        {
            auto itr = batsmen_runs.find(i);
            if(itr != batsmen_runs.end())
            {
                   cout<<team_information[i].name<<" "<<itr->second<<endl;
            }
            else
            {
                cout<<team_information[i].name<<endl;
            }
        }
        

        cout << "------------------------------------------------------------" << endl;
    }

    void TeamPlayerInfo::updateBatsmenScore(int index,int score)
    {
        auto itr = batsmen_runs.find(index-1);
        if(itr == batsmen_runs.end())
        {

            batsmen_runs.insert(make_pair(index-1,score));
        }
        else
        {
         itr->second = score;
        }

    }
}
