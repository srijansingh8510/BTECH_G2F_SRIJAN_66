#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    float si,ci,amount;
    printf("Enter Your principle,rate,time :\n");
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("The SI is : %f\n",si);
    ci = p*pow(1+(r/100),t)-p;
    printf("The CI is : %f",ci);
}

