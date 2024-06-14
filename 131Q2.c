#include<stdio.h>
int swap(int*,int*);
void main()
{
    int a=99,b=10;
    swap(&a,&b);    //call by reference or adress
    printf("The new value of a is %d\n",a);
    printf("The new value of b is %d",b);
}
int swap(int *x,int *y) 
{                    
    int temp;      //here adresses are swapped
    temp=*x;
    *x=*y;
    *y=temp;
    
}