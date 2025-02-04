#include<stdio.h>
int main()
{
int num,factorial;
printf("Enter the number:");
scanf("%d",&num);
if(num>0)
{
   factorial=1;
    while(num>0)
    {
    factorial=factorial*num;
    num=num-1;
    }
    printf("The factorial of the given number is %d/n",factorial);
}
else
{
  printf("Should be a positive number");
}


return 0;
}

    
    
