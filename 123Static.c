#include<stdio.h>
int fun();
int main()
{
    fun(); 
    fun();
    fun();
    fun();
}
int fun()
{
    static int a=1;  // It only happens in static bcz the value 
    printf("%d ",a); // of a is stored in the memory and can be used 
    a=a+1;           // outside the block also 
}                    // Thats why is kept storing the value and returnng the added value