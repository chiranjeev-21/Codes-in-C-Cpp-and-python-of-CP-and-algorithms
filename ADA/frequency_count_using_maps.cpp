#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in array"<<"\n";
    cin>>n;
    int a[n];
    cout<<"Enter the values of array"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int> mp;
    unordered_map<int,int>::iterator it;
    for(auto i : a)
    {
        mp[a[i]]++;
    }
    int max_count=0,max_freq=0;
    for(auto it : mp)
    {
        if(max_count<it.second)
        {
            max_freq=it.first;
            max_count=it.second;
        }
    }
    cout<<"The element with the highe
    st frequency is"<<"\n";
    cout<<max_freq<<"\n";
}