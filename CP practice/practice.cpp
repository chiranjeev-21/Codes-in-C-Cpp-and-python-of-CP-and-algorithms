#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        unordered_map<char,int>mp;
        cin>>s;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        if(mp.size()==1){
            cout<<"IMPOSSIBLE"<<"\n";
        }
        else{
            int t=s.length();
            char temp=s[t-1];
            for(int i=t-2;i>=0;i--){
                s[i+1]=s[i];
            }
            s[0]=temp;
            
            for(int i=0;i<s.length();i++){
                cout<<s[i];
            }
            cout<<"\n";
        }
    }
}