#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0)
    {
        num=-num;
    }
    while(num!=0)
    {
        num=num/10;
        count++;
    }
printf("The number of digits of the number is:%d",count);
return 0;
}
