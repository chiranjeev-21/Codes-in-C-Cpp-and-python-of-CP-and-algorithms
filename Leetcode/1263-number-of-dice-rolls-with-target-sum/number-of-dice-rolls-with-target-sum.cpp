const int mod = 1e9+7;
class Solution {
public:

    int f(int n,int k, int target, vector<vector<int>>& dp){
        if(n==0){
            if(target==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        int ans=0;
        for(int i=1;i<=k;i++){
            if(target-i>=0)
                ans=(ans%mod+f(n-1,k,target-i,dp)%mod)%mod;
        }
        return dp[n][target]=ans%mod;
    }

    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        return f(n,k,target,dp);
    }
};