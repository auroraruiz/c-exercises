#include <stdio.h>

void swap(char* array, int i, int j);
void bubblesortArray(char* array, size_t size_array);
void printArray(char* array, size_t size_array);

int main(){
    printf("37b. Sort an array of chars");
    printf("\n");
    printf("---------------------------\n");

    char array[6] = "aurora";
    size_t size_array = (sizeof(array)/sizeof(array[0]));

    printArray(array,size_array);

    // Bubblesort
    bubblesortArray(array, size_array);

    printArray(array,size_array);

    printf("--- Done ---");
    return 0;
}

void swap(char* array, int i, int j){
    char temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void bubblesortArray(char* array, size_t size_array) {
    printf("Performing Bubblesort on array.\n");
    int swapped;
    for (int i = 0; i < size_array - 1; i++) {
        swapped = 0;
        for (int j = 0; j < size_array - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array, j, j + 1);
                swapped = 1;
            }
        }
        // If no swaps were made in this pass, array is sorted
        if (!swapped) {
            break;
        }
    }
}

void printArray(char* array, size_t size_array){
    printf("String: ");
    for (int i = 0; i < size_array; i++){
        if (i != size_array - 1){
            printf("%c", array[i]);
        }
        else{
            printf("%c", array[i]);
        }
    }
    printf("\n");
}