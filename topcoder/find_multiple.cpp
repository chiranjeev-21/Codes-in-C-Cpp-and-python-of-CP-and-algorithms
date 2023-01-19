#include <iostream>
#include <math.h>

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
    int start=0;
    if(a<c && b<c){
        cout<<-1<<"\n";
    }
    else{
    while(start<=a){
        start+=c;
    }
    if(start>b){
        cout<<-1<<"\n";
    }
    else{
        cout<<start<<"\n";
    }
    }
    return 0;
}