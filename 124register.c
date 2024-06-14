#include<stdio.h>
void main()
{                       // processor can access register faaster than any other storage class
    int a = 5;         //Registers are the personal memory of processors
    register int b=10; //here also b can be only in this block
    printf("%d ",a); 
    printf("%d", b);
}