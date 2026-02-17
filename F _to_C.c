#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in centigrade : ");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("Temperature in fahreheit : %.2f\n", fahrenheit);
    return 0;
}