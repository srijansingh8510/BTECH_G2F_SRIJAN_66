#include <stdio.h>
int findMax(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
int findMin(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2, max, min;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = findMax(num1, num2);   
    min = findMin(num1, num2);  

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
