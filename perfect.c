#include<stdio.h>
int main()
{
 int num,r,sum=0,i;
 printf("Enter a number:");
 scanf("%d",&num);
 for(i=1;i<num;i++)
 {
  r=num%i;
  if(r==0)
  {
  sum=sum+i;
  }
 }
 if(sum=num)
  {
   printf("Perfect number is %d:",num);
  }
  else
  {
   printf("Not a perfect number is %d:",num);
  }
 return 0;
}
