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
        int left=0,right=n-1;
            int ans=0;
            while(left<right && ((s[left]=='0' && s[right]=='1') || (s[left]=='1' &&s[right]=='0'))){
                left++;
                right--;
                ans+=2;
            }
            // cout<<ans;
            cout<<n-ans<<"\n";

    }

    return 0;
}