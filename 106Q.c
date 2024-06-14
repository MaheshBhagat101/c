#include<stdio.h>
void main()
{
    float A[5],max;
    int i;
    printf("Enter any 5 values ");
    for(i=0;i<=4;i++)
    {
        scanf("%f",&A[i]);
    }
    for(i=0;i<=4;i++)
    {
        if(A[i]>max)
        max=A[i];
    }
    printf("\nThe largest value is %0.2f",max);
}