//5.	Write a program to input a three-digit number and display the sum of the digits. 
#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter Three Digit Number:");
    scanf("%d",&x);
    while(x!=0)
    {
        int y=x%10;
        sum=sum+y;
        x=x/10;
    }
    printf("Sum Of Digit is %d",sum);
    return 0;
}