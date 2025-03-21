//Program to find the largest element in an array
#include<stdio.h>
int main()
{
    int array[20],n,i,largest,pos;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    largest=array[0];
    for(i=1;i<n;i++)
    {
        if(array[i]>largest)
        {
            largest=array[i];
            pos=i;
        }
    }
printf("The largest number in the array is %d in the position %d",largest,pos);
return 0;
}
