#include<stdio.h>
void main()
{
    auto int a=5;
    {
        auto int b=10;
        printf("Value of a is %d",a);
        printf("Value of b is %d",b);
    }
    printf("Value of a is %d",a);
    printf("Value of b is %d",b); //undeclared b
}