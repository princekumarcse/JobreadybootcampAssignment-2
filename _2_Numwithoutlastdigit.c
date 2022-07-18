//2.	Write a program to print a given number without its last digit. 
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
   int y=x/10;
    printf("%d Without Last digit is %d",x,y);
    return 0;
}