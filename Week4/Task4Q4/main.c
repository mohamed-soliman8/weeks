#include <stdio.h>
#include <stdio.h>

int findRepeatingElement(int arr[], int size) {

    for (int i = 0; i < size - 1; i++) {

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }


    return -1;
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


    int repeatingElement = findRepeatingElement(arr, size);

    if (repeatingElement != -1) {
        printf("The repeating element in the array is: %d\n", repeatingElement);
    } else {
        printf("No repeating element found in the array.\n");
    }

    return 0;
}


