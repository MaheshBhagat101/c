#include<stdio.h>
void main()
{
    char a;
    printf("enter a character  ");
    scanf("%c",&a);
    if(a>='a'&&a<='z'||a>='A'&&a<='Z')
    {
        if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
        printf("It's a vowel");
        else
        printf("It's a consonent");
    }
    else
    printf("INVALID INPUT");
}