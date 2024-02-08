#include <stdio.h>
#include <stdlib.h>

int main()
{
        const price=300;
       double numh,toprice=0;
    printf("Enter the number of hours\n");
    scanf("%lf",&numh);
    if(numh>=40)
    {
        toprice=numh*price;

    }
    else
    {

        toprice=price*(numh-.1);
    }
    printf("the total salary is=%.2lf$",toprice);

    return 0;
}
