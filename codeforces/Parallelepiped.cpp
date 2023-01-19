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
    int a,b,c;
    cin>>a>>b>>c;

    // int x,y,z;
    // // x*y = a;
    // // y*z = b;
    // // z*x = c;

    int z= sqrt((b*c)/a);
    // x=c/z;
    // y=a/x; 
    // y_copy=y;

    // cout<<x_copy<<y_copy<<z_copy<<"   ";
    cout<<4*(z + (c/z) + (a*z)/c);

    return 0;
}