#include <stdio.h>
#include <stdio.h>


void scalarMultiply(const int *arr1, const int *arr2, int size, int scalar, int *result) {
    for (int i = 0; i < size; ++i) {
        *(result + i) = *(arr1 + i) * *(arr2 + i) * scalar;
    }
}

int main() {

    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {2, 3, 4, 5, 6};


    int size = sizeof(array1) / sizeof(array1[0]);


    int scalar = 2;


    int resultArray[size];


    scalarMultiply(array1, array2, size, scalar, resultArray);


    printf("Result after scalar multiplication:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", resultArray[i]);
    }

    return 0;
}
