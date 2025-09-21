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
  for(int i = 1;i<6;i++)
  {
    int value;
    cout<<i<<endl;
    cout<<"Enter PlayerType"<<endl;
    cout<<"0.BATSMEN"<<endl;
    cout<<"1.BOWLER"<<endl;
    cout<<"2.ALLROUNDER"<<endl;
    cout<<"3.WICKET-KEEPER"<<endl;
    cin>>value;
    if(value<0&&value>3)
    {
      cout<<"invalid input and enter correct input"<<endl;
      cin>>value;
    }
    playerInfo inf;
    inf.typ = Player_Type(value);
    cout<<"Enter player HAND "<<endl;
    cout<<"1.LEFT HAND"<<endl;
    cout<<"2.RIGHT HAND"<<endl;
    cin>>value;
    if(value!= 1 && value!=2)
    {
        cout<<"InvalidInput"<<endl;
        cin>>value;
    }
        inf.hnd = Playing_HAND(value);
        cout<<"Enter Player Name"<<endl;
        cin>>inf.name;
        if(inf.typ == 1 || inf.typ == 2)
        {
            cout<<"Enter Bowler type"<<endl;
            cout<<"0.FastBowler"<<endl;
            cout<<"1.MediumFast"<<endl;
            cout<<"2.Spinner"<<endl;
            cin>>value;
            inf.btyp = (Bowling_TYPE)value;
        }
        else
        {
            inf.btyp = (Bowling_TYPE)3;
        }
        vec_PlayerInformation.push_back(inf);
        }
        cout<<"Team Building done"<<endl;
        cout<<"Here is the Team"<<endl;

    }
 vector<playerInfo> TeamSelection::getPlayerInfo()
 {
    cout<<"TeamSelection::getPlayerInfo()"<<endl;
    cout<<"vec size"<<vec_PlayerInformation.size()<<endl;
     return vec_PlayerInformation;
 }

}
