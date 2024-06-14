#include<stdio.h>
int main()
{
    int n;
    printf("Enter any three digit number  ");
    scanf("%d",&n);
    printf("%d\n",n%10);
    n=n/10;
    printf("%d\n",n%10);
    n=n/10;
    printf("%d\n",n%10);

}