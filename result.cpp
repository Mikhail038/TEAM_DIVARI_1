#include <stdio.h>
#include <math.h>
#include "resistance.h"

double
result(int K, double resistance[])
{
        double result = 0;
        double deviation = 0;

        // Calculate the result.
        for (int i = 0; i < K; i++)
                result += resistance[i] / K;

        // Calculate deviation.
        for (int i = 0; i < K; i++)
                deviation += (resistance[i] - result) *
                             (resistance[i] - result);

        deviation = sqrt(deviation) / K;

        // Print the result with deviation.
        printf("Resistance = %lg +- %lg\n", result, deviation);

        // Return result.
        return result;
}
