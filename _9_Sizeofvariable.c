//9.	Write a program to print size of an int, a float, a char and a double type variable 
#include<stdio.h>
int main()
{
    int x;
    char ch;
    float f;
    double d;
    x=sizeof(x);
    ch=sizeof(ch);
    f=sizeof(f);
    d=sizeof(d);
    printf("Size of int is %d\n",x);
    printf("Size of char is %d\n",ch);
    printf("Size of float is %.f\n",f);
    printf("Size of double is %.lf\n",d);
    return 0;
}