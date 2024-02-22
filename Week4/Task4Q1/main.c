#include <stdio.h>
#include <stdio.h>

void sortArray(int arr[], int size, int order) {
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if ((order == 0 && arr[j] > arr[j + 1]) || (order == 1 && arr[j] < arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;


    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];


    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int order;


    printf("Enter 0 for ascending or 1 for descending: ");
    scanf("%d", &order);


    sortArray(arr, size, order);


    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

