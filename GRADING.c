#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    float avg;
    scanf("%d",&sub1);
    scanf("%d",&sub2);
    scanf("%d",&sub3);
    scanf("%d",&sub4);
    scanf("%d",&sub5);
        avg =((sub1 + sub2 + sub3 + sub4 + sub5)/5);
    if (avg>=90)
        printf("Grade A");
    else if(avg>=80 && avg<90)
        printf("Grade B");
    else if(avg>=60 && avg<80)
        printf("Grade C");
    else
        printf("Grade D");
}