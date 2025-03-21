//Sum of all elements in an array
#include<stdio.h>
int main()
{
    int myArray[20],n,i,sum=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&myArray[i]);
         sum+=myArray[i];
    }
    printf("The sum of elements in the array is:%d",sum);
return 0;
}
