cmake_minimum_required(VERSION 3.14)
# GoogleTest requires at least C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
project(Cricket LANGUAGES CXX)


# Add the include directory to the global include paths
include_directories(inc)

# Add the source directory to find source files
# You can also list specific source files here if preferred
aux_source_directory(src SRC_FILES)

# Create an executable target
add_executable(Cricket ${SRC_FILES})

add_subdirectory(src)
add_subdirectory(tst)
enable_testing()


