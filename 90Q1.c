#include<stdio.h>
int main() //can be use to find odd integer
{
    int i ;
    for (i=1;i<=10;i++)
    {
        if(i%2==0)
        continue;
        printf("%d\n",i);
    }
}