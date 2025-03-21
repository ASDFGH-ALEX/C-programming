//copy to another array
#include<stdio.h>
int main()
{
    int myArray[20],readArray[20],i,n;
    printf("Enter the size of the aray:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&myArray[i]);
    }
    printf("The old array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",myArray[i]);
    }
    for(i=0;i<n;i++)
    {
        readArray[i]=myArray[i];
    }
    printf("\nThe new array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",readArray[i]);
    }
return 0;
}
