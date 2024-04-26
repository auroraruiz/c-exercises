#include <stdio.h>
#include <string.h>

struct Player
{
    char name[20];
    int score;
};

int main(){
    printf("38. Structs");
    printf("\n");
    printf("-----------\n");
    /*
    struct = collection of related members ("variables")
             they can be of different data types, unlike arrays
             listed under one name in a block of memory
             VERY SIMILAR to classes in other languages (but no methods)
    */

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "aurora");
    player1.score = 4;

    strcpy(player2.name, "helena");
    player2.score = 17;

    printf("%s\n", player1.name);
    printf("%i\n", player1.score);

    printf("%s\n", player2.name);
    printf("%i\n", player2.score);

    printf("Size of struct: %zu (bytes)\n", sizeof(player1));
    printf("Memory address of struct: %p\n", &player1);

    printf("--- Done ---");
    return 0;
}