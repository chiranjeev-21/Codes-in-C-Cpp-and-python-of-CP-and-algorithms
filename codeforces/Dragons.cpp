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
    int s;
    cin>>s;
    int n;
    cin>>n;
    // vector<int>dragon_strength(n,0),bonus_points(n,0);
    // for(int i=0;i<n;i++){
    //     cin>>dragon_strength[i];
    // }
    // for(int i=0;i<n;i++){
    //     cin>>bonus_points[i];
    // }

    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++){
        int dragon_strength,bonus_points;
        cin>>dragon_strength;
        cin>>bonus_points;
        vec.push_back({dragon_strength,bonus_points});
    }
    sort(vec.begin(),vec.end());

    // for(int i=0;i<n;i++){
    //     cout<<vec[i].first<<" "<<vec[i].second<<" ---- ";
    // }

    bool boolean=false;
    for(int i=0;i<n;i++){
        if(s>vec[i].first){
            s+=vec[i].second;
            boolean=true;
        }
        else{
            boolean=false;
        }
    }
    if(boolean){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO";
    }


    return 0;
}