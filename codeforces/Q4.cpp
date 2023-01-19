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
        int n,res=0,sum=0,maxx=-1;
        cin>>n;
        vector<int>vec(n),v;
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int gcd = __gcd(vec[i], vec[j]);
                if(gcd==1){
                    sum=i+j+2;
                }
                if(sum==res) continue;
                else{
                    res=sum;
                }
            }
            maxx=max(maxx,res);
        }
        if(maxx==0){
            cout<<"-1"<<"\n";
        }
        else cout<<maxx<<"\n";
    }
    return 0;
}