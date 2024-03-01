#include <stdio.h>
#include <stdio.h>


void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {

            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {

    int myArray[] = {64, 25, 12, 22, 11};


    int size = sizeof(myArray) / sizeof(myArray[0]);


    bubbleSort(myArray, size);


    printf("Sorted array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", *(myArray + i));
    }

    return 0;
}
