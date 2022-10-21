#include "functions.hpp"

int data_select(int M, double resistance[]){
    double resistance_average;
    for (int i = 0; i < M; i++){
        resistance_average += resistance[i] / M;
    }
    int delta = 0;
    int check = 0;
    for (int i = 0; check < M; i += 0){
        if (fabs(fabs(resistance_average - resistance[check]) / resistance_average) > 0.03){
            check++;
            delta++;
        }
        else{
            resistance[i] = resistance[check];
            check++;
            i++;
        }
    }
    return M - delta;
}