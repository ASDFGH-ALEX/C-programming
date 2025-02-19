#include<stdio.h>
int main()
{
int n,rem,rev=0;
printf("Enter the number:");
scanf("%d",&n);
int num=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(num=rev)
{
printf("Reverse is%d/n",rev);
printf("The given number is pallindrome");
}
return 0;
}

