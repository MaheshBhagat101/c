#include<stdio.h>
int check(int,int);
int grt(int,int);
int fact(int);
void main()
{
    int a,b;
    printf("Enter the two integer values: ");
    scanf("%d %d",&a,&b);
    if(check(a,b))
    printf("Factorial of %d is %d",grt(a,b),fact(grt(a,b)));
    else
    printf("\nInvalid input");
}
int check(int p, int q)
{
    if((p>0)&&(q>0)&&(p!=q))
    return(1);
    else
    return(0);
}
int grt(int x, int y)
{
    if(x>y)
    return(x);
    else
    return(y);
}
int fact(int z)
{
    int i,f=1;
    for(i=z;i>=1;i--)
    f=f*i;
    return(f);
}