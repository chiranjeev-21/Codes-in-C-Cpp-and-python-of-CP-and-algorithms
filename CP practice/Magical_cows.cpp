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

#define MAX_DAYS 50
typedef long long ll;
int main()
{
    IOS;
    int c,n,m;
    cin>>c>>n>>m;
    vector<int>num_cows(n,0);
    for(int i=0;i<n;i++){
        cin>>num_cows[i];
    }
    // vector<int>days(m,0);
    // for(int i=0;i<m;i++){
    //     cin>>days[i];
    // }

    vector<vector<int>>dp(MAX_DAYS+1,vector<int>(c+1,0));

    for(int i=0;i<n;i++){
        dp[0][num_cows[i]]+=1;
    }

    // for(int i=0;i<m;i++){
    //     for(int j=1;j<=c;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    for(int i=0;i<MAX_DAYS;i++){
        for(int j=1;j<=c;j++){
            if (j <= c / 2) {
                dp[i + 1][j * 2] += dp[i][j];
            }
            else {
                dp[i + 1][j] += 2 * dp[i][j];
            }
        }
    }

    // for(int i=0;i<m;i++){
    //     for(int j=1;j<=c;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    vector<int>ans;
    for(int i=0;i<m;i++){
        int sum=0;  
        for(int j=1;j<=c;j++){
            sum+=dp[i][j];
        }
        ans.push_back(sum);
    }
    while(m--){
        int t;
        cin>>t;
        cout<<ans[t]<<"\n";
    }
    // int i=0;
    // while(m--){
    //     int t=days[i];
    //     cout<<ans[t]<<"\n";
    //     i++;
    // }
    return 0;
}