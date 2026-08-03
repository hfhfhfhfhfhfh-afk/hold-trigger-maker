cmake_minimum_required(VERSION 3.21)
project(HoldTriggerMaker VERSION 1.0.0 LANGUAGES CXX C)

include($ENV{GEODE_SDK}/cmake/Geode.cmake)

setup_geode_mod(HoldTriggerMaker)

target_sources(HoldTriggerMaker PRIVATE src/main.cpp)
