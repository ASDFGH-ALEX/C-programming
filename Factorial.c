#include<stdio.h>
int main()
{
    int i,factorial,num;
    printf("Enter the number:");
    scanf("%d",&num);
    i=1;
    factorial=1;
    if(num<0)
    {
        printf("Invalid entry.\nPlease enter a positive integer");
        return 0;
    }
    while(i<=num)
    {
        factorial*=i;
        i++;
    }
    printf("The factorial of %d is:%d",num,factorial);
return 0;
}
