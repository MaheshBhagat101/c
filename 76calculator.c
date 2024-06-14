#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two digits to perfom calculation  ");
    scanf("%d %d",&a,&b);

    printf(" Menu\n press 1 to perform addition\n press 2 to perform substrcation\n");
    printf(" press 3 to perform multiplication\n press 4 to perform division\n");

    printf("Enter the operation wanted to perform   ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        b=a+b;
        printf("The addition is %d",b);
        break;

        case 2:
        b=a-b;
        printf("The substraction is %d",b);
        break;

        case 3:
        b=a*b;
        printf("The multiple is %d",b);
        break;

        case 4:
        printf("The division is %f",(float)a/b); //to store the answer in decimal form
        break;

        default:
        printf("INVALID INPUT");
    }

}