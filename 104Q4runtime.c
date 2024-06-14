#include<stdio.h>
void main()
{
    int A[4],i;
    printf("Enter any 4 integer "); 
    for(i=0;i<=3;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The elements are  ");
    for(i=0;i<=3;i++)
    {
        printf("%d ",A[i]);
    }
    
}