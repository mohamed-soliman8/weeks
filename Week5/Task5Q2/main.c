#include <stdio.h>
#include <stdio.h>


int calculateSum(int *num1, int *num2) {
    return *num1 + *num2;
}

int main() {
    int value1, value2;


    printf("Enter the first value: ");
    scanf("%d", &value1);

    printf("Enter the second value: ");
    scanf("%d", &value2);


    int result = calculateSum(&value1, &value2);


    printf("Summation: %d\n", result);

    return 0;
}
