#include <stdio.h>
#include <stdlib.h>

int main()
{
   float grade;
   printf("Enter the grade\n");
   scanf("%f",&grade);
   if(grade<=100&&grade>=85)
   {
       printf("the grade %.2f  is excellent",grade);
   }
  else if(grade<85&&grade>=75)
   {
       printf("the grade %.2f is very good",grade);
   }
  else if(grade<75&&grade>=65)
   {
       printf("the grade %.2f  is good",grade);
   }
  else if(grade<65&&grade>=50)
   {
       printf("the grade %.2f  is satisfactory",grade);
   }
   else if(grade<50&&grade>=0)
   {
       printf("the grade %.2f  is poor",grade);
   }
   else
   {
       printf("error try again");
   }
    return 0;
}
