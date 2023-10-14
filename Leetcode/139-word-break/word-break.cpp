
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        ios_base::sync_with_stdio(0);
        int n=s.length();
        vector<bool>dp(n+1,0);
        dp[n]=true;
        string temp="";
        unordered_map<string,int>mp;
        for(auto i :wordDict){
            mp[i]++;
        }
        for(int i=n-1;i>=0;i--){
            for(string w : wordDict){
                if((i+w.length()) <=(s.length()) && s.substr(i,w.length())==w){
                    dp[i]=dp[i+w.length()];
                }
                if(dp[i]){
                    break;
                }
            }
        }
        return dp[0];
    }
};