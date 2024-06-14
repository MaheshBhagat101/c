#include<stdio.h>
void main()
{
    int p,q,r,s;
    p=1;
    q=2;
    r=p,q;
    s=(p,q);
    printf("r=%d s=%d",r,s);
}