#include <stdio.h>
#include <stdlib.h>

int main()
{
        int x;
        printf("Enter the the ID\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1234:
            printf("welcome Harry");
            break;
             case 5678:
            printf("welcome Ron");
            break;
             case 1145:
            printf("welcome Hermione");
            break;
            default:
            printf("wrong ID ");

        }
    return 0;
}
