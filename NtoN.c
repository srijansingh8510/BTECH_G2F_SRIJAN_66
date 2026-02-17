#include <stdio.h>
int main ()
{
    int i,n,sumEven=0 , sumOdd=0 ;
    printf ("Enter Number =");
scanf ("%d",&n);
for (i=1;i<=n;i++)
{
    if (i%2==0)
    {
        sumEven = sumEven+i;
    }
    else {
        sumOdd = sumOdd+i;

    }
    }

printf("\nSum of Even Numbers = %d",sumEven);
printf("\nSum of Odd Numbers = %d",sumOdd);
 
}