#include <bits/stdc++.h>
using namespace std;


int main()
{
 long long t;
 cin>> t;
 while(t--)
 {
   long long n;
 long long p;
 cin>>p;
 cin>>n;
 vector<char> vec;
 while(n>0)
 {
  int rem;
  if(n%10==0)
  {
   n = n/10;
   rem = n%100;
   vec.push_back(96+rem);
   n/=100;
  }
  else
  {
   rem = n%10;
   vec.push_back(96+rem);
   n/=10;
  }
 }
 for(int i=vec.size()-1;i>=0;i--)
 cout<<vec[i]<<"";
 cout<<endl; 
}  
 
 
}
