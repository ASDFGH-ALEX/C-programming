#include<stdio.h> 
void swap(int *num1, int *num2)
{
int temp;
temp=*num1;
*num1=*num2;
*num2=temp;
}
int main()
{
int num1,num2;
printf("Enter the number 1:");
scanf("%d",&num1);
printf("Enter the number 2:");
scanf("%d",&num2);
printf("The number before swaping is:%d %d",num1,num2);
swap(&num1,&num2);
printf("\nThe number after swaping is:%d %d",num1,num2);
return 0;
}
