#include<stdio.h>
int fun();
void main()
{
    extern int a ;
    printf("%d",a);
    fun();
}
int a=9; //global variable
int fun()
{
    printf("  %d%d",a,a);
}