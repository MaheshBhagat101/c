#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter any two different values  ");
    scanf("%f %f",&a,&b);
    if(a>b)
    {
        printf("%f is greater",a);
    }
    else
    {
        printf("%f is greater",b);
    }
}