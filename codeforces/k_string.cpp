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
int main()
{
    IOS;
    int n;
    cin>>n;
    unordered_map<char,int>mp;
    string str;
    string in;
    cin>>in;
    for(int i=0;i<in.length();i++){
        mp[in[i]]++;
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second;
    }
    for(auto i:mp){
        if(i.second%n!=0){
            cout<<"-1";
            return 0;
        }
    }
    for(auto i:mp){
        str+=i.first;
    }
    string s=str;
    // cout<<s;
    while(--n){
        str+=s;
    }
    cout<<str;
    return 0;
}