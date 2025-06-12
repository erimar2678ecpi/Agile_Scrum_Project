#include <stdio.h>
#include "mainLoop.h"
#include "calculateOne.h"
#include "calculateTwo.h"
#include "readFile.h"
#include "writeFile.h"
#include "Menu.h"

void mainLoop(int choice) {
    while (choice != 5) {
        switch (choice) {
            case 1:
                writeFile();
                break;
            case 2:
                readFile();
                break;
            case 3:
                calculateOne();
                break;
            case 4:
                calculateTwo();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        choice = showMenu();
    }
}
