#include<stdio.h>
#include<windows.h>
int main()
{
    int i,j;
    for(i=1;i<=2;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("i=%d, j=%d\n",i,j);
            sleep(2);
        }
        
    }

}