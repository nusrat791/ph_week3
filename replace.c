#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int min=arr[0], max=arr[0];
    int min_i=0, max_i=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            min_i=i;
        }
        if(arr[i]>max)
        {
            max=arr[i];
            max_i=i;
        }
    }

    // swap
    int temp=arr[min_i];
    arr[min_i]=arr[max_i];
    arr[max_i]=temp;

    // print
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}