#include <stdio.h>
#include <stdlib.h>

int main()
{
  int result=0,x;
  for(int i=1;i<=10;i++)
  {
      printf("enter the number %d: ",i);
      scanf("%d",&x);
      result+=x;

  }
  printf("the sum of the number is %d\n",result);

   printf("the avarge of the number is= %d/10=%.2f",result,(float)result/10);

    return 0;
}
