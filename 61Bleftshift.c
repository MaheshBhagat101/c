#include<stdio.h>
int main()
{
    int a=5,c;
    c=a<<1;                   
    printf("%d",c);         //b=a<<n => a*(2*n)
}
//b=a<<1 => b=10 -> 5*2
//b=a<<2 => b=20 -> 5*(2*2)
//b=a<<3 => b=40 -> 5*(2*2*2)