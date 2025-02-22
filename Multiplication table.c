#include<stdio.h>
int main()
{
    int i,j,limit,m;
    printf("The multiplication table of 1 to %d:\n",limit);
    printf("Enter th limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        for(j=1;j<=10;j++)
        {
            m=i*j;
            printf("%d*%d=%d\n",i,j,m);
        }
    }
}
