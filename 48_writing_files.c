#include <stdio.h>

int main(){
    printf("48. Writing files");
    printf("\n");
    printf("------------------\n");

    FILE* pF = fopen("path\\file", "w"); // pointer to a file
    // Modes are: r to to read, a to append, w to write
    
    fprintf(pF, "\nSpongebob Squarepants");

    fclose(pF);
    

    if (remove("path\\file") == 0){
        printf("The file was deleted successfully.\n");
    }
    else{
        printf("The file was NOT deleted.\n");
    }
    
    printf("--- Done ---");
    return 0;
}