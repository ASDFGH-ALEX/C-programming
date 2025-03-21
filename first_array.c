//Program to enter the elements and print them
#include<stdio.h>
int main()
{
    int myarray[20],n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&myarray[i]);
    }
     printf("The elements in the array are:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",myarray[i]);
    }
return 0;
}
