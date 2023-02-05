#include<stdio.h>
int main()
{
    int arr[25],i;
    printf("Enter any 25 array elements:");
    for(i=0;i<25;i++)
        scanf("%d",&arr[i]);
    printf("Even numbers from entered array are:");
    for(i=0;i<25;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd numbers from entered array are:");
    for(i=0;i<25;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    printf("\nPositive numbers from entered array are:");
    for(i=0;i<25;i++)
    {
        if(arr[i]>0)
        {
            printf("%d ",arr[i]);
        }
    }printf("\nNegative numbers from entered array are:");
    for(i=0;i<25;i++)
    {
        if(arr[i]%2<0)
        {
            printf("%d ",arr[i]);
        }
    }
}
