#include<stdio.h>
void main()
{
    int x=10,y=20,z=30;
    if(z%y==y%x)
    {
        printf("Dil to pagal hai\n");
        if(z-y==x)
        {
            printf("dil hai tumhara\n");
        }
    }
    else
    {
        if((z%5==y%5)&&(x%5!=y%5)) 
        {
            printf("\n dil ka kya kasoor");
        }
        else
        {
            printf("Dil to baccha hai ji");
        }
    }
}