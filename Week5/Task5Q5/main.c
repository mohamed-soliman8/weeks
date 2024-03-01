#include <stdio.h>
#include <stdio.h>

int main() {

    int x = 5, y = 10, z = 15;
    int *px = &x, *py = &y, *pz = &z;


    printf("a- Before swapping pointers:\n");
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    printf("px: %p, py: %p, pz: %p\n", (void *)px, (void *)py, (void *)pz);
    printf("*px: %d, *py: %d, *pz: %d\n", *px, *py, *pz);


    printf("\nb- Swapping pointers.\n");


    int *temp = pz;
    pz = px;
    px = py;
    py = temp;


    printf("\nd- After swapping pointers:\n");
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    printf("px: %p, py: %p, pz: %p\n", (void *)px, (void *)py, (void *)pz);
    printf("*px: %d, *py: %d, *pz: %d\n", *px, *py, *pz);

    return 0;
}
