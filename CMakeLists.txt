cmake_minimum_required(VERSION 3.20)

if(NOT TARGET cmake-tools)
    include(FetchContent)
    FetchContent_Declare(cmake-tools
            GIT_REPOSITORY 	https://github.com/LithologIQ/cmake-tools.git
            GIT_TAG        	main
            SOURCE_DIR		${CMAKE_SOURCE_DIR}/external/cmake-tools)
    FetchContent_MakeAvailable(cmake-tools)
endif()

project(hp_ssa CXX)

create_static_lib(
        src/hp_ssa.cpp
)

depends(GIT_REPOSITORY https://github.com/kpelletier-k/broker.git
        GIT_TAG main)

create_cpp_app(
        src/hp_ssa_ex.cpp
        src/hp_ssa_broker.cpp
)

create_cpp_test(
        test/main.cpp
)
