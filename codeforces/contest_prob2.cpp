#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n,sum=0;
        cin>>n;
        cin>>s;
        unordered_map<char,int> mp;
        if(n==1)
        {
            cout<<"2"<<"\n";
        }
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for (auto x : mp){
        if(x.second==1)
        {
            sum=sum+2;
        }
        if(x.second>1)
        {
            sum=sum+2+1*(x.second-1);
        }
    }
    if(n!=1)
    cout<<sum<<"\n";
    }
    return 0;
}