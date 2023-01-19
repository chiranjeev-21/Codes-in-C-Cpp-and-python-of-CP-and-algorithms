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

ll t;
ll vec[20];
ll solve(int i, ll s1, ll s2){
	if(i == t){
		return abs(s1 - s2);
	}
	return min(solve(i + 1, s1 + vec[i], s2),solve(i + 1, s1, s2 + vec[i]));
}

int main()
{
    IOS;
    cin >> t;
    for(int i=0;i<t;i++){
        cin>>vec[i];
    }
    cout << solve(0, 0, 0) << "\n";
    return 0;
}