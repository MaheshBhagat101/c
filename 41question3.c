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
    else
    {
        if(b>a&&b>c)
        {
            printf("%d is the greater value",b);
        }
        else
        {
            printf("%d is the greater value",c);
        }
    }
}