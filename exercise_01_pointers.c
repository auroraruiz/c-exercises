#include <stdio.h>

void nochange(int var) {
    // Here, var is a copy of the original number. &var != &value
    var = 1337;
}
void change(int *var) {
    // Here, var is a pointer to the original number. var == &value
    // Writing to `*var` modifies the variable the pointer points to
    *var = 1337;
}
int main() {
    int value = 42;
    nochange(value);
    printf("%i\n", value);
    change(&value);
    printf("%i\n", value);
    return 0;
}