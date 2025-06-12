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

    fprintf(file, "Last Calculation: %s\n", lastCalculation);
    fclose(file);

    printf("Calculation written to output.txt\n");
}