#include<stdio.h>
#include<math.h>
int main()
{
    float r;
    scanf("%f",&r);
    float pi = 3.14;
    float a,c;
    a = pi*pow(r,2);
    c = 2*pi*r;
    printf("Area is : %f\n",a);
    printf("Circumference is : %f",c);
    return 0;

}