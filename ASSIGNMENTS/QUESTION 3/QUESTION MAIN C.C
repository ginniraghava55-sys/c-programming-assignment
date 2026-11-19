#include<stdio.h>
int main( )
{
   int total,x,y;
   int benshare,blackbeardshare,remaining,eachpirate;
   scanf("%d",&total);
   scanf("%d",&x);
   scanf("%d",&y);
   benshare=total*x/100;
   remaining=total-benshare;
   blackbeardshare=remaining*y/100;
   remaining=remaining-blackbeardshare;
   eachpirate=remaining/3;
   printf("%d\n",benshare);
   printf("%d\n",blackbeardshare);
   printf("%d\n",eachpirate);
    return 0;
}
