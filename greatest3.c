#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter three numbers:");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c)
 {
  printf("a is greater than a and b is %d",a);
 }
 else if(b>a && b>c)
 {
  printf("b is greater than a and c id %d",b);
 }
 else
 {
  printf("c is greater than a and b is %d",c);
 }
 return 0;
}
