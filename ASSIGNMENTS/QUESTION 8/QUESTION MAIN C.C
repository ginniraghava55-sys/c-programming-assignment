#include<stdio.h>
int main( )
{
   int exp,perf;
   printf("experience");
   scanf("%d",&exp);
   printf("performance");
   scanf("%d",&perf);
   if(exp>7&&perf>=85)
   printf("level:senior\n");
   else if(exp>=37&perf>=80)
   printf("level:mid-level\n");
   else
   printf("level:junior\n");
   return 0;
}
