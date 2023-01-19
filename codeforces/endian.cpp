#include <bits/stdc++.h>

using namespace std;
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int main(){
   IOS;
   int t;
   cin>>t;
   int cnt=0,cnt1=0,cnt10=0,cnt01=0,res=0,res1=0;
   while (t--)
     {
        int a,b;
        cin>>a>>b;
        if(a!=0){
            cnt++;
        }
        if(a!=1){
            cnt01++;
        }
        res=min(cnt,cnt01);
        if(b!=1){
            cnt1++;
        }
        if(b!=0){
            cnt10++; 
        }
        res1=min(cnt1,cnt10);
     }
     cout<<res+res1;
return 0;
}