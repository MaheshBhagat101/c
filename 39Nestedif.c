#include<stdio.h>
void main()
{
    int a=10;
    if(a>5)//true
    {
        printf("The number is greater than 5\n");
        if(a>7)//true
        {
            printf("The number is greater than 7\n");
            if(a>70)//false, so it is ignored
            {
                printf("The number is greater than 70\n");
        
            }
            printf("Hiii\n");
        }
        printf("Thanks\n");
    }
    printf("Bye");
}