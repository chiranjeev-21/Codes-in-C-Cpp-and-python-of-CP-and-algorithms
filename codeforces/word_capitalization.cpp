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
   char ch = toupper(s[0]);
   if(s[0] = ch){
    cout<<s;
   }
   else{
    s.erase(s.begin(),s.begin()+0);
    cout<<toupper(s[0])<<s;
   }

return 0;
}