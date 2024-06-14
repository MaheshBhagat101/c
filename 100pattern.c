#include<stdio.h>
#include<windows.h>
int main()               //****
{                        //****
    int i,j;             //****
    for(i=1;i<=4;i++)    //****
    {
        printf("*");
        for(j=1;j<=3;j++)
        {
            printf("*");
            sleep(1);

        }
        printf("\n");
        
    }
}