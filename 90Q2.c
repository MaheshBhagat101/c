#include<stdio.h>
int main()
{
    int i;
    for(i=3;i>=1;i--)
    {
        continue;       //no output here cuz the continue statement doesn't let the print to execute.
                        //and the loop is formed.
        printf("%d",i);
    }
}