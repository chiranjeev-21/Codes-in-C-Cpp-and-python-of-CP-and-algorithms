#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y, n;
    cin >> x >> y >> n;
    long long int arr[] = {x, y, y - x, -x, -y, x - y};
    cout << (arr[(n- 1) % 6] % 1000000007 + 1000000007) % 1000000007;
    return 0;
}