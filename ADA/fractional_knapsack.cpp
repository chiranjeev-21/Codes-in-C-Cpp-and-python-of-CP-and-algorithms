// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     cout<<"Enter the weight of the knapsack";
//     int w;
//     cin>>w;
//     cout<<"Enter the number of products";
//     int p;
//     cin>>p;
//     cout<<"Enter cost of the products";
//     // int a[p],b[p];
//     int a[p];
//     float b[p];
//     for(int i=0;i<p;i++)
//     { 
//         cin>>a[i];
//     }
//     cout<<"Enter weight of the products";
//     for(int i=0;i<p;i++)
//     {
//         cin>>b[i];
//     }
//     float arr[p];
//     for(int i=0;i<p;i++)
//     {
//         arr[i] = (float)(a[i]/b[i]);
//     }
//     sort(arr,arr+p);
//     for(int i=0;i<p;i++)
//     {
//         cout<<arr[i]<<"\n";
//     }
//     int weight=0;
//     float value=0;

//     for(int i=0;i<p;i++)
//     {
//         if(weight + b[i] <= w)
//         {
//             weight=weight+b[i];
//             value=value+a[i];
//         }
//         else
//         {
//             int t = w - weight;
//             value=value+a[i]*(float)(t/b[i]);
//             break;
//         }
//     }
//     cout<<value<<"\n";
//     return 0;
// }

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

ll find_subset(int num, string& s, vector<int>& dp, map<string, string>& mp, string ss, set<string>& st, ll num2){
    if(num < 0){
        auto it = st.find(ss);
        if(it == st.end()){
            st.insert(ss);
            return 1;
        }
        return 0;
    }
    
    if(dp[num] != -1) return dp[num];
    
    long long int takingone = find_subset(num-1, s, dp, mp, mp[s.substr(num, 1)+ss], st, num2);
    long long int takingtwo = 0;
    if(num-1 >= 0 &&  mp.find(s.substr(num-1, 2)) != mp.end())
        takingtwo = find_subset(num-2, s, dp, mp, mp[s.substr(num-1, 2)]+ss, st, num2);
    return dp[num] = (takingone+takingtwo) % 998244353;
    
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

const unsigned int mod_num = 998244353;

int main() {
  ll t;
  cin >> t;
  while(t--){
        set<string> st;    
        string s;
        cin >> s;
        ll n = s.length();
        vector<int> dp(n, -1);
        map<string, string> mp {{"a", "01"}, {"b",  "10"}, {"ab" , "010"},{"ba" , "101"}}; 
        cout << find_subset(n-1, s, dp, mp, "", st, 998244353) << "\n";  
  }
  return 0;
}