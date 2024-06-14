#include<stdio.h>
void main()
{
    int x=10,y=5;
    if(x%y==2)     //As the statement is false it will not read the next printf statement of yes
    printf("yes");//and directly shifts to the thanks statement
    printf("Thanks");
}