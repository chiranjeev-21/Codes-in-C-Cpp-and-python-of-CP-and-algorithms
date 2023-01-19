#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
signed main(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<=n-1;i++)cin>>a[i];
    ll x;cin>>x;
    ll sum=0;
    for(ll val:a)sum+=val;
    ll P = x / sum;
    ll sumb = P * sum;
    ll ans = P * n;
    for(ll val:a){
        sumb += val;
        ans++;
        if(sumb > x){
            cout<< ans <<endl;
            return 0;
        }
    }
    return 0;
}