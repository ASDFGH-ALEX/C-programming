#include<stdio.h>
int main()
{
    int i,f,num;
    printf("Enter the number:");
    scanf("%d",&num);
    i=1;
    f=1;
    while(i<num)
    {
        f*=i;
        i++;
    }
printf("factorial of %d is %d",num,f);
return 0;
}
