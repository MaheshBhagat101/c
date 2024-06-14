#include<stdio.h>
void main()
{
    char a;
    printf("Enter character  ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
    printf("vowel");
    }
else
   {
     printf("consonent");
   }
}