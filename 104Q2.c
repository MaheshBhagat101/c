#include<stdio.h>
#include<windows.h>
float main()
{
    float K[4]={1.5,2.5,3.5,4.5};
    int i;
    for(i=0;i<=3;i++)
    {
        printf("%f  ",K[i]+.5);
        sleep(1);
    }
}