class Solution {
public:
    int countPrimes(int n) {
        vector<bool>vec(n+1,true);
        vec[0]=false;
        vec[1]=false;
        int cnt=0;
        for(int i=2;i<n;i++){
            if(vec[i]){
                cnt++;
                for(int j=2*i;j<n;j+=i){
                    vec[j]=false;
                }
            }
        }
        return cnt;
    }
};


//Using additional vector for dp
class Solution {
public:
    int countPrimes(int n) {
        vector<bool>vec(n+2,true);
        vec[0]=false;
        vec[1]=false;
        vector<int>dp(n+2,0);
        for(int i=2;i<n;i++){
            if(vec[i]){
                for(int j=2*i;j<n;j+=i){
                    vec[j]=false;
                }
            }
        }
        int cnt=0;
        for(int i=1;i<n+2;i++){
            dp[i]=dp[i-1]+vec[i];
        }
        // for(auto i :dp){
        //     cout<<i<<" ";
        // }
        if(vec[n]){
            return dp[n]-1;
        }
        return dp[n];
    }
};
