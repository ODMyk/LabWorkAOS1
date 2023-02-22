#include "Utils.hpp"

MyTimer timer;
long double biggestOPS = 0;

void warmUp() {
    OperationResult x = doAddChar(0, 7, 37);
    x = doDivChar(0, 223, 3);
    x = doAddDouble(0, 5791837.34124, 1525.421);
    x = doSubtDouble(0, 512.5125, 1234.1246);
    x = doMultInt(0, 4125, 157);
    (void)x;
}

void doEmptyCycle(long int iterationsCount) {
    int a1 = 1;
    int a2 = 2;
    int a3 = 3;
    int a4 = 4;
    int a5 = 5;
    int a6 = 6;
    int a7 = 7;
    int a8 = 8;
    int a9 = 9;
    int a10 = 10;

    timer.start();
    for (long int i = 0; i < iterationsCount; ++i) {
        a10 = a1;
        a1 = a2;
        a2 = a3;
        a3 = a4;
        a4 = a5;
        a5 = a6;
        a6 = a7;
        a7 = a8;
        a8 = a9;
        a9 = a10;
    }
    timer.stop();
}

void printResults(OperationResult results[]) {
    for (int i = 0; i < 20; ++i) {
        OperationResult res = results[i];
        int percent = res.OPS / biggestOPS * 100;
        int xCount = 40.0 / 100.0 * percent;

        cout << res.operation << " " << res.type;
        for (int l = 0; l < 7 - res.type.length(); ++l) {
            cout << ' ';
        }
        cout.width(12);
        cout << left << res.OPS << " [";
        for (int l = 0; l < xCount; ++l) {
            cout << 'X';
        }
        for (int l = 0; l < 40 - xCount; ++l) {
            cout << ' ';
        }

        cout << "] " << percent << "%" << endl;
    }
}

OperationResult doAddInt(long long emptyTime, int init, int add) {
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long int i = 0; i < iterationsCount1; ++i) {
        a1 = init + add;
        a2 = a1 + add;
        a3 = a2 + add;
        a4 = a3 + add;
        a5 = a4 + add;
        a6 = a5 + add;
        a7 = a6 + add;
        a8 = a7 + add;
        a9 = a8 + add;
        init = a9 + add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount1 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '+', "int", operationsCount, time, OPS };
}

OperationResult doSubtInt(long long emptyTime, int init, int add) {
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount1; ++i) {
        a1 = init - add;
        a2 = a1 - add;
        a3 = a2 - add;
        a4 = a3 - add;
        a5 = a4 - add;
        a6 = a5 - add;
        a7 = a6 - add;
        a8 = a7 - add;
        a9 = a8 - add;
        init = a9 - add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount1 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '-', "int", operationsCount, time, OPS };
}

OperationResult doMultInt(long long emptyTime, int init, int mult) {
    int a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount2; ++i) {
        a1 = init * mult;
        a2 = a1 * mult;
        a3 = a2 * mult;
        a4 = a3 * mult;
        a5 = a4 * mult;
        a6 = a5 * mult;
        a7 = a6 * mult;
        a8 = a7 * mult;
        a9 = a8 * mult;
        init = a9 * mult;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount2 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '*', "int", operationsCount, time, OPS };
}

OperationResult doDivInt(long long emptyTime, int init, int div) {
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;

    timer.start();
    for (long long int i = 0; i < iterationsCount2; ++i) {
        a1 = init / div;
        a2 = a1 / div;
        a3 = a2 / div;
        a4 = a3 / div;
        a5 = a4 / div;
        a6 = init / div;
        a7 = a6 / div;
        a8 = a7 / div;
        a9 = a8 / div;
        a10 = a9 / div;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount2 * 3;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '/', "int", operationsCount, time, OPS };
}

OperationResult doAddChar(long long emptyTime, char init, char add) {
    char a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount1; ++i) {
        a1 = init + add;
        a2 = a1 + add;
        a3 = a2 + add;
        a4 = a3 + add;
        a5 = a4 + add;
        a6 = a5 + add;
        a7 = a6 + add;
        a8 = a7 + add;
        a9 = a8 + add;
        init = a9 + add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount1 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '+', "char", operationsCount, time, OPS };
}

OperationResult doSubtChar(long long emptyTime, char init, char add) {
    char a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount1; ++i) {
        a1 = init - add;
        a2 = a1 - add;
        a3 = a2 - add;
        a4 = a3 - add;
        a5 = a4 - add;
        a6 = a5 - add;
        a7 = a6 - add;
        a8 = a7 - add;
        a9 = a8 - add;
        init = a9 - add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount1 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '-', "char", operationsCount, time, OPS };
}

OperationResult doMultChar(long long emptyTime, char init, char add) {
    char a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount2; ++i) {
        a1 = init * add;
        a2 = a1 * add;
        a3 = a2 * add;
        a4 = a3 * add;
        a5 = a4 * add;
        a6 = a5 * add;
        a7 = a6 * add;
        a8 = a7 * add;
        a9 = a8 * add;
        init = a9 * add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount2 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '*', "char", operationsCount, time, OPS };
}

OperationResult doDivChar(long long emptyTime, char init, char div) {
    char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;

    timer.start();
    for (long long int i = 0; i < iterationsCount2; ++i) {
        a1 = init / div;
        a2 = a1 / div;
        a3 = a2 / div;
        a4 = a3 / div;
        a5 = a4 / div;
        a6 = init / div;
        a7 = a6 / div;
        a8 = a7 / div;
        a9 = a8 / div;
        a10 = a9 / div;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount2 * 3;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '/', "char", operationsCount, time, OPS };
}

OperationResult doAddLong(long long emptyTime, long init, long add) {
    long a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount1; ++i) {
        a1 = init + add;
        a2 = a1 + add;
        a3 = a2 + add;
        a4 = a3 + add;
        a5 = a4 + add;
        a6 = a5 + add;
        a7 = a6 + add;
        a8 = a7 + add;
        a9 = a8 + add;
        init = a9 + add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount1 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '+', "long", operationsCount, time, OPS };
}

OperationResult doSubtLong(long long emptyTime, long init, long add) {
    long a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount1; ++i) {
        a1 = init - add;
        a2 = a1 - add;
        a3 = a2 - add;
        a4 = a3 - add;
        a5 = a4 - add;
        a6 = a5 - add;
        a7 = a6 - add;
        a8 = a7 - add;
        a9 = a8 - add;
        init = a9 - add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount1 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '-', "long", operationsCount, time, OPS };
}

OperationResult doMultLong(long long emptyTime, long init, long mult) {
    long a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount2; ++i) {
        a1 = init * mult;
        a2 = a1 * mult;
        a3 = a2 * mult;
        a4 = a3 * mult;
        a5 = a4 * mult;
        a6 = a5 * mult;
        a7 = a6 * mult;
        a8 = a7 * mult;
        a9 = a8 * mult;
        init = a9 * mult;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount2 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '*', "long", operationsCount, time, OPS };
}

OperationResult doDivLong(long long emptyTime, long init, long div) {
    long a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;

    timer.start();
    for (long long int i = 0; i < iterationsCount2; ++i) {
        a1 = init / div;
        a2 = a1 / div;
        a3 = a2 / div;
        a4 = a3 / div;
        a5 = a4 / div;
        a6 = init / div;
        a7 = a6 / div;
        a8 = a7 / div;
        a9 = a8 / div;
        a10 = a9 / div;

    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount2 * 3;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '/', "long", operationsCount, time, OPS };
}

OperationResult doAddFloat(long long emptyTime, float init, float add) {
    float a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long int i = 0; i < iterationsCount1; ++i) {
        a1 = init + add;
        a2 = a1 + add;
        a3 = a2 + add;
        a4 = a3 + add;
        a5 = a4 + add;
        a6 = a5 + add;
        a7 = a6 + add;
        a8 = a7 + add;
        a9 = a8 + add;
        init = a9 + add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount1 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '+', "float", operationsCount, time, OPS };
}

OperationResult doSubtFloat(long long emptyTime, float init, float add) {
    float a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long int i = 0; i < iterationsCount1; ++i) {
        a1 = init - add;
        a2 = a1 - add;
        a3 = a2 - add;
        a4 = a3 - add;
        a5 = a4 - add;
        a6 = a5 - add;
        a7 = a6 - add;
        a8 = a7 - add;
        a9 = a8 - add;
        init = a9 - add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount1 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '-', "float", operationsCount, time, OPS };
}

OperationResult doMultFloat(long long emptyTime, float init, float add) {
    float a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long int i = 0; i < iterationsCount2; ++i) {
        a1 = init * add;
        a2 = a1 * add;
        a3 = a2 * add;
        a4 = a3 * add;
        a5 = a4 * add;
        a6 = a5 * add;
        a7 = a6 * add;
        a8 = a7 * add;
        a9 = a8 * add;
        init = a9 * add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount2 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '*', "float", operationsCount, time, OPS };
}

OperationResult doDivFloat(long long emptyTime, float init, float div) {
    float a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;

    timer.start();
    for (long long int i = 0; i < iterationsCount2; ++i) {
        a1 = init / div;
        a2 = a1 / div;
        a3 = a2 / div;
        a4 = a3 / div;
        a5 = a4 / div;
        a6 = init / div;
        a7 = a6 / div;
        a8 = a7 / div;
        a9 = a8 / div;
        a10 = a9 / div;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount2 * 3;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '/', "float", operationsCount, time, OPS };
}

OperationResult doAddDouble(long long emptyTime, double init, double add) {
    double a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount1; ++i) {
        a1 = init + add;
        a2 = a1 + add;
        a3 = a2 + add;
        a4 = a3 + add;
        a5 = a4 + add;
        a6 = a5 + add;
        a7 = a6 + add;
        a8 = a7 + add;
        a9 = a8 + add;
        init = a9 + add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount1 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '+', "double", operationsCount, time, OPS };
}

OperationResult doSubtDouble(long long emptyTime, double init, double add) {
    double a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount1; ++i) {
        a1 = init - add;
        a2 = a1 - add;
        a3 = a2 - add;
        a4 = a3 - add;
        a5 = a4 - add;
        a6 = a5 - add;
        a7 = a6 - add;
        a8 = a7 - add;
        a9 = a8 - add;
        init = a9 - add;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount1 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '-', "double", operationsCount, time, OPS };
}

OperationResult doMultDouble(long long emptyTime, double init, double mult) {
    double a1, a2, a3, a4, a5, a6, a7, a8, a9;

    timer.start();
    for (long long int i = 0; i < iterationsCount2; ++i) {
        a1 = init * mult;
        a2 = a1 * mult;
        a3 = a2 * mult;
        a4 = a3 * mult;
        a5 = a4 * mult;
        a6 = a5 * mult;
        a7 = a6 * mult;
        a8 = a7 * mult;
        a9 = a8 * mult;
        init = a9 * mult;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount2 * 10;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '*', "double", operationsCount, time, OPS };
}

OperationResult doDivDouble(long long emptyTime, double init, double div) {
    double a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;

    timer.start();
    for (long long int i = 0; i < iterationsCount2; ++i) {
        a1 = init / div;
        a2 = a1 / div;
        a3 = a2 / div;
        a4 = a3 / div;
        a5 = a4 / div;
        a6 = init / div;
        a7 = a6 / div;
        a8 = a7 / div;
        a9 = a8 / div;
        a10 = a9 / div;
    }
    timer.stop();
    long long time = timer.getTime() - emptyTime;
    long long operationsCount = iterationsCount2 * 3;
    long double OPS = operationsCount / time * MLN;
    biggestOPS = (biggestOPS < OPS) ? OPS : biggestOPS;

    return { '/', "double", operationsCount, time, OPS };
}