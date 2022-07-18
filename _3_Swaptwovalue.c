//3.	Write a program to swap values of two int variables 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Two Numbers:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped Value is %d %d",a,b);
    return 0;
}