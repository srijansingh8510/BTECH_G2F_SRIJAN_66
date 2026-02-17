#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter your Sub Marks : \n");
    scanf("%d",&sub1);
    scanf("%d",&sub2);
    scanf("%d",&sub3);
    scanf("%d",&sub4);
    scanf("%d",&sub5);
    int sum = sub1+sub2+sub3+sub4+sub5;
    float avg = sum/5;
    printf("Your avg is %f",avg);
}