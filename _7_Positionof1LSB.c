//7.	Write a program to find the position of first 1 in LSB. 
#include<stdio.h>
int main()
{
    int x,result,count;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x !=0)
    {
        result=x&1;
        count++;
        if(result == 1)
        {
              break;
        }
    printf("Position of 1 is %d",count);
              x=x>>1;
    }
     return 0;
}