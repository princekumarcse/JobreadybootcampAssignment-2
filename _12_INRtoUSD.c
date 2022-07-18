/*12.	Assume price of 1 USD is INR 76.23. 
Write a program to take the amount in INR and convert it into USD. 
*/
#include<stdio.h>
int main()
{
    int amt;
    float usd;
    printf("Enter a Ammont in INR:");
    scanf("%d",&amt);
    usd=(1/76.23)*amt;
    printf("%d in USD is:%.2f",amt,usd);
    return 0;
}