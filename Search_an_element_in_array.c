//Proram to search for an element 
#include<stdio.h>
int main()
{
    int a[20],n,i,key,pos=-1;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            key=a[i];
            pos=i;
            break;
        }
    }
        if(pos==-1)
        {
            
            printf("The element is not found");
        }
        else
        {
            printf("The element %d is found \nAt the position of:%d",key,pos);
        }
return 0;
}
