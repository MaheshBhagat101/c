#include<stdio.h>
void main()
{
    char a;
    printf("Enter character to convert   ");
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
    {
    a=a+32;
    printf("%c",a);
    }
    else if(a>='a'&&a<='z')
    {
    a=a-32;
    printf("%c",a);
    }
    else 
    printf("INVALID INPUT");
    
   
}