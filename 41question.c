#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any three digit number  ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d is the greater value",a);
    }
    if(b>c&&b>a)
    {
        printf("%d is the greater value",b);
    }
    if (c>a&&c>b)
    {
        printf("%d is the greater value",c);
    }
}