#include<stdio.h>
void main()
{
    int A[2][3]={2,4,6,8,10,12};
    int i,j;
    for(j=0;j<=2;j++)
    {
        for(i=0;i<=1;i++)
        {
            printf("%d\n",A[i][j]);
        }
    }
    

}