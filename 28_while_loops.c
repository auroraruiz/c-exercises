#include <stdio.h>
#include <string.h>

int main(){
    printf("28. While loops");
    printf("\n");
    printf("---------------\n");
    /* 
    while loop = repeats a section of code until a condition is no longer met
    a while loop:
      - might no execute at all (if the condition is not TRUE at the start)
      - might repeat itself forever (if the condition is never FALSE)
    */
    char name[25];

    printf("What's your name?\n");

    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0){
        printf("You didn't enter your name.Try again:\n");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello, %s.\n", name);

    printf("--- Done ---");
    return 0;
}


