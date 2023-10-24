class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<int>vec(150,0);
        int low=0,high=0,ans=0;
        if(s.length()==1){
            return 1;
        }
        while(high<n){
            if(vec[s[high]-' ']>=1){
                ans=max(ans,high-low);
                vec[s[low]-' ']--;
                low++;
            }
            else{
                vec[s[high]-' ']++;
                high++;
            }
            ans=max(ans,high-low);
        }
        return ans;
    }
};