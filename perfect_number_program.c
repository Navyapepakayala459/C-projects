//write c program to identify perfect number//
#include <stdio.h>

void main()
{
    int num, sum = 0,i;

    printf("Enter a number: ");
    scanf("%d", &num);
    for ( i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
     {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }
}