class Solution {
public:
    int minExtraChar(const string &s, vector<string>& dict) {
        int dp[51] = {};
        for (int i = s.size() - 1; i >= 0; --i) {
            dp[i] = 1 + dp[i + 1];
            for (const auto &w: dict){
                if (s.compare(i, w.size(), w) == 0){
                    dp[i] = min(dp[i], dp[i + w.size()]);
                }
            }
        }
        // for(auto i:dp){
        //     cout<<i<<" ";
        // }
        return dp[0];
    }
};