#ifndef PROCESS_HPP
#define PROCESS_HPP

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<stdexcept>
#include "../lib/json.hpp"


using json = nlohmann::json;
enum PROCESS_NATURE
{
    CPU_BOUND,
    IO_BOUND,
};

struct ps
{
    long long counter;
};

struct Process
{
    int pid;
    long long vruntime;
    int cpu_burst_time;
    int priority;
    ps processState;
    PROCESS_NATURE processNature;
};


#endif