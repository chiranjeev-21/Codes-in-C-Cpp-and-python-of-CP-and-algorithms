class Solution {
public:

    bool isPalindrome(int i,int j,string& s){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n=s.length();
        int best_i=0,best_j=0,best_len=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int len=j-i+1;
                if(len>best_len && isPalindrome(i,j,s)){
                    best_len=len;
                    best_i=i;
                    best_j=j;
                }
            }
        }
        return s.substr(best_i,best_j-best_i+1);
    }
};