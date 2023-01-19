#include <bits/stdc++.h>
using namespace std;
bool sorti(pair<string,pair<int,int>> &x,pair<string,pair<int,int>>&y)
{
    if(x.second.first!=y.second.first)
     return (x.second.first < y.second.first);
     else
     return (x.second.second < y.second.second);

}
bool sortu(pair<string,pair<int,int>> &x,pair<string,pair<int,int>>&y)
{
    if(x.first!=y.first)
     return (x.first < y.first);
     else
      return (x.second.second < y.second.second);

}

int main() {

    int t;
    cin>>t;
    int test_cases=t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        vector<pair<string,pair<int,int>>>vec;
         vector<pair<string,pair<int,int>>>vec_copy;

        for(int i=0;i<n;i++)
        {
             string color;
             cin>>color;
             int x,y;
             cin>>x>>y;
             vec.push_back({color,{x,y}});
        }
        vec_copy=vec;
        sort(vec.begin(),vec.end(),sortu);
        sort(vec_copy.begin(),vec_copy.end(),sorti);
         for(int i=0;i<n;i++)
         {
             if(vec_copy[i]==vec[i])
             ans++;
         }
         cout<<"Case #"<<test_cases-t<<": "<<ans<<endl;
    }
    return 0;
}