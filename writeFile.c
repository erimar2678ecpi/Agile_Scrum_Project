#include <stdio.h>
#include "writeFile.h"

// Access the stored equation
extern char lastCalculation[100];

void writeFile() {
    FILE *file = fopen("output.txt", "a"); // "a" = append to file
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    int writeResult = fprintf(file, "Last Calculation: %s\n", lastCalculation);
    if (writeResult < 0) {
        printf("Error writing to file.\n");
        fclose(file);
        return;
    }

    if (fclose(file) != 0) {
        printf("Error closing file.\n");
        return;
    }

    printf("Calculation written to output.txt\n");
}