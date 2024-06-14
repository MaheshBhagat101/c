#include<stdio.h>
void main()
{
    char a;
    printf("Enter any character  ");
    scanf("%c",&a);
    if(a>=65&&a<=90)  //(a>='A'&&a<='Z')
    {
        printf("The character is cpital letter\n");
    }
    else if (a>=97&&a<=122)  //(a>='a'&&a<='z')
    {
        printf("The character is small letter\n");
    }
    else if (a>=48&&a<=57)  //(a>='0'&&a<='9')
   {
     printf("The character is digit");
   }
   else
   {
    printf("The character is special");
   }
}