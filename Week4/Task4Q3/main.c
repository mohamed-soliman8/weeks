#include <stdio.h>
#include <stdio.h>

void printUniqueElements(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        int isUnique = 1;

        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }


        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
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


    printf("Unique elements in the array are: ");
    printUniqueElements(arr, size);

    return 0;
}

