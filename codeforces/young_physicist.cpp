#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define clr(a) memset(a, 0, sizeof(a))
#define sz(x) x.size()
#define rep(n) for (ll i = 0; i < n; i++)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
#define all(v) v.begin(), v.end()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define alla(a, n) a, a + n
using namespace std;
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
// Some frequently used functions
template <typename T>
T modpow(T base, T exp, T modulus){  
    base %= modulus;  T result = 1;  
    while(exp > 0){    
        if(exp & 1) result = (result * base) % modulus;    
        base = (base * base) % modulus;    
       exp >>= 1;  
    }  
    return result;
}
ll lcm(ll a, ll b) { return (a * (b / __gcd(a, b))); }

bool isPrime(int n)
{
if(n==1)
return false;

if(n==2 || n==3)
return true;

if(n%2==0 || n%3==0)
return false;

for(int i=5; i*i<=n; i=i+6)
{
if(n % i == 0 || n % (i + 2) == 0)
return false; 
}
    return true;
}
// Some contants
const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int main(){
   IOS;
   int t,k=0;
   cin>>t;
   k=t;
   vector<int>a(3*t,0);
    for(int i=0;i<3*t;i++){
        cin>>a[i];
    }
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<3*t;i++){
        if(i%3==0){
            sum1+= a[i];
        }
        else if(i%3==1){
            sum2+= a[i];
        }
        else if(i%3==2){
            sum3+= a[i];
        }
    }
    if(sum1==0 && sum2==0 && sum3 ==0){
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";

return 0;
}