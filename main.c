#include <stdio.h>
#include "Menu.h"
#include "mainLoop.h"

int lastResult = 0;
char lastCalculation[100] = "";

int main() {
    printf("Welcome to the Program!\n");
    int choice = showMenu();
    mainLoop(choice);
    printf("Thank you for using the program!\n");
    return 0;
} 