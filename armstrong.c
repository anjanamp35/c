#include<stdio.h>
int main()
{
 int num,r,sum=0,temp;
 printf("Enter a number:");
 scanf("%d",&num);
 for(temp=num;num!=0;num=num/10)
 {
  r=num%10;
  sum=sum+(r*r*r);
 }
 if(sum=temp)
  {
   printf("Amstrong number is %d:",temp);
  }
  else
  {
   printf("Not an amstrong number is %d:",temp);
  }
 return 0;
}
