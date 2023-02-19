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
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,ll>mp,mps;
        vector<int>pref(n,0),suff(n,0);
        mp[s[0]]++;
        pref[0]=1;
        for(int i=1;i<n;i++){
            if(mp.find(s[i])==mp.end()){
                pref[i]=pref[i-1]+1;
            }
            else if(mp.find(s[i])!=mp.end()){
                pref[i]=pref[i-1];
            }
            mp[s[i]]++;
        }
        suff[n-1]=1;
        mps[s[n-1]]++;
        for(int i=n-2;i>=0;i--){
            if(mps.find(s[i])==mps.end()){
                suff[i]=suff[i+1]+1;
            }
            else if(mps.find(s[i])!=mps.end()){
                suff[i]=suff[i+1];
            }
            mps[s[i]]++;
        }
        int res=0;
        for(int i=0;i<n;i++){
            res=max(res,pref[i]+suff[i]);
        }
        if(res>n){
            cout<<n<<"\n";
        }
        else{
            cout<<res<<"\n";
        }
        
    }

    return 0;
}