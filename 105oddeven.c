#include<stdio.h>
void main()
{
    int A[10],i,count1=0,count2=0;
    printf("Enter 10 integer ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&A[i]);  
    }
    for(i=0;i<=9;i++)
    {
        
        if(A[i]%2==0)
        count1++;
        else
        count2++;
    }
    printf("\nEven=%d, odd=%d",count1,count2);
}