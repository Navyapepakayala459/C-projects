//write a c program to find largest number among  four numbers using nested if else//
#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("largest number is %d",a);
            } else
            {
                printf("largest number is %d",d);
            }
        } else
        {
            if (c > d)
            {
                printf("largest number is %d",c);
            } else
            {
                printf("largest number is %d",d);
            }
        }
    } else {
        if (b > c)
        {
            if (b > d)
            {
                printf("largest number is %d",b);
            } else
            {
                printf("largest number is %d",d);
            }
        } else
        {
            if (c > d)
            {
                printf("largest number is %d",c);
            } else
            {
                printf("largest number is %d",d);
            }
        }
    }
}
