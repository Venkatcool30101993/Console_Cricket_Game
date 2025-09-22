add_executable(my_tests
   Test.cpp
    # Add other test files
)

target_link_libraries(my_tests
    GTest::gtest_main # Links against GTest and provides main() for tests
    my_app_lib # Link against your application's library if needed for testing
)

include(CTest)
add_test(NAME MyTests COMMAND my_tests)