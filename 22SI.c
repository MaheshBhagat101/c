#include<stdio.h>
void main()
{
    float p,r,t,si;
    printf("Enter the principal,rate of interest and time\n");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("The Simple interest is %f",si);
    //can be performed without using si variable
    //printf("The simple intrest is %f",(p*r*t)/100);
    //It will also give the same result
}