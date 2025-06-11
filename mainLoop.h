#include "calculateOne.h"
#include "calculateTwo.h"
#include "readFile.h"
#include "writeFile.h"





void mainLoop (int choice) {

	
	 while (choice != 5) {
        
        switch (choice) {
            case 1:
                calculateOne();
                break;
            case 2:
                calculateTwo();
                break;
            case 3:
                readFile();
                break;
            case 4:
                writeFile();
                break;
            default:
                printf("Invalid choice. Exiting...\n");
                choice = 5;
                break;
        }

    } 
}

