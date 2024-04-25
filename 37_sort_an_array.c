#include <stdio.h>

void swap(int* array, int i, int j);
void bubblesortArray(int* array, size_t size_array);
void printArray(int* array, size_t size_array);

int main(){
    printf("37. Sort an array");
    printf("\n");
    printf("-----------------\n");

    int array[10] = {2,3,4,1,8,6,7,9,5,0};
    size_t size_array = (sizeof(array)/sizeof(array[0]));

    printArray(array,size_array);

    // Bubblesort
    bubblesortArray(array, size_array);

    printArray(array,size_array);

    char name[] = "aurora";
    size_t size_name = (sizeof(name)/sizeof(name[0]));
    /*
    printArray(name,size_name);

    // Bubblesort
    bubblesortArray(name, size_name);

    printArray(name,size_name);
    */

    printf("--- Done ---");
    return 0;
}

void swap(int* array, int i, int j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void bubblesortArray(int* array, size_t size_array) {
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

void printArray(int* array, size_t size_array){
    printf("Array: {");
    for (int i = 0; i < size_array; i++){
        if (i != size_array - 1){
            printf("%i, ", array[i]);
        }
        else{
            printf("%i", array[i]);
        }
    }
    printf("}\n");
}
