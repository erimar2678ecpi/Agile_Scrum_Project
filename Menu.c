#include <stdio.h>
#include "Menu.h"

int showMenu() {
    int choice;
    int inputStatus;
    do {
        printf("1. Write to File\n");
        printf("2. Read from File\n");
        printf("3. Calculate One\n");
        printf("4. Calculate Two\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        inputStatus = scanf("%d", &choice);

        // Clear input buffer if scanf failed to read an integer or if there's leftover input
        while (fgetc(stdin) != '\n');

        if (inputStatus != 1 || choice < 1 || choice > 5) {
            printf("Invalid choice. Please enter a number between 1 and 5.\n\n");
        }
    } while (inputStatus != 1 || choice < 1 || choice > 5);

    return choice;
}