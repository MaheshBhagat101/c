#include<stdio.h>
void main()
{
    int c,d,x;
    printf("Enter the numbers to swap ");
    scanf("%d %d",&c,&d);
    printf("Before swapping %d %d",c,d);
    x=c;
    c=d;
    d=x;
    printf("\nAfter swapping %d %d",c,d);
    
}