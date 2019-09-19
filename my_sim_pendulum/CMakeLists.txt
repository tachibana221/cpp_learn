cmake_minimum_required(VERSION 3.15)
project(MY_SIM_PENDULUM)
set(sim_pend_src
    main.cpp
    gausu_distribution.cpp
)

enable_language(CXX)
set(CMAKE_CXX_STANDARD 14) # C++14...
set(CMAKE_CXX_STANDARD_REQUIRED ON) #...is required...
set(CMAKE_CXX_EXTENSIONS OFF) #...without compiler extensions like gnu++11

add_executable(simu.exe ${sim_pend_src})