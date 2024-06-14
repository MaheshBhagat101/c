#include<stdio.h>
void main()
{
    int a=67; // it works!!!
    switch (a)
    {
        case 'A':
        printf("Attack of Titans");

        case 'E':
        printf("\nVinland saga");
        printf("\nInitial D");

        case 'C':
        printf("\nONE PIECE");
        printf("\nDragon ball Z");
        break;

        case 'D':
        printf("\nBerserk");
        printf("\nBlack clover");

        default:
        printf("\nHentai");
    }
}