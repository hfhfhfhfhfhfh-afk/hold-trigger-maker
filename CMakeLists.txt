cmake_minimum_required(VERSION 3.13)

project(HoldTriggerMaker VERSION 1.0.0 LANGUAGES CXX)

if(DEFINED ENV{GEODE_SDK})
    list(APPEND CMAKE_PREFIX_PATH "$ENV{GEODE_SDK}")
endif()

find_package(Geode REQUIRED)

setup_geode_mod(HoldTriggerMaker)

target_sources(HoldTriggerMaker PRIVATE src/main.cpp)
