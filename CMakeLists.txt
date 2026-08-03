cmake_minimum_required(VERSION 3.21)
project(HoldTriggerMaker VERSION 1.0.0 LANGUAGES CXX C)

# Pobieranie Geode SDK automatycznie przez FetchContent (pomija problem ze ścieżkami środowiskowymi)
include(FetchContent)
FetchContent_Declare(
    Geode
    GIT_REPOSITORY https://github.com/geode-sdk/geode.git
    GIT_TAG main
)
FetchContent_MakeAvailable(Geode)

setup_geode_mod(HoldTriggerMaker)

target_sources(HoldTriggerMaker PRIVATE src/main.cpp)
