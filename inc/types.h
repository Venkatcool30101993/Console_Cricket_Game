#ifndef TYPES_H
#define TYPES_H
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // For srand and rand
#include <ctime>

using namespace std;
namespace TYPES_NS {
    extern int NO_OF_PLAYERS;
    enum TEAM_SQUAD
    {
        AUTOTEAM_SQUAD = 1,
        MANUAL_TEAM_SQUAD
    };

    enum Player_Type
    {
        BATSMEN = 0,
        BOWLER,
        ALL_ROUNDER,
        WK_KEEPER
    };

    enum Playing_HAND
    {
        LEFT_ARM = 1,
        RIGHT_ARM
    };

    enum Bowling_TYPE
    {
        FAST = 0,
        MEDIUM_FAST,
        SPINNER,
        INVALID_FOR_BATSMEN
    };

    struct playerInfo
    {
        Player_Type typ;
        Playing_HAND hnd;
        Bowling_TYPE btyp;
        string name;
    };
}
#endif // TYPES_H
