#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter 5 digits to be added  ");
    scanf("%d",&n);
    sum=sum+(n%10);
    n=n/10;
    sum=sum+(n%10);
    n=n/10;
    sum=sum+(n%10);
    n=n/10;
    sum=sum+(n%10);
    n=n/10;
    sum=sum+(n%10);
    printf("\nThe addition of above digits is %d",sum);
}