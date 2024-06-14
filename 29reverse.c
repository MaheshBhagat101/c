#include<stdio.h>
void main()
{
    int n,r=0;
    printf("Enter any 4 digit number to reverse   ");
    scanf("%d",&n);
    r=n%10;
    n=n/10;
    r=r*10+(n%10);
    n=n/10;
    r=r*10+(n%10);
    n=n/10; 
    r=r*10+(n%10); // this line can be written as r=r*10+n;
    n=n/10;
    printf("\nThe reversed value is %d ",r);

}