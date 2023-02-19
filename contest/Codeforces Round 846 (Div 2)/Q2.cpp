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
 
template<typename T>
void pop_front(std::vector<T> &v)
{
    if (v.size() > 0) {
        v.erase(v.begin());
    }
}

// Some contants
const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;


void primeFactors(int n)
{
    int c=2;
    while(n>1)
    {
        if(n%c==0){
        cout<<c<<" ";
        n/=c;
        }
        else c++;
    }
}



int main(){
    IOS;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string vec;
        cin>>vec;
        set<int>s;
        int cnt=0;
        if(vec[0]=='1'){
            for(int i=0;i<n;i++){
                if(vec[i]=='0'){
                    vec.erase(vec.begin()+i);
                    break;
                }
            }
            // for(int i=0;i<n;i++){
            //     cout<<vec[i]<<" ";
            // }
        }
        
        for(int i=0;i<n;i++){
            if(vec[i]=='1'){
                cnt++;
                continue;
            }
            if(cnt==0) continue;
            s.insert(cnt);
            cnt=0;
        }
        int max_element=0;
        if (!s.empty())
            max_element = *(s.rbegin());
        cout<<max_element<<"\n";
    }
    
    return 0;
}