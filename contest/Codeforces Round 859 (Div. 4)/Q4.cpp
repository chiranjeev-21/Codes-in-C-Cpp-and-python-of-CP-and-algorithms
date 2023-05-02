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
        int n,queries;
        cin>>n>>queries;
        vector<int>vec(n,0),pref(n+1,0);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            sum+=vec[i];
        }
        pref[0]=0;
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+vec[i];
        }

        // for(int i=0;i<=n;i++){
        //     cout<<pref[i]<<" ";
        // }
        // cout<<"\n";

        while(queries--){
            int l,r,k;
            cin>>l>>r>>k;
            if(r>n){
                r=n;
            }
            int no_elements = r-l+1;
            int t = r;
            int pp = l-1;
            while(pp<0){
                pp++;
            }
            // while(t<0){
            //     t++;
            // }
            int ans = pref[n] + no_elements*k - pref[t] + pref[pp];
            // cout<<ans<<"\n";
            if(ans%2!=0){
                cout<<"YES"<<"\n";
            }
                else{
                    cout<<"NO"<<"\n";
                }
            }
    }
    return 0;
}