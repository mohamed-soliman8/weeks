#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact,res=1,q;
    printf("enter the number to get the factorial\n");
    scanf("%d",&fact);
    q=fact;

   if(fact<0)
   {
       printf("no factorial of negative number");
   }
   else
   {
        while(q!=0)
    {
        res*=q;
        q--;
    }
     printf("the factorial of %d = %d",fact,res);
   }

    return 0;
}
