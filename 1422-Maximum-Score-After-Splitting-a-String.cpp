class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int ones = 0,zeros=0,ans=0;
        for(char ch:s){
            if(ch=='1'){
                ones++;
            }
        }
        for (int i=0;i<n-1;i++){
            if(s[i]=='0'){
                zeros++;
            }else{
                ones--;
            }
            ans = max(ans,zeros+ones);
        }
        return ans;
    }
};
