#include<stdio.h>
void main()
{
    int i;
    for (i=0;i<4;i++)
    {
        if(i==2)
        {
            continue;
        }
        printf("%d ",i);
    }
}