#include<stdio.h>
void main()
{
    int p,c,m;
    printf("Enter the marks of physics, chemistry and maths\n");
    scanf("%d %d %d",&p,&c,&m);
    printf("\nThe percentage of the student is %f",(((p+c+m)/300.0)*100));
}