#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,root1,root2,real_part,imaginary_part;
    printf("Enter the coeficients of the Quadratic equation:\n");
    printf("a:");
    scanf("%f",&a);
    printf("b:");
    scanf("%f",&b);
    printf("c:");
    scanf("%f",&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/2*a;
        root2=(-b-sqrt(discriminant))/2*a;
        printf("The roots are real and unequal\n");
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    }
    else if(discriminant==0)
    {
        root1=root2=-b/2*a;
        printf("The roots are real and equal\n");
        printf("Root1=%f\nRoot2=%f\n",root1,root2);
    }
    else if(discriminant<0)
    {
        real_part=-b/2*a;
        imaginary_part=sqrt(-discriminant)/2*a;
        printf("The Roots are unequal and imaginary\n");
        printf("Root1=%f+%f\n",real_part,imaginary_part);
        printf("Root2=%f-%f\n",real_part,imaginary_part);
    }
    else
    {
        printf("Invalid Entry");
    }
return 0;
}
