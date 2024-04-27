#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main(){
    printf("41. Enums");
    printf("\n");
    printf("---------\n");
    /*
    enums =  a user defined typed of names integer identifiers
             helps to make a program more readable
             enums are constants
             enums ara NOT STRINGS, but they can be treated as int
    */
    enum Day today = Sat; 
    
    
    printf("%i\n", today+40);

    if (today == Sat || today == Sun){
        printf("It's the weekend!");
    }
    else{
        printf("It's a regular day of the week :(");
    }
    printf("\n");
    printf("--- Done ---");
    return 0;
}