#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("43. Number guessing game");
    printf("\n");
    printf("------------------------\n");


    const int MIN = 0;
    const int MAX = 10;

    printf("************************************\n"
            "Welcome to the number guessing game!\n"
            "The game has the following instructions:\n"
            "I'll think of a number between %i and %i.\n"
            "You have three guesses.\n"
            "If you guess the number, you win.\n"
            "If you don't, I win.\n"
            "************************************\n", MIN, MAX-1);

    // Using current time as seed
    time_t now = time(0);
    srand(now);

    // Generate a random number betwwen MIN and MAX
    int number = (rand() % MAX)+MIN;
    int counter = 0;
    while (counter<3){
        int guess;
        printf("Enter your guess: ");
        scanf("%i", &guess);
        if (guess == number){
            printf("Number was %i. Congrats! You win!", number);
            break;
        }
        else if(guess > number){
            printf("Too high.\n");
        }
        else{
            printf("Too low.\n");
        }
        counter++;
    }
    if (counter == 3){
        printf("Number was %i. You lost.", number);
    }

    printf("\n");
    printf("--- Done ---");
    return 0;
}