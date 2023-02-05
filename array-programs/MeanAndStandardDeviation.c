#include<stdio.h>
int main()
{
    int arr[]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2},i,sum=0,x,sd;
    float mean;
    for(i=0;i<15;i++)
    {
        sum=sum+arr[i];
    }
    mean=sum/15.0;
    printf("Mean of the entered unorderd list is:%f",mean);
    sum=0;
    for(i=0;i<15;i++)
    {
        sum=sum+((arr[i]-mean)*(arr[i]-mean));
    }
    x=sum/15;
    sd=sqrt(x);
    printf("\nStandard deviation:%d",sd);
}
