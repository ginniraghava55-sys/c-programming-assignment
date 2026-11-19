#include<stdio.h>
int main( )
{
   int a,b,c,car;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   scanf("%d",&car);
   if(a%car==0)
   printf("car1 goes into road A\n");
   else if(b%car==0)
   printf("car1 goes into road B\n");
   else if(c%car==0)
   printf("car1 goes into road C\n");
   else
   printf("no path exists\n");
   return 0;
}
