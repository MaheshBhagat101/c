#include<stdio.h>
void main()
{
    float a=0;
    printf("Items available in the price of $1000.50,$500.25,$200\n");
    printf("Select the price - $");
    scanf("%f",&a);
    if(a==1000.50)
    {
        printf("\nYou have chosen Guitar");
    }
    else if(a==500.25)
    {
        printf("\nYou have chosen Violen");
    }
    else if(a==200)
    {
        printf("\nYou have chosen Flute");
    }
}