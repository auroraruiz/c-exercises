#include <stdio.h>
#include <ctype.h>
#include <stddef.h>

// In C, when you pass an array to a function, it decays into a pointer to its first element.
void singHappyBirthday(const char *name){
    printf("Happy birthday to you!\nHappy birthday to you!\nHappy birthday, dear %s,\nHappy birthday to you!", name);
    return;
}

int main(){
    printf("21. Functions");
    printf("\n");
    printf("-------------\n");
    /* A function is a small section of code that's executed whenever we call it.
    Calling a function = invoking a function.
    */
    char name[8];
    printf("Enter your name: ");
    scanf("%8s", &name);
    singHappyBirthday(name);
    printf("\n");
    printf("--- Done ---");
    return 0;
}