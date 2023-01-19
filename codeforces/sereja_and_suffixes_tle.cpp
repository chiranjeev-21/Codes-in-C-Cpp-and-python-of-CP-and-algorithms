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
int main()
{
    IOS;
    int n,m;
    cin>>n>>m;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int>pre_computed;
    for(int i=0;i<n;i++){
        unordered_set<int>s;
        for(int j=i;j<n;j++){
            s.insert(vec[j]);
        }
        int t=s.size();
        pre_computed.push_back(t);
    }

    // for(int i=0;i<n;i++){
    //     cout<<pre_computed[i]<<" ";
    // }

    // cout<<"\n";
    while(m--){
        int query;
        cin>>query;
        cout<<pre_computed[query-1]<<"\n";
    }

    return 0;
}