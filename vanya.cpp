#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,l;cin>>n>>l;
   double a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   double b[n];b[-1]=0;
   sort(a,a+n);
   for(int i=0;i<n;i++)
   b[i]=a[i]-a[i-1];
   
   double p=*max_element(b,b + n);
    for(int i=0;i<1;i++){
   if(b[i]==0&&b[n-1]==l)
   printf("%.9lf",p/2);
  
   else
   {   
       cout<<b[n-1]<<endl;
       double q=b[0],m=b[n-1];
       if(b[0]>p/2&&b[n-1]<=b[0])
       printf("%.9lf",q);
       else if(b[n-1]>p/2&&b[0]<=b[n-1])
       printf("%.9lf",m);
       else
       printf("%.9lf",p/2);
   }
}
}
