#include<stdio.h>
int main()
{
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0;i<=9;i=i+3)
    {
        printf("%d ",A[i]);
    }
}