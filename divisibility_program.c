//write a c program to find numbers divisible by a and b between X and Y//
#include<stdio.h>
int main()
{
    int X,Y,a,b,i;
    printf("enter the values ofX,Y,a and b");
    scanf("%d%d%d%d",&X,&Y,&a,&b);
    for(i=X; i<=Y; i++)
    {
        if (i%a==0&&i%b==0)
            printf("\n%d",i);
    }
}