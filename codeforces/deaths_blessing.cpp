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
        ll n;
        cin>>n;
        vector<ll>health(n,0),spell(n,0);
        ll sum=0,sum2=0,maximum=0;
        for(ll i=0;i<n;i++){
            cin>>health[i];
            sum+=health[i];
        }
        for(ll i=0;i<n;i++){
            cin>>spell[i];
            sum2+=spell[i];
            maximum=max(maximum,spell[i]);
        }
        cout<<sum+sum2-maximum<<"\n";

    }

    return 0;
}