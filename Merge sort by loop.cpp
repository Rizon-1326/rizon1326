#include <stdio.h>
#include <stdlib.h>


void mergesort(int array[], int left, int right);

int main()
{
    int i;
    int arr[10];
    for(i=10;i>0;i--){
        arr[10-i]=i;
    }
    for(i=0;i<10;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
        }
    mergesort(arr,0,9);
    puts("\n");
    for(i=0;i<10;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
        }
    return 0;
}

void mergesort(int array[], int left, int right)
{
    void merge(int array[],int left, int mid, int right);
    int mid;
    if(left<right){
        mid=(left+right)/2;
        mergesort(array,left,mid);
        mergesort(array,mid+1,right);
        merge(array,left,mid,right);
    }
}

void merge(int array[], int left, int mid, int right)
{
    int i;
    int l=0;
    int r=mid+1;
    int arr_sorted[10];

    for(i=0;i<=right;i++){
        if((l<=mid) && (r<=right)){
            if(array[l]<array[r]){
                arr_sorted[i]=array[l];
                l++;
            }
            else {
                arr_sorted[i]=array[r];
                r++;
            }
        }
        if(l>mid){
            arr_sorted[i]=array[r];
            r++;
        }
        if(r>right){
            arr_sorted[i]=array[l];
            l++;
        }
    }
    for(i=0;i<=right;i++){
        array[i]=arr_sorted[i];
    }
}
