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
        int n,m,i=0,j=0;
        ll sum=0;
        cin>>n>>m;
        vector<int>vec(n),v(m);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<m;i++){
            cin>>v[i];
        }

        for(i=0;i<n;i++){
            while(j<m &&i < n && v[j]>=vec[i]){
                sum+=vec[i];
                i+=1;
            }
            if(j==m){
                break;
            }
            if(i==n){
                break;
            }
            j++;
            i--;
            cout<<sum<<" ";
        }
        while(j<m){
            j++;
            cout<<sum<<" ";
        }
        cout<<"\n";
    }
    return 0;
}