#ifndef TEAMBUILDING_H_INCLUDED
#define TEAMBUILDING_H_INCLUDED

#include "types.h"
using namespace TYPES_NS;

namespace TeamSelection_NS
{
class TeamSelection
{
    vector<playerInfo>vec_PlayerInformation;
    TeamSelection();

    public:
    static TeamSelection getInstance()
    {
        static TeamSelection instance;
        return instance;
    }
    void buildPlayer();
    vector<playerInfo> getPlayerInfo();
};
}
#endif // TEAMBUILDING_H_INCLUDED
