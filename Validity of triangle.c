#include<stdio.h>
int main()
{
    int a1,a2,a3,triangle=0;
    printf("Enter the three angles of the triangle:");
    scanf("%d%d%d",&a1,&a2,&a3);
    triangle=a1+a2+a3;
    if(triangle==180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is invalid");
    }
return 0;
}
