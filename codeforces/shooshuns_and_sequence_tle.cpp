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

bool check(vector<int> &vec){
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]==vec[i+1]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    IOS;
    int n,k;
    cin>>n>>k;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int cnt=0,flag=0;
    while(!(check(vec)) && cnt<n){
        int l = vec[k-1];
        vec.push_back(l);
        vec.erase(vec.begin(),vec.begin()+1);
        flag++;
        cnt++;
    }
    if(cnt==n){
        cout<<"-1";
    }
    else{
        cout<<flag; 
    }
    return 0;
}