#include<bits/stdc++.h>
using namespace std;
int peakelement(vector<int>v,int start,int end,int n)
{
  while(start<=end)
  {
      int mid=start+(end-start)/2;
      if(mid>0 && mid<n-1)
      {
          if(v[mid]>v[mid-1] && v[mid]>v[mid+1])
          return mid;
          
          else if(v[mid-1]>v[mid])
          end=mid-1;
          
          else if(v[mid+1]>v[mid])
          start=mid+1;
      }
      else if(mid==0)
      {
          if(v[0]>v[1])
          return 0;
          else
          return 1;
      }
      else if(mid==n-1)
      {
          if(v[n-1]>v[n-2])
          return n-1;
          else
          return n-2;
      }
  }
  return -1;
}
int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int start=0;
    int end=n-1;
  int b=peakelement(v,start,end,n);
  cout<<b;
}
