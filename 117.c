#include<stdio.h>

float avg(float,float,float);
void main()
{
    float a=3.5,b=2.5,c=3.0,d;
    d = avg(a,b,c);
    printf("average is %.2f",d);
}
float avg(float x,float y, float z)
{
    float t;
    t=(x+y+z)/3;
    return(t);
}