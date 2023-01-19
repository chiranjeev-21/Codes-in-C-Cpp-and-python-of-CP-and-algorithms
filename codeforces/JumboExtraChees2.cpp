#include <bits/stdc++.h>

using namespace std;
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;

bool comp(const pair<int,int> &a , const pair<int,int> &b){
    if (a.second != b.second) {
        return a.second < b.second;
    }
 
    return a.first < b.first;
}
int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            p.push_back({a,b});
        }
        sort(p.begin(),p.end(),comp);
        // for(auto i:p){
        //     cout<<i.first<<" "<<i.second<<"\n";
        // }
        int perimeter=0;
        for(auto i:p){
            perimeter+=i.second;
        }
        
    }

    return 0;
}