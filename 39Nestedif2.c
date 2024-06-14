#include<stdio.h>
int main()
{
    int x=5,y=10;
    if(x<y)              //1
    {
        printf("One Piece\n");
        if(x==5)         //2
        {
            printf("Vinland saga\n");
            if(y==9999)   //3
            {
                printf("Baki Hanma\n");
                if(y%2==0) //4
                {
                    printf("Attack on Titans\n");
                }
                printf("Initial D\n");
            }
            printf("Hentai\n");
        }
        printf("Hajimo ippo\n");
    }
}