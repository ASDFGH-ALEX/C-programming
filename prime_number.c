#include<stdio.h>
int main()
{
    int i,j,limit;
    printf("Enter the number:");
    scanf("%d",&limit);
    printf("The prime numbers between 1 and %d are \n",  limit);
    for(i=2;i<=limit;i++)
    {
        int is_prime=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                is_prime=0;
                break;
            }
        }
     if(is_prime==1)
        {
            printf("%d\n",i);
        }
    }
return 0;
}
