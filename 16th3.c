#include<stdio.h>
void main()
{
    int a=25.345;
    float b=3.33333;
    printf("a=%d b=%.2f\n",a,b);
    a=4;
    b=a;
    printf("a=%d b=%f",a,b);
}