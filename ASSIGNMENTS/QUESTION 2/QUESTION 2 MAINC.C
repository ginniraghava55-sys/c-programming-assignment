#include<stdio.h>
int main( )
{
    int answered,time,submitted;
    printf("questions Anwered");
    scanf("%d",&answered);
    printf("remaining time");
    scanf("%d",&time);
    printf("already submitted");
    scanf("%d",&submitted);
    if(answered>=1&&time>0&&submitted==0)
    printf("submissin allowed\n");
    else
    printf("submission not allowed\n");
    return 0;
}
