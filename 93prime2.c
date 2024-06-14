#include<stdio.h>
int main()
{
    int n,x=0,i;
    printf("Enter an integer  ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            x=1;
            break;
        }
    }
    if(x==1)
    printf("It is not a prime no.");
    else
    printf("It is a prime no. ");
}