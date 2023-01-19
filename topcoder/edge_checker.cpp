#include <iostream>
#include<math.h>

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
    int a,b;
    cin>>a>>b;
    if(abs(a-b)==1){
        cout<<"Yes"<<"\n";
    }
    else if(a==1 && b==10 || a==10 && b==1){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }

    return 0;
}