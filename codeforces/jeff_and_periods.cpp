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

bool comp(pair<int,int> &a , pair<int,int> &b){
    return a.second<b.second;

}
int main()
{
    IOS;
    int n;
    cin>>n;
    vector<int>vec(n,0);
    vector<pair<int,int>>v;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        mp[vec[i]]++;
    }
    int unique=mp.size();
    for(auto i:mp){
        v.push_back({i.first,i.second});
    }
    // v.push_back({0,0});
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    cout<<"\n";
    vector<pair<int,int>>pairs;
    for(int i=0;i<n;i++){
        pairs.push_back({i,vec[i]});
    }
    sort(pairs.begin(),pairs.end(),comp);
    for(int i=0;i<pairs.size();i++){
        cout<<pairs[i].first<<" "<<pairs[i].second<<"\n";
    }
    cout<<"\n";
    
    vector<pair<int,int>>ans;
    // int k=v[0].second;
    // for(int i=0;i<pairs.size()-1;i++){
    //     while(k--){
    //         int j=k;
    //         diff=pairs[i+1].first - pairs[i].first;
    //         s.insert(diff);
    //     }
    //     if(s.size()==1){
    //         ans.push_back()
    //     }
    // }
    int j=0;
    for(int i=0;i<pairs.size();i++){
        int k=v[j].second;
        unordered_set<int>s;
        int diff=0;
        if(k==1){
            ans.push_back({v[j].first,0});
        }
        while(k-- && (pairs[i+1].first==pairs[i].first)){
            diff=abs(pairs[i+1].first - pairs[i].first);
            s.insert(diff);
        }
        if(s.size()==1){
            ans.push_back({v[j].first,abs(diff)});
        }
        pairs.erase(pairs.begin(),pairs.begin()+v[j].second);
        for(int i=0;i<pairs.size();i++){
            cout<<pairs[i].first<<" "<<pairs[i].second<<"\n";
        }
        cout<<diff<<"\n\n";
        j++;
    }

// for(const auto& [first, sec] : edges)
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }

    return 0;
}