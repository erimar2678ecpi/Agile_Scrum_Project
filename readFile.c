#include <stdio.h>
#include "readFile.h"

void readFile() {
   FILE *file = fopen("output.txt", "r");
    if (!file) {
        printf("File not found or can't open.\n");
        return;
    }

    char line[256];
    printf("=== File Contents ===\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
    printf("=====================\n");
}