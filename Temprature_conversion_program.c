//write a c program to convert tempratures//
#include<stdio.h>
int main()
{
    int output;
    float temp;
    printf("which conversion do you want to perform ?\n1.farenheit to celsius\n2.celsius to farenheit\n");
    scanf("%d",&output);
    printf("enter temprature :");
    scanf("%f",&temp);
    switch(output)
    {
    case 1:
        printf("the temprature in celsius is %f",(((5.0)*(temp-32))/(9.0)));
        break;
    case 2:
        printf("the temprature in farenheit is %f",((((9.0)*temp)/(5.0))+32));
        break;

    }

}