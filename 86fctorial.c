#include<stdio.h>
void main()
{
    int i,f=1;
    printf("Enter an non negtive integer ");
    scanf("%d",&i);
    for(i;i>0;i--)
    {
        f=f*i;
    }
    printf("%d ",f);
}