#include<stdio.h>
void main()
{
    int a,b;
    float x;
    a=3.5;//demotion
    x=7;  //promotion
    b=a;  //nothing happend
    printf("a=%d \nb=%d \nx=%f",a,b,x);

}