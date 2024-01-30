#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;


    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    printf("\nArithmetic Operations: \n");
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    printf("Division: %f\n", (float)num1 / num2);


    printf("\nLogical Operations: \n");
    printf("AND: %d\n", num1 && num2);
    printf("OR: %d\n", num1 || num2);
    printf("NOT (of num1): %d\n", !num1);
    printf("NOT (of num2): %d\n", !num2);


    printf("\nBitwise Operations: \n");
    printf("Bitwise AND: %d\n", num1 & num2);
    printf("Bitwise OR: %d\n", num1 | num2);
    printf("Bitwise XOR: %d\n", num1 ^ num2);
    printf("Bitwise NOT (of num1): %d\n", ~num1);
    printf("Bitwise NOT (of num2): %d\n", ~num2);

    return 0;
}
