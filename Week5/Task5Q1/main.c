#include <stdio.h>
#include <stdio.h>

int main() {

    int myInt = 10;


    printf("Original value: %d\n", myInt);

    int *myIntPtr = &myInt;


    *myIntPtr = 20;


    printf("Updated value: %d\n", myInt);

    return 0;
}
