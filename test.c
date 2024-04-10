#include <stdio.h>

int main() {
    char c;

    printf("Enter some characters (press Enter to finish):\n");

    // Read characters until newline (\n) is encountered
    while ((c = getchar()) != '\n') {
        printf("You entered: %c\n", c);
    }

    printf("Input finished.\n");

    return 0;
}