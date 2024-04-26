#include <stdio.h>

typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
}  User;

int main(){
    printf("39. Typedef");
    printf("\n");
    printf("-----------\n");

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           mostly used for convenience
    user user1 = "Aurora";
    printf("User: %s\n", user1);

    User user2 = {"Aurora", "password123", 15};

    printf("--- Done ---");
    return 0;
}