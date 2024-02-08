#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("the 3*4=......");
    while(1)
    {

        scanf("%d",&x);
        if(x==12)
        {
            printf("thank you");
             break;
        }

        else
        {
            printf("try again");
              continue;
        }

    }
    return 0;
}
