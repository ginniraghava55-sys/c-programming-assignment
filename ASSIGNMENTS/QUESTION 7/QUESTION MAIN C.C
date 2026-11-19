#include<stdio.h>
int main( )
{
   int p,r,n;
   float interest,amount,discount,final;
   scanf("%d",&p);
   scanf("%d",&r);
   scanf("%d",&n);
   interest=p*r*n/100.0;
   amount=p+interest;
   discount=interest*0.02;
   final=amount-discount;
   printf("%.2f\n",interest);
   printf("%.2f\n",amount);
   printf("%.2f\n",discount);
   printf("%.2f\n",final);
   return 0;
}
