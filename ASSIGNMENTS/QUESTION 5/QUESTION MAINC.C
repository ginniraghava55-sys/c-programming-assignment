#include<stdio.h>
int main( )
{
   float mileage;
   int petrol,distance;
   scanf("%f",&mileage);
   scanf("%d",&petrol);
   scanf("%d",&distance);
   if(mileage*petrol>=distance)
   printf("can reach\n");
   else
   printf("cannot reach\n");
   return 0;
}
