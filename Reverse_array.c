//To find the reverse of an array
#include<stdio.h>
int main()
{
    int array[20],reverse[20],i,j,n;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The orginal elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\nThe reverse elements are:\n");
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        reverse[j]=array[i];
         printf("%d\t",reverse[j]);
    }
return 0;
}

    
    
    
    
