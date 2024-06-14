#include<stdio.h>
void main() //https://youtu.be/uQeRlTLtg2U?si=Q3DDi7LkeU8oiVNu
{
    int a=5,c,d;
    float b=2.0,f;
    c=a+b;
    printf("c=%d",c);
    d=a/b;  //here d is a int and it will only take int value regardless of b being float
    printf(" d=%d\n",d);

    f=a/b;  //here f is also a float so it will take the actual value of a/b 
    printf("f=%f",f);
    //whenever an integer is put wt the real value, than the int is converted into the real value by the compiler to perform the function.

}