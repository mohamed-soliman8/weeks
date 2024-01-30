#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amount, amount_with_tax;
    const float tax_rate = 0.05;


    printf("Enter an amount: $");
    scanf("%f", &amount);


    amount_with_tax = amount * (1 + tax_rate);


    printf("With tax added: $%.2f\n", amount_with_tax);


    return 0;
}
