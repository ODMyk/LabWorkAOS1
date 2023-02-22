#pragma once
#include "MyTimer.hpp"

struct OperationResult {
    char operation = 0;
    std::string type = "";
    long long int operationsCount = 0;
    long long int testDuration = 0;
    long double OPS = 0;
};

extern MyTimer timer;
const int MLN = 1000000;
extern long double biggestOPS;
const long long iterationsCount1 = 300000000; // Fast operations (+, -)
const long long iterationsCount2 = 5000000; // Slow operations (*, /)

void doEmptyCycle(long int iterationsCount);
void printResults(OperationResult results[]);
void warmUp();

OperationResult doAddInt(long long emptyTime, int init, int add);
OperationResult doSubtInt(long long emptyTime, int init, int add);
OperationResult doMultInt(long long emptyTime, int init, int add);
OperationResult doDivInt(long long emptyTime, int init, int add);


OperationResult doAddChar(long long emptyTime, char init, char add);
OperationResult doSubtChar(long long emptyTime, char init, char add);
OperationResult doMultChar(long long emptyTime, char init, char add);
OperationResult doDivChar(long long emptyTime, char init, char add);

OperationResult doAddLong(long long emptyTime, long init, long add);
OperationResult doSubtLong(long long emptyTime, long init, long add);
OperationResult doMultLong(long long emptyTime, long init, long add);
OperationResult doDivLong(long long emptyTime, long init, long add);

OperationResult doAddFloat(long long emptyTime, float init, float add);
OperationResult doSubtFloat(long long emptyTime, float init, float add);
OperationResult doMultFloat(long long emptyTime, float init, float add);
OperationResult doDivFloat(long long emptyTime, float init, float add);

OperationResult doAddDouble(long long emptyTime, double init, double add);
OperationResult doSubtDouble(long long emptyTime, double init, double add);
OperationResult doMultDouble(long long emptyTime, double init, double add);
OperationResult doDivDouble(long long emptyTime, double init, double add);