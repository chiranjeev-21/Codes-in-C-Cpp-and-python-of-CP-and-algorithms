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
   string s;
   cin>>s;
   int n=s.length(),cnt=0;
   for(int i=0;i<n;i++){
    if(s[i]=='4' || s[i] == '7'){
        cnt++;
    }
   }
   if(cnt==4 || cnt==7){
    cout<<"YES";
   }
   else cout<<"NO";

return 0;
}