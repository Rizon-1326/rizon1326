#include<bits/stdc++.h>
using namespace std;
void Merge(int a[], int lb, int mid, int ub)
{
	int i=lb, j=mid+1,k=lb;

    int b[ub+1];
    while(i<=mid&&j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    
      while(j<=ub)
      {
          b[k]=a[j];
          j++; k++;
      }
    
   
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];
    }
}
void mergeSort(int a[], int lb, int ub)
{
	if (lb < ub) {
		int mid = (ub+lb)/ 2;

		mergeSort(a, lb, mid);
		mergeSort(a, mid + 1, ub);

		Merge(a, lb, mid, ub);
	}
}
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

}
