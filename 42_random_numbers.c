#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("42. Random numbers");
    printf("\n");
    printf("----------------------\n");
    /*
    pseudo randomm numbers = a set of values or elements that are sattistically random
                             (Don't use this for any sort of cryptographic security)
    */
    time_t now = time(NULL);
    srand(now); // Use the current time as a seed for random numbers

    // simulation of dice roll
    int number1 = (rand() % 6) +1; // rand() returns a positive short int (2 bytes)
    int number2 = (rand() % 6) +1;
    int number3 = (rand() % 6) +1;

    printf("Time (in secs since Epoch): %lld\n", now);
    printf("Current time: %s", ctime(&now));

    printf("Dice roll 1: %i\n", number1);
    printf("Dice roll 2: %i\n", number2);
    printf("Dice roll 3: %i", number3);

    printf("\n");
    printf("--- Done ---");
    return 0;
}