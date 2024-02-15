#include <stdio.h>
#include <stdio.h>

int countDigits(int num) {
    int count = 0;

    while (num != 0) {
        num /= 10;
        ++count;
    }

    return count;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int digitCount = countDigits(number);

    printf("Number of digits in %d is %d\n", number, digitCount);

    return 0;
}
