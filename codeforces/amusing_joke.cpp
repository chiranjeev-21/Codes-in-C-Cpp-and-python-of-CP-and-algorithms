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
    string s,ss,sss;
    cin>>s>>ss>>sss;
    if(s.length()+ss.length()!=sss.length()){
        cout<<"NO";
        return 0;
    }
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    for(int i=0;i<ss.length();i++){
        mp[ss[i]]++;
    }
    for(int i=0;i<sss.length();i++){
        mp[sss[i]]--;
    }
    int neg=0;
    for(auto i:mp){
        if(i.second<0){
            neg++;
        }
    }
    if(!neg){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}