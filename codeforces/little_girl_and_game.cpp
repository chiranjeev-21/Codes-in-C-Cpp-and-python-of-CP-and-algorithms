#include <bits/stdc++.h>

using namespace std;
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;

bool ispalindrome(string s,string t){
    reverse(s.begin(),s.end());
    if(t==s) return true;
    else return false;
}

int main()
{
    IOS;
    string s,t;
    cin>>s;
    t=s;
    unordered_map<char,int>mp;
    int res=0,count=0;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(auto i:mp){
        if(i.second%2==0){
            res++;
        }
        else{
            count++;
        }
    }
    if(res==mp.size() || count==1 && res==mp.size()-1){
        cout<<"First";
    }
    else if(ispalindrome(s,t)){
        cout<<"First";
    }
    else{
        int cnt=0,moves=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            if(i.second%2!=0){
                cnt++;
            }
        }
        // cout<<cnt;
        if(cnt%2==0){
            cout<<"Second";
        }
        else{
            cout<<"First";
        }
    }
    return 0;
}