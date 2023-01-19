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
    int a,b,n;
    cin>>a>>b>>n;
    int cnt=10,flag=0;
    while(cnt--){
        int temp_a=a*10+cnt;
        if(temp_a%b==0){
            a=temp_a;
            break;
        }
        else{
            flag++;
        }
    }
    if(flag==10){
        cout<<"-1";
    }
    else{
        n-=1;
        string s=to_string(a);
        while(n--){
            s+='0';
        }
        cout<<s;
    }
    return 0;
}