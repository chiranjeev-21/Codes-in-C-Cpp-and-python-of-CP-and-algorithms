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
    freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);
	int x1, y1, x2, y2;
	int x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	int left, right, top, bottom;

	left = min(x1, x3);
	right = max(x2, x4);
	bottom = min(y1, y3);
	top = max(y2, y4);

	int side = max(right - left, top - bottom);
	cout << side * side << endl;
	return 0;
}
