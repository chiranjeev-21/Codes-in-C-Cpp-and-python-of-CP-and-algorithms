#include<bits/stdc++.h>
using namespace std;

// bool cmp(pair<int,int>&a , pair<int,int>&b){
//     return a.second>b.second;
// }
int main(){
    int n;
    cin>>n;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        int tmp= __builtin_popcount(vec[i]);
        ans.push_back({tmp,vec[i]});
    }
    sort(ans.begin(),ans.end());
    for(auto i:ans){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    return 0;
}