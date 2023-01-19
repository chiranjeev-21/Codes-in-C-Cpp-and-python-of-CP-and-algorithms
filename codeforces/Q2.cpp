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
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        if (n == 1)
        {
            cout << "YES"
                 << "\n";
            continue;
        }
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[vec[i]]++;
        }
        int yes=0;
        for (auto i : mp)
        {
            if (i.second > 1)
            {
                cout << "NO"
                     << "\n";
                break;
            }
            else{
                yes++;
            }
        }
        if(yes == mp.size()){
            cout<<"YES"<<"\n";
        }
    }

    return 0;
}