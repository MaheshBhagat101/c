#include<stdio.h>
int swap(int,int);
void main()
{
    int a=99,b=10;
    swap(a,b);    //call by value
    printf("The new value of a is %d\n",a);
    printf("The new value of b is %d",b);
}
int swap(int x,int y) //swapping occured between x and y only not between a and b
{                     // Thats why a will show 99 and b will show 10
    int temp; 
    temp=x;
    x=y;
    y=temp;
    
}