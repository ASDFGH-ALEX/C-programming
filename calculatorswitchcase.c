#include<stdio.h>
int main()
{
int num1,num2;
char operator;
printf("Enter the first number:");
scanf("%d",&num1);
printf("Enter the second number");
scanf("%d",&num2);
printf("enter the operator:");
scanf(" %c",&operator);
switch(operator)
{
case'+':
  printf("The sum of two number is:%d/n",num1+num2);
break;
case'-':
  printf("The minus of two numbers is:%d/n",num1-num2);
break;
case'*':
  printf("The multiplication of two numbers is:%d/n",num1*num2);
break;
case'/':
  printf("The division of two numbers is:%d/n",num1/num2);
break;
case'%':
   printf("The modulo of two numbers is:%d/n",num1%num2);
break;
default:
   printf("invalid");
}
return 0;
}

