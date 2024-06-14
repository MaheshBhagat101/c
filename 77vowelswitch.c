#include<stdio.h>
void main()
{
    char a;
    printf("Enter alphabet  ");
    scanf("%c",&a);
    if(a>='a'&&a<='z'||a>='A'&&a<='Z')
    
    switch(a)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        printf("The alphabet %c is vowel",a);
        break;

        default:
        printf("The alphabet %c is consonent",a);

    }
    
    else
    printf("Invalid Output");
}