#include "gtest/gtest.h"
#include "gtest/gtest-spi.h"
#include "../inc/TeamPlayerInfo.h" // Path to your code's header

TEST(MyTestSuite, TestHandTypeOutputLeft) {
    TeamPlayer_NS::TeamPlayerInfo obj;
    
    testing::internal::CaptureStdout(); // Start capturing

    obj.showHandType(TYPES_NS::Playing_HAND::LEFT_ARM);// Call the function that prints to cout

    std::string output = testing::internal::GetCapturedStdout(); // Stop capturing and get result
    EXPECT_EQ("LEFT HAND", output);   
}
TEST(MyTestSuite, TestHandTypeOutputRight) {
   TeamPlayer_NS::TeamPlayerInfo obj;

    testing::internal::CaptureStdout(); // Start capturing

    obj.showHandType(TYPES_NS::Playing_HAND::RIGHT_ARM);// Call the function that prints to cout

    std::string output = testing::internal::GetCapturedStdout(); // Stop capturing and get result
    EXPECT_EQ("RIGHT HAND", output);
}
TEST(MyTestSuite, TestBowlingTypeFast) {
    TeamPlayer_NS::TeamPlayerInfo obj;

    testing::internal::CaptureStdout(); // Start capturing

    obj.showBowlingType(TYPES_NS::Bowling_TYPE::FAST);// Call the function that prints to cout

    std::string output = testing::internal::GetCapturedStdout(); // Stop capturing and get result
    EXPECT_EQ("Fast", output);
}
TEST(MyTestSuite, TestBowlingTypeMediumFast) {
    TeamPlayer_NS::TeamPlayerInfo obj;

    testing::internal::CaptureStdout(); // Start capturing

    obj.showBowlingType(TYPES_NS::Bowling_TYPE::MEDIUM_FAST);// Call the function that prints to cout

    std::string output = testing::internal::GetCapturedStdout(); // Stop capturing and get result
    EXPECT_EQ("Medium Fast", output);
}
TEST(MyTestSuite, TestBowlingTypeSpinner) {
    TeamPlayer_NS::TeamPlayerInfo obj;

    testing::internal::CaptureStdout(); // Start capturing

    obj.showBowlingType(TYPES_NS::Bowling_TYPE::SPINNER);// Call the function that prints to cout

    std::string output = testing::internal::GetCapturedStdout(); // Stop capturing and get result
    EXPECT_EQ("Spinner", output);
}
