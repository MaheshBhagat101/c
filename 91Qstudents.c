#include<stdio.h>
#include<windows.h> //delay function - iterate the loop after few seconds
int main()
{
    int i;
    printf("The Roll no. of students passed are ");
    for(i=1;i<=50;i++)
    {
        if(i==11||i==27||i==32||i==49)
        continue;
        printf("%d ",i);
        sleep(1);
        
    }
    
}