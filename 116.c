#include<stdio.h>

void fun(int,int,int);
void main()
{
    int a=5,b=2,c=8;
    fun(a,b,c);
    fun(3,4,2);
    fun(a,10,7);
}
void fun(int x, int y, int z)
{
    printf("\nResult = %d",x+y+z);
}