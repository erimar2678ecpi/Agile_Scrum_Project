#include <stdio.h>
#include "readFile.h"

void readFile() {
   FILE *file = fopen("output.txt", "r");
    if (!file) {
        printf("File not found or can't open.\n");
        return;
    }

    char line[256];
    int hasContent = 0;
    printf("=== File Contents ===\n");
    while (fgets(line, sizeof(line), file)) {
        hasContent = 1;
        printf("%s", line);
    }
    if (ferror(file)) {
        printf("Error reading from file.\n");
    }
    fclose(file);
    printf("=====================\n");
}