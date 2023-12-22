class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=0;
        unordered_set<int>s;
        int ans=0,sum=0;
        while(right<n){
            while(s.find(nums[right])!=s.end()){
                s.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
            s.insert(nums[right]);
            sum+=nums[right];
            ans=max(ans,sum);
            right++;
        }
        return ans;
    }
};