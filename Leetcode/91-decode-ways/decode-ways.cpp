class Solution {
public:
    int f(int i, string& s, int n, vector<int>& dp){
        if(i==n){
            return 1;
        }
        if(i>n || s[i]=='0'){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int ans=0;
        ans+=f(i+1,s,n,dp);
        if(s[i]=='1' || (s[i]=='2' && s[i+1]<='6')){
            ans+=f(i+2,s,n,dp);
        }
        return dp[i]=ans;
    }

    int numDecodings(string s) {
        int n=s.length();
        vector<int>dp(n+1,-1);
        return f(0,s,n,dp);
    }
};