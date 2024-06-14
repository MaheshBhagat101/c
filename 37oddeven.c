#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number  ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The given number is even\n");
    }
    else
    {
        printf("The given number is odd");
    }
}