#ifndef TYPES_H
#define TYPES_H
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> // For srand and rand
#include <ctime>

#define VALIDATE_INT_INPUT(input_stream, error_message,value) \
    if (input_stream.fail()) { \
        std::cout << error_message << std::endl; \
        input_stream.clear(); \
        input_stream.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); \
        std::cin >>value;\
    }

using namespace std;
namespace TYPES_NS {
    const int NO_OF_PLAYERS = 5;
    const int BALLS_PER_OVER = 6;
    const int DEFAULT_SCORE = 0;
    const int DEFAULT_BATSMEN_INDEX = 0;
    const uint8_t BOUNDARY_FOUR = 4;
    const uint8_t BOUNDARY_SIX = 6;
    const uint8_t TOTAL_WICKETS = 5;
    const uint8_t RUNS_LIMITER = 7;
    

    enum INNING_CHOICE
    {
        CHOICE_BATTING = 1,
        CHOICE_BOWLING
    };

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
