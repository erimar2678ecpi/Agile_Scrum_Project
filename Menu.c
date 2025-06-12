#include <stdio.h>
#include "Menu.h"

int showMenu() {
    int choice;
    printf("1. Write to File\n");
    printf("2. Read from File\n");
    printf("3. Calculate One\n");
    printf("4. Calculate Two\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}