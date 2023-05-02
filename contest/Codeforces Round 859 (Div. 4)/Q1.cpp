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
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b ==c){
            cout<<"+"<<"\n";
        }
        else if(a-b == c){
            cout<<"-"<<"\n";
        }

    }

    return 0;
}