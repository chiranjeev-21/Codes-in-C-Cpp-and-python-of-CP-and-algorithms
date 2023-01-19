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
    ll n;
    cin>>n;
    vector<ll>vec(n,0);
    ll mx=INT_MIN,mn=INT_MAX;
    unordered_set<ll>s;
    for (ll i = 0; i < n; i++)
    {
        cin>>vec[i];
        mx= max(mx,vec[i]);
        mn=min(mn,vec[i]);
        s.insert(vec[i]);
    }
    if(s.size()==1){
        cout<<0<<" "<<n*(n-1)/2;
    }
    else{
        ll max_beauty = mx - mn,cnt=0,flag=0;
        cout<<max_beauty<<" ";
        for(ll i=0;i<n;i++){
            if(vec[i]==mx){
                cnt++;
            }
            else if(vec[i]==mn){
                flag++;
            }
        }
        cout<<flag*cnt;
    }

    return 0;
}