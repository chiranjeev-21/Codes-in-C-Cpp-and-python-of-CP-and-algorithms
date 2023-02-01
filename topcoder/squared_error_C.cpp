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
    vector<int>vec(t,0);
    for(int i=0;i<t;i++){
        cin>>vec[i];
    }
    vector<int>pref(t,0);
    pref[0]=vec[0];
    for(int i=1;i<t;i++){
        pref[i]=vec[i] - vec[i-1];
    }
    for(int i=0;i<t;i++){
        cout<<pref[i]<<" ";
    }

    return 0;
}