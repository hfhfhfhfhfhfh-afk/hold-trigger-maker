cmake_minimum_required(VERSION 3.13)

project(HoldTriggerMaker VERSION 1.0.0 LANGUAGES CXX)

setup_geode_mod(HoldTriggerMaker)

target_sources(HoldTriggerMaker PRIVATE src/main.cpp)
