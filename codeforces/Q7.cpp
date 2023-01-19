#include <bits/stdc++.h>

using namespace std;
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
const int inf = 1e9 + 7;
const double eps = 1e-6;
const int INTEGER_MAX = 2147483647;
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
        vector<pair<int, int>> vec;
        int or_val = 0;
        for (int i = 1, val; i <= n; ++i)
        {
            cin >> val;
            vec.push_back({val, val});
        }
        sort(vec.begin(), vec.end());
        for (int i = 1; i <= n; ++i)
        {
            cout << vec[vec.size() - 1].second << ' ';
            bool boolean = false;
            for (int j = 0; j < 30; ++j)
                if ((or_val >> j) % 2 == 0 && (vec[vec.size() - 1].second >> j) % 2 == 1)
                {
                    for (int k = 0; k < (int)vec.size(); ++k)
                    {
                        vec[k].first &= INTEGER_MAX^(1 << j);
                    }
                    boolean = true;
                }
            or_val |= vec[vec.size() - 1].second;
            vec.pop_back();
            if (boolean !=0){
                sort(vec.begin(), vec.end());
            }
        }
        cout <<"\n";
    }

    return 0;
}
