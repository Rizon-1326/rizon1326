#include<stdio.h>
 int partition(int arr[],int l,int h)
{
   int pivot=arr[l];
    int i=l-1,j=h+1;

    while(i<j)
    {
        do
        {
            i++;
        }while(arr[i]<=pivot);
        do
        {
            j--;
        }while(arr[j]>pivot);
        if(i<j)
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
       int temp=arr[l];
        arr[l]=arr[j];
        arr[j]=temp;
        return j;
    }
}
int quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int j=partition(arr,l,h);
        quicksort(arr,l,j);
        quicksort(arr,j+1,h);
    }
}
int main()
{
    int arr[]={4,2,9,7,1,3,5};
    int size=sizeof(arr)/sizeof(int);
    int h=size-1;
    int l=0;
     partition(arr,l,h);
    quicksort(arr,0,h);
    for(int i=0;i<size;i++)
        printf("%d",arr[i]);
}

