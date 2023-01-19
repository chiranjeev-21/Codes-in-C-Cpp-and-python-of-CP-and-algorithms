#include <bits/stdc++.h>

using namespace std;
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
const ll inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
typedef long long ll;
int main()
{
  IOS;
  ll a, b, n;
  cin >> a >> b >> n;
  vector<ll>vec;
  ll flag=a;
  while(flag>0){
    ll res=flag%10;
    vec.push_back(res);
    flag/=10;
  }
  reverse(vec.begin(),vec.end());
  // for(ll i=0;i<vec.size();i++){
  //   cout<<vec[i]<<" ";
  // }
  while(n--){
    ll temp=a*10+1;
    if(temp%b==0){
      a=temp;
      continue;
    }
    else{
      ll remainder = b-(temp%b);
      ll new_a=remainder+temp;
      // cout<<new_a<<"xxxxxxxxxxxxxxxxxxxxx"<<a<<"\n";
      a=new_a;
      // if(new_a & a == a){
      //   a=new_a;
      //   continue;
      // }
      // else{
      //   cout<<"-1";
      //   break;
      // }
    }
  }     
  string s=to_string(a);
  ll cnt=0;
  for(ll i=0;i<vec.size();i++){
    if(vec[i]==(s[i]-'0')){
      continue;
    }
    else{
      cnt++;
    }
  }
  if(cnt>0) cout<<"-1";
  else cout<<a;
  return 0;
}