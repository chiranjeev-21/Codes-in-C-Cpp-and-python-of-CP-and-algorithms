class Solution {
public:

    static bool cmp(string& a, string& b){
        return a.size()<b.size();
    }

    bool check(string& a, string& b){
        //string a is the bigger string
        if(a.size()!=b.size()+1)
            return false;
        int i=0,j=0;
        while(i<a.size()){
            if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if(i==a.size() and j==b.size())
            return true;
        else
            return false;
    }

    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),cmp);
        int n=words.size();
        int ans=0;
        vector<int>dp(n,1);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(check(words[i],words[j]) && dp[j]+1 > dp[i]){
                    dp[i]=dp[j]+1;
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};