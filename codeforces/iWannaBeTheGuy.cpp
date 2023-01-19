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
T modpow(T base, T exp, T modulus)
{
    base %= modulus;
    T result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = (result * base) % modulus;
        base = (base * base) % modulus;
        exp >>= 1;
    }
    return result;
}
ll lcm(ll a, ll b) { return (a * (b / __gcd(a, b))); }
// Some contants
const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
int main()
{
    IOS;
    int t,count=0;
    cin >> t;
    int n,maxx=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i]>maxx){
            maxx=a[i];
        }
    }
    int x,maxxx=0;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
        if(arr[i]>maxxx){
            maxxx=arr[i];
        }
    }
    cout<<maxx<<"\n"<<maxxx<<"\n";
    int max_ele = max(maxx,maxxx);
    if(max_ele<t){
        cout<<"Oh, my keyboard!"<<"\n";
        return 0;
    }
    else {
    unordered_map<int,int>mp;00
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=0;i<x;i++){
        mp[arr[i]]++;
    }
    for(auto x: mp){
        if(x.second>0){
            continue;
        }
        else{
            cout<<"Oh, my keyboard!"<<"\n";
        }
    }
    for(auto x: mp){
        cout<<x.first<<"\n";
    }
    cout<<"I become the guy."<<"\n";
    return 0;
    }
}
//     int n;
//     cin>>n;
//     while(n--)
//     {
//         int x,y,a[10000],b[10000];
//         cin>>x;
//         for(int i=0;i<x;i++)
//         {
//             cin>>a[i];
//         }
//         cin>>y;
//         for(int i=0;i<y;i++)
//         {
//             cin>>b[i];
//         }
//         int arr[x+y],count=0,sum=x+y;
//         copy(b, b + y, copy(a, a + x, arr));
        
        
//     set<int> s;
 
//     for (int i = 0; i < sum; i++)
// 	{
//         s.insert(arr[i]);
//     }
  
//     set<int>::iterator it;
//     // cout << "\nAfter removing duplicates:\n";
//     // for (it = s.begin(); it != s.end(); ++it)
//     // {
//     //     cout << *it << "\n";
//     // }
//     int c=n;
//         while(c!=0)
//         {
//         if(s.find(c)!=s.end())
//         {
//         	count++;
// 		}
// 		c--;
// 	    }
//         if(count==n)
//             {
//                 cout<<"I become the guy.";
//             }
//             else
//             {
//                 cout<<"Oh , my keyboard!";
//             }
//     }
//     return 0;
// }