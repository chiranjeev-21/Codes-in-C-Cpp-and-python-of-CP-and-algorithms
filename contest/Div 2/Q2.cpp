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
    int t;
    cin >> t;
    while (t--)
    {   
        int len;
        cin>>len;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int distinct=mp.size();
        if(distinct==len){
            cout<<len*(len+1)/2<<"\n";
        }
        for(auto i:mp){
            cout<<i.first<<" "<<i.second<<"\n";
        }

    }

    return 0;
}