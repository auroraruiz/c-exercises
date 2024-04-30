#include <stdio.h>
#include <unistd.h>

int main() {
    printf("49b. Reading files\n");
    printf("------------------\n");

    const char* filename = "path\\file";

    // Check if the file exists
    if (access(filename, F_OK) != -1) {

        // File exists, attempt to open it
        FILE* pF = fopen(filename, "r");
        
        if (pF != NULL) {
            char buffer[255];
            int counter = 1;
            // Read lines from the file
            while (fgets(buffer, sizeof(buffer), pF) != NULL) {
                printf("Line %i: %30s", counter, buffer);
                counter++;
            }
            // Close the file
            fclose(pF);
        } else {
            printf("Unable to open the file.\n");
        }
    } else {
        printf("File does not exist.\n");
    }

    printf("--- Done ---");
    return 0;
}
