
#include <stdio.h>
#include "resistance.h"

const int N = 100;
const double epsilon = 1e-6;

int main ()
{

    double voltage[N];
    double current[N];

    int M = 0;

    while (scanf ("%lg/%lg", &voltage[M], &current[M]) == 2)
    {
        M++;
    }

    double resistance[N];

    for (int i = 0; i < M; i++)
    {
        if (current[i] < epsilon)
        {
            printf ("Zero division error!\n");
            return 1;
        }

        resistance[i] = 1000 * (voltage[i] / current[i]);
    }

    int K = data_select (M, resistance);

    double resistance_final = result (K, resistance);

    if (check (K, resistance, resistance_final) != 1)
    {
        printf ("Bad data!\n");
    }

    return 0;
}
