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
    int t=n/2;
    int i=0;
    int left=t,right=t;
    for(int i=0;i<=t;i++){
        for(int i=0;i<left;i++){
            cout<<" ";
        }
        cout<<"*";
        if(left!=right){
            for(int i=left;i<right-1;i++){
                cout<<"_";
            }
            cout<<"*";
        }
        
        for(int i=right;i<n;i++){
            cout<<" ";
        }
        cout<<"\n";
        left--;
        right++;
    }
    // cout<<left<<right;
    left++;
    right--;
    for(int i=t+1;i<n && (left<right);i++){
        left++;
        right--;
        // cout<<left<<right;
        for(int i=0;i<left;i++){
            cout<<" ";
        }
        cout<<"*";
        if(left!=right){
            for(int i=left;i<right-1;i++){
                cout<<"_";
            }
            cout<<"*";
        }
        
        for(int i=right;i<n;i++){
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}