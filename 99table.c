#include<stdio.h>
#include<windows.h>
int main()
{
    int i,n,j;
    printf("Enter a integer ");
    scanf("%d",&n);
    for(i=n;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d X %d = %d\n",i,j,i*j);
            sleep(1);

        }
        

    }
}