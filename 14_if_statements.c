#include <stdio.h>

int main(){
    printf("14. If statements");
    printf("\n");
    printf("-----------------\n");

    int age;

    printf("Enter your age: ");
    scanf("%i", &age);

    if (age<0){
        printf("You haven't been born yet.");
    }
    else if (age<18){
        printf("You're underage.");
    }
    else {
        printf("You're not underage.");
    }

    printf("\n");
    printf("--- Done ---");
    return 0;
}