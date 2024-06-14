#include<stdio.h>
void main()
{
    int i,j;
    printf("Enter the range from 1 to  ");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        if(j%3==0&&j%2!=0)
        printf("%d ",j);
    }
}