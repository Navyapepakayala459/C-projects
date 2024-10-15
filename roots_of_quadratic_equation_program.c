//write a c prpgram to find roots of a quadratic equation//
#include<stdio.h>
#include<math.h>
int main()
{
//let the quadratic equation be of form ax^2+bx+c=0//
int a,b,c;
float delta,r1,r2;
printf("enter the values of a,b,c :");
scanf("%d%d%d",&a,&b,&c);
delta=(b*b)-(4*a*c);
r1=((-b)+sqrt(delta))/(2*a);
r2=((-b)-sqrt(delta))/(2*a);
if(delta==0)
{
printf("the equation has real and equal roots" );
printf("\nroots of the equation are %f and %f",r1,r2);
}
else if (delta>0)
{
printf("the equation has real and  distinct roots");
printf("\nthe roots of equation are %f and %f",r1,r2);
}
else
printf("the equation has imaginary roots");
}