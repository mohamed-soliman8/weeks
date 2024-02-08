#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,max;
  printf("enter 3 number to get the max");
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);
  max= (x>=y)?(x>=z)?x:z:(y>=z)?y:z;
  printf("the max number is %d",max);
    return 0;
}
