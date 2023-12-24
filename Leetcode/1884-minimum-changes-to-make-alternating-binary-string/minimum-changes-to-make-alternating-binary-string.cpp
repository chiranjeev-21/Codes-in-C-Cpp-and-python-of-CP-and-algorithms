class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        string s0="0",s1="1";
        for(int i=1;i<n;i++){
            if(s0[i-1]=='0'){
                s0+="1";
            }
            if(s0[i-1]=='1'){
                s0+="0";
            }
            if(s1[i-1]=='0'){
                s1+="1";
            }
            if(s1[i-1]=='1'){
                s1+="0";
            }
        }
        int cnt=0,res=0;
        for(int i=0;i<n;i++){
            if(s0[i]!=s[i]){
                cnt++;
            }
            if(s1[i]!=s[i]){
                res++;
            }
        }
        return min(cnt,res);
    }
};