#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>v,int k,int index,int &ans)
{
    if(v.size()==1)
    {
        ans=v[0];
        return;
    }
    index=(index+k)%(v.size());
    v.erase(v.begin()+index);
    solve(v,k,index,ans);
    
}
int main()
{
    int n1,k;
    vector<int>v;
    cin>>n1;
    cin>>k;
   int ans=-1;
   int index=0;
    for(int i=0;i<n1;i++)
    {
        v.push_back(i);
    }
    k--;
    solve(v,k,index,ans);
    cout<<ans+1;
    
}

