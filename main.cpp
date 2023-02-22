#include "Utils.hpp"

#pragma optimize("", off)
int main()
{
    MyTimer timer2;
    timer2.start();
    OperationResult results[20] = {};
    
    warmUp();

    doEmptyCycle(iterationsCount1);

    const long long int emptyCycleDuration1 = timer.getTime();
    
    doEmptyCycle(iterationsCount2);

    const long long int emptyCycleDuration2 = timer.getTime();

    results[0] = doAddInt(emptyCycleDuration1, 1563, 1811);
    results[1] = doSubtInt(emptyCycleDuration1, 1084124881, 241);
    results[2] = doMultInt(emptyCycleDuration2, 87178142, 1543);
    results[3] = doDivInt(emptyCycleDuration2, 276444373, 13);

    results[4] = doAddChar(emptyCycleDuration1, 223, 73);
    results[5] = doSubtChar(emptyCycleDuration1, 223, 73);
    results[6] = doMultChar(emptyCycleDuration2, 223, 143);
    results[7] = doDivChar(emptyCycleDuration2, 253, 3);
    
    results[8] = doAddLong(emptyCycleDuration1, 41251, 113);
    results[9] = doSubtLong(emptyCycleDuration1, 142463, 117);
    results[10] = doMultLong(emptyCycleDuration2, 24125125399, 117);
    results[11] = doDivLong(emptyCycleDuration2, 276445325155123, 17);

    results[12] = doAddFloat(emptyCycleDuration1, 1563.34f, 1811.19f);
    results[13] = doSubtFloat(emptyCycleDuration1, 156214207.3454f, 179.19f);
    results[14] = doMultFloat(emptyCycleDuration2, 1567.34124f, 187.19f);
    results[15] = doDivFloat(emptyCycleDuration2, 276331231.37f, 13.451f);

    results[16] = doAddDouble(emptyCycleDuration1, 87178291199.1455, 4334123.23145);
    results[17] = doSubtDouble(emptyCycleDuration1, 87178291199.521, 4231433.23713);
    results[18] = doMultDouble(emptyCycleDuration2, 878291.323, 1435.71);
    results[19] = doDivDouble(emptyCycleDuration2, 276444318247.313, 47.637);

    printResults(results);
    timer2.stop();

    cout << '\n' << "Total time: " << timer2.getTime() / 1000000 << " seconds." << endl;

    return 0;
}
