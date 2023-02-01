#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define clr(a) memset(a, 0, sizeof(a))
#define const_sz(x) x.size()
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
#define mod 1000000007
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
int safe_mod(int a,int b){
    return ((a%mod)*(b%mod))%mod;
}
int pow_ham(int a,int b)
{
    if(b==0){
        return 1;
    }
    int res=pow_ham(a,b/2);
    int pointer = res;
    // ll gcd = lcm(a,pointer);
    res= safe_mod(res,res);
    if(b%2==1){
        return safe_mod(res,a);
    }
    return res;
}

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
int mod_inverse(int a,int m=mod){
    ll l=lcm(a,mod);
    return pow_ham(a,m-2);
}
// Some contants
const int inf = 1e9 + 7;
const int const_sz = 2e5 +1;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
int fact[200001],inverse_fact[200001];
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;

int main(){
   IOS;
   int t;
   cin>>t;
   while (t--)
     {
        fact[0]=inverse_fact[0] = 1;
        for(int i=1;i<const_sz;i++){
            fact[i]=safe_mod(fact[i-1],i);
            inverse_fact[i] = safe_mod(inverse_fact[i-1],mod_inverse(i));
        }
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                cnt++;
            }
        }
        if((n-cnt)%2){
            cout<<0<<"\n";
            continue;
        }
        n-=cnt;
        int ans = pow_ham(2,cnt);
        ans=safe_mod(ans,safe_mod(fact[n],safe_mod(inverse_fact[n/2],inverse_fact[n/2])));
        cout<<ans<<"\n";

     }
return 0;
}