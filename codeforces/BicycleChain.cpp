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
    int t;
    cin >> t;
    vector<int>vec1(t,0);
    for(int i=0;i<t;i++){
        cin>>vec1[i];
    }
    int n;
    cin>>n;
    vector<int>vec2(n,0),ans;
    for(int i=0;i<n;i++){
        cin>>vec2[i];
    }
    int maximum=INT_MIN,cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<t;j++){
            if(vec2[i]%vec1[j]==0){
                ans.push_back(vec2[i]/vec1[j]);
                if(maximum<(vec2[i]/vec1[j])){
                    maximum=vec2[i]/vec1[j];
                }
            }
            // cnt++;
        }
    }
    // cout<<cnt;
    unordered_map<int,int>mp;
    for(int i=0;i<ans.size();i++){
        mp[ans[i]]++;
    }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<"\n";
    // }
    // cout<<maximum<<"\n";
    // for(auto i:mp){
    //     cout<<i.first<<" "<<i.second<<"\n";
    // }
    for(auto i:mp){
        if(i.first==maximum){
            cout<<i.second<<"\n";
            break;
        }
    }
    return 0;
}