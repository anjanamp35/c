#include<stdio.h>
int main()
{
 int n;
 printf("Enter a number:");
 scanf("%d",&n);
 if(n>0)
  {
  printf("No is positive");
  }
 else if(n<0)
   {
    printf("No is negative");
   }
   else
    {
     printf("No is 0");
    }
 return 0;
}
