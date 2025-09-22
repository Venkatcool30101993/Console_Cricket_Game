
#include "types.h"
#include "TeamPlayerInfo.h"
#include "AutoTeamSelector.h"
#include "TeamBuilding.h"

using namespace std;


int no_of_matches = 0;
int no_of_balls = 0;
int no_of_overs = 0;
int you_won = 0;
int opp_won = 0;
TeamPlayer_NS::TeamPlayerInfo infoObj;

void Bowling()
{
    int opp_score =0;
    int opp_wickets =0;
    int opp_overs=0;
    cout<<"the opponent batting begins"<<endl;
    for (int i = 1; i < no_of_balls+1; ++i)
    {
        int value = rand()% RUNS_LIMITER;
        int uservalue;
        cout<<"Enter value between 0 to 6"<<endl;
        cin>>uservalue;
        VALIDATE_INT_INPUT(std::cin, "Error: Invalid score entered. Please use a number.",uservalue);
        while (1)
        {
            if (uservalue > BOUNDARY_SIX || uservalue < DEFAULT_SCORE)
            {
                cout << "Invalid.Kindly enter valid value between 0 to 6" << endl;
                cin >> uservalue;
                VALIDATE_INT_INPUT(std::cin, "Error: Invalid score entered. Please use a number.",uservalue);
            }
            else
            {
                break;
            }
        }
        if(value == uservalue)
        {
            opp_wickets++;
            cout<<"Umpire:OUT!!-->Its a Wicket"<<endl;
            if(opp_wickets == TOTAL_WICKETS)
            {
                  cout<<"All out"<<endl;
                  break;
            }

            infoObj.displayScore(opp_score,opp_wickets,i);
        }
        else
        {
            if(value == BOUNDARY_FOUR || value == BOUNDARY_SIX)
            {
                cout<<"Its a boundary, opponent nailed it"<<endl;
            }
            opp_score+=value;
            infoObj.displayScore(opp_score,opp_wickets,i);
        }
      if(i%BALLS_PER_OVER == 0)
      {
          cout<<"EndOfOver"<<++opp_overs<<endl;
          infoObj.displayScore(opp_score,opp_wickets,i);
      }
    }
    cout<<"Your chasing begins for"<<opp_score+1<<"runs"<<endl;
         int score = 0;
        int wickets = 0;
        int overs = 0;
        int batsman_score = 0;
        int btmn_index = 1;
        for (int i = 1; i < no_of_balls+1; ++i)
      {
        int value = rand()% RUNS_LIMITER;
        int uservalue;
        cout << "Enter value between 0 to 6" << endl;
        cin >> uservalue;
        VALIDATE_INT_INPUT(std::cin, "Error: Invalid score entered. Please use a number.", uservalue);
        while (1)
        {
            if (uservalue > BOUNDARY_SIX || uservalue < DEFAULT_SCORE)
            {
                cout << "Invalid.Kindly enter valid value between 0 to 6" << endl;
                cin >> uservalue;
                VALIDATE_INT_INPUT(std::cin, "Error: Invalid score entered. Please use a number.", uservalue);
            }
            else
            {
                break;
            }
        }
        if(value == uservalue)
        {
            infoObj.updateBatsmenScore(btmn_index,batsman_score);
            cout << "Umpire:OUT!!-->Its a Wicket" << endl;
            batsman_score =0;
            btmn_index++;
            wickets++;
            if(wickets == TOTAL_WICKETS)
            {
                cout << "All out" << endl;
                break;

            }
            else
            {
                infoObj.displayScore(score, wickets, i, batsman_score, btmn_index);
            }
        }
        else
        {
            score+=uservalue;
            batsman_score+=uservalue;
            if(uservalue == BOUNDARY_FOUR || uservalue == BOUNDARY_SIX)
            {
                cout<<"Its a boundary, you nailed it"<<endl;
            }
            infoObj.displayScore(score,wickets,i,batsman_score,btmn_index);
            infoObj.updateBatsmenScore(btmn_index,batsman_score);
           if(score>opp_score)
           {
             
             infoObj.displayScoreBoard();
             break;
          }
        }
      if(i%BALLS_PER_OVER == 0)
      {
          cout<<"EndOfOver"<<++overs<<endl;
          infoObj.displayScore(score,wickets,i,batsman_score,btmn_index);
      }

    }
     if(score>opp_score)
     {
         cout<<"You won"<<endl;
         you_won++;
     }
     else if(opp_score == score)
     {
         cout<<"Match Tied"<<endl;
     }
     else
     {
         cout<<"Opponent won"<<endl;
         opp_won++;
     }

}

void Batting()
{
    cout<<"\n Batting Begins"<<endl;
        int score = 0;
        int wickets = 0;
        int overs = 0;
        int batsman_score = 0;
        int btmn_index = 1;
        for (int i = 1; i < no_of_balls+1; ++i)
    {
        int value = rand()% RUNS_LIMITER;
        int uservalue;
        cout<<"Enter value between 0 to 6"<<endl;
        cin>>uservalue;
        VALIDATE_INT_INPUT(std::cin, "Error: Invalid score entered. Please use a number.", uservalue);
        while (1)
        {
                if (uservalue > BOUNDARY_SIX || uservalue < DEFAULT_SCORE)
                {
                    cout << "Invalid.Kindly enter valid value between 0 to 6" << endl;
                    cin >> uservalue;
                    VALIDATE_INT_INPUT(std::cin, "Error: Invalid score entered. Please use a number.", uservalue);
                    
                }
                else
                {
                    break;
                }
        }
        if(value == uservalue)
        {
            cout << "Umpire:OUT!!-->Its a Wicket" << endl;
            infoObj.updateBatsmenScore(btmn_index,batsman_score);
            infoObj.displayScore(score, ++wickets, i, batsman_score, btmn_index);
            batsman_score =0;
            btmn_index++;
            if(wickets == TOTAL_WICKETS)
            {
                infoObj.displayScoreBoard();
                break;
            }
            
        }
        else
        {
            score+=uservalue;
            batsman_score+=uservalue;
            if(uservalue == BOUNDARY_FOUR || uservalue == BOUNDARY_SIX)
            {
                cout<<"Its a boundary, you nailed it"<<endl;
            }
            infoObj.displayScore(score,wickets,i,batsman_score,btmn_index);
            infoObj.updateBatsmenScore(btmn_index,batsman_score);
        }
      if(i % BALLS_PER_OVER == 0)
      {
          cout<<"EndOfOver"<<++overs<<endl;
          infoObj.displayScore(score,wickets,i,batsman_score,btmn_index);
      }
      if(i==no_of_balls)
      {
          infoObj.displayScoreBoard();
      }
    }
    cout<<"Opponent has to chase"<<score+1<<endl;
    int opp_score =0;
    int opp_wickets =0;
    int opp_overs=0;
    cout<<"the opponent batting begins"<<endl;
    for (int i = 1; i < no_of_balls+1; ++i)
    {
        int value = rand()% RUNS_LIMITER;
        int uservalue;
        cout<<"Enter value between 0 to 6"<<endl;
        cin>>uservalue;
        VALIDATE_INT_INPUT(std::cin, "Error: Invalid datatype other than integer entered. Please use a number.", uservalue);
        while (1)
        {
            if (uservalue > BOUNDARY_SIX || uservalue < DEFAULT_SCORE)
            {
                cout << "Invalid.Kindly enter valid value between 0 to 6" << endl;
                cin >> uservalue;
                VALIDATE_INT_INPUT(std::cin, "Error: Invalid score entered. Please use a number.", uservalue);
            }
            else
            {
                break;
            }
        }
        if(value == uservalue)
        {
            cout << "Umpire:OUT!!-->Its a Wicket" << endl;
            if(opp_wickets == TOTAL_WICKETS)
            {
                break;

            }
            infoObj.displayScore(opp_score,++opp_wickets,i);
        }
        else
        {
            if(value == BOUNDARY_FOUR || value == BOUNDARY_SIX)
            {
                cout<<"Its a boundary, opponent nailed it"<<endl;
            }
            opp_score+=value;
            if(opp_score>score)
            {
                cout<<"Opponent wins"<<endl;
                break;
            }
            infoObj.displayScore(opp_score,opp_wickets,i);
        }
      if(i % BALLS_PER_OVER ==0)
      {
          cout<<"EndOfOver"<<++opp_overs<<endl;
          infoObj.displayScore(opp_score,opp_wickets,i);
      }
    }
     if(opp_score<score)
     {
         cout<<"You won"<<endl;
         you_won++;
     }
     else if(opp_score == score)
     {
         cout<<"Match Tied"<<endl;
     }
     else
     {
         cout<<"Opponent won"<<endl;
         opp_won++;
         
     }
  }
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    cout << "Hello world!" << endl;
    int teamSelection = 0;
    cout<<"Welcome to the CRICKET GAME"<<endl;
    cout<<"Lets begin with team selection"<<endl;
    cout<<"Press 1. For AutoTeam selection" <<endl;
    cout<<"2. Manual Team building"<<endl;
    cin>>teamSelection;
    VALIDATE_INT_INPUT(std::cin, "Error: Invalid score entered. Please use a number.", teamSelection);

    while (1)
    {
        if (teamSelection == TEAM_SQUAD::AUTOTEAM_SQUAD)
        {
            cout << "\n AUTOMATIC SQUAD SELECTED" << endl;

            autoTeamSelector_NS::AutoTeamSelector autoTeamObj = autoTeamSelector_NS::AutoTeamSelector::getInstance();
            vector<playerInfo> temp = autoTeamObj.getDefaultPlayerInfo();
            infoObj.showTeam(temp);
            break;
        }
        else if (teamSelection == TEAM_SQUAD::MANUAL_TEAM_SQUAD)
        {
            cout << "\n MANUAL TEAM SQUAD" << endl;

            TeamSelection_NS::TeamSelection obj = TeamSelection_NS::TeamSelection::getInstance();
            obj.buildPlayer();
            vector<playerInfo> temp = obj.getPlayerInfo();
            infoObj.showTeam(temp);
            break;

        }
        else
        {
            cout << "INVALID CHOICE CAPTURED" << endl;
            cout << "Press 1. For AutoTeam selection" << endl;
            cout << "2. Manual Team building" << endl;
            cin >> teamSelection;
            VALIDATE_INT_INPUT(std::cin, "Error: Invalid no entered. Please use a number.", teamSelection);
        }
    }
    cout << "Enter the no of overs" << endl;
    cin >> no_of_overs;
    VALIDATE_INT_INPUT(std::cin, "Error: Invalid no entered. Please use a number.", no_of_overs);
    no_of_balls = no_of_overs * BALLS_PER_OVER;

    cout << "No of matches to be played" << endl;
    cin >> no_of_matches;
    VALIDATE_INT_INPUT(std::cin, "Error: Invalid no entered. Please use a number.", no_of_matches);

    int fieldchoser = 0;
    for (int i = 0; i < no_of_matches; i++)
    {
        infoObj.clearBatsmenScore();
        cout << "Lets Begin the match" << endl;
        cout << "We will see the score after every ball bowled" << endl;
        cout << "Select 1. For Batting" << endl;
        cout << "2.For Bowling" << endl;
        cin >> fieldchoser;
        VALIDATE_INT_INPUT(std::cin, "Error: Invalid digit entered. Please use a number.", fieldchoser);
        while (1)
        {
            if (fieldchoser == CHOICE_BATTING)
            {
                Batting();
                break;
            }
            else if (fieldchoser == CHOICE_BOWLING)
            {
                Bowling();
                break;
            }
            else
            {
                cout << "Invalid option selected" << endl;
                cout << "Select 1. For Batting" << endl;
                cout << "2.For Bowling" << endl;
                cin >> fieldchoser;
                VALIDATE_INT_INPUT(std::cin, "Error: Invalid score entered. Please use a number.", fieldchoser);
            }
        }
    }
    if (opp_won > you_won)
    {
        cout << "Series results" << opp_won << "-" << you_won << endl;
        cout << "Opponent won the series" << endl;
    }
    else if (opp_won == you_won)
    {
        cout << "Series results" << you_won << "-" << opp_won << endl;
        cout << "Series tied" << endl;
    }
    else
    {
        cout << "Series results" << you_won << "-" << opp_won << endl;
        cout << " You won the series congrats" << endl;
    }
    string s1;
    cout << "Enter your name";
    cin >> s1;
    cout << "Thanks for the game" << s1<<endl;
    return 0;
}
