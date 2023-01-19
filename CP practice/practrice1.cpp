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
    int dice;
    string num;
    cin>>dice>>num;
    int sum_even=0,sum_odd=0;
    for(int i=0;i<num.length();i++){
        if((i+1)%2==0){
            sum_even+=(int)num[i] - 48;
        }
        else{
            sum_odd+=(int)num[i] -48;
        }
    }
    // cout<<sum_even<<" "<<sum_odd;
    if(dice%2==0){
        cout<<sum_odd;
    }
    else{
        cout<<sum_even;
    }
    return 0;
}