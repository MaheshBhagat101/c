#include<stdio.h>
void main()
{
    int i;
    printf("The even numbers between 1 to 50 are ");
    for(i=0;i<=50;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }

    
}