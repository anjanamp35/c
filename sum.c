#include<stdio.h>
int main()
{
 float a,b,c,d,x,y,sum;
 printf("Enter first numerator:");
 scanf("%f",&a);
 printf("Enter first denominator:");
 scanf("%f",&b);
 printf("Enter second numerator:");
 scanf("%f",&c);
 printf("Enter second denominator:");
 scanf("%f",&d);
 x=a*d+c*b;
 y=b*d;
 sum=x/y;
 printf("sum is %f",sum);
 return 0;
}
