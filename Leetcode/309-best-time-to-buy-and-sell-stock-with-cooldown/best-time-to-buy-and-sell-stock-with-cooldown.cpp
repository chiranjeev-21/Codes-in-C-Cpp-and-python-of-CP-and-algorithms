class Solution {
public:

    int f(int i, vector<int>& prices, bool buy, vector<vector<int>>& dp){
        if(i>=prices.size()){
            return 0;
        }
        if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
        int profit=0;
        if(buy){
            profit = max(-prices[i]+f(i+1,prices,0,dp),f(i+1,prices,1,dp));
        }
        else{
            profit = max(prices[i]+f(i+2,prices,1,dp), f(i+1,prices,0,dp));
        }
        return dp[i][buy]=profit;
    }

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n+2,vector<int>(2,-1));
        return f(0,prices,1,dp);
    }
};