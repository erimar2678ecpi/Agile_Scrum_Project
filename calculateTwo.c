#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "calculateTwo.h"

extern int lastResult;
extern char lastCalculation[100];

void calculateTwo(){
    srand(time(NULL) + 1); // avoiding same numbers slightly 
    int a = rand() % 100 + 1;
    int b = rand() % 10 + 1; // keeping result smaller
    lastResult = a * b;
    sprintf(lastCalculation, "%d * %d = %d", a, b, lastResult);
    printf("Calculation: %s\n", lastCalculation);
}