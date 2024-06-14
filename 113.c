#include<stdio.h>
void India();
void Rajasthan();
void Udaipur();
void main()
{
    printf("1.This is main");
    India();
    printf("\n7.Back in main");

}
void India()
{
    printf("\n2.This is India");
    Rajasthan();
    printf("\n6.Out of Rajasthan");
}
void Rajasthan()
{
    printf("\n3.This is Rajasthan");
    Udaipur();
    printf("\n5.Out of Udaipur");
}
void Udaipur()
{
    printf("\n4.Udaipur is Beautiful");
}