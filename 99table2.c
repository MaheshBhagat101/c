#include<stdio.h>
#include<windows.h>
int main()
{
    int i,j;
    for(i=2;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d ",i*j);
            sleep(1);
        }
        
        printf("\n");
    }
    
}