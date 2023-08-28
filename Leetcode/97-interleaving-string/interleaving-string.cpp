class Solution {
public:

    bool f(int i, int j, int k, string& s1, string& s2, string& s3, vector<vector<vector<int>>>& dp){
        if(k==s3.length()){
            if(i==s1.length() && j==s2.length()){
                return true;
            }
            return false;
        }
        bool ans=0;
        if(dp[i][j][k]!=-1){
            return dp[i][j][k];
        }
        if(s1[i]==s3[k]){
           ans|=f(i+1,j,k+1,s1,s2,s3,dp);
        }
        if(s2[j]==s3[k]){
           ans|=f(i,j+1,k+1,s1,s2,s3,dp);
        }
        else if(s1[i]!=s3[k] && s2[j]!=s3[k]){
           return 0;
        }
        return dp[i][j][k]=ans;
    }

    bool isInterleave(string s1, string s2, string s3) {
        int n=s1.length();
        int m=s2.length();
        int l=s3.length();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(m+1,vector<int>(l+1,-1)));
        return f(0,0,0,s1,s2,s3,dp);
    }
};