#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=2;i++)
    {
        printf("\nHello ");
        if(i==1)
        continue;
        printf("%d ",i);
    }
}