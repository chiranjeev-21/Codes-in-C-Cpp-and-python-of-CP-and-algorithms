class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int>vec(n+1,0);
        for(auto q : shifts){
            int start=q[0];
            int end=q[1];
            int dir=q[2];
            if(dir==0){
                vec[start]-=1;
                vec[end+1]+=1;
            }
            else{
                vec[start]+=1;
                if(end+1<n){
                    vec[end+1]-=1;
                }
            }
        }
        for(int i=1;i<n;i++){
            vec[i]+=vec[i-1];
        }
        // string ans="";
        // for(auto i :vec){
        //     cout<<i<<" ";
        // }
        // cout<<"\n";
        string ans = s;
        for (int i = 0; i < n; ++i) {
            int shift = vec[i] % 26;
            if (shift<0){
                shift+=26; // Ensure non-negative shifts
            }
            ans[i]='a'+(s[i]-'a'+shift)%26;
        }
        // for(int i=0;i<n;i++){
        //     vec[i]%=26;
        //     if(s[i]=='z' && vec[i]>=1){
        //         s[i]='a'+vec[i]-1;
        //         ans=ans+string(1,s[i]);
        //     }
        //     else if(s[i]=='a' && vec[i]<=-1){
        //         s[i]='z'+vec[i]+1;
        //         ans=ans+string(1,s[i]);
        //     }
        //     else{
        //         char ch=s[i]+vec[i];
        //         ans=ans+string(1,ch);
        //     }
        // }
        return ans;
    }
};