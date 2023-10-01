class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string temp="",ans="";
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                reverse(temp.begin(),temp.end());
                ans+=(temp+' ');
                temp="";
            }
        }
        if(!temp.empty()){
            reverse(temp.begin(),temp.end());
            ans+=temp;
        }
        return ans;
    }
};