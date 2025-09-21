#ifndef AUTOTEAMSELECTOR_H_INCLUDED
#define AUTOTEAMSELECTOR_H_INCLUDED

#include "types.h"
using namespace TYPES_NS;
namespace autoTeamSelector_NS{
class AutoTeamSelector
{
   vector<playerInfo>vec_DefaultPlayerInfo;
   AutoTeamSelector();
    public:

    vector<playerInfo> getDefaultPlayerInfo();
    static AutoTeamSelector getInstance()
    {
        static AutoTeamSelector obj;
        return obj;
    }
};
}
#endif // AUTOTEAMSELECTOR_H_INCLUDED
