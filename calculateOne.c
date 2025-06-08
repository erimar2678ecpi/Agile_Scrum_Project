#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "calculateOne.h"

extern int lastResult;
extern char lastCalculation[100];

void calculateOne(){
    srand(time(NULL));
    int a = rand() % 100 + 1;
    int b = rand() % 100 + 1;
    lastResult = a + b;
    sprintf(lastCalculation, "%d + %d = %d", a, b, lastResult);
    printf("Calculation: %s\n", lastCalculation);
}