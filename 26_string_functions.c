#include <stdio.h>
#include <string.h>

int main(){
    printf("26. String functions");
    printf("\n");
    printf("--------------------\n");

    char string1[] = "Auro";
    char string2[] = "Rita";

    strlwr(string1); // converts a string to lower case
    strupr(string1); // converts a string to upper case
    strcat(string1, string2); // appends string2 to the end of string1

    strncat(string1, string2, 2); // appends n characters from string2 to string1
    strcpy(string1, string2); // copy string2 to string1
    strncpy(string1, string2, 2); // copy n characters of string2 to string1
    
    strset(string1, '?'); // sets all characters of a string to a given character
    strnset(string1, 'x', 2); // sets first n characters of a string to a given character
    strrev(string1); // reverses a string

    char string3[] = "Auro";
    char string4[] = "aurO";

    // int result = strlen(string1); // returns string length as int
    // int result = strcmp(string3, string4); // string compare all characters (returns 0 if same)
    // int result = strncmp(string3, string4, 5); // string compare n chars (returns 0 if same)
    // int result = strcmpi(string3, string4); // string compare all (ignore case) (returns 0 if same)
    int result = strnicmp(string3, string4, 3); // string compare n chars (ignore case) (returns 0 if same)

    printf("%s\n", string1); 
    printf("%i", result);
    printf("\n");
    printf("--- Done ---");
    return 0;
}