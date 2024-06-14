#include<stdio.h>
void main()
{
    int c,d;
    printf("Enter the integer to swap\n");
    scanf("%d %d",&c,&d);
    printf("Before swapping c is %d , d is %d",c,d);
    c=c+d;
    d=c-d;
    c=c-d;
    printf("\nAfter swapping c is %d , d is%d",c,d);

}