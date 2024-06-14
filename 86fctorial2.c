#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("Enter a non negtive integer ");
    scanf("%d",&n);
    if(n<0)
    printf("\nINVALID INPUT");
    else if(n==0)
    printf("\nThe fctorial is 1");
    else 
    {
        for(i=n;i>=1;i--)
            f=f*i;
            printf("%d ",f);
    }   
}