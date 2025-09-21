    cmake_minimum_required(VERSION 3.10)
    project(Cricket LANGUAGES CXX)

    # Add the include directory to the global include paths
    include_directories(inc)

    # Add the source directory to find source files
    # You can also list specific source files here if preferred
    aux_source_directory(src SRC_FILES)

    # Create an executable target
    add_executable(Cricket ${SRC_FILES})

    