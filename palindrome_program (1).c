//write a program to identify palindrome//
#include<stdio.h>
int main()
{
    int num,rem,reversed=0,original;
    printf("enter a number");
    scanf("%d",&num);
    original=num;
    for(;num!=0;)
    {
        rem=num%10;
        reversed=(reversed*10)+rem;
        num=num/10;
    }
    if(original==reversed)
    printf("It is a palindrome");
    else
    printf("It is not a palindrome");
}