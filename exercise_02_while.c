#include <stdio.h>
#include <string.h>

void clearInputBuffer();
char* getName();
char* getName2();

int main(){
    printf("28. While loops");
    printf("\n");
    printf("---------------\n");
    /* 
    while loop = repeats a section of code until a condition is no longer met
    a while loop:
      - might no execute at all (if the condition is not TRUE at the start)
      - might repeat itself foever (if the condition is never FALSE)
    
    Example:
    int i = 1;
    while (i <= 10){
        printf("Counting: %i\n", i);
        i++;
    }
    */

    char* name = getName2();

    printf("Hello, %s.\n", name);
    printf("--- Done ---");
    return 0;
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF){
        //printf("We're here: %c\n",c);
    }
}

// This funciton is not optimal bc the recursive call to itself can cause buffer overflow
char* getName(){
    static char name[25]; // Declare name as static so it persists after the function returns
    printf("What's your name?\n");
    scanf("%24s", name);
    while (strlen(name)<2){
        char* name = getName();
    }
    return name; // Return a pointer to the array
}

char* getName2(){
    static char name[25]; // Declare name as static so it persists after the function returns
    printf("What's your name?\n");
    do {
        scanf("%24s", name);
        clearInputBuffer(); // Clear input buffer to handle excess characters
    } while (strlen(name)<2);
    return name; // Return a pointer to the array
}