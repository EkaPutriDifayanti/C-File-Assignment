#include <stdio.h>
int main()
{
    int i;
    // iteration
    int iterationSum(int N)
    {
        int result = 0;
        for (i = 0; i < N; i++)
            result = result + i;
        return result;
    }
    // recursion
    int recursionSum(int N)
    {
        if (N == 1)
            return N;
        return N + recursionSum(N - 1);
    }
}