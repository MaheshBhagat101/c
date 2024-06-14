#include<stdio.h>
void main()
{
     float phy,chem,maths;
     printf("Enter the marks of physics, chemistry and maths\n");
     scanf("%f %f %f",&phy,&chem,&maths);
     printf("The percentage of the student is %f",((phy+chem+maths)/300)*100);
}