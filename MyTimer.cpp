#include "MyTimer.hpp"

MyTimer::MyTimer() : time(1) {}

void MyTimer::start() {
    time = 1;
    startTimepoint = chrono::high_resolution_clock::now();
}

void MyTimer::stop() {
    auto endTimepoint = chrono::high_resolution_clock::now();
    auto start = chrono::time_point_cast<chrono::microseconds>(startTimepoint).time_since_epoch().count();
    auto end_ = chrono::time_point_cast<chrono::microseconds>(endTimepoint).time_since_epoch().count();

    time = end_ - start;
}

long long int MyTimer::getTime() {
    return time;
}