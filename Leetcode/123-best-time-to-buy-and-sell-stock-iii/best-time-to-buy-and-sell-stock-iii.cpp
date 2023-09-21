class Solution {
public:

    int f(int i, bool buy, vector<int>& prices, int cap, vector<vector<vector<int>>>& dp){
        if(cap==0 || i==prices.size()){
            return 0;
        }
        if(dp[i][buy][cap]!=-1){
            return dp[i][buy][cap];
        }
        int profit=0;
        if(buy){
            profit = max(-prices[i] + f(i+1,0,prices,cap,dp),f(i+1,1,prices,cap,dp));
        }
        else{
            profit = max(prices[i] + f(i+1,1,prices,cap-1,dp), f(i+1,0,prices,cap,dp));
        }
        return dp[i][buy][cap]=profit;
    }

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return f(0,true,prices,2,dp);
    }
};