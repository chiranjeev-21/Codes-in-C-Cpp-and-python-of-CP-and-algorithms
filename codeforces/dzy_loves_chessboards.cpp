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
    vector<vector<char>>vec(n, vector<char> (m, 0));
    vector<vector<char>>dot_dash(n, vector<char> (m, 0)),ans(n,vector<char>(m,'-'));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>dot_dash[i][j];
        }
    }
    //     for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<dot_dash[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==0){
                vec[i][j]='B';
            }
            else{
                vec[i][j]='W';
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<vec[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(dot_dash[i][j]=='.'){
                ans[i][j]=vec[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j];
        }
        cout<<"\n";
    }

    return 0;
}