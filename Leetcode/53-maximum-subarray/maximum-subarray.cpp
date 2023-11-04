class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_subarr_so_far=0;
        int ans=INT_MIN;
        for (auto x : nums) {
            max_subarr_so_far = max(x,max_subarr_so_far + x);
            ans=max(ans,max_subarr_so_far);
        }
        return ans;
    }
};