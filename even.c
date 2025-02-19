#include<stdio.h>
int main()
{
    int range_1,range_2,i,sum=0;
    printf("Enter the first range:");
    scanf("%d",&range_1);
    printf("Enter the second range:");
    scanf("%d",&range_2);
    for(i=range_1;i<range_2;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
printf("The sum of even numbers from %d to %d is %d",range_1,range_2,sum);
return 0;
}

