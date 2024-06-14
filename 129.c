#include<stdio.h>
void main()
{
    int a=5;
    int*p;
    p=&a;
    printf("%d",a);
    printf("\n%d",*p);
    a=a+10;
    printf("\n%d",*p);
    *p=*p+20;
    printf("\n%d",a);
}