/*10.	Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340) 
*/
#include<stdio.h>
int main()
{
    int x,rem;
    printf("Enter a number:");
    scanf("%d",&x);
    rem=x%10;
    x=x-rem;
    printf("The number is %d",x);
    return 0;
    

}