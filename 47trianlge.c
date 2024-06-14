#include<stdio.h>
int main()
{
    int a,b,c;
    printf("sides of triangle are  ");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        printf("It is a triangle");
    }
    else
    {
        printf("It is not a triangle");
    }
}