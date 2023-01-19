#include<bits/stdc++.h>
#define loop(i, a, n) for (int i = a; i < n; i++)
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> nums(n);
    unordered_set<string> s;
    loop(i, 0, n)
    {
        cin >> nums[i];
        s.insert(nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i].size() == 1)
        {
            cout << "0";
            continue;
        }
        bool yes = true;
        for (int j = 0; j < nums[i].size(); j++)
        {
            string l = nums[i].substr(0, j);
            string r = nums[i].substr(j, nums[i].size());
            if (s.count(l) && s.count(r))
            {
                cout << "1";
                yes = false;
                break;
            }
        }
        if(yes)cout<<"0";
    }
    cout << "\n";
}
int main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}