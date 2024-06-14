#include<stdio.h>
void main()
{
    int a=5,b=2;
    float c,d;
    c=a/b;
    printf("%f\n",c);
    d=(float)a/b; // a and b will remain as int bt as we have mentioned float in front of them explicitly
                  // than a will be converted into real value for a while and so do the b
                  // so the a/b will obtain a real value that is 2.5 and its stored in d
    printf("%f",d);
}