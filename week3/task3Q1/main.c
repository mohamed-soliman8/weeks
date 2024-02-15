#include <stdio.h>
#include <stdio.h>


int Get_Max(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int number1, number2;


    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);


    int maxNumber = Get_Max(number1, number2);


    printf("The maximum of %d and %d is: %d\n", number1, number2, maxNumber);

    return 0;
}
