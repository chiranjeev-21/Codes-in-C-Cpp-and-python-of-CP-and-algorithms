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
        string s;
        cin>>n;
        cin>>s;
        vector<bool>vec(26,0);
        for(int i=0;i<n;i++){

            vec[s[i]-'a'] = true;
        }
        for(int i=vec.size()-1;i>=0;i--){
            if(vec[i]==1){
                cout<<i+1<<"\n";
                break;
            }
        }

    }

    return 0;
}