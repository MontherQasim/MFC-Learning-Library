#include "pch.h"
#include "WorkerThread.h"
#include <memory>

static unsigned long long CalculateFactorial(int n)
{
    if (n <= 1)
        return 1;
    return n * CalculateFactorial(n - 1);
}

UINT FactorialWorkerThread(LPVOID pParam)
{
    std::unique_ptr <FactorialThreadData> pData(static_cast<FactorialThreadData*>(pParam));

    unsigned long long result = CalculateFactorial(pData->nInput);

    return 0;
}