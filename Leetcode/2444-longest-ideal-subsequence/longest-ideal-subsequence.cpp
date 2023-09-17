class Solution {
public:
    int longestIdealString(string s, int k) {
        int n = s.length();
        vector<int> dp(26,0);
        int ans=1;
        for(int i=0;i<n;i++){
            int x=s[i]-'a';
            int curr=1;
            for(int j=0;j<26;j++){
                if(abs(j-x)<=k){
                    curr = max(curr,dp[j]+1);
                }
            }
            dp[x]=curr;
            ans = max(ans,dp[x]);
        }
        return ans;
    }
};