#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  printf("enter the number to get the table\n");
  scanf("%d",&n);
  for(int i=0;i<=12;i++)
  {
      printf("%d*%d=%d\n",n,i,(n*i));
  }
    return 0;
}
