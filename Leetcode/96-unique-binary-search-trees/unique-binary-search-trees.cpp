class Solution {
public:
    // int numTrees(int n) {
    //     //https://leetcode.com/problems/unique-binary-search-trees/solutions/31666/dp-solution-in-6-lines-with-explanation-f-i-n-g-i-1-g-n-i/
    //     vector<int>G(n+1,0);
    //     G[0] = G[1] = 1;
    //     for(int i=2; i<=n; ++i) {
    //         for(int j=1; j<=i; ++j) {
    //             G[i] += G[j-1] * G[i-j];
    //         }
    //     }
    //     return G[n];
    // }

    int solve(int n, vector<int>& dp){
        if(n <= 1)
            return 1;

        if(dp[n] != -1)
            return dp[n];
            
        dp[n] = 0;
        for(int i=1; i<=n; i++){
            //solve considering i is the root node
            dp[n] += solve(i-1,dp)*solve(n-i,dp);
        }   //No of trees = (No. of unique left sub-tree) * (No. of unique right sub-tree)
        return dp[n];
    }
    public:
    int numTrees(int n){
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};