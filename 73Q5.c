#include<stdio.h>
void main()
{
    int a='A'; // it works!!!
    switch (a)
    {
        case 68:
        printf("Attack of Titans");

        case 94:
        printf("\nVinland saga");
        printf("\nInitial D");

        case 65:
        printf("\nONE PIECE");
        printf("\nDragon ball Z");
        break;

        case 99:
        printf("\nBerserk");
        printf("\nBlack clover");

        default:
        printf("\nHentai");
    }
}