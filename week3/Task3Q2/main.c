#include <stdio.h>
#include <stdio.h>


int globalVar1 = 5;
int globalVar2 = 10;


void swapGlobals() {
    int temp = globalVar1;
    globalVar1 = globalVar2;
    globalVar2 = temp;
}

int main() {
    printf("Before swapping: globalVar1 = %d, globalVar2 = %d\n", globalVar1, globalVar2);

    swapGlobals();

    printf("After swapping: globalVar1 = %d, globalVar2 = %d\n", globalVar1, globalVar2);

    return 0;
}
