#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,p;cin>>t;
     
      
    while(t--)
    {
        long long int n;cin>>n;
        for(long long int i=1;i<1000000000;i++)
        {
            long long int k=(pow(2,i));
            if(n%k==0)
             p=i;
        }
        long long int t=pow(2,p);
        long long int result=n/t;
        cout<<result<<endl;
        
    }
}
