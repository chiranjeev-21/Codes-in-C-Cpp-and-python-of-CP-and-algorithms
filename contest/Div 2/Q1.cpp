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
        if(n%2!=0)
            cout<<(ll)ceil(n/2)+1<<"\n";
        else
            cout<<(ll)ceil(n/2)<<"\n";
    }

    return 0;
}