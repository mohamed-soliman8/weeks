#include <stdio.h>
#include <stdio.h>

void fibonacciWithLoop(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms: \n", n);

    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    fibonacciWithLoop(num);

    return 0;
}
