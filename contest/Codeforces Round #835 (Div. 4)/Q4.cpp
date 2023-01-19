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
        vector<ll>vec(n,0);

        for(ll i=0;i<n;i++){
            cin>>vec[i];
        }
        int prev=vec[0],next=vec[2],valley=0;
        for(ll i=1;i<n-2;i++){
            if(vec[i]<vec[i-1] && vec[i] < vec[i+1]){
                valley++;
            }
        }
        bool boolean=false;
        if(valley==0){
            if(vec[0] == vec[1]) boolean =true;
            if(vec[n-1] == vec[n-2]) boolean=true;
        }
        int plat=0;
        for(int i=0;i<n;i++){
            if(vec[i]<vec[i-1] && vec[i]==vec[i+1]){
                while(vec[i]==vec[i+1]){
                    i++;
                }
                if(vec[i]<vec[i+1]){
                    plat++;
                }
            }
        }
        // cout<<valley<<" "<<plat<<" "<<boolean;
        if(n==1){
            cout<<"YES"<<"\n";
            continue;
        }
        if(valley>1) cout<<"NO"<<"\n";
        else if(plat>1) cout<<"NO"<<"\n";
        else if(plat==1 && boolean) cout<<"YES"<<"\n";
        else if(valley>1 && boolean) cout<<"NO"<<"\n";
        else if(valley+plat==1 && boolean){
            cout<<"NO"<<"\n";
        }
        else if(valley+plat==1 && !boolean){
            cout<<"YES"<<"\n";
        }
        else if(valley+plat!=1 && boolean){
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
    }
    return 0;
}
