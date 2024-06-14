#include<stdio.h>
void main()
{
    char inchar='A';
    switch(inchar)
    {
        case 'A': printf("Chose A\n");
        case 'B':
        case 'C':
        case 'D': printf("Chose B\n");
        default: printf("Choose none");
    }
}