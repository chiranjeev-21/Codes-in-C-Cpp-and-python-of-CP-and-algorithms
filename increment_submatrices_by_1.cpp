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
    int n;
    cin>>n;
    vector<vector<int>>vec(n,vector<int>(n,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
            cin>>vec[i][j];
        }
    }
    sum = vector<vector<int>>(matrix.size() + 1, vector<int>(matrix[0].size() + 1));
        for(int i=1;i<=matrix.size();i++){
            for(int j=1;j<=matrix[0].size();j++){
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i - 1][j - 1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        
    }

    return 0;
}