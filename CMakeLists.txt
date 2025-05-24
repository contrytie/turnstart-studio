cmake_minimum_required(VERSION 3.31)
project(RailwaySystemSimulationSoftware)

set(CMAKE_CXX_STANDARD 20)

add_executable(RailwaySystemSimulationSoftware main.cpp
        basic.h
        welcome.h
        welcome.cpp
        SetFiles.h
        SetFiles.cpp
        setting.cpp
        setting.h
        simulation.h
        simulation.cpp
)
