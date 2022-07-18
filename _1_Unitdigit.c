//1.	Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int x,unit;
    printf("Enter a Number:");
    scanf("%d",&x);
    unit=x%10;
    printf("Unit digit of %d is %d",x,unit);
    return 0;
}