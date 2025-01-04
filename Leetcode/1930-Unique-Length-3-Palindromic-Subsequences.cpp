class Solution {
public:
    int countPalindromicSubsequence(string s) {
        //Intuition:
        //Create pref and suff arrays for every alphabet calculating the freq of that alphabet
        //upto all indices. After this, just start from 1 to n-2 and assume the element is the
        //middle of your palindrome. Now check for all 26 alphabets if you can fit it in the left
        //and right places. if yes, put the string in the set and return set.size in the end.
        int n=s.length();
        vector<vector<int>>pre_hash(27,vector<int>(n,0)),suff_hash(27,vector<int>(n,0));
        for(int i=0;i<n;i++){
            pre_hash[s[i]-'a'][i]++;
        }
        for(int i=0;i<pre_hash.size();i++){
            for(int j=1;j<n;j++){
                pre_hash[i][j]+=pre_hash[i][j-1];
            }
        }
        // for(auto j : pre_hash){
        //     for(auto i : j){
        //         cout<<i<<" ";
        //     }
        //     cout<<"\n";
        // }
        // cout<<"\n\n";
        for(int i=n-1;i>=0;i--){
            suff_hash[s[i]-'a'][i]++;
        }
        for(int i=0;i<suff_hash.size();i++){
            for(int j=n-2;j>=0;j--){
                suff_hash[i][j]+=suff_hash[i][j+1];
            }
        }
        // for(auto j : suff_hash){
        //     for(auto i : j){
        //         cout<<i<<" ";
        //     }
        //     cout<<"\n";
        // }
        unordered_set<string>st;
        for(int i=1;i<n-1;i++){
            int ch = s[i];
            for(int j=0;j<26;j++){
                if(pre_hash[j][i-1]>=1 && suff_hash[j][i+1]>=1){
                    char temp = 'a'+j;
                    string res = string(1, temp) + string(1, ch) + string(1, temp); 
                    st.insert(res);
                }
            }
        }
        return st.size();
    }
};