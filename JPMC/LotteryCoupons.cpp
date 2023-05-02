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

int digit_count(int nums){
    int tmp=0;
    while(nums>0){
        tmp+=nums%10;
        nums/=10;
    }
    return tmp;
}

int main()
{
    IOS;
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        int cnt=digit_count(i);
        mp[cnt]++;
    }
    int maxx=-1;
    for(auto i:mp){
        if(i.second>maxx){
            maxx=i.second;
        }
    }

    int cnt=0;
    // cout<<maxx<<" ";
    for(auto i:mp){
        if(i.second==maxx){
            cnt++;
        }
    }
    cout<<cnt<<"\n";

    return 0;
}