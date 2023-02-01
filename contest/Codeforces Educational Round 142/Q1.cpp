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
        vector<int>vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        // sort(vec.begin(),vec.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vec[i]==1){
                cnt++;
            }
        }
        if(cnt==0 || cnt==1){
            cout<<n<<"\n";
        }
        else if(cnt%2==0){
            cout<<n-(cnt/2)<<"\n";
        }
        else if(cnt%2!=0){
            cout<<n-(cnt/2)<<"\n";
        }


    }

    return 0;
}