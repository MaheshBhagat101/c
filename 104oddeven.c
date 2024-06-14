#include<stdio.h>  // Find if the no. enterd by the user is odd or even?
void main()
{
    int A[10],i=0,x=0,n=0;  // CODE NOT WORKING 
    printf("Enter any integer ");
    
    for(i=0;i<=9;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]%2==0)
        {
            x=1;
            break;
        }
    
    }
    if(x==1)
    {
        printf("%d is an even no.",A[i]);
    }
    else 
    {
        printf("%d is a odd no.",A[i]);
    }
    
}