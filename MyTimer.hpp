#pragma once
#include <iostream>
#include <chrono>

using namespace std;

class MyTimer
{
public:
    MyTimer();
    void start();
    void stop();
    long long int getTime();
private:
    long long int time;
    chrono::time_point<chrono::high_resolution_clock> startTimepoint;
};

