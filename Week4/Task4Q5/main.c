#include <stdio.h>
#include <stdio.h>

int main() {
    int matrix[5][5];


    printf("Enter the elements of the 5x5 array:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("Row sums:\n");
    for (int i = 0; i < 5; i++) {
        int rowSum = 0;
        for (int j = 0; j < 5; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d sum: %d\n", i + 1, rowSum);
    }


    printf("\nColumn sums:\n");
    for (int j = 0; j < 5; j++) {
        int columnSum = 0;
        for (int i = 0; i < 5; i++) {
            columnSum += matrix[i][j];
        }
        printf("Column %d sum: %d\n", j + 1, columnSum);
    }

    return 0;
}

