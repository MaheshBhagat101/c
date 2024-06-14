
#include<stdio.h>
void main()
{
    float a=3,b=3;  //switch doesn't work with float type
    switch(a+b)
    {
        case 10:
        printf("Hinata");

        case 6:
        printf("Tsunade ");

        case 7:
        printf("Boa Hancock");
        break;

        default:
        printf("Nami");
    }
}