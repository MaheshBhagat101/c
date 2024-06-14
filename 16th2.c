#include<stdio.h>
void main()
{
    float a=5.384978342;
    int b=10.4533;
    printf("a=%.3f b=%d\n",a,b);
    a=b;
    b=a;
    printf("a=%.2f b=%d",a,b);
}
