#include "types.h"
#include "TeamBuilding.h"

using namespace std;
namespace TeamSelection_NS
{
    TeamSelection::TeamSelection()
    {
    }
void TeamSelection::buildPlayer()
{
  for(int i = 1;i <= NO_OF_PLAYERS;i++)
  {
    int value = 0;
    cout << "Enter PlayerType" << endl;
    cout << "0.BATSMEN" << endl;
    cout <<"1.BOWLER"<< endl;
    cout <<"2.ALLROUNDER"<< endl;
    cout <<"3.WICKET-KEEPER"<< endl;
    cin>>value;
    VALIDATE_INT_INPUT(std::cin, "Error: Invalid digit entered. Please use a number.", value);
    while (1)
    {
        if (value< BATSMEN || value>WK_KEEPER)
        {
            cout << "invalid input and enter correct input" << endl;
            cin >> value;
            VALIDATE_INT_INPUT(std::cin, "Error: Invalid digit entered. Please use a number.", value);
        }
        else
        {
            break;
        }
     }
     playerInfo inf;
     inf.typ = Player_Type(value);
     cout << "Enter player HAND " << endl;
     cout << "1.LEFT HAND" << endl;
     cout << "2.RIGHT HAND" << endl;
     cin >> value;
     VALIDATE_INT_INPUT(std::cin, "Error: Invalid digit entered. Please use a number.", value);
     while (1)
     {
         if (value < LEFT_ARM || value > RIGHT_ARM)
         {
            cout << "InvalidInput" << endl;
            cout << "Please Enter Correct Input" << endl;
            cin >> value;
            VALIDATE_INT_INPUT(std::cin, "Error: Invalid digit entered. Please use a number.", value);
         }
         else
         {
            break;
         }
     }
     inf.hnd = Playing_HAND(value);
     cout << "Enter Player Name" << endl;
     cin >> inf.name;
     if (inf.typ == BOWLER || inf.typ == ALL_ROUNDER)
     {
          cout << "Enter Bowler type" << endl;
          cout << "0.FastBowler" << endl;
          cout << "1.MediumFast" << endl;
          cout << "2.Spinner" << endl;
          cin >> value;
          VALIDATE_INT_INPUT(std::cin, "Error: Invalid digit entered. Please use a number.", value);
          while (1)
          {
              if (value < FAST || value > SPINNER)
              {
                  cout << "Invalid input" << endl;
                  cout << "Enter correct input" << endl;
                  cin >> value;
                  VALIDATE_INT_INPUT(std::cin, "Error: Invalid digit entered. Please use a number.", value);
              }
              else
              {
                  break;
              }
          }
          inf.btyp = (Bowling_TYPE)value;
      }
      else
      {
          inf.btyp = INVALID_FOR_BATSMEN;
      }
      vec_PlayerInformation.push_back(inf);
    }
        cout<<"Team Building done"<<endl;
        cout<<"Here is the Team"<<endl;

    }
 vector<playerInfo> TeamSelection::getPlayerInfo()
 {
     return vec_PlayerInformation;
 }

}
