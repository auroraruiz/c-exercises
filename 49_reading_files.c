#include <stdio.h>

int main(){
    printf("49. Reading files");
    printf("\n");
    printf("-----------------\n");

    FILE* pF = fopen("path\\file", "r"); // pointer to a file
    // Modes are: r to to read, a to append, w to write

    if (pF == NULL){
        printf("Unable to locate the file.\n");
    }

    else{
        // we need a buffer: an array of characters that's gonna contain 
        // one line of our text document one line at a time
        char buffer[255];

        int counter = 1;

        // to read a single line we will use the fgets function
        while (fgets(buffer, 255, pF) != NULL){
                printf("Line %i: %30s", counter, buffer);
                counter ++;
        }
    }
    
    fclose(pF);

    printf("--- Done ---");
    return 0;
}