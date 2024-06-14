#include<stdio.h>
void main()
//int converted to float, so its an promotion 
{
    int a =5;
    float x;
    x=a;
    printf("a=%d \nx=%f",a,x);
}