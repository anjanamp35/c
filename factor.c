#include<stdio.h>
int main()
{
 int n,i,f=0;
 printf("Enter a number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
   {
    f++;
    printf("\n%d",i);
   }
 }
 printf("\nTotal factors of a number is %d",f);
 return 0;
}
