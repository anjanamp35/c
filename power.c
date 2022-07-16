#include<stdio.h>
#include<math.h>
int main()
{
 int base,exp;
 printf("Enter the base:");
 scanf("%d",&base);
 printf("Enter the exponent:");
 scanf("%d",&exp);
 int result=pow(base,exp);
 printf("power of a number is %d:",base,exp,result);
 return 0;
}
