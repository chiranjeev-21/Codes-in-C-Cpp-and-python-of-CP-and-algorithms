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

const int mod= 1e9 +7;
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>>dp(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        if(mat[i][0]==-1)
            continue;
        dp[i][0]=1;
    }
    for(int i=0;i<m;i++){
        if(mat[0][i]==-1)
            continue;
        dp[0][i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==-1){
                dp[i][j]=-1;
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(dp[i][j]==-1){
                continue;
            }
            if(dp[i-1][j] == -1 && dp[i][j-1] == -1){
                dp[i][j]=-1;
            }
            else if(dp[i-1][j] == -1){
                dp[i][j]=dp[i][j-1];
            }
            else if(dp[i][j-1] == -1){
                dp[i][j]=dp[i-1][j];
            }
            else
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    return dp[n-1][m-1]==-1?0:dp[n-1][m-1];
}



int main()
{
    IOS;
    5 9

    vector<int>mat = {  0 -1 0 0 -1 0 0 0 0 
                        -1 0 0 0 0 -1 -1 0 0 
                        0 0 0 -1 -1 0 0 0 0 
                        -1 0 -1 0 0 0 0 0 -1  
                        -1 0 0 0 0 0 -1 -1 0}
    cout<<mazeObstacles(5,9,mat);

    return 0;
}