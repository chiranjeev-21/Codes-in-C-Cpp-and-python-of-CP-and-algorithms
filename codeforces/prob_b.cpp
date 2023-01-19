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

// template <typename t>
// void swap (t& x, t& y)
// {
//     t temp = x;
//     x = y;
//     y = temp;
//     return;
// }


const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int main(){
   IOS;
   int t;
   cin>>t;
   while (t--)
     {
        int n;
        cin>>n;
        vector<int> vec(n,0);
        for(int i=0;i<n;i++){
            vec[i] = i+1;
        }
        int fixed=n;
        cout<<fixed<<"\n";
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
        int start=0;
        while(start!=n-1){
            swap(vec[start],vec[start+1]);
            start++;
            for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
            }
            cout<<"\n";
        }
        // int start=0;
        // int end=n-1; 
        // while(fixed!=0 & start < end){
        //     swap(vec[start],vec[end]);
        //     start++;
        //     end--;
        //     for(int i=0;i<n;i++){
        //     cout<<vec[i]<<" ";
        //     }
        //     cout<<"\n";
        //     int fixed_new=0;
        //     for(int i=0;i<n;i++){
        //         if(vec[i]==i){
        //             fixed_new++;
        //         }
        //     }
        //     fixed-=fixed_new;
        // }
        // // cout<<start<<end;
        // if(start==end && fixed!=0){
        //     swap(vec[start],vec[start+1]);
        //     for(int i=0;i<n;i++){
        //     cout<<vec[i]<<" ";
        //     }
        //     cout<<"\n";
        // }
        // else if(fixed!=0){
        //     swap(vec[n-1],vec[n-2]);
        //     for(int i=0;i<n;i++){
        //     cout<<vec[i]<<" ";
        //     }
        //     cout<<"\n";
        // }
     }
return 0;
}