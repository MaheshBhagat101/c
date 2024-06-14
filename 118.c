#include<stdio.h>
int Number(int,int);
void main()
{
    int a,b,g;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    g = Number(a,b);
    printf("The Greater number is %d",g);
}
int Number(int x,int y)
{
    if(x>y)
    return(x);
    else
    return(y);
    
}

