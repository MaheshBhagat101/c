#include<stdio.h>
int main()
{
    int year;
    printf("Enter the desired the year  ");
    scanf("%d",&year);
    if((year%400==0)||(year%4==0&&year%100!=0))
    {
        printf("%d is a leap year",year);
    }
    else 
    {
        printf("\n%d is not a leap year",year);
    }
    
     
}