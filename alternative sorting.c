#include<stdio.h>
void alternatesort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    i=0;j=n-1;
    while(i<j)
    {
        printf("%d",arr[j]);
        printf("%d",arr[i]);
        j--;
        i++;
    }
    if(n%2==1)
    {
        printf("%d",arr[i]);
    }
}

int main()
{
    int i;
    int arr[]={7,1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    alternatesort(arr,n);
    return 0;
}
