//write a c program to convert decimal into binary numbers//
#include<stdio.h>
 main()
{
int decimal,rem,i=1,binary=0;
printf("the decimal number is:");
scanf("%d",&decimal);

while(decimal!=0)
{

rem=(decimal%2);
decimal/=2;
binary=binary+rem*i;
i=i*10;
}
printf("binary number is %d:",binary);




}
    