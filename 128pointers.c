#include<stdio.h>
void main()
{
    int a=10;
    int*p;
    p=&a;
    printf("%d",a);        // 10
    printf("\n%u",&a);     // 6422300
    printf("\n%d",*(&a));  // 10
    printf("\n%u",p);      // 6422300
    printf("\n%d",*p);     // 10
    printf("\n%u",&p);     // 6422296
    printf("\n%u",*(&p));  // 6422300
    printf("\n%d",*(*(&p)));//10
    
}