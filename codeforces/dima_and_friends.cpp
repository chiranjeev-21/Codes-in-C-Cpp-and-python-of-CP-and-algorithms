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
    int friends,sum=0,answer=0;
    cin >> friends;
    vector<int>vec(friends);
    for(int i=0;i<friends;i++){
        cin>>vec[i];
        sum+=vec[i];
    }
    for (int i = 1; i <= 5; ++i)
    {
        if ((sum + i)%(friends + 1)!=1)
        {
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}