#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter First no. : ");
    scanf("%d",&a);
    printf("Enter Second no. : ");
    scanf("%d",&b);
    printf ("Enter the Third no. : ");
    scanf ("%d",&c);
    c=a;
    a=b;
    b=c;
    printf("The value of a : %d\n",a);
    printf("The value of b : %d\n",b);
    printf ("Ther value of c : %d\n " ,c);
    return 0;



}