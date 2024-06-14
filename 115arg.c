#include<stdio.h>
void fun(int); // or void fun(int a);
void main()
{
    int x=5;
    fun(x);//Actual parameter

}
void fun(int a)//Formal parameter
{
    printf("%d",a);
}