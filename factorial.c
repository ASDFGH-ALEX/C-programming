#include<stdio.h>
int factorial(int);
int main()
{
   int num;
   printf("Enter the number:");
   scanf("%d",&num);
   int fact;
   fact=factorial(num);
   printf("%d,is factorial\n",fact);
   return 0;
}
int factorial(int num)
  {
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
       fact=fact*i;
    }
  return fact;
}

