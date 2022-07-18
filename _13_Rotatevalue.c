/*13.	Write a program to take a three-digit number from the user 
and rotate its digits by one position towards the right. 
*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    int y=(x%10)*100+(x/10);
    printf("Rotate value of %d is %d ",x,y);
    return 0;
}