#include <stdio.h>

// This is a single line comment

/*
This is a multiline comment
*/

/* escape sequence = character combination consisting of a backslash /
                        followed by a letter or combiantion of digits.
                        They specify actions within a line or string of text
                        \n = new line
                        \t = tab
*/
int main(){
    printf("3. Comments and escape sequences\n");
    printf("--------------------------------\n");
    printf("I\nlike\npizza\n");
    printf("1\t2\t3\n");
    printf("\"I like pizza\" - Abraham Lincoln\n");
    printf("Backslash: \\\n");
    //printf("\a"); //Sonido de alerta
    printf("--- Done ---");
    return 0;
}