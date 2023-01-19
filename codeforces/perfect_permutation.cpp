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
   vector<int>vec(t,0);
   if(t%2!=0){
    cout<<-1<<" ";
    return 0;
   }
   for(int i=0;i<t;i++){
    vec[i]=i+1;
   }
   for(int i=0;i<vec.size();i++){
    swap(vec[i],vec[i+1]);
    i++;
   }
   for(int i=0;i<t;i++){
    cout<<vec[i]<<" ";
   }
   cout<<"\n";
return 0;
}