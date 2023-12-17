static int sd = []{ios_base::sync_with_stdio(false);cin.tie(0); return 0;}();
class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>mp;
        int ans=1;
        for(auto i : arr){
            mp[i]=mp[i-difference]+1;
            ans=max(ans,mp[i]);
        }
        return ans;
    }
};