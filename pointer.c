#include<stdio.h>
int main()
{
int a=10;
int *p,**q;
p=&a;
q=&p;
printf("Value of a is %d",a);
printf("\nValue of *p is %d\n",*p);
printf("Value of **q is %d\n",**q);
return 0;
}
