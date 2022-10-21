#include <math.h>
#include <stdio.h>

#define EPSILON 1

int check (int K, double resistance[], double resistance_final)
{
    double sum = 0;
    //printf ("!!%lg\n", resistance_final);

    for (int i = 0; i < K; i++)
    {
        //printf ("%lg\n", resistance[i]);
        sum += fabs(resistance[i] - resistance_final);
    }

    double sr_otkl = sum / K;

    printf("Average deflection = %lg\n", sr_otkl);

    if (sr_otkl < EPSILON)
    {
        return 1;
    } else {
        return 0;
    }
}
