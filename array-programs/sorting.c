#include<stdio.h>
int main()
{
    int arr[25],i,j,temp;
    printf("Enter any 25 array elements:");
    for(i=0;i<25;i++)
       {
           scanf("%d",&arr[i]);
       }
    for(i=0;i<25;i++)
    {
       for(j=i+1;j<25;j++)
       {
           if(arr[j]<arr[i])
           {
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }
       }
    }
    printf("Sorting of  entered array is:");
    for(i=0;i<25;i++)
    {
        printf("%d ",arr[i]);
    }
}
